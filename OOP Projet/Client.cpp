#include "Client.h"

Client::Client(System::String^ loginName, System::String^ loginPassword)
{
    this->ClientTable = gcnew DBInteraction(loginName, loginPassword);
}

System::Data::DataSet^ Client::Select(System::String^ dataTableName)
{
    System::String^ sql = "SELECT person.personId, client.clientId ,person.personFirstName, person.personLastName, person.personBirthDate, client.clientCompanyName FROM client INNER JOIN person ON client.personId = person.personId WHERE client.available = 1";
    return this->ClientTable->getRows(sql, dataTableName);
}

System::Data::DataSet^ Client::Search(System::String^ personId, System::String^ clientId, System::String^ lastName, System::String^ firstName, System::String^ birthDate, System::String^ companyName)
{
	System::String^ sql = "SELECT person.personID, client.clientId ,person.personFirstName, person.personLastName, person.personBirthDate, client.clientCompanyName FROM client INNER JOIN person ON client.personId = person.personId WHERE client.available = 1 AND (person.personId = '" + personId + "' OR client.clientId = '" + clientId + "' OR person.personLastName = '" + lastName + "' OR person.personFirstName = '" + firstName + "' OR person.personBirthDate = '" + birthDate + "' OR client.clientCompanyName = '" + companyName + "')";
    return this->ClientTable->getRows(sql, "Client");
}

void Client::Modify(System::String^ personId, System::String^ clientId,System::String^ lastName, System::String^ firstName, System::String^ birthDate, System::String^ companyName)
{
    System::String^ sql = "UPDATE person SET personLastName = '" + lastName + "',personFirstName = '" + firstName + "',personBirthDate = '" + birthDate + "' WHERE personId = " + personId;
    this->ClientTable->actionRows(sql);
    sql = "UPDATE client SET clientCompanyName = '" + companyName + "' WHERE personId = " + personId;
    this->ClientTable->actionRows(sql);
}

void Client::Add(System::String^ lastName, System::String^ firstName, System::String^ birthDate, System::String^ companyName)
{
    System::String^ sql = "SELECT personID FROM person WHERE person.personLastName = '" + lastName + "' AND person.personFirstName = '" + firstName + "' AND person.personBirthDate = '" + birthDate + "'" ;
    System::Data::DataSet^ Clientds = this->ClientTable->getRows(sql, "person");
    if (Clientds->Tables["person"]->Rows->Count == 0)
    {
        sql = "INSERT INTO person (person.personLastName, person.personFirstName, person.personBirthDate) VALUES ('" + lastName + "', '" + firstName + "', '" + birthDate + "')";
        this->ClientTable->actionRows(sql);
    }
    sql = "SELECT personID FROM person WHERE personLastName = '" + lastName + "' AND personFirstName = '" + firstName + "' AND personBirthDate = '" + birthDate + "'";
    Clientds = this->ClientTable->getRows(sql, "person");
    System::String^ id = Convert::ToString(Clientds->Tables["person"]->Rows[0]->ItemArray[0]);
	sql = "INSERT INTO client VALUES ('test', '" + companyName + "','" + id + "', 1)";
	this->ClientTable->actionRows(sql);
}

void Client::Remove(System::String^ Id)
{
    int id = System::Convert::ToInt32(Id);
    System::String^ sql = "UPDATE client SET available = 0 WHERE personId = " + id;
    this->ClientTable->actionRows(sql);
}