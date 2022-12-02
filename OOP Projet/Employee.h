#pragma once
#include "Table.h"
#include "DBInteraction.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

ref class Employee : public Table
{
private:
	DBInteraction^ EmployeeTable;
	int employeeId;
	System::String^ hiringDate;
	int employeeRank;
	System::String^ leavingDate;
	int personId;
public:
	Employee();
	Employee(int, System::String^, int, System::String^, int);
	int getEmployeeId();
	System::String^ getHiringDate();
	int getEmployeeRank();
	System::String^ getLeavingDate();
	int getPersonId();
	void setEmployeeId(int);
	void setHiringDate(System::String^);
	void setEmployeeRank(int);
	void setLeavingDate(System::String^);
	void setPersonId(int);
	System::Data::DataSet^ Select(System::String^);
	void Modify(int, System::String^, int, System::String^, int);
	void Add(System::String^, int, System::String^, int);
	void Delete(System::String^);
};