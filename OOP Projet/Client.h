#pragma once
#include "Table.h"
#include "DBInteraction.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

ref class Client : public Table
{
private:
	DBInteraction^ ClientTable;
	int personId;
	System::String^ personLastName;
	System::String^ personFirstName;
	System::String^ personBirthDate;
	int addressId;
public:
	Client();
	Client(int, System::String^, System::String^, System::String^, int);
	int getPersonId();
	System::String^ getPersonLastName();
	System::String^ getPersonFirstName();
	System::String^ getPersonBirthDate();
	int getaddressId();
	void setPersonId(int);
	void setPersonLastName(System::String^);
	void setPersonFirstName(System::String^);
	void setPersonBirthDate(System::String^);
	void setaddressId(int);
	System::Data::DataSet^ Select(System::String^);
	void Modify(System::String^, System::String^, System::String^, System::String^, System::String^);
	void Add(System::String^, System::String^, System::String^, System::String^);
	void Delete(System::String^);
};