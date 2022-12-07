#include "Statistics.h"

Statistics::Statistics(System::String^ loginName, System::String^ loginPassword)
{
    this->StatsQueries = gcnew DBInteraction(loginName, loginPassword);
}

System::Data::DataSet^ Statistics::averageBasket(System::String^ dataTableName)
{
    System::String^ sql = "select avg(purchase.totalPrice) as averageBasket from dbo.purchase;";
    return this->StatsQueries->getRows(sql, dataTableName);
}

System::Data::DataSet^ Statistics::salesFigures(System::String^ dataTableName, System::String^ month)
{
    System::String^ sql = "select sum(purchase.totalPrice) as turnover from dbo.purchase where month(purchase.purchaseDate) = " + month + ";";
    return this->StatsQueries->getRows(sql, dataTableName);
}

System::Data::DataSet^ Statistics::underReapproval(System::String^ dataTableName)
{
    System::String^ sql = "select * from dbo.articles where articles.articleQuantity < articles.reapprovalThreshold; ";
    return this->StatsQueries->getRows(sql, dataTableName);
}

System::Data::DataSet^ Statistics::totalPurchases(System::String^ dataTableName, System::String^ clientId)
{
    System::String^ sql = "select sum(purchase.totalPrice) as totalOfPurchases from dbo.purchase where purchase.clientId = " + clientId + ";";
    return this->StatsQueries->getRows(sql, dataTableName);
}

System::Data::DataSet^ Statistics::best10(System::String^ dataTableName)
{
    System::String^ sql = "select top 10 articleId, sum(inQuantity) AS 'Total' from dbo.ordered GROUP BY articleId order by 'Total' DESC;";
    return this->StatsQueries->getRows(sql, dataTableName);
}

System::Data::DataSet^ Statistics::worst10(System::String^ dataTableName)
{
    System::String^ sql = "select top 10 articleId, sum(inQuantity) AS 'Total' from [deltaStorageDataBase].[dbo].[ordered] GROUP BY articleId order by 'Total' ASC;";
    return this->StatsQueries->getRows(sql, dataTableName);
}

System::Data::DataSet^ Statistics::articlesValue(System::String^ dataTableName)
{
    System::String^ sql = "select sum(articles.articleValue * articles.articleQuantity) as articlesValue from dbo.articles; ";
    return this->StatsQueries->getRows(sql, dataTableName);
}

System::Data::DataSet^ Statistics::commercialValue(System::String^ dataTableName)
{
    System::String^ sql = "select sum(articles.articlePrice * articles.articleQuantity) as commercialValue from dbo.articles";
    return this->StatsQueries->getRows(sql, dataTableName);
}