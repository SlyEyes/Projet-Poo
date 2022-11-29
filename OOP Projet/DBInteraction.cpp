#include "DBInteraction.h"

DBInteraction::DBInteraction(void)
{
	this->DB_Link = "Data Source=10.54.129.183;Initial Catalog=deltaStorageDatabase;Persist Security Info=True;User ID=antoine_ritter;Password=***********";

	this->DB_txt_Commande = "";

	this->DB_Connexion = gcnew System::Data::SqlClient::SqlConnection(this->DB_Link);
	this->DB_Commande = gcnew System::Data::SqlClient::SqlCommand(this->DB_txt_Commande, this->DB_Connexion);
	this->DB_Data_Adapter = gcnew System::Data::SqlClient::SqlDataAdapter();
	this->DB_Data_Set_CLient = gcnew System::Data::DataSet();

	this->DB_Commande->CommandType = System::Data::CommandType::Text;
}
System::Data::DataSet^ DBInteraction::getRows(System::String^ DB_txt_Commande, System::String^ sDataTableName)
{
	this->DB_Data_Set_CLient->Clear();
	this->DB_txt_Commande = DB_txt_Commande;
	this->DB_Commande->CommandText = this->DB_txt_Commande;
	this->DB_Data_Adapter->SelectCommand = this->DB_Commande;
	this->DB_Data_Adapter->Fill(this->DB_Data_Set_CLient, sDataTableName);

	return this->DB_Data_Set_CLient;
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