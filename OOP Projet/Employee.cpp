#include "Employee.h"

Employee::Employee()
{
	this->EmployeeTable = gcnew DBInteraction();
}

Employee::Employee(int employeeId, System::String^ hiringDate, int employeeRank, System::String^ leavingDate, int personId)
{
	this->EmployeeTable = gcnew DBInteraction();
	this->employeeId = employeeId;
	this->hiringDate = hiringDate;
	this->employeeRank = employeeRank;
	this->leavingDate = leavingDate;
	this->personId = personId;
}

int Employee::getEmployeeId()
{
	return this->employeeId;
}

System::String^ Employee::getHiringDate()
{
	return this->hiringDate;
}

int Employee::getEmployeeRank()
{
	return this->employeeRank;
}

System::String^ Employee::getLeavingDate()
{
	return this->leavingDate;
}

int Employee::getPersonId()
{
	return this->personId;
}

void Employee::setEmployeeId(int employeeId)
{
	this->employeeId = employeeId;
}

void Employee::setHiringDate(System::String^ hiringDate)
{
	this->hiringDate = hiringDate;
}

void Employee::setEmployeeRank(int employeeRank)
{
	this->employeeRank = employeeRank;
}

void Employee::setLeavingDate(System::String^ leavingDate)
{
	this->leavingDate = leavingDate;
}

void Employee::setPersonId(int personId)
{
	this->personId = personId;
}

System::Data::DataSet^ Employee::Select(System::String^ dataTableName)
{
	System::String^ sql = "SELECT * FROM employee";
	return this->EmployeeTable->getRows(sql, dataTableName);
}

void Employee::Modify(int employeeId, System::String^ hiringDate, int employeeRank, System::String^ leavingDate, int personId)
{
}

void Employee::Add(System::String^ hiringDate, int employeeRank, System::String^ leavingDate, int personId)
{
}

void Employee::Delete(System::String^ employeeId)
{
}