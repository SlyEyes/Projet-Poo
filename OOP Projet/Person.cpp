#include "Person.h"

Person::Person()
{
	this->PersonTable = gcnew DBInteraction();
}

Person::Person(int personId, System::String^ personLastName, System::String^ personFirstName, System::String^ personBirthDate, int addressId, int addressId2, int addressId3)
{
	this->PersonTable = gcnew DBInteraction();
	this->personId = personId;
	this->personLastName = personLastName;
	this->personFirstName = personFirstName;
	this->personBirthDate = personBirthDate;
	this->addressId = addressId;
	this->addressId2 = addressId2;
	this->addressId3 = addressId3;
}

int Person::getPersonId()
{
	return this->personId;
}

System::String^ Person::getPersonLastName()
{
	return this->personLastName;
}

System::String^ Person::getPersonFirstName()
{
	return this->personFirstName;
}

System::String^ Person::getPersonBirthDate()
{
	return this->personBirthDate;
}

int Person::getaddressId()
{
	return this->addressId;
}

int Person::getaddressId2()
{
	return this->addressId2;
}

int Person::getaddressId3()
{
	return this->addressId3;
}

void Person::setPersonId(int personId)
{
	this->personId = personId;
}

void Person::setPersonLastName(System::String^ personLastName)
{
	this->personLastName = personLastName;
}

void Person::setPersonFirstName(System::String^ personFirstName)
{
	this->personFirstName = personFirstName;
}

void Person::setPersonBirthDate(System::String^ personBirthDate)
{
	this->personBirthDate = personBirthDate;
}

void Person::setaddressId(int addressId)
{
	this->addressId = addressId;
}

void Person::setaddressId2(int addressId2)
{
	this->addressId2 = addressId2;
}

void Person::setaddressId3(int addressId3)
{
	this->addressId3 = addressId3;
}

System::Data::DataSet^ Person::Select(System::String^ dataTableName)
{
	System::String^ sql = "SELECT * FROM person";
	return this->PersonTable->getRows(sql, dataTableName);
}

void Person::Modify(System::String^ query, System::String^ personLastName, System::String^ personFirstName, System::String^ personBirthDate, int addressId, int addressId2, int addressId3)
{
}

void Person::Add(System::String^ query, System::String^ personLastName, System::String^ personFirstName, System::String^ personBirthDate, int addressId, int addressId2, int addressId3)
{
}

void Person::Delete(System::String^ query)
{
}