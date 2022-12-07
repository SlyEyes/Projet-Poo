#pragma once
#include "DBInteraction.h"
ref class Table
{
public:
	Table(void);
	virtual System::Data::DataSet^ Select();
	virtual System::Data::DataSet^ Search(System::String^);
	virtual void Modify();
	virtual void Add();
	virtual void Remove();
};

