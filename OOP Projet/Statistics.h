#pragma once
#include "Table.h"
#include "DBInteraction.h"

ref class Statistics : public Table
{
private :
	DBInteraction^ StatsQueries;

public:
	Statistics(System::String^, System::String^);
	System::Data::DataSet^ averageBasket(System::String^);
	System::Data::DataSet^ salesFigures(System::String^, System::String^);
	System::Data::DataSet^ underReapproval(System::String^);
	System::Data::DataSet^ totalPurchases(System::String^, System::String^);
	System::Data::DataSet^ best10(System::String^);
	System::Data::DataSet^ worst10(System::String^);
	System::Data::DataSet^ articlesValue(System::String^);
	System::Data::DataSet^ commercialValue(System::String^);
};

