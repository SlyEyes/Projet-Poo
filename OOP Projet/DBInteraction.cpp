#include "DBInteraction.h"

DBInteraction::DBInteraction()
{
	this->DB_Link = "Data Source = 6.tcp.eu.ngrok.io,17416; Initial Catalog = deltaStorageDatabase; Persist Security Info = True;User ID = antoine_ritter; Password = Ritter-001";
	
	this->DB_txt_Commande = "";

	this->DB_Connexion = gcnew System::Data::SqlClient::SqlConnection(this->DB_Link);
	this->DB_Commande = gcnew System::Data::SqlClient::SqlCommand(this->DB_txt_Commande, this->DB_Connexion);
	this->DB_Data_Adapter = gcnew System::Data::SqlClient::SqlDataAdapter();
	this->DB_Data_Set = gcnew System::Data::DataSet();

	this->DB_Commande->CommandType = System::Data::CommandType::Text;
}
System::Data::DataSet^ DBInteraction::getRows(System::String^ DB_txt_Commande, System::String^ sDataTableName)
{
	this->DB_Data_Set->Clear();
	this->DB_txt_Commande = DB_txt_Commande;
	this->DB_Commande->CommandText = this->DB_txt_Commande;
	this->DB_Data_Adapter->SelectCommand = this->DB_Commande;
	this->DB_Data_Adapter->Fill(this->DB_Data_Set, sDataTableName);

	return this->DB_Data_Set;
}
void  DBInteraction::actionRows(System::String^ DB_txt_Commande)
{
	this->DB_txt_Commande = DB_txt_Commande;
	this->DB_Commande->CommandText = this->DB_txt_Commande;
	this->DB_Data_Adapter->SelectCommand = this->DB_Commande;
	this->DB_Connexion->Open();
	this->DB_Commande->ExecuteNonQuery();
	this->DB_Connexion->Close();
}