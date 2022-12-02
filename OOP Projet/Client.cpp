#include "Client.h"

Client::Client()
{
	this->ClientTable = gcnew DBInteraction();
}
Client::Client(int personId, System::String^ personLastName, System::String^ personFirstName, System::String^ personBirthDate, int addressId)
{
	this->ClientTable = gcnew DBInteraction();
	this->personId = personId;
	this->personLastName = personLastName;
	this->personFirstName = personFirstName;
	this->personBirthDate = personBirthDate;
	this->addressId = addressId;
}

int Client::getPersonId()
{
	return this->personId;
}

System::String^ Client::getPersonLastName()
{
	return this->personLastName;
}

System::String^ Client::getPersonFirstName()
{
	return this->personFirstName;
}

System::String^ Client::getPersonBirthDate()
{
	return this->personBirthDate;
}

int Client::getaddressId()
{
	return this->addressId;
}

void Client::setPersonId(int personId)
{
	this->personId = personId;
}

void Client::setPersonLastName(System::String^ personLastName)
{
	this->personLastName = personLastName;
}

void Client::setPersonFirstName(System::String^ personFirstName)
{
	this->personFirstName = personFirstName;
}

void Client::setPersonBirthDate(System::String^ personBirthDate)
{
	this->personBirthDate = personBirthDate;
}

void Client::setaddressId(int addressId)
{
	this->addressId = addressId;
}

System::Data::DataSet^ Client::Select(System::String^ dataTableName)
{
	System::String^ sql = "SELECT person.personID, person.personLastName, person.personFirstName, person.personBirthDate, client.clientReference, client.clientCompanyName FROM client INNER JOIN person ON client.personId = person.personId ";
	return this->ClientTable->getRows(sql, dataTableName);
}

void Client::Modify(System::String^, System::String^, System::String^, System::String^, System::String^)
{
}

void Client::Add(System::String^, System::String^, System::String^, System::String^)
{
}

void Client::Delete(System::String^)
{
}