#pragma once
#include "Employee.h"
#include "Table.h"
#include "Payment.h"
#include "Statistics.h"
#include "Address.h"
#include "Article.h"
#include "Client.h"
#include "Command.h"
#include "DBInteraction.h"
#include "Person.h"


namespace Realisation {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for Interface
	/// </summary>
	public ref class Interface : public System::Windows::Forms::Form
	{
	public:
		Interface(void)
		{
			InitializeComponent();
			DB_address = gcnew Address();
			DB_Article = gcnew Article();
			DB_Client = gcnew Client();
			DB_Command = gcnew Command();
			DB_Employee = gcnew Employee();
			DB_Payment = gcnew Payment();
			DB_Person = gcnew Person();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Interface()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panelInterface;
	protected:




	private: System::Windows::Forms::Panel^ panelSubNavigation;
	private: System::Windows::Forms::Panel^ panelNavigation;
	private: System::Windows::Forms::Panel^ panelButtonHelp;
	private: System::Windows::Forms::Button^ buttonHelp;
	private: System::Windows::Forms::Panel^ panelButtonNavigation;
	private: System::Windows::Forms::Button^ buttonStatistics;
	private: System::Windows::Forms::Button^ buttonCommand;
	private: System::Windows::Forms::Button^ buttonArticle;
	private: System::Windows::Forms::Button^ buttonEmployee;
	private: System::Windows::Forms::Button^ buttonClient;
	private: System::Windows::Forms::Panel^ panelLogo;
	private: System::Windows::Forms::Panel^ panelHeader;














	private: System::String^ Display = "panelLogin";
	private: Boolean Login = false;
	private: System::Windows::Forms::Panel^ panelControlButton;
	private: System::Windows::Forms::Button^ buttonMinimize;
	private: System::Windows::Forms::Button^ buttonMaximize;
	private: System::Windows::Forms::Button^ buttonClose;
	private: System::Windows::Forms::Label^ labelTitle;

	private: System::Windows::Forms::Panel^ panelComplement;
	private: System::Windows::Forms::PictureBox^ Logo;
	private: System::Windows::Forms::Panel^ panelSubButtonArticle;
	private: System::Windows::Forms::Panel^ panelSubButtonCommand;


	private: System::Windows::Forms::Panel^ panelSubButtonEmployee;

	private: System::Windows::Forms::Panel^ panelSubButtonClient;





	private: System::Windows::Forms::Button^ buttonDeleteCommand;
	private: System::Windows::Forms::Button^ buttonAddCommand;
	private: System::Windows::Forms::Button^ buttonModifyCommand;
	private: System::Windows::Forms::Button^ buttonDisplayCommand;
	private: System::Windows::Forms::Button^ buttonDeleteArticle;
	private: System::Windows::Forms::Button^ buttonAddArticle;
	private: System::Windows::Forms::Button^ buttonModifyArticle;
	private: System::Windows::Forms::Button^ buttonDisplayArticle;
	private: System::Windows::Forms::Button^ buttonDeleteEmployee;
	private: System::Windows::Forms::Button^ buttonAddEmployee;
	private: System::Windows::Forms::Button^ buttonModifyEmployee;
	private: System::Windows::Forms::Button^ buttonDisplayEmployee;
	private: System::Windows::Forms::Button^ buttonDeleteClient;
	private: System::Windows::Forms::Button^ buttonAddClient;
	private: System::Windows::Forms::Button^ buttonModifyClient;
	private: System::Windows::Forms::Button^ buttonDisplayClient;
	private: System::Windows::Forms::Panel^ panelDisplay;
	private: System::Windows::Forms::TabControl^ tabController;
	private: System::Windows::Forms::TabPage^ tabLogin;
	private: System::Windows::Forms::TabPage^ tabDisplayClient;
	private: System::Windows::Forms::TabPage^ tabModifyClient;
	private: System::Windows::Forms::TabPage^ tabAddClient;
	private: System::Windows::Forms::TabPage^ tabDeleteClient;
	private: System::Windows::Forms::TabPage^ tabDisplayEmployee;
	private: System::Windows::Forms::TabPage^ tabModifyEmployee;
	private: System::Windows::Forms::TabPage^ tabAddEmployee;
	private: System::Windows::Forms::TabPage^ tabDeleteEmployee;
	private: System::Windows::Forms::TabPage^ tabDisplayCommand;
	private: System::Windows::Forms::TabPage^ tabModifyCommand;
	private: System::Windows::Forms::TabPage^ tabAddCommand;
	private: System::Windows::Forms::TabPage^ tabDeleteCommand;
	private: System::Windows::Forms::TabPage^ tabStatistics;
	private: System::Windows::Forms::TabPage^ tabHelp;



	private: System::Windows::Forms::TabPage^ tabDisplayArticle;
	private: System::Windows::Forms::TabPage^ tabModifyArticle;
	private: System::Windows::Forms::TabPage^ tabAddArticle;
	private: System::Windows::Forms::TabPage^ tabDeleteArticle;
	private: System::Windows::Forms::Panel^ panelLogin;
	private: System::Windows::Forms::Panel^ panelMainLogin;


	private: System::Windows::Forms::Panel^ panelHeaderLogin;
	private: System::Windows::Forms::Label^ labelTitleLogin;

	private: System::Windows::Forms::TextBox^ textBoxUsername;
	private: System::Windows::Forms::TextBox^ textBoxPassword;


	private: System::Windows::Forms::Button^ buttonPressLogin;



	private: System::Windows::Forms::Label^ labelSubTitle;
	private: System::Windows::Forms::Panel^ panelCon2;
	private: System::Windows::Forms::Panel^ panelCon1;
		
	private: System::Windows::Forms::DataGridView^ dataGridDisplayClient;

	private: Address^ DB_address;
	private: Article^ DB_Article;
	private: Client^ DB_Client;
	private: Command^ DB_Command;
	private: Employee^ DB_Employee;
	private: Payment^ DB_Payment;
	private: Person^ DB_Person;
		
	private: System::Data::DataSet^ DB_Data_Set_Address;
	private: System::Data::DataSet^ DB_Data_Set_Article;
	private: System::Data::DataSet^ DB_Data_Set;
	private: System::Data::DataSet^ DB_Data_Set_Command;
	private: System::Data::DataSet^ DB_Data_Set_Employee;
	private: System::Data::DataSet^ DB_Data_Set_Payment;
	private: System::Data::DataSet^ DB_Data_Set_Person;
private: System::Windows::Forms::DataGridView^ dataGridDisplayEmployee;
private: System::Windows::Forms::DataGridView^ dataGridDisplayCommand;
private: System::Windows::Forms::DataGridView^ dataGridDisplayArticle;



	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panelInterface = (gcnew System::Windows::Forms::Panel());
			this->panelDisplay = (gcnew System::Windows::Forms::Panel());
			this->tabController = (gcnew System::Windows::Forms::TabControl());
			this->tabLogin = (gcnew System::Windows::Forms::TabPage());
			this->panelLogin = (gcnew System::Windows::Forms::Panel());
			this->panelMainLogin = (gcnew System::Windows::Forms::Panel());
			this->textBoxUsername = (gcnew System::Windows::Forms::TextBox());
			this->panelCon2 = (gcnew System::Windows::Forms::Panel());
			this->textBoxPassword = (gcnew System::Windows::Forms::TextBox());
			this->panelCon1 = (gcnew System::Windows::Forms::Panel());
			this->buttonPressLogin = (gcnew System::Windows::Forms::Button());
			this->panelHeaderLogin = (gcnew System::Windows::Forms::Panel());
			this->labelTitleLogin = (gcnew System::Windows::Forms::Label());
			this->tabDisplayClient = (gcnew System::Windows::Forms::TabPage());
			this->dataGridDisplayClient = (gcnew System::Windows::Forms::DataGridView());
			this->tabModifyClient = (gcnew System::Windows::Forms::TabPage());
			this->tabAddClient = (gcnew System::Windows::Forms::TabPage());
			this->tabDeleteClient = (gcnew System::Windows::Forms::TabPage());
			this->tabDisplayEmployee = (gcnew System::Windows::Forms::TabPage());
			this->tabModifyEmployee = (gcnew System::Windows::Forms::TabPage());
			this->tabAddEmployee = (gcnew System::Windows::Forms::TabPage());
			this->tabDeleteEmployee = (gcnew System::Windows::Forms::TabPage());
			this->tabDisplayCommand = (gcnew System::Windows::Forms::TabPage());
			this->tabModifyCommand = (gcnew System::Windows::Forms::TabPage());
			this->tabAddCommand = (gcnew System::Windows::Forms::TabPage());
			this->tabDeleteCommand = (gcnew System::Windows::Forms::TabPage());
			this->tabStatistics = (gcnew System::Windows::Forms::TabPage());
			this->tabHelp = (gcnew System::Windows::Forms::TabPage());
			this->tabDisplayArticle = (gcnew System::Windows::Forms::TabPage());
			this->tabModifyArticle = (gcnew System::Windows::Forms::TabPage());
			this->tabAddArticle = (gcnew System::Windows::Forms::TabPage());
			this->tabDeleteArticle = (gcnew System::Windows::Forms::TabPage());
			this->panelSubNavigation = (gcnew System::Windows::Forms::Panel());
			this->panelSubButtonCommand = (gcnew System::Windows::Forms::Panel());
			this->buttonDeleteCommand = (gcnew System::Windows::Forms::Button());
			this->buttonAddCommand = (gcnew System::Windows::Forms::Button());
			this->buttonModifyCommand = (gcnew System::Windows::Forms::Button());
			this->buttonDisplayCommand = (gcnew System::Windows::Forms::Button());
			this->panelSubButtonArticle = (gcnew System::Windows::Forms::Panel());
			this->buttonDeleteArticle = (gcnew System::Windows::Forms::Button());
			this->buttonAddArticle = (gcnew System::Windows::Forms::Button());
			this->buttonModifyArticle = (gcnew System::Windows::Forms::Button());
			this->buttonDisplayArticle = (gcnew System::Windows::Forms::Button());
			this->panelSubButtonEmployee = (gcnew System::Windows::Forms::Panel());
			this->buttonDeleteEmployee = (gcnew System::Windows::Forms::Button());
			this->buttonAddEmployee = (gcnew System::Windows::Forms::Button());
			this->buttonModifyEmployee = (gcnew System::Windows::Forms::Button());
			this->buttonDisplayEmployee = (gcnew System::Windows::Forms::Button());
			this->panelSubButtonClient = (gcnew System::Windows::Forms::Panel());
			this->buttonDeleteClient = (gcnew System::Windows::Forms::Button());
			this->buttonAddClient = (gcnew System::Windows::Forms::Button());
			this->buttonModifyClient = (gcnew System::Windows::Forms::Button());
			this->buttonDisplayClient = (gcnew System::Windows::Forms::Button());
			this->panelNavigation = (gcnew System::Windows::Forms::Panel());
			this->panelComplement = (gcnew System::Windows::Forms::Panel());
			this->panelButtonHelp = (gcnew System::Windows::Forms::Panel());
			this->buttonHelp = (gcnew System::Windows::Forms::Button());
			this->panelButtonNavigation = (gcnew System::Windows::Forms::Panel());
			this->buttonStatistics = (gcnew System::Windows::Forms::Button());
			this->buttonCommand = (gcnew System::Windows::Forms::Button());
			this->buttonArticle = (gcnew System::Windows::Forms::Button());
			this->buttonEmployee = (gcnew System::Windows::Forms::Button());
			this->buttonClient = (gcnew System::Windows::Forms::Button());
			this->panelLogo = (gcnew System::Windows::Forms::Panel());
			this->Logo = (gcnew System::Windows::Forms::PictureBox());
			this->panelHeader = (gcnew System::Windows::Forms::Panel());
			this->labelSubTitle = (gcnew System::Windows::Forms::Label());
			this->labelTitle = (gcnew System::Windows::Forms::Label());
			this->panelControlButton = (gcnew System::Windows::Forms::Panel());
			this->buttonMinimize = (gcnew System::Windows::Forms::Button());
			this->buttonMaximize = (gcnew System::Windows::Forms::Button());
			this->buttonClose = (gcnew System::Windows::Forms::Button());
			this->dataGridDisplayEmployee = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridDisplayArticle = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridDisplayCommand = (gcnew System::Windows::Forms::DataGridView());
			this->panelInterface->SuspendLayout();
			this->panelDisplay->SuspendLayout();
			this->tabController->SuspendLayout();
			this->tabLogin->SuspendLayout();
			this->panelLogin->SuspendLayout();
			this->panelMainLogin->SuspendLayout();
			this->panelHeaderLogin->SuspendLayout();
			this->tabDisplayClient->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridDisplayClient))->BeginInit();
			this->tabDisplayEmployee->SuspendLayout();
			this->tabDisplayCommand->SuspendLayout();
			this->tabDisplayArticle->SuspendLayout();
			this->panelSubNavigation->SuspendLayout();
			this->panelSubButtonCommand->SuspendLayout();
			this->panelSubButtonArticle->SuspendLayout();
			this->panelSubButtonEmployee->SuspendLayout();
			this->panelSubButtonClient->SuspendLayout();
			this->panelNavigation->SuspendLayout();
			this->panelButtonHelp->SuspendLayout();
			this->panelButtonNavigation->SuspendLayout();
			this->panelLogo->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Logo))->BeginInit();
			this->panelHeader->SuspendLayout();
			this->panelControlButton->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridDisplayEmployee))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridDisplayArticle))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridDisplayCommand))->BeginInit();
			this->SuspendLayout();
			// 
			// panelInterface
			// 
			this->panelInterface->Controls->Add(this->panelDisplay);
			this->panelInterface->Controls->Add(this->panelSubNavigation);
			this->panelInterface->Controls->Add(this->panelNavigation);
			this->panelInterface->Controls->Add(this->panelHeader);
			this->panelInterface->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelInterface->Location = System::Drawing::Point(0, 0);
			this->panelInterface->Name = L"panelInterface";
			this->panelInterface->Size = System::Drawing::Size(1920, 1500);
			this->panelInterface->TabIndex = 0;
			// 
			// panelDisplay
			// 
			this->panelDisplay->BackColor = System::Drawing::Color::LightSlateGray;
			this->panelDisplay->Controls->Add(this->tabController);
			this->panelDisplay->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelDisplay->Location = System::Drawing::Point(499, 50);
			this->panelDisplay->Name = L"panelDisplay";
			this->panelDisplay->Size = System::Drawing::Size(1421, 1450);
			this->panelDisplay->TabIndex = 3;
			// 
			// tabController
			// 
			this->tabController->Controls->Add(this->tabLogin);
			this->tabController->Controls->Add(this->tabDisplayClient);
			this->tabController->Controls->Add(this->tabModifyClient);
			this->tabController->Controls->Add(this->tabAddClient);
			this->tabController->Controls->Add(this->tabDeleteClient);
			this->tabController->Controls->Add(this->tabDisplayEmployee);
			this->tabController->Controls->Add(this->tabModifyEmployee);
			this->tabController->Controls->Add(this->tabAddEmployee);
			this->tabController->Controls->Add(this->tabDeleteEmployee);
			this->tabController->Controls->Add(this->tabDisplayCommand);
			this->tabController->Controls->Add(this->tabModifyCommand);
			this->tabController->Controls->Add(this->tabAddCommand);
			this->tabController->Controls->Add(this->tabDeleteCommand);
			this->tabController->Controls->Add(this->tabStatistics);
			this->tabController->Controls->Add(this->tabHelp);
			this->tabController->Controls->Add(this->tabDisplayArticle);
			this->tabController->Controls->Add(this->tabModifyArticle);
			this->tabController->Controls->Add(this->tabAddArticle);
			this->tabController->Controls->Add(this->tabDeleteArticle);
			this->tabController->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabController->Location = System::Drawing::Point(0, 0);
			this->tabController->Multiline = true;
			this->tabController->Name = L"tabController";
			this->tabController->SelectedIndex = 0;
			this->tabController->Size = System::Drawing::Size(1421, 1450);
			this->tabController->TabIndex = 0;
			// 
			// tabLogin
			// 
			this->tabLogin->BackColor = System::Drawing::Color::OldLace;
			this->tabLogin->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->tabLogin->Controls->Add(this->panelLogin);
			this->tabLogin->ForeColor = System::Drawing::Color::Black;
			this->tabLogin->Location = System::Drawing::Point(4, 91);
			this->tabLogin->Name = L"tabLogin";
			this->tabLogin->Padding = System::Windows::Forms::Padding(3);
			this->tabLogin->Size = System::Drawing::Size(1413, 1355);
			this->tabLogin->TabIndex = 0;
			this->tabLogin->Text = L"tabLogin";
			// 
			// panelLogin
			// 
			this->panelLogin->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->panelLogin->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->panelLogin->BackColor = System::Drawing::Color::White;
			this->panelLogin->Controls->Add(this->panelMainLogin);
			this->panelLogin->Controls->Add(this->panelHeaderLogin);
			this->panelLogin->Location = System::Drawing::Point(292, 100);
			this->panelLogin->Name = L"panelLogin";
			this->panelLogin->Size = System::Drawing::Size(808, 542);
			this->panelLogin->TabIndex = 0;
			// 
			// panelMainLogin
			// 
			this->panelMainLogin->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->panelMainLogin->Controls->Add(this->textBoxUsername);
			this->panelMainLogin->Controls->Add(this->panelCon2);
			this->panelMainLogin->Controls->Add(this->textBoxPassword);
			this->panelMainLogin->Controls->Add(this->panelCon1);
			this->panelMainLogin->Controls->Add(this->buttonPressLogin);
			this->panelMainLogin->Location = System::Drawing::Point(45, 132);
			this->panelMainLogin->Name = L"panelMainLogin";
			this->panelMainLogin->Size = System::Drawing::Size(727, 370);
			this->panelMainLogin->TabIndex = 1;
			// 
			// textBoxUsername
			// 
			this->textBoxUsername->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxUsername->Dock = System::Windows::Forms::DockStyle::Top;
			this->textBoxUsername->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxUsername->ForeColor = System::Drawing::Color::DarkGray;
			this->textBoxUsername->Location = System::Drawing::Point(0, 75);
			this->textBoxUsername->Name = L"textBoxUsername";
			this->textBoxUsername->Size = System::Drawing::Size(727, 39);
			this->textBoxUsername->TabIndex = 3;
			this->textBoxUsername->Text = L"Username";
			// 
			// panelCon2
			// 
			this->panelCon2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelCon2->Location = System::Drawing::Point(0, 0);
			this->panelCon2->Name = L"panelCon2";
			this->panelCon2->Size = System::Drawing::Size(727, 75);
			this->panelCon2->TabIndex = 4;
			// 
			// textBoxPassword
			// 
			this->textBoxPassword->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->textBoxPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxPassword->ForeColor = System::Drawing::Color::DarkGray;
			this->textBoxPassword->Location = System::Drawing::Point(0, 181);
			this->textBoxPassword->Name = L"textBoxPassword";
			this->textBoxPassword->Size = System::Drawing::Size(727, 39);
			this->textBoxPassword->TabIndex = 3;
			this->textBoxPassword->Text = L"Password";
			// 
			// panelCon1
			// 
			this->panelCon1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panelCon1->Location = System::Drawing::Point(0, 220);
			this->panelCon1->Name = L"panelCon1";
			this->panelCon1->Size = System::Drawing::Size(727, 75);
			this->panelCon1->TabIndex = 1;
			// 
			// buttonPressLogin
			// 
			this->buttonPressLogin->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(120)),
				static_cast<System::Int32>(static_cast<System::Byte>(120)));
			this->buttonPressLogin->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->buttonPressLogin->Location = System::Drawing::Point(0, 295);
			this->buttonPressLogin->Name = L"buttonPressLogin";
			this->buttonPressLogin->Size = System::Drawing::Size(727, 75);
			this->buttonPressLogin->TabIndex = 0;
			this->buttonPressLogin->Text = L"login";
			this->buttonPressLogin->UseVisualStyleBackColor = false;
			this->buttonPressLogin->Click += gcnew System::EventHandler(this, &Interface::buttonPressLogin_Click);
			// 
			// panelHeaderLogin
			// 
			this->panelHeaderLogin->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->panelHeaderLogin->AutoSize = true;
			this->panelHeaderLogin->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(70)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->panelHeaderLogin->Controls->Add(this->labelTitleLogin);
			this->panelHeaderLogin->Location = System::Drawing::Point(0, 0);
			this->panelHeaderLogin->Name = L"panelHeaderLogin";
			this->panelHeaderLogin->Size = System::Drawing::Size(808, 100);
			this->panelHeaderLogin->TabIndex = 0;
			// 
			// labelTitleLogin
			// 
			this->labelTitleLogin->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->labelTitleLogin->AutoSize = true;
			this->labelTitleLogin->BackColor = System::Drawing::Color::Transparent;
			this->labelTitleLogin->Font = (gcnew System::Drawing::Font(L"Courier New", 14.14286F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelTitleLogin->ForeColor = System::Drawing::Color::Gainsboro;
			this->labelTitleLogin->Location = System::Drawing::Point(308, 33);
			this->labelTitleLogin->Name = L"labelTitleLogin";
			this->labelTitleLogin->Size = System::Drawing::Size(217, 37);
			this->labelTitleLogin->TabIndex = 0;
			this->labelTitleLogin->Text = L"User Login";
			// 
			// tabDisplayClient
			// 
			this->tabDisplayClient->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->tabDisplayClient->Controls->Add(this->dataGridDisplayClient);
			this->tabDisplayClient->Location = System::Drawing::Point(4, 91);
			this->tabDisplayClient->Name = L"tabDisplayClient";
			this->tabDisplayClient->Padding = System::Windows::Forms::Padding(3);
			this->tabDisplayClient->Size = System::Drawing::Size(1413, 1355);
			this->tabDisplayClient->TabIndex = 1;
			this->tabDisplayClient->Text = L"tabDisplayClient";
			// 
			// dataGridDisplayClient
			// 
			this->dataGridDisplayClient->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridDisplayClient->Location = System::Drawing::Point(108, 59);
			this->dataGridDisplayClient->Name = L"dataGridDisplayClient";
			this->dataGridDisplayClient->RowHeadersWidth = 72;
			this->dataGridDisplayClient->RowTemplate->Height = 31;
			this->dataGridDisplayClient->Size = System::Drawing::Size(1209, 559);
			this->dataGridDisplayClient->TabIndex = 0;
			// 
			// tabModifyClient
			// 
			this->tabModifyClient->BackColor = System::Drawing::Color::OldLace;
			this->tabModifyClient->Location = System::Drawing::Point(4, 91);
			this->tabModifyClient->Name = L"tabModifyClient";
			this->tabModifyClient->Padding = System::Windows::Forms::Padding(3);
			this->tabModifyClient->Size = System::Drawing::Size(1413, 1355);
			this->tabModifyClient->TabIndex = 2;
			this->tabModifyClient->Text = L"tabModifyClient";
			this->tabModifyClient->UseVisualStyleBackColor = true;
			// 
			// tabAddClient
			// 
			this->tabAddClient->BackColor = System::Drawing::Color::OldLace;
			this->tabAddClient->Location = System::Drawing::Point(4, 91);
			this->tabAddClient->Name = L"tabAddClient";
			this->tabAddClient->Padding = System::Windows::Forms::Padding(3);
			this->tabAddClient->Size = System::Drawing::Size(1413, 1355);
			this->tabAddClient->TabIndex = 3;
			this->tabAddClient->Text = L"tabAddClient";
			this->tabAddClient->UseVisualStyleBackColor = true;
			// 
			// tabDeleteClient
			// 
			this->tabDeleteClient->Location = System::Drawing::Point(4, 91);
			this->tabDeleteClient->Name = L"tabDeleteClient";
			this->tabDeleteClient->Padding = System::Windows::Forms::Padding(3);
			this->tabDeleteClient->Size = System::Drawing::Size(1413, 1355);
			this->tabDeleteClient->TabIndex = 4;
			this->tabDeleteClient->Text = L"tabDeleteClient";
			this->tabDeleteClient->UseVisualStyleBackColor = true;
			// 
			// tabDisplayEmployee
			// 
			this->tabDisplayEmployee->Controls->Add(this->dataGridDisplayEmployee);
			this->tabDisplayEmployee->Location = System::Drawing::Point(4, 91);
			this->tabDisplayEmployee->Name = L"tabDisplayEmployee";
			this->tabDisplayEmployee->Padding = System::Windows::Forms::Padding(3);
			this->tabDisplayEmployee->Size = System::Drawing::Size(1413, 1355);
			this->tabDisplayEmployee->TabIndex = 5;
			this->tabDisplayEmployee->Text = L"tabDisplayEmployee";
			this->tabDisplayEmployee->UseVisualStyleBackColor = true;
			// 
			// tabModifyEmployee
			// 
			this->tabModifyEmployee->Location = System::Drawing::Point(4, 91);
			this->tabModifyEmployee->Name = L"tabModifyEmployee";
			this->tabModifyEmployee->Padding = System::Windows::Forms::Padding(3);
			this->tabModifyEmployee->Size = System::Drawing::Size(1413, 1355);
			this->tabModifyEmployee->TabIndex = 6;
			this->tabModifyEmployee->Text = L"tabModifyEmployee";
			this->tabModifyEmployee->UseVisualStyleBackColor = true;
			// 
			// tabAddEmployee
			// 
			this->tabAddEmployee->Location = System::Drawing::Point(4, 91);
			this->tabAddEmployee->Name = L"tabAddEmployee";
			this->tabAddEmployee->Padding = System::Windows::Forms::Padding(3);
			this->tabAddEmployee->Size = System::Drawing::Size(1413, 1355);
			this->tabAddEmployee->TabIndex = 7;
			this->tabAddEmployee->Text = L"tabAddEmployee";
			this->tabAddEmployee->UseVisualStyleBackColor = true;
			// 
			// tabDeleteEmployee
			// 
			this->tabDeleteEmployee->Location = System::Drawing::Point(4, 91);
			this->tabDeleteEmployee->Name = L"tabDeleteEmployee";
			this->tabDeleteEmployee->Padding = System::Windows::Forms::Padding(3);
			this->tabDeleteEmployee->Size = System::Drawing::Size(1413, 1355);
			this->tabDeleteEmployee->TabIndex = 8;
			this->tabDeleteEmployee->Text = L"tabDeleteEmployee";
			this->tabDeleteEmployee->UseVisualStyleBackColor = true;
			// 
			// tabDisplayCommand
			// 
			this->tabDisplayCommand->Controls->Add(this->dataGridDisplayCommand);
			this->tabDisplayCommand->Location = System::Drawing::Point(4, 91);
			this->tabDisplayCommand->Name = L"tabDisplayCommand";
			this->tabDisplayCommand->Padding = System::Windows::Forms::Padding(3);
			this->tabDisplayCommand->Size = System::Drawing::Size(1413, 1355);
			this->tabDisplayCommand->TabIndex = 9;
			this->tabDisplayCommand->Text = L"tabDisplayCommand";
			this->tabDisplayCommand->UseVisualStyleBackColor = true;
			// 
			// tabModifyCommand
			// 
			this->tabModifyCommand->Location = System::Drawing::Point(4, 91);
			this->tabModifyCommand->Name = L"tabModifyCommand";
			this->tabModifyCommand->Padding = System::Windows::Forms::Padding(3);
			this->tabModifyCommand->Size = System::Drawing::Size(1413, 1355);
			this->tabModifyCommand->TabIndex = 10;
			this->tabModifyCommand->Text = L"tabModifyCommand";
			this->tabModifyCommand->UseVisualStyleBackColor = true;
			// 
			// tabAddCommand
			// 
			this->tabAddCommand->Location = System::Drawing::Point(4, 91);
			this->tabAddCommand->Name = L"tabAddCommand";
			this->tabAddCommand->Padding = System::Windows::Forms::Padding(3);
			this->tabAddCommand->Size = System::Drawing::Size(1413, 1355);
			this->tabAddCommand->TabIndex = 11;
			this->tabAddCommand->Text = L"tabAddCommand";
			this->tabAddCommand->UseVisualStyleBackColor = true;
			// 
			// tabDeleteCommand
			// 
			this->tabDeleteCommand->Location = System::Drawing::Point(4, 91);
			this->tabDeleteCommand->Name = L"tabDeleteCommand";
			this->tabDeleteCommand->Padding = System::Windows::Forms::Padding(3);
			this->tabDeleteCommand->Size = System::Drawing::Size(1413, 1355);
			this->tabDeleteCommand->TabIndex = 12;
			this->tabDeleteCommand->Text = L"tabDeleteCommand";
			this->tabDeleteCommand->UseVisualStyleBackColor = true;
			// 
			// tabStatistics
			// 
			this->tabStatistics->Location = System::Drawing::Point(4, 91);
			this->tabStatistics->Name = L"tabStatistics";
			this->tabStatistics->Padding = System::Windows::Forms::Padding(3);
			this->tabStatistics->Size = System::Drawing::Size(1413, 1355);
			this->tabStatistics->TabIndex = 13;
			this->tabStatistics->Text = L"tabStatistics";
			this->tabStatistics->UseVisualStyleBackColor = true;
			// 
			// tabHelp
			// 
			this->tabHelp->Location = System::Drawing::Point(4, 91);
			this->tabHelp->Name = L"tabHelp";
			this->tabHelp->Padding = System::Windows::Forms::Padding(3);
			this->tabHelp->Size = System::Drawing::Size(1413, 1355);
			this->tabHelp->TabIndex = 14;
			this->tabHelp->Text = L"tabHelp";
			this->tabHelp->UseVisualStyleBackColor = true;
			// 
			// tabDisplayArticle
			// 
			this->tabDisplayArticle->Controls->Add(this->dataGridDisplayArticle);
			this->tabDisplayArticle->Location = System::Drawing::Point(4, 91);
			this->tabDisplayArticle->Name = L"tabDisplayArticle";
			this->tabDisplayArticle->Padding = System::Windows::Forms::Padding(3);
			this->tabDisplayArticle->Size = System::Drawing::Size(1413, 1355);
			this->tabDisplayArticle->TabIndex = 15;
			this->tabDisplayArticle->Text = L"tabDisplayArticle";
			this->tabDisplayArticle->UseVisualStyleBackColor = true;
			// 
			// tabModifyArticle
			// 
			this->tabModifyArticle->Location = System::Drawing::Point(4, 91);
			this->tabModifyArticle->Name = L"tabModifyArticle";
			this->tabModifyArticle->Padding = System::Windows::Forms::Padding(3);
			this->tabModifyArticle->Size = System::Drawing::Size(1413, 1355);
			this->tabModifyArticle->TabIndex = 16;
			this->tabModifyArticle->Text = L"tabModifyArticle";
			this->tabModifyArticle->UseVisualStyleBackColor = true;
			// 
			// tabAddArticle
			// 
			this->tabAddArticle->Location = System::Drawing::Point(4, 91);
			this->tabAddArticle->Name = L"tabAddArticle";
			this->tabAddArticle->Padding = System::Windows::Forms::Padding(3);
			this->tabAddArticle->Size = System::Drawing::Size(1413, 1355);
			this->tabAddArticle->TabIndex = 17;
			this->tabAddArticle->Text = L"tabAddArticle";
			this->tabAddArticle->UseVisualStyleBackColor = true;
			// 
			// tabDeleteArticle
			// 
			this->tabDeleteArticle->Location = System::Drawing::Point(4, 91);
			this->tabDeleteArticle->Name = L"tabDeleteArticle";
			this->tabDeleteArticle->Padding = System::Windows::Forms::Padding(3);
			this->tabDeleteArticle->Size = System::Drawing::Size(1413, 1355);
			this->tabDeleteArticle->TabIndex = 18;
			this->tabDeleteArticle->Text = L"tabDeleteArticle";
			this->tabDeleteArticle->UseVisualStyleBackColor = true;
			// 
			// panelSubNavigation
			// 
			this->panelSubNavigation->BackColor = System::Drawing::Color::DimGray;
			this->panelSubNavigation->Controls->Add(this->panelSubButtonCommand);
			this->panelSubNavigation->Controls->Add(this->panelSubButtonArticle);
			this->panelSubNavigation->Controls->Add(this->panelSubButtonEmployee);
			this->panelSubNavigation->Controls->Add(this->panelSubButtonClient);
			this->panelSubNavigation->Dock = System::Windows::Forms::DockStyle::Left;
			this->panelSubNavigation->Location = System::Drawing::Point(300, 50);
			this->panelSubNavigation->Name = L"panelSubNavigation";
			this->panelSubNavigation->Size = System::Drawing::Size(199, 1450);
			this->panelSubNavigation->TabIndex = 2;
			this->panelSubNavigation->Visible = false;
			// 
			// panelSubButtonCommand
			// 
			this->panelSubButtonCommand->Controls->Add(this->buttonDeleteCommand);
			this->panelSubButtonCommand->Controls->Add(this->buttonAddCommand);
			this->panelSubButtonCommand->Controls->Add(this->buttonModifyCommand);
			this->panelSubButtonCommand->Controls->Add(this->buttonDisplayCommand);
			this->panelSubButtonCommand->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelSubButtonCommand->Location = System::Drawing::Point(0, 900);
			this->panelSubButtonCommand->Name = L"panelSubButtonCommand";
			this->panelSubButtonCommand->Size = System::Drawing::Size(199, 300);
			this->panelSubButtonCommand->TabIndex = 2;
			this->panelSubButtonCommand->Visible = false;
			// 
			// buttonDeleteCommand
			// 
			this->buttonDeleteCommand->Dock = System::Windows::Forms::DockStyle::Top;
			this->buttonDeleteCommand->FlatAppearance->BorderSize = 0;
			this->buttonDeleteCommand->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonDeleteCommand->Location = System::Drawing::Point(0, 225);
			this->buttonDeleteCommand->Margin = System::Windows::Forms::Padding(3, 3, 3, 26);
			this->buttonDeleteCommand->Name = L"buttonDeleteCommand";
			this->buttonDeleteCommand->Size = System::Drawing::Size(199, 75);
			this->buttonDeleteCommand->TabIndex = 3;
			this->buttonDeleteCommand->Text = L"Delete";
			this->buttonDeleteCommand->UseVisualStyleBackColor = true;
			this->buttonDeleteCommand->Click += gcnew System::EventHandler(this, &Interface::buttonDeleteCommand_Click);
			// 
			// buttonAddCommand
			// 
			this->buttonAddCommand->Dock = System::Windows::Forms::DockStyle::Top;
			this->buttonAddCommand->FlatAppearance->BorderSize = 0;
			this->buttonAddCommand->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonAddCommand->Location = System::Drawing::Point(0, 150);
			this->buttonAddCommand->Margin = System::Windows::Forms::Padding(3, 3, 3, 26);
			this->buttonAddCommand->Name = L"buttonAddCommand";
			this->buttonAddCommand->Size = System::Drawing::Size(199, 75);
			this->buttonAddCommand->TabIndex = 2;
			this->buttonAddCommand->Text = L"Add";
			this->buttonAddCommand->UseVisualStyleBackColor = true;
			this->buttonAddCommand->Click += gcnew System::EventHandler(this, &Interface::buttonAddCommand_Click);
			// 
			// buttonModifyCommand
			// 
			this->buttonModifyCommand->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonModifyCommand->Dock = System::Windows::Forms::DockStyle::Top;
			this->buttonModifyCommand->FlatAppearance->BorderSize = 0;
			this->buttonModifyCommand->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonModifyCommand->Location = System::Drawing::Point(0, 75);
			this->buttonModifyCommand->Margin = System::Windows::Forms::Padding(3, 3, 3, 26);
			this->buttonModifyCommand->Name = L"buttonModifyCommand";
			this->buttonModifyCommand->Size = System::Drawing::Size(199, 75);
			this->buttonModifyCommand->TabIndex = 1;
			this->buttonModifyCommand->Text = L"Modify";
			this->buttonModifyCommand->UseVisualStyleBackColor = true;
			this->buttonModifyCommand->Click += gcnew System::EventHandler(this, &Interface::buttonModifyCommand_Click);
			// 
			// buttonDisplayCommand
			// 
			this->buttonDisplayCommand->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonDisplayCommand->Dock = System::Windows::Forms::DockStyle::Top;
			this->buttonDisplayCommand->FlatAppearance->BorderSize = 0;
			this->buttonDisplayCommand->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonDisplayCommand->Location = System::Drawing::Point(0, 0);
			this->buttonDisplayCommand->Margin = System::Windows::Forms::Padding(3, 3, 3, 26);
			this->buttonDisplayCommand->Name = L"buttonDisplayCommand";
			this->buttonDisplayCommand->Size = System::Drawing::Size(199, 75);
			this->buttonDisplayCommand->TabIndex = 0;
			this->buttonDisplayCommand->Text = L"Display";
			this->buttonDisplayCommand->UseVisualStyleBackColor = true;
			this->buttonDisplayCommand->Click += gcnew System::EventHandler(this, &Interface::buttonDisplayCommand_Click);
			// 
			// panelSubButtonArticle
			// 
			this->panelSubButtonArticle->Controls->Add(this->buttonDeleteArticle);
			this->panelSubButtonArticle->Controls->Add(this->buttonAddArticle);
			this->panelSubButtonArticle->Controls->Add(this->buttonModifyArticle);
			this->panelSubButtonArticle->Controls->Add(this->buttonDisplayArticle);
			this->panelSubButtonArticle->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelSubButtonArticle->Location = System::Drawing::Point(0, 600);
			this->panelSubButtonArticle->Name = L"panelSubButtonArticle";
			this->panelSubButtonArticle->Size = System::Drawing::Size(199, 300);
			this->panelSubButtonArticle->TabIndex = 2;
			this->panelSubButtonArticle->Visible = false;
			// 
			// buttonDeleteArticle
			// 
			this->buttonDeleteArticle->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonDeleteArticle->Dock = System::Windows::Forms::DockStyle::Top;
			this->buttonDeleteArticle->FlatAppearance->BorderSize = 0;
			this->buttonDeleteArticle->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonDeleteArticle->Location = System::Drawing::Point(0, 225);
			this->buttonDeleteArticle->Margin = System::Windows::Forms::Padding(3, 3, 3, 26);
			this->buttonDeleteArticle->Name = L"buttonDeleteArticle";
			this->buttonDeleteArticle->Size = System::Drawing::Size(199, 75);
			this->buttonDeleteArticle->TabIndex = 3;
			this->buttonDeleteArticle->Text = L"Delete";
			this->buttonDeleteArticle->UseVisualStyleBackColor = true;
			this->buttonDeleteArticle->Click += gcnew System::EventHandler(this, &Interface::buttonDeleteArticle_Click);
			// 
			// buttonAddArticle
			// 
			this->buttonAddArticle->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonAddArticle->Dock = System::Windows::Forms::DockStyle::Top;
			this->buttonAddArticle->FlatAppearance->BorderSize = 0;
			this->buttonAddArticle->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonAddArticle->Location = System::Drawing::Point(0, 150);
			this->buttonAddArticle->Margin = System::Windows::Forms::Padding(3, 3, 3, 26);
			this->buttonAddArticle->Name = L"buttonAddArticle";
			this->buttonAddArticle->Size = System::Drawing::Size(199, 75);
			this->buttonAddArticle->TabIndex = 2;
			this->buttonAddArticle->Text = L"Add";
			this->buttonAddArticle->UseVisualStyleBackColor = true;
			this->buttonAddArticle->Click += gcnew System::EventHandler(this, &Interface::buttonAddArticle_Click);
			// 
			// buttonModifyArticle
			// 
			this->buttonModifyArticle->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonModifyArticle->Dock = System::Windows::Forms::DockStyle::Top;
			this->buttonModifyArticle->FlatAppearance->BorderSize = 0;
			this->buttonModifyArticle->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonModifyArticle->Location = System::Drawing::Point(0, 75);
			this->buttonModifyArticle->Margin = System::Windows::Forms::Padding(3, 3, 3, 26);
			this->buttonModifyArticle->Name = L"buttonModifyArticle";
			this->buttonModifyArticle->Size = System::Drawing::Size(199, 75);
			this->buttonModifyArticle->TabIndex = 1;
			this->buttonModifyArticle->Text = L"Modify";
			this->buttonModifyArticle->UseVisualStyleBackColor = true;
			this->buttonModifyArticle->Click += gcnew System::EventHandler(this, &Interface::buttonModifyArticle_Click);
			// 
			// buttonDisplayArticle
			// 
			this->buttonDisplayArticle->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonDisplayArticle->Dock = System::Windows::Forms::DockStyle::Top;
			this->buttonDisplayArticle->FlatAppearance->BorderSize = 0;
			this->buttonDisplayArticle->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonDisplayArticle->Location = System::Drawing::Point(0, 0);
			this->buttonDisplayArticle->Margin = System::Windows::Forms::Padding(3, 3, 3, 26);
			this->buttonDisplayArticle->Name = L"buttonDisplayArticle";
			this->buttonDisplayArticle->Size = System::Drawing::Size(199, 75);
			this->buttonDisplayArticle->TabIndex = 0;
			this->buttonDisplayArticle->Text = L"Display";
			this->buttonDisplayArticle->UseVisualStyleBackColor = true;
			this->buttonDisplayArticle->Click += gcnew System::EventHandler(this, &Interface::buttonDisplayArticle_Click);
			// 
			// panelSubButtonEmployee
			// 
			this->panelSubButtonEmployee->Controls->Add(this->buttonDeleteEmployee);
			this->panelSubButtonEmployee->Controls->Add(this->buttonAddEmployee);
			this->panelSubButtonEmployee->Controls->Add(this->buttonModifyEmployee);
			this->panelSubButtonEmployee->Controls->Add(this->buttonDisplayEmployee);
			this->panelSubButtonEmployee->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelSubButtonEmployee->Location = System::Drawing::Point(0, 300);
			this->panelSubButtonEmployee->Name = L"panelSubButtonEmployee";
			this->panelSubButtonEmployee->Size = System::Drawing::Size(199, 300);
			this->panelSubButtonEmployee->TabIndex = 1;
			this->panelSubButtonEmployee->Visible = false;
			// 
			// buttonDeleteEmployee
			// 
			this->buttonDeleteEmployee->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonDeleteEmployee->Dock = System::Windows::Forms::DockStyle::Top;
			this->buttonDeleteEmployee->FlatAppearance->BorderSize = 0;
			this->buttonDeleteEmployee->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonDeleteEmployee->Location = System::Drawing::Point(0, 225);
			this->buttonDeleteEmployee->Margin = System::Windows::Forms::Padding(3, 3, 3, 26);
			this->buttonDeleteEmployee->Name = L"buttonDeleteEmployee";
			this->buttonDeleteEmployee->Size = System::Drawing::Size(199, 75);
			this->buttonDeleteEmployee->TabIndex = 3;
			this->buttonDeleteEmployee->Text = L"Delete";
			this->buttonDeleteEmployee->UseVisualStyleBackColor = true;
			this->buttonDeleteEmployee->Click += gcnew System::EventHandler(this, &Interface::buttonDeleteEmployee_Click);
			// 
			// buttonAddEmployee
			// 
			this->buttonAddEmployee->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonAddEmployee->Dock = System::Windows::Forms::DockStyle::Top;
			this->buttonAddEmployee->FlatAppearance->BorderSize = 0;
			this->buttonAddEmployee->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonAddEmployee->Location = System::Drawing::Point(0, 150);
			this->buttonAddEmployee->Margin = System::Windows::Forms::Padding(3, 3, 3, 26);
			this->buttonAddEmployee->Name = L"buttonAddEmployee";
			this->buttonAddEmployee->Size = System::Drawing::Size(199, 75);
			this->buttonAddEmployee->TabIndex = 2;
			this->buttonAddEmployee->Text = L"Add";
			this->buttonAddEmployee->UseVisualStyleBackColor = true;
			this->buttonAddEmployee->Click += gcnew System::EventHandler(this, &Interface::buttonAddEmployee_Click);
			// 
			// buttonModifyEmployee
			// 
			this->buttonModifyEmployee->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonModifyEmployee->Dock = System::Windows::Forms::DockStyle::Top;
			this->buttonModifyEmployee->FlatAppearance->BorderSize = 0;
			this->buttonModifyEmployee->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonModifyEmployee->Location = System::Drawing::Point(0, 75);
			this->buttonModifyEmployee->Margin = System::Windows::Forms::Padding(3, 3, 3, 26);
			this->buttonModifyEmployee->Name = L"buttonModifyEmployee";
			this->buttonModifyEmployee->Size = System::Drawing::Size(199, 75);
			this->buttonModifyEmployee->TabIndex = 1;
			this->buttonModifyEmployee->Text = L"Modify";
			this->buttonModifyEmployee->UseVisualStyleBackColor = true;
			this->buttonModifyEmployee->Click += gcnew System::EventHandler(this, &Interface::buttonModifyEmployee_Click);
			// 
			// buttonDisplayEmployee
			// 
			this->buttonDisplayEmployee->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonDisplayEmployee->Dock = System::Windows::Forms::DockStyle::Top;
			this->buttonDisplayEmployee->FlatAppearance->BorderSize = 0;
			this->buttonDisplayEmployee->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonDisplayEmployee->Location = System::Drawing::Point(0, 0);
			this->buttonDisplayEmployee->Margin = System::Windows::Forms::Padding(3, 3, 3, 26);
			this->buttonDisplayEmployee->Name = L"buttonDisplayEmployee";
			this->buttonDisplayEmployee->Size = System::Drawing::Size(199, 75);
			this->buttonDisplayEmployee->TabIndex = 0;
			this->buttonDisplayEmployee->Text = L"Display";
			this->buttonDisplayEmployee->UseVisualStyleBackColor = true;
			this->buttonDisplayEmployee->Click += gcnew System::EventHandler(this, &Interface::buttonDisplayEmployee_Click);
			// 
			// panelSubButtonClient
			// 
			this->panelSubButtonClient->Controls->Add(this->buttonDeleteClient);
			this->panelSubButtonClient->Controls->Add(this->buttonAddClient);
			this->panelSubButtonClient->Controls->Add(this->buttonModifyClient);
			this->panelSubButtonClient->Controls->Add(this->buttonDisplayClient);
			this->panelSubButtonClient->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelSubButtonClient->Location = System::Drawing::Point(0, 0);
			this->panelSubButtonClient->Name = L"panelSubButtonClient";
			this->panelSubButtonClient->Size = System::Drawing::Size(199, 300);
			this->panelSubButtonClient->TabIndex = 0;
			this->panelSubButtonClient->Visible = false;
			// 
			// buttonDeleteClient
			// 
			this->buttonDeleteClient->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonDeleteClient->Dock = System::Windows::Forms::DockStyle::Top;
			this->buttonDeleteClient->FlatAppearance->BorderSize = 0;
			this->buttonDeleteClient->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonDeleteClient->Location = System::Drawing::Point(0, 225);
			this->buttonDeleteClient->Name = L"buttonDeleteClient";
			this->buttonDeleteClient->Size = System::Drawing::Size(199, 75);
			this->buttonDeleteClient->TabIndex = 3;
			this->buttonDeleteClient->Text = L"Delete";
			this->buttonDeleteClient->UseVisualStyleBackColor = true;
			this->buttonDeleteClient->Click += gcnew System::EventHandler(this, &Interface::buttonDeleteClient_Click);
			// 
			// buttonAddClient
			// 
			this->buttonAddClient->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonAddClient->Dock = System::Windows::Forms::DockStyle::Top;
			this->buttonAddClient->FlatAppearance->BorderSize = 0;
			this->buttonAddClient->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonAddClient->Location = System::Drawing::Point(0, 150);
			this->buttonAddClient->Name = L"buttonAddClient";
			this->buttonAddClient->Size = System::Drawing::Size(199, 75);
			this->buttonAddClient->TabIndex = 2;
			this->buttonAddClient->Text = L"Add";
			this->buttonAddClient->UseVisualStyleBackColor = true;
			this->buttonAddClient->Click += gcnew System::EventHandler(this, &Interface::buttonAddClient_Click);
			// 
			// buttonModifyClient
			// 
			this->buttonModifyClient->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonModifyClient->Dock = System::Windows::Forms::DockStyle::Top;
			this->buttonModifyClient->FlatAppearance->BorderSize = 0;
			this->buttonModifyClient->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonModifyClient->Location = System::Drawing::Point(0, 75);
			this->buttonModifyClient->Name = L"buttonModifyClient";
			this->buttonModifyClient->Size = System::Drawing::Size(199, 75);
			this->buttonModifyClient->TabIndex = 1;
			this->buttonModifyClient->Text = L"Modify";
			this->buttonModifyClient->UseVisualStyleBackColor = true;
			this->buttonModifyClient->Click += gcnew System::EventHandler(this, &Interface::buttonModifyClient_Click);
			// 
			// buttonDisplayClient
			// 
			this->buttonDisplayClient->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonDisplayClient->Dock = System::Windows::Forms::DockStyle::Top;
			this->buttonDisplayClient->FlatAppearance->BorderSize = 0;
			this->buttonDisplayClient->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonDisplayClient->Location = System::Drawing::Point(0, 0);
			this->buttonDisplayClient->Name = L"buttonDisplayClient";
			this->buttonDisplayClient->Size = System::Drawing::Size(199, 75);
			this->buttonDisplayClient->TabIndex = 0;
			this->buttonDisplayClient->Text = L"Display";
			this->buttonDisplayClient->UseVisualStyleBackColor = true;
			this->buttonDisplayClient->Click += gcnew System::EventHandler(this, &Interface::buttonDisplayClient_Click);
			// 
			// panelNavigation
			// 
			this->panelNavigation->BackColor = System::Drawing::Color::DarkGray;
			this->panelNavigation->Controls->Add(this->panelComplement);
			this->panelNavigation->Controls->Add(this->panelButtonHelp);
			this->panelNavigation->Controls->Add(this->panelButtonNavigation);
			this->panelNavigation->Controls->Add(this->panelLogo);
			this->panelNavigation->Dock = System::Windows::Forms::DockStyle::Left;
			this->panelNavigation->Location = System::Drawing::Point(0, 50);
			this->panelNavigation->Name = L"panelNavigation";
			this->panelNavigation->Size = System::Drawing::Size(300, 1450);
			this->panelNavigation->TabIndex = 1;
			// 
			// panelComplement
			// 
			this->panelComplement->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelComplement->Location = System::Drawing::Point(0, 502);
			this->panelComplement->Name = L"panelComplement";
			this->panelComplement->Size = System::Drawing::Size(300, 878);
			this->panelComplement->TabIndex = 4;
			// 
			// panelButtonHelp
			// 
			this->panelButtonHelp->Controls->Add(this->buttonHelp);
			this->panelButtonHelp->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panelButtonHelp->Location = System::Drawing::Point(0, 1380);
			this->panelButtonHelp->Name = L"panelButtonHelp";
			this->panelButtonHelp->Size = System::Drawing::Size(300, 70);
			this->panelButtonHelp->TabIndex = 3;
			// 
			// buttonHelp
			// 
			this->buttonHelp->BackColor = System::Drawing::Color::Transparent;
			this->buttonHelp->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->buttonHelp->FlatAppearance->BorderSize = 0;
			this->buttonHelp->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonHelp->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.142858F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonHelp->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(47)), static_cast<System::Int32>(static_cast<System::Byte>(62)),
				static_cast<System::Int32>(static_cast<System::Byte>(67)));
			this->buttonHelp->Location = System::Drawing::Point(0, 0);
			this->buttonHelp->Name = L"buttonHelp";
			this->buttonHelp->Size = System::Drawing::Size(300, 70);
			this->buttonHelp->TabIndex = 1;
			this->buttonHelp->Text = L"Help";
			this->buttonHelp->UseVisualStyleBackColor = false;
			this->buttonHelp->Click += gcnew System::EventHandler(this, &Interface::buttonHelp_Click);
			// 
			// panelButtonNavigation
			// 
			this->panelButtonNavigation->Controls->Add(this->buttonStatistics);
			this->panelButtonNavigation->Controls->Add(this->buttonCommand);
			this->panelButtonNavigation->Controls->Add(this->buttonArticle);
			this->panelButtonNavigation->Controls->Add(this->buttonEmployee);
			this->panelButtonNavigation->Controls->Add(this->buttonClient);
			this->panelButtonNavigation->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelButtonNavigation->Location = System::Drawing::Point(0, 150);
			this->panelButtonNavigation->Name = L"panelButtonNavigation";
			this->panelButtonNavigation->Size = System::Drawing::Size(300, 352);
			this->panelButtonNavigation->TabIndex = 2;
			// 
			// buttonStatistics
			// 
			this->buttonStatistics->BackColor = System::Drawing::Color::Transparent;
			this->buttonStatistics->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonStatistics->Dock = System::Windows::Forms::DockStyle::Top;
			this->buttonStatistics->FlatAppearance->BorderSize = 0;
			this->buttonStatistics->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonStatistics->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.142858F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonStatistics->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(47)), static_cast<System::Int32>(static_cast<System::Byte>(62)),
				static_cast<System::Int32>(static_cast<System::Byte>(67)));
			this->buttonStatistics->Location = System::Drawing::Point(0, 280);
			this->buttonStatistics->Name = L"buttonStatistics";
			this->buttonStatistics->Size = System::Drawing::Size(300, 70);
			this->buttonStatistics->TabIndex = 4;
			this->buttonStatistics->Text = L"Statistics";
			this->buttonStatistics->UseVisualStyleBackColor = false;
			this->buttonStatistics->Click += gcnew System::EventHandler(this, &Interface::buttonStatistics_Click);
			// 
			// buttonCommand
			// 
			this->buttonCommand->BackColor = System::Drawing::Color::Transparent;
			this->buttonCommand->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonCommand->Dock = System::Windows::Forms::DockStyle::Top;
			this->buttonCommand->FlatAppearance->BorderSize = 0;
			this->buttonCommand->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonCommand->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.142858F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonCommand->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(47)), static_cast<System::Int32>(static_cast<System::Byte>(62)),
				static_cast<System::Int32>(static_cast<System::Byte>(67)));
			this->buttonCommand->Location = System::Drawing::Point(0, 210);
			this->buttonCommand->Name = L"buttonCommand";
			this->buttonCommand->Size = System::Drawing::Size(300, 70);
			this->buttonCommand->TabIndex = 3;
			this->buttonCommand->Text = L"Command";
			this->buttonCommand->UseVisualStyleBackColor = false;
			this->buttonCommand->Click += gcnew System::EventHandler(this, &Interface::buttonCommand_Click);
			// 
			// buttonArticle
			// 
			this->buttonArticle->BackColor = System::Drawing::Color::Transparent;
			this->buttonArticle->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonArticle->Dock = System::Windows::Forms::DockStyle::Top;
			this->buttonArticle->FlatAppearance->BorderSize = 0;
			this->buttonArticle->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonArticle->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.142858F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonArticle->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(47)), static_cast<System::Int32>(static_cast<System::Byte>(62)),
				static_cast<System::Int32>(static_cast<System::Byte>(67)));
			this->buttonArticle->Location = System::Drawing::Point(0, 140);
			this->buttonArticle->Name = L"buttonArticle";
			this->buttonArticle->Size = System::Drawing::Size(300, 70);
			this->buttonArticle->TabIndex = 2;
			this->buttonArticle->Text = L"Article";
			this->buttonArticle->UseVisualStyleBackColor = false;
			this->buttonArticle->Click += gcnew System::EventHandler(this, &Interface::buttonArticle_Click);
			// 
			// buttonEmployee
			// 
			this->buttonEmployee->BackColor = System::Drawing::Color::Transparent;
			this->buttonEmployee->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonEmployee->Dock = System::Windows::Forms::DockStyle::Top;
			this->buttonEmployee->FlatAppearance->BorderSize = 0;
			this->buttonEmployee->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->buttonEmployee->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonEmployee->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.142858F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonEmployee->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(47)), static_cast<System::Int32>(static_cast<System::Byte>(62)),
				static_cast<System::Int32>(static_cast<System::Byte>(67)));
			this->buttonEmployee->Location = System::Drawing::Point(0, 70);
			this->buttonEmployee->Name = L"buttonEmployee";
			this->buttonEmployee->Size = System::Drawing::Size(300, 70);
			this->buttonEmployee->TabIndex = 1;
			this->buttonEmployee->Text = L"Employee";
			this->buttonEmployee->UseVisualStyleBackColor = false;
			this->buttonEmployee->Click += gcnew System::EventHandler(this, &Interface::buttonEmployee_Click);
			// 
			// buttonClient
			// 
			this->buttonClient->BackColor = System::Drawing::Color::Transparent;
			this->buttonClient->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonClient->Dock = System::Windows::Forms::DockStyle::Top;
			this->buttonClient->FlatAppearance->BorderSize = 0;
			this->buttonClient->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonClient->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.142858F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonClient->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(47)), static_cast<System::Int32>(static_cast<System::Byte>(62)),
				static_cast<System::Int32>(static_cast<System::Byte>(67)));
			this->buttonClient->Location = System::Drawing::Point(0, 0);
			this->buttonClient->Name = L"buttonClient";
			this->buttonClient->Size = System::Drawing::Size(300, 70);
			this->buttonClient->TabIndex = 0;
			this->buttonClient->Text = L"Client";
			this->buttonClient->UseVisualStyleBackColor = false;
			this->buttonClient->Click += gcnew System::EventHandler(this, &Interface::buttonClient_Click);
			// 
			// panelLogo
			// 
			this->panelLogo->BackColor = System::Drawing::Color::DarkGray;
			this->panelLogo->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panelLogo->Controls->Add(this->Logo);
			this->panelLogo->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelLogo->Location = System::Drawing::Point(0, 0);
			this->panelLogo->Name = L"panelLogo";
			this->panelLogo->Size = System::Drawing::Size(300, 150);
			this->panelLogo->TabIndex = 1;
			// 
			// Logo
			// 
			this->Logo->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->Logo->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Logo->Location = System::Drawing::Point(0, 0);
			this->Logo->Name = L"Logo";
			this->Logo->Size = System::Drawing::Size(300, 150);
			this->Logo->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Logo->TabIndex = 0;
			this->Logo->TabStop = false;
			this->Logo->Click += gcnew System::EventHandler(this, &Interface::Logo_Click);
			// 
			// panelHeader
			// 
			this->panelHeader->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(15)),
				static_cast<System::Int32>(static_cast<System::Byte>(15)));
			this->panelHeader->Controls->Add(this->labelSubTitle);
			this->panelHeader->Controls->Add(this->labelTitle);
			this->panelHeader->Controls->Add(this->panelControlButton);
			this->panelHeader->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panelHeader->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelHeader->Location = System::Drawing::Point(0, 0);
			this->panelHeader->Name = L"panelHeader";
			this->panelHeader->Size = System::Drawing::Size(1920, 50);
			this->panelHeader->TabIndex = 0;
			// 
			// labelSubTitle
			// 
			this->labelSubTitle->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.85714F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelSubTitle->ForeColor = System::Drawing::Color::Gainsboro;
			this->labelSubTitle->Location = System::Drawing::Point(500, 0);
			this->labelSubTitle->Name = L"labelSubTitle";
			this->labelSubTitle->Size = System::Drawing::Size(351, 50);
			this->labelSubTitle->TabIndex = 2;
			// 
			// labelTitle
			// 
			this->labelTitle->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.85714F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelTitle->ForeColor = System::Drawing::Color::Gainsboro;
			this->labelTitle->Location = System::Drawing::Point(199, 0);
			this->labelTitle->Name = L"labelTitle";
			this->labelTitle->Size = System::Drawing::Size(300, 50);
			this->labelTitle->TabIndex = 1;
			this->labelTitle->Text = L"Login";
			this->labelTitle->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// panelControlButton
			// 
			this->panelControlButton->Controls->Add(this->buttonMinimize);
			this->panelControlButton->Controls->Add(this->buttonMaximize);
			this->panelControlButton->Controls->Add(this->buttonClose);
			this->panelControlButton->Dock = System::Windows::Forms::DockStyle::Right;
			this->panelControlButton->Location = System::Drawing::Point(1721, 0);
			this->panelControlButton->Name = L"panelControlButton";
			this->panelControlButton->Size = System::Drawing::Size(199, 50);
			this->panelControlButton->TabIndex = 0;
			// 
			// buttonMinimize
			// 
			this->buttonMinimize->Dock = System::Windows::Forms::DockStyle::Right;
			this->buttonMinimize->FlatAppearance->BorderSize = 0;
			this->buttonMinimize->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonMinimize->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.14286F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->buttonMinimize->ForeColor = System::Drawing::Color::Gainsboro;
			this->buttonMinimize->Location = System::Drawing::Point(49, 0);
			this->buttonMinimize->Name = L"buttonMinimize";
			this->buttonMinimize->Size = System::Drawing::Size(50, 50);
			this->buttonMinimize->TabIndex = 2;
			this->buttonMinimize->Text = L"-";
			this->buttonMinimize->UseVisualStyleBackColor = true;
			this->buttonMinimize->Click += gcnew System::EventHandler(this, &Interface::buttonMinimize_Click);
			// 
			// buttonMaximize
			// 
			this->buttonMaximize->Dock = System::Windows::Forms::DockStyle::Right;
			this->buttonMaximize->FlatAppearance->BorderSize = 0;
			this->buttonMaximize->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonMaximize->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.14286F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->buttonMaximize->ForeColor = System::Drawing::Color::Gainsboro;
			this->buttonMaximize->Location = System::Drawing::Point(99, 0);
			this->buttonMaximize->Name = L"buttonMaximize";
			this->buttonMaximize->Size = System::Drawing::Size(50, 50);
			this->buttonMaximize->TabIndex = 1;
			this->buttonMaximize->Text = L"O";
			this->buttonMaximize->UseVisualStyleBackColor = true;
			this->buttonMaximize->Click += gcnew System::EventHandler(this, &Interface::buttonMaximize_Click);
			// 
			// buttonClose
			// 
			this->buttonClose->Dock = System::Windows::Forms::DockStyle::Right;
			this->buttonClose->FlatAppearance->BorderSize = 0;
			this->buttonClose->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonClose->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.14286F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonClose->ForeColor = System::Drawing::Color::Gainsboro;
			this->buttonClose->Location = System::Drawing::Point(149, 0);
			this->buttonClose->Name = L"buttonClose";
			this->buttonClose->Size = System::Drawing::Size(50, 50);
			this->buttonClose->TabIndex = 0;
			this->buttonClose->Text = L"X";
			this->buttonClose->UseVisualStyleBackColor = true;
			this->buttonClose->Click += gcnew System::EventHandler(this, &Interface::buttonClose_Click);
			// 
			// dataGridDisplayEmployee
			// 
			this->dataGridDisplayEmployee->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridDisplayEmployee->Location = System::Drawing::Point(108, 78);
			this->dataGridDisplayEmployee->Name = L"dataGridDisplayEmployee";
			this->dataGridDisplayEmployee->RowHeadersWidth = 72;
			this->dataGridDisplayEmployee->RowTemplate->Height = 31;
			this->dataGridDisplayEmployee->Size = System::Drawing::Size(1209, 786);
			this->dataGridDisplayEmployee->TabIndex = 0;
			// 
			// dataGridDisplayArticle
			// 
			this->dataGridDisplayArticle->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridDisplayArticle->Location = System::Drawing::Point(159, 103);
			this->dataGridDisplayArticle->Name = L"dataGridDisplayArticle";
			this->dataGridDisplayArticle->RowHeadersWidth = 72;
			this->dataGridDisplayArticle->RowTemplate->Height = 31;
			this->dataGridDisplayArticle->Size = System::Drawing::Size(1135, 722);
			this->dataGridDisplayArticle->TabIndex = 0;
			// 
			// dataGridDisplayCommand
			// 
			this->dataGridDisplayCommand->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridDisplayCommand->Location = System::Drawing::Point(140, 91);
			this->dataGridDisplayCommand->Name = L"dataGridDisplayCommand";
			this->dataGridDisplayCommand->RowHeadersWidth = 72;
			this->dataGridDisplayCommand->RowTemplate->Height = 31;
			this->dataGridDisplayCommand->Size = System::Drawing::Size(1133, 718);
			this->dataGridDisplayCommand->TabIndex = 0;
			// 
			// Interface
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->AutoSize = true;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(48)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->ClientSize = System::Drawing::Size(1920, 1500);
			this->Controls->Add(this->panelInterface);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MaximumSize = System::Drawing::Size(2700, 1700);
			this->MinimumSize = System::Drawing::Size(1920, 1080);
			this->Name = L"Interface";
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->Text = L"Interface";
			this->Load += gcnew System::EventHandler(this, &Interface::Interface_Load);
			this->panelInterface->ResumeLayout(false);
			this->panelDisplay->ResumeLayout(false);
			this->tabController->ResumeLayout(false);
			this->tabLogin->ResumeLayout(false);
			this->panelLogin->ResumeLayout(false);
			this->panelLogin->PerformLayout();
			this->panelMainLogin->ResumeLayout(false);
			this->panelMainLogin->PerformLayout();
			this->panelHeaderLogin->ResumeLayout(false);
			this->panelHeaderLogin->PerformLayout();
			this->tabDisplayClient->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridDisplayClient))->EndInit();
			this->tabDisplayEmployee->ResumeLayout(false);
			this->tabDisplayCommand->ResumeLayout(false);
			this->tabDisplayArticle->ResumeLayout(false);
			this->panelSubNavigation->ResumeLayout(false);
			this->panelSubButtonCommand->ResumeLayout(false);
			this->panelSubButtonArticle->ResumeLayout(false);
			this->panelSubButtonEmployee->ResumeLayout(false);
			this->panelSubButtonClient->ResumeLayout(false);
			this->panelNavigation->ResumeLayout(false);
			this->panelButtonHelp->ResumeLayout(false);
			this->panelButtonNavigation->ResumeLayout(false);
			this->panelLogo->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Logo))->EndInit();
			this->panelHeader->ResumeLayout(false);
			this->panelControlButton->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridDisplayEmployee))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridDisplayArticle))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridDisplayCommand))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Interface_Load(System::Object^ sender, System::EventArgs^ e) {
		TabRemover();
	}
		
	private: System::Void buttonPressLogin_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ username = textBoxUsername->Text;
		String^ password = textBoxPassword->Text;
		DBInteraction^ db = gcnew DBInteraction();
	}
	private: System::Void buttonClient_Click(System::Object^ sender, System::EventArgs^ e) {
		labelTitle->Text = buttonClient->Text;
		SubNavigationRemover();
		panelSubNavigation->Visible = true;
		panelSubButtonClient->Visible = true;
	}
	private: System::Void buttonEmployee_Click(System::Object^ sender, System::EventArgs^) {
		labelTitle->Text = buttonEmployee->Text;
		SubNavigationRemover();
		panelSubNavigation->Visible = true;
		panelSubButtonEmployee->Visible = true;
	}
	private: System::Void buttonArticle_Click(System::Object^ sender, System::EventArgs^) {
		labelTitle->Text = buttonArticle->Text;
		SubNavigationRemover();
		panelSubNavigation->Visible = true;
		panelSubButtonArticle->Visible = true;
	}
	private: System::Void buttonCommand_Click(System::Object^ sender, System::EventArgs^) {
		labelTitle->Text = buttonCommand->Text;
		SubNavigationRemover();
		panelSubNavigation->Visible = true;
		panelSubButtonCommand->Visible = true;
	}

	private: System::Void buttonClose_Click(System::Object^ sender, System::EventArgs^) {
		Application::Exit();
	}
	private: System::Void buttonMaximize_Click(System::Object^ sender, System::EventArgs^) {
		//Change la taille de la fen�tre
		if (this->WindowState == FormWindowState::Maximized) {
			this->WindowState = FormWindowState::Normal;
		}
		else {
			this->WindowState = FormWindowState::Maximized;
		}
	}
	private: System::Void buttonMinimize_Click(System::Object^ sender, System::EventArgs^) {
		this->WindowState = FormWindowState::Minimized;
	}

	private: System::Void buttonDisplayClient_Click(System::Object^ sender, System::EventArgs^) {
		this->SuspendLayout();
		if (tabController->SelectedTab != tabDisplayClient) {
			tabController->SelectedTab = tabDisplayClient;
			labelSubTitle->Text = " - " + buttonDisplayClient->Text;
			
			this->dataGridDisplayClient->Refresh();
			this->dataGridDisplayClient->DataSource = this->DB_Client->Select("client");
			this->dataGridDisplayClient->DataMember = "client";
		}
		this->ResumeLayout(false);
	}
	private: System::Void buttonModifyClient_Click(System::Object^ sender, System::EventArgs^) {
		if (tabController->SelectedTab != tabModifyClient) {
			tabController->SelectedTab = tabModifyClient;
			labelSubTitle->Text = " - " + buttonModifyClient->Text;
		}
	}
	private: System::Void buttonAddClient_Click(System::Object^ sender, System::EventArgs^) {
		if (tabController->SelectedTab != tabAddClient) {

			tabController->SelectedTab = tabAddClient;
			labelSubTitle->Text = " - " + buttonAddClient->Text;
		}
	}
	private: System::Void buttonDeleteClient_Click(System::Object^ sender, System::EventArgs^) {
		if (tabController->SelectedTab != tabDeleteClient) {
			tabController->SelectedTab = tabDeleteClient;
			labelSubTitle->Text = " - " + buttonDeleteClient->Text;
		}
	}

	private: System::Void buttonDisplayEmployee_Click(System::Object^ sender, System::EventArgs^) {
		if (tabController->SelectedTab != tabDisplayEmployee) {
			tabController->SelectedTab = tabDisplayEmployee;
			labelSubTitle->Text = " - " + buttonDisplayEmployee->Text;
			
			this->dataGridDisplayEmployee->Refresh();
			this->dataGridDisplayEmployee->DataSource = this->DB_Employee->Select("employee");
			this->dataGridDisplayEmployee->DataMember = "employee";
		}
	}
	private: System::Void buttonModifyEmployee_Click(System::Object^ sender, System::EventArgs^) {
		if (tabController->SelectedTab != tabModifyEmployee) {
			tabController->SelectedTab = tabModifyEmployee;
			labelSubTitle->Text = " - " + buttonModifyEmployee->Text;
		}
	}
	private: System::Void buttonAddEmployee_Click(System::Object^ sender, System::EventArgs^) {
		if (tabController->SelectedTab != tabAddEmployee) {
			tabController->SelectedTab = tabAddEmployee;
			labelSubTitle->Text = " - " + buttonAddEmployee->Text;
		}
	}
	private: System::Void buttonDeleteEmployee_Click(System::Object^ sender, System::EventArgs^) {
		if (tabController->SelectedTab != tabDeleteEmployee) {
			tabController->SelectedTab = tabDeleteEmployee;
			labelSubTitle->Text = " - " + buttonDeleteEmployee->Text;
		}
	}

	private: System::Void buttonDisplayArticle_Click(System::Object^ sender, System::EventArgs^) {
		if (tabController->SelectedTab != tabDisplayArticle) {
			tabController->SelectedTab = tabDisplayArticle;
			labelSubTitle->Text = " - " + buttonDisplayArticle->Text;
			
			this->dataGridDisplayArticle->Refresh();
			this->dataGridDisplayArticle->DataSource = this->DB_Article->Select("Article");
			this->dataGridDisplayArticle->DataMember = "Article";
		}
	}
	private: System::Void buttonModifyArticle_Click(System::Object^ sender, System::EventArgs^) {
		if (tabController->SelectedTab != tabModifyArticle) {
			tabController->SelectedTab = tabModifyArticle;
			labelSubTitle->Text = " - " + buttonModifyArticle->Text;
		}
	}
	private: System::Void buttonAddArticle_Click(System::Object^ sender, System::EventArgs^) {
		if (tabController->SelectedTab != tabAddArticle) {
			tabController->SelectedTab = tabAddArticle;
			labelSubTitle->Text = " - " + buttonAddArticle->Text;
		}
	}
	private: System::Void buttonDeleteArticle_Click(System::Object^ sender, System::EventArgs^) {
		if (tabController->SelectedTab != tabDeleteArticle) {
			tabController->SelectedTab = tabDeleteArticle;
			labelSubTitle->Text = " - " + buttonDeleteArticle->Text;
		}
	}

	private: System::Void buttonDisplayCommand_Click(System::Object^ sender, System::EventArgs^) {
		if (tabController->SelectedTab != tabDisplayCommand) {
			tabController->SelectedTab = tabDisplayCommand;
			labelSubTitle->Text = " - " + buttonDisplayCommand->Text;
			
			this->dataGridDisplayCommand->Refresh();
			this->dataGridDisplayCommand->DataSource = this->DB_Command->Select("command");
			this->dataGridDisplayCommand->DataMember = "command";
		}
	}
	private: System::Void buttonModifyCommand_Click(System::Object^ sender, System::EventArgs^) {
		if (tabController->SelectedTab != tabModifyCommand) {
			tabController->SelectedTab = tabModifyCommand;
			labelSubTitle->Text = " - " + buttonModifyCommand->Text;
		}
	}
	private: System::Void buttonAddCommand_Click(System::Object^ sender, System::EventArgs^) {
		if (tabController->SelectedTab != tabAddCommand) {
			tabController->SelectedTab = tabAddCommand;
			labelSubTitle->Text = " - " + buttonAddCommand->Text;
		}
	}
	private: System::Void buttonDeleteCommand_Click(System::Object^ sender, System::EventArgs^) {
		if (tabController->SelectedTab != tabDeleteCommand) {
			tabController->SelectedTab = tabDeleteCommand;
			labelSubTitle->Text = " - " + buttonDeleteCommand->Text;
		}
	}

	private: System::Void buttonStatistics_Click(System::Object^ sender, System::EventArgs^) {
		if (tabController->SelectedTab != tabStatistics) {
			labelTitle->Text = buttonStatistics->Text;
			SubNavigationRemover();
			tabController->SelectedTab = tabStatistics;
			labelSubTitle->Text = "";
		}
	}

	private: System::Void buttonHelp_Click(System::Object^ sender, System::EventArgs^) {
		if (tabController->SelectedTab != tabHelp) {
			labelTitle->Text = buttonHelp->Text;
			SubNavigationRemover();
			tabController->SelectedTab = tabHelp;
			labelSubTitle->Text = "";
		}
	}

	private: System::Void TabRemover() {
		this->tabController->SizeMode = TabSizeMode::Fixed;
		this->tabController->ItemSize = System::Drawing::Size(0, 1);
		this->tabController->Appearance = TabAppearance::Buttons;
	}
	private: System::Void TabDisplay() {
		this->tabController->SizeMode = TabSizeMode::Normal;
		this->tabController->ItemSize = System::Drawing::Size(1, 25);
		this->tabController->Appearance = TabAppearance::Normal;
	}

	private: System::Void SubNavigationRemover() {
		panelSubNavigation->Visible = false;
		panelSubButtonClient->Visible = false;
		panelSubButtonEmployee->Visible = false;
		panelSubButtonArticle->Visible = false;
		panelSubButtonCommand->Visible = false;
	}
	private: System::Void Logo_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}