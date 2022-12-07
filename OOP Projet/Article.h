#pragma once
#include "Table.h"
#include "DBInteraction.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

ref class Article : public Table
{
private:
	DBInteraction^ ArticleTable;

public:
	Article(System::String^, System::String^);
	System::Data::DataSet^ Select(System::String^);
	System::Data::DataSet^ Search(System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^);
	void Modify(System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^);
	void Add(System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^);
	void Remove(System::String^);
};