#include "Address.h"

Address::Address()
{
	this->AddressTable = gcnew DBInteraction();
}

Address::Address(int addressId,int addressNumber,System::String^ streetType,System::String^ streetName,int floor,int flatNumber,System::String^ residenceName,System::String^ buildingName,int addressTypeId)
{
	this->AddressTable = gcnew DBInteraction();
	this->addressId = addressId;
	this->addressNumber = addressNumber;
	this->streetType = streetType;
	this->streetName = streetName;
	this->floor = floor;
	this->flatNumber = flatNumber;
	this->residenceName = residenceName;
	this->buildingName = buildingName;
	this->addressTypeId = addressTypeId;
}

int Address::getAddressId()
{
	return this->addressId;
}

int Address::getAddressNumber()
{
	return this->addressNumber;
}

System::String^ Address::getStreetType()
{
	return this->streetType;
}

System::String^ Address::getStreetName()
{
	return this->streetName;
}

int Address::getFloor()
{
	return this->floor;
}

int Address::getFlatNumber()
{
	return this->flatNumber;
}

System::String^ Address::getResidenceName()
{
	return this->residenceName;
}

System::String^ Address::getBuildingName()
{
	return this->buildingName;
}

int Address::getAddressTypeId()
{
	return this->addressTypeId;
}

void Address::setAddressId(int addressId)
{
	this->addressId = addressId;
}

void Address::setAddressNumber(int addressNumber)
{
	this->addressNumber = addressNumber;
}

void Address::setStreetType(System::String^ streetType)
{
	this->streetType = streetType;
}

void Address::setStreetName(System::String^ streetName)
{
	this->streetName = streetName;
}

void Address::setFloor(int floor)
{
	this->floor = floor;
}

void Address::setFlatNumber(int flatNumber)
{
	this->flatNumber = flatNumber;
}

void Address::setResidenceName(System::String^ residenceName)
{
	this->residenceName = residenceName;
}

void Address::setBuildingName(System::String^ buildingName)
{
	this->buildingName = buildingName;
}

void Address::setAddressTypeId(int addressTypeId)
{
	this->addressTypeId = addressTypeId;
}

System::Data::DataSet^ Address::Select(System::String^ dataTableName)
{
	System::String^ sql = "SELECT * FROM address";
	return this->AddressTable->getRows(sql, dataTableName);
}

void Address::Modify(int addressId, int addressNumber, System::String^ streetType, System::String^ streetName, int floor, int flatNumber, System::String^ residenceName, System::String^ buildingName, int addressTypeId)
{
}

void Address::Add(int addressNumber, System::String^ streetType, System::String^ streetName, int floor, int flatNumber, System::String^ residenceName, System::String^ buildingName, int addressTypeId)
{
}

void Address::Delete(System::String^ addressId)
{
}