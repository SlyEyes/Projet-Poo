#pragma once
#include "Table.h"
#include "DBInteraction.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

ref class Person : public Table
{
private: 
	DBInteraction^ PersonTable;
	int personId;
	System::String^ personLastName;
	System::String^ personFirstName;
	System::String^ personBirthDate;
	int addressId;
	int addressId2;
	int addressId3;
public:
	Person();
	Person(int, System::String^, System::String^, System::String^, int, int, int);
	int getPersonId();
	System::String^ getPersonLastName();
	System::String^ getPersonFirstName();
	System::String^ getPersonBirthDate();
	int getaddressId();
	int getaddressId2();
	int getaddressId3();
	void setPersonId(int);
	void setPersonLastName(System::String^);
	void setPersonFirstName(System::String^);
	void setPersonBirthDate(System::String^);
	void setaddressId(int);
	void setaddressId2(int);
	void setaddressId3(int);
	System::Data::DataSet^ Select(System::String^);
	void Modify(int, System::String^, System::String^, System::String^, int, int, int);
	void Add(System::String^, System::String^, System::String^, System::String^, int, int, int);
	void Delete(System::String^);
};