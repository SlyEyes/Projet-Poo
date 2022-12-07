#include "Employee.h"

Employee::Employee(System::String^ loginName, System::String^ loginPassword)
{
	this->EmployeeTable = gcnew DBInteraction(loginName, loginPassword);
}

System::Data::DataSet^ Employee::Select(System::String^ dataTableName)
{
	System::String^ sql = "SELECT person.personId, employee.employeeId, personFirstName, personLastName, personBirthDate, hiringDate, employeeRank, leavingDate FROM employee INNER JOIN person ON person.personId = employee.personId";
	return this->EmployeeTable->getRows(sql, dataTableName);
}

System::Data::DataSet^ Employee::Search(System::String^ personid, System::String^ employeeid, System::String^ lastName, System::String^ firstName, System::String^ birthDate, System::String^ hiringDate, System::String^ employeeRank)
{
	System::String^ sql = "SELECT personFirstName, personLastName, personBirthDate, hiringDate, employeeRank, leavingDate FROM employee INNER JOIN person ON person.personId = employee.personId WHERE (person.personId = '" + personid + "' OR employee.employeeId = '" + employeeid + "' OR person.personLastName = '" + lastName + "' OR person.personFirstName = '" + firstName + "' OR person.personBirthDate = '" + birthDate + "' OR employee.hiringDate = '" + hiringDate + "' OR employee.employeeRank = '" + employeeRank + "')";
	return this->EmployeeTable->getRows(sql, "Employee");
}

void Employee::Modify(System::String^ personId, System::String^ employeeId, System::String^ lastName, System::String^ firstName, System::String^ birthDate, System::String^ hiringDate, System::String^ employeeRank)
{
	System::String^ sql = "UPDATE person SET personLastName = '" + lastName + "',personFirstName = '" + firstName + "',personBirthDate = '" + birthDate + "' WHERE personId = " + personId;
	this->EmployeeTable->actionRows(sql);
	sql = "UPDATE employee SET hiringDate = '" + hiringDate + "',employeeRank = '" + employeeRank + "' WHERE employeeId = " + employeeId;
	this->EmployeeTable->actionRows(sql);
}

void Employee::Add(System::String^ lastName, System::String^ firstName, System::String^ birthDate, System::String^ hiringDate, System::String^ employeeRank)
{
	System::String^ sql = "INSERT INTO person (personLastName, personFirstName, personBirthDate) VALUES ('" + lastName + "','" + firstName + "','" + birthDate + "')";
	this->EmployeeTable->actionRows(sql);
	sql = "INSERT INTO employee (personId, hiringDate, employeeRank) VALUES ((SELECT MAX(personId) FROM person),'" + hiringDate + "','" + employeeRank + "')";
	this->EmployeeTable->actionRows(sql);
}

void Employee::Remove(System::String^ personId)
{
	System::String^ Time = System::DateTime::Now.ToString("dd/MM/yyyy");
	System::String^ sql = "UPDATE employee SET leavingDate = '" + Time + "',employeeRank = 0 WHERE personId = " + personId;
	this->EmployeeTable->actionRows(sql);
}