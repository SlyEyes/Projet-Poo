#pragma once
#include "Table.h"
#include "DBInteraction.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

ref class Address : public Table
{
private:
	DBInteraction^ AddressTable;
	int addressId;
	int addressNumber;
	System::String^ streetType;
	System::String^ streetName;
	int floor;
	int flatNumber;
	System::String^ residenceName;
	System::String^ buildingName;
	int addressTypeId;
public:
	Address();
	Address(int, int, System::String^, System::String^, int, int, System::String^, System::String^, int);
	int getAddressId();
	int getAddressNumber();
	System::String^ getStreetType();
	System::String^ getStreetName();
	int getFloor();
	int getFlatNumber();
	System::String^ getResidenceName();
	System::String^ getBuildingName();
	int getAddressTypeId();
	void setAddressId(int);
	void setAddressNumber(int);
	void setStreetType(System::String^);
	void setStreetName(System::String^);
	void setFloor(int);
	void setFlatNumber(int);
	void setResidenceName(System::String^);
	void setBuildingName(System::String^);
	void setAddressTypeId(int);
	System::Data::DataSet^ Select(System::String^);
	void Modify(int, int, System::String^, System::String^, int, int, System::String^, System::String^, int);
	void Add(int, System::String^, System::String^, int, int, System::String^, System::String^, int);
	void Delete(System::String^);
};