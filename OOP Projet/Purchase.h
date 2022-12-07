#pragma once
#include "Table.h"
#include "DBInteraction.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

ref class Purchase : public Table
{
private:
	DBInteraction^ PurchaseTable;

public:
	Purchase(System::String^, System::String^);
	System::Data::DataSet^ Select(System::String^);
	System::Data::DataSet^ Search(System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^);
	void Modify(System::String^ , System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^);
	void Add(System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^);
	void Remove(System::String^);
	System::Data::DataSet^ SelectArticles(System::String^);
	System::Data::DataSet^ SearchArticles(System::String^, System::String^, System::String^, System::String^);
	void ModifyArticles(System::String^, System::String^, System::String^, System::String^);
	void AddArticles(System::String^, System::String^, System::String^, System::String^);
	void RemoveArticles(System::String^);
};