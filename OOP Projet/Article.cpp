#include "Article.h"

Article::Article(System::String^ loginName, System::String^ loginPassword)
{
	this->ArticleTable = gcnew DBInteraction(loginName, loginPassword);
}

System::Data::DataSet^ Article::Select(System::String^ dataTableName)
{
	System::String^ sql = "SELECT articleId, articleReference, articleDenomination, articleDescription, articleTax, articleQuantity, reapprovalThreshold, articlePrice, articleValue FROM articles";
	return this->ArticleTable->getRows(sql, dataTableName);
}

System::Data::DataSet^ Article::Search(System::String^ articleId, System::String^ articleReference, System::String^ articleDenomination, System::String^ articleDescription, System::String^ articleTax, System::String^ articleQuantity, System::String^ reapprovalThreshold, System::String^ articlePrice, System::String^ articleValue)
{
	System::String^ sql = "SELECT articleId, articleReference, articleDenomination, articleDescription, articleTax, articleQuantity, reapprovalThreshold, articlePrice, articleValue FROM articles WHERE articleId = '" + articleId + "' OR articleReference = '" + articleReference + "' OR articleDenomination = '" + articleDenomination + "' OR articleDescription = '" + articleDescription + "' OR articleTax = '" + articleTax + "' OR articleQuantity = '" + articleQuantity + "' OR reapprovalThreshold = '" + reapprovalThreshold + "' OR articlePrice = '" + articlePrice + "' OR articleValue = '" + articleValue + "'";
	return this->ArticleTable->getRows(sql, "articles");
}

void Article::Modify(System::String^ articleId, System::String^ articleReference, System::String^ articleDenomination, System::String^ articleDescription, System::String^ articleTax, System::String^ articleQuantity, System::String^ reapprovalThreshold, System::String^ articlePrice, System::String^ articleValue)
{
	System::String^ sql = "UPDATE articles SET articleReference = '" + articleReference + "', articleDenomination = '" + articleDenomination + "', articleDescription = '" + articleDescription + "', articleTax = '" + articleTax + "', articleQuantity = '" + articleQuantity + "', reapprovalThreshold = '" + reapprovalThreshold + "', articlePrice = '" + articlePrice + "', articleValue = '" + articleValue + "' WHERE articleId = " + articleId;
	this->ArticleTable->actionRows(sql);
}

void Article::Add(System::String^ articleReference, System::String^ articleDenomination, System::String^ articleDescription, System::String^ articleTax, System::String^ articleQuantity, System::String^ reapprovalThreshold, System::String^ articlePrice, System::String^ articleValue)
{
	System::String^ sql = "INSERT INTO articles (articleReference, articleDenomination, articleDescription, articleTax, articleQuantity, reapprovalThreshold, articlePrice, articleValue) VALUES ('" + articleReference + "', '" + articleDenomination + "', '" + articleDescription + "', '" + articleTax + "', '" + articleQuantity + "', '" + reapprovalThreshold + "', '" + articlePrice + "', '" + articleValue + "')";
	this->ArticleTable->actionRows(sql);
}

void Article::Remove(System::String^ articleId)
{
	System::String^ sql = "DELETE FROM articles WHERE articleId = " + articleId;
	this->ArticleTable->actionRows(sql);
}