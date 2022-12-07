#include "DBInteraction.h"

DBInteraction::DBInteraction(System::String^ loginName, System::String^ loginPassword)
{
	this->DB_Link = "Data Source = 4.tcp.eu.ngrok.io,18129; Initial Catalog = deltaStorageDatabase; Persist Security Info = True;User ID = " + loginName + "; Password = " + loginPassword + ";";
	this->DB_txt_Command = "";

	this->DB_Connexion = gcnew System::Data::SqlClient::SqlConnection(this->DB_Link);
	this->DB_Command = gcnew System::Data::SqlClient::SqlCommand(this->DB_txt_Command, this->DB_Connexion);
	this->DB_Data_Adapter = gcnew System::Data::SqlClient::SqlDataAdapter();
	this->DB_Data_Set = gcnew System::Data::DataSet();

	this->DB_Command->CommandType = System::Data::CommandType::Text;
}
System::Data::DataSet^ DBInteraction::getRows(System::String^ DB_txt_Command, System::String^ sDataTableName)
{
	this->DB_Data_Set->Clear();
	this->DB_txt_Command = DB_txt_Command;
	this->DB_Command->CommandText = this->DB_txt_Command;
	this->DB_Command->CommandText = DB_txt_Command;
	this->DB_Data_Adapter->SelectCommand = this->DB_Command;
	this->DB_Data_Adapter->Fill(this->DB_Data_Set, sDataTableName);

	return this->DB_Data_Set;
}
void  DBInteraction::actionRows(System::String^ DB_txt_Command)
{
	this->DB_txt_Command = DB_txt_Command;
	this->DB_Command->CommandText = this->DB_txt_Command;
	this->DB_Data_Adapter->SelectCommand = this->DB_Command;
	this->DB_Connexion->Open();
	this->DB_Command->ExecuteNonQuery();
	this->DB_Connexion->Close();
}