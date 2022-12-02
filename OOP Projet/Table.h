#pragma once
#include "DBInteraction.h"
ref class Table
{
public:
	Table(void);
	virtual System::Data::DataSet^ Select();
	virtual void Modify();
	virtual void Add();
	virtual void Delete();
};

