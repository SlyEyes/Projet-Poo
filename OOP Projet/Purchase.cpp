#include "Purchase.h"

Purchase::Purchase(System::String^ loginName, System::String^ loginPassword)
{
	this->PurchaseTable = gcnew DBInteraction(loginName, loginPassword);
}

System::Data::DataSet^ Purchase::Select(System::String^ dataTableName)
{
	System::String^ sql = "SELECT * FROM purchase INNER JOIN client ON purchase.clientId = client.clientId INNER JOIN person ON client.personId = person.personId";
	return this->PurchaseTable->getRows(sql, dataTableName);
}

System::Data::DataSet^ Purchase::Search(System::String^ purchaseId, System::String^ reference, System::String^ total, System::String^ tax, System::String^ totalwithtax, System::String^ date, System::String^ paymentissuedate, System::String^ deliverydate, System::String^ numberofpayment, System::String^ clientid, System::String^ lastName, System::String^ firstName)
{
	System::String^ sql = "SELECT * FROM purchase INNER JOIN client ON purchase.clientId = client.clientId INNER JOIN person ON client.personId = person.personId WHERE (purchase.purchaseId = '" + purchaseId + "' OR purchase.purchaseReference = '" + reference + "' OR purchase.totalPrice = '" + total + "' OR purchase.tax = '" + tax + "' OR purchase.totalWithTax = '" + totalwithtax + "' OR purchase.purchaseDate = '" + date + "' OR purchase.paymentIssueDate = '" + paymentissuedate + "' OR purchase.deliveryDate = '" + deliverydate + "' OR purchase.numberOfPayment = '" + numberofpayment + "' OR purchase.clientId = '" + clientid + "' OR person.personLastName = '" + lastName + "' OR person.personFirstName = '" + firstName + "')";
	return this->PurchaseTable->getRows(sql, "purchase");
}

void Purchase::Modify(System::String^ purchaseId , System::String^ reference, System::String^ total, System::String^ tax, System::String^ totalwithtax, System::String^ date, System::String^ paymentissuedate, System::String^ deliverydate, System::String^ numberofpayment, System::String^ personid, System::String^ lastName, System::String^ firstName)
{
	System::String^ sql = "SELECT purchase.clientId FROM purchase INNER JOIN client ON purchase.clientId = client.clientId INNER JOIN person ON client.personId = person.personId WHERE (person.personLastName = '" + lastName + "' OR person.personFirstName = '" + firstName + "')";
	System::Data::DataSet^ ds = this->PurchaseTable->getRows(sql, "purchase");
	System::String^ id = Convert::ToString(ds->Tables["person"]->Rows[0]->ItemArray[0]);
	
	sql = "UPDATE purchase SET purchaseReference = '" + reference + "', totalPrice = '" + total + "', tax = '" + tax + "', totalWithTax = '" + totalwithtax + "', purchaseDate = '" + date + "', paymentIssueDate = '" + paymentissuedate + "', deliveryDate = '" + deliverydate + "', numberOfPayment = '" + numberofpayment + "', personId = '" + id + "' WHERE purchaseId = '" + purchaseId + "'";
	this->PurchaseTable->actionRows(sql);
}

void Purchase::Add(System::String^ reference, System::String^ total, System::String^ tax, System::String^ totalwithtax, System::String^ date, System::String^ paymentissuedate, System::String^ deliverydate, System::String^ numberofpayment, System::String^ clientid, System::String^ lastName, System::String^ firstName)
{
	System::String^ sql = "INSERT INTO purchase (purchaseReference, totalPrice, tax, totalWithTax, purchaseDate, paymentIssueDate, deliveryDate, numberOfPayment, clientId) VALUES ('" + reference + "', '" + total + "', '" + tax + "', '" + totalwithtax + "', '" + date + "', '" + paymentissuedate + "', '" + deliverydate + "', '" + numberofpayment + "', '" + clientid + "')";
	this->PurchaseTable->actionRows(sql);
}

void Purchase::Remove(System::String^ purchaseId)
{
	System::String^ sql = "DELETE FROM purchase WHERE purchaseId = '" + purchaseId + "'";
	this->PurchaseTable->actionRows(sql);
}

System::Data::DataSet^ Purchase::SelectArticles(System::String^ dataTableName)
{
	System::String^ sql = "SELECT purchase.purchaseId,articles.articleDenomination, articles.articleDescription, ordered.inQuantity FROM [deltaStorageDatabase].[dbo].[ordered] INNER JOIN[deltaStorageDatabase].[dbo].[purchase] ON ordered.purchaseID = purchase.purchaseId INNER JOIN[deltaStorageDatabase].[dbo].articles ON articles.articleID = ordered.articleID";
	return this->PurchaseTable->getRows(sql, dataTableName);
}

System::Data::DataSet^ Purchase::SearchArticles(System::String^ purchaseId, System::String^ articleDenomination, System::String^ articleDescription, System::String^ inQuantity)
{
	System::String^ sql = "SELECT purchase.purchaseId,articles.articleDenomination, articles.articleDescription, ordered.inQuantity FROM [deltaStorageDatabase].[dbo].[ordered] INNER JOIN[deltaStorageDatabase].[dbo].[purchase] ON ordered.purchaseID = purchase.purchaseId INNER JOIN[deltaStorageDatabase].[dbo].articles ON articles.articleID = ordered.articleID WHERE (purchase.purchaseId = '" + purchaseId + "' OR articles.articleDenomination = '" + articleDenomination + "' OR articles.articleDescription = '" + articleDescription + "' OR ordered.inQuantity = '" + inQuantity + "')";
	return this->PurchaseTable->getRows(sql, "purchase");
}

void Purchase::ModifyArticles(System::String^ purchaseId, System::String^ articleDenomination, System::String^ articleDescription, System::String^ inQuantity)
{
	System::String^ sql = "SELECT articles.articleID FROM articles WHERE (articles.articleDenomination = '" + articleDenomination + "' OR articles.articleDescription = '" + articleDescription + "')";
	System::Data::DataSet^ ds = this->PurchaseTable->getRows(sql, "articles");
	System::String^ id = Convert::ToString(ds->Tables["articles"]->Rows[0]->ItemArray[0]);

	sql = "UPDATE ordered SET inQuantity = '" + inQuantity + "', articleId = '" + id + "' WHERE purchaseId = '" + purchaseId + "'";
	this->PurchaseTable->actionRows(sql);
}

void Purchase::AddArticles(System::String^ purchaseId, System::String^ articleDenomination, System::String^ articleDescription, System::String^ inQuantity)
{
	System::String^ sql = "SELECT articles.articleID FROM articles WHERE (articles.articleDenomination = '" + articleDenomination + "' OR articles.articleDescription = '" + articleDescription + "')";
	System::Data::DataSet^ ds = this->PurchaseTable->getRows(sql, "articles");
	System::String^ id = Convert::ToString(ds->Tables["articles"]->Rows[0]->ItemArray[0]);

	sql = "INSERT INTO ordered (purchaseId, articleId, inQuantity) VALUES ('" + purchaseId + "', '" + id + "', '" + inQuantity + "')";
	this->PurchaseTable->actionRows(sql);
}

void Purchase::RemoveArticles(System::String^ purchaseId)
{
	System::String^ sql = "DELETE FROM ordered WHERE purchaseId = '" + purchaseId + "'";
	this->PurchaseTable->actionRows(sql);
}