#pragma once

namespace Realisation {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Interface
	/// </summary>
	public ref class Interface : public System::Windows::Forms::Form
	{
	public:
		Interface(void)
		{
			InitializeComponent();
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
	private: System::Windows::Forms::Button^ buttonStock;
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
	private: System::Windows::Forms::Panel^ panelSubButtonStock;
	private: System::Windows::Forms::Panel^ panelSubButtonCommand;


	private: System::Windows::Forms::Panel^ panelSubButtonEmployee;

	private: System::Windows::Forms::Panel^ panelSubButtonClient;





	private: System::Windows::Forms::Button^ buttonDeleteCommand;
	private: System::Windows::Forms::Button^ buttonAddCommand;
	private: System::Windows::Forms::Button^ buttonModifyCommand;
	private: System::Windows::Forms::Button^ buttonDisplayCommand;
	private: System::Windows::Forms::Button^ buttonDeleteStock;
	private: System::Windows::Forms::Button^ buttonAddStock;
	private: System::Windows::Forms::Button^ buttonModifyStock;
	private: System::Windows::Forms::Button^ buttonDisplayStock;
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

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TabPage^ tabDisplayStock;
	private: System::Windows::Forms::TabPage^ tabModifyStock;
	private: System::Windows::Forms::TabPage^ tabAddStock;
	private: System::Windows::Forms::TabPage^ tabDeleteStock;
	private: System::Windows::Forms::Panel^ panelLogin;
	private: System::Windows::Forms::Panel^ panelMainLogin;


	private: System::Windows::Forms::Panel^ panelHeaderLogin;
	private: System::Windows::Forms::Label^ labelTitleLogin;

	private: System::Windows::Forms::TextBox^ textBoxUsername;
	private: System::Windows::Forms::TextBox^ textBoxPassword;

	private: System::Windows::Forms::Panel^ panelCon1;
	private: System::Windows::Forms::Button^ buttonPressLogin;
	private: System::Windows::Forms::Panel^ panelCon2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ labelSubTitle;








































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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tabModifyClient = (gcnew System::Windows::Forms::TabPage());
			this->tabAddClient = (gcnew System::Windows::Forms::TabPage());
			this->tabDeleteClient = (gcnew System::Windows::Forms::TabPage());
			this->tabDisplayEmployee = (gcnew System::Windows::Forms::TabPage());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tabModifyEmployee = (gcnew System::Windows::Forms::TabPage());
			this->tabAddEmployee = (gcnew System::Windows::Forms::TabPage());
			this->tabDeleteEmployee = (gcnew System::Windows::Forms::TabPage());
			this->tabDisplayCommand = (gcnew System::Windows::Forms::TabPage());
			this->tabModifyCommand = (gcnew System::Windows::Forms::TabPage());
			this->tabAddCommand = (gcnew System::Windows::Forms::TabPage());
			this->tabDeleteCommand = (gcnew System::Windows::Forms::TabPage());
			this->tabStatistics = (gcnew System::Windows::Forms::TabPage());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabHelp = (gcnew System::Windows::Forms::TabPage());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tabDisplayStock = (gcnew System::Windows::Forms::TabPage());
			this->tabModifyStock = (gcnew System::Windows::Forms::TabPage());
			this->tabAddStock = (gcnew System::Windows::Forms::TabPage());
			this->tabDeleteStock = (gcnew System::Windows::Forms::TabPage());
			this->panelSubNavigation = (gcnew System::Windows::Forms::Panel());
			this->panelSubButtonCommand = (gcnew System::Windows::Forms::Panel());
			this->buttonDeleteCommand = (gcnew System::Windows::Forms::Button());
			this->buttonAddCommand = (gcnew System::Windows::Forms::Button());
			this->buttonModifyCommand = (gcnew System::Windows::Forms::Button());
			this->buttonDisplayCommand = (gcnew System::Windows::Forms::Button());
			this->panelSubButtonStock = (gcnew System::Windows::Forms::Panel());
			this->buttonDeleteStock = (gcnew System::Windows::Forms::Button());
			this->buttonAddStock = (gcnew System::Windows::Forms::Button());
			this->buttonModifyStock = (gcnew System::Windows::Forms::Button());
			this->buttonDisplayStock = (gcnew System::Windows::Forms::Button());
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
			this->buttonStock = (gcnew System::Windows::Forms::Button());
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
			this->panelInterface->SuspendLayout();
			this->panelDisplay->SuspendLayout();
			this->tabController->SuspendLayout();
			this->tabLogin->SuspendLayout();
			this->panelLogin->SuspendLayout();
			this->panelMainLogin->SuspendLayout();
			this->panelHeaderLogin->SuspendLayout();
			this->tabDisplayClient->SuspendLayout();
			this->tabDisplayEmployee->SuspendLayout();
			this->tabStatistics->SuspendLayout();
			this->tabHelp->SuspendLayout();
			this->panelSubNavigation->SuspendLayout();
			this->panelSubButtonCommand->SuspendLayout();
			this->panelSubButtonStock->SuspendLayout();
			this->panelSubButtonEmployee->SuspendLayout();
			this->panelSubButtonClient->SuspendLayout();
			this->panelNavigation->SuspendLayout();
			this->panelButtonHelp->SuspendLayout();
			this->panelButtonNavigation->SuspendLayout();
			this->panelLogo->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Logo))->BeginInit();
			this->panelHeader->SuspendLayout();
			this->panelControlButton->SuspendLayout();
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
			this->panelInterface->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->panelInterface->Name = L"panelInterface";
			this->panelInterface->Size = System::Drawing::Size(1396, 720);
			this->panelInterface->TabIndex = 0;
			// 
			// panelDisplay
			// 
			this->panelDisplay->BackColor = System::Drawing::Color::LightSlateGray;
			this->panelDisplay->Controls->Add(this->tabController);
			this->panelDisplay->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelDisplay->Location = System::Drawing::Point(363, 33);
			this->panelDisplay->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->panelDisplay->Name = L"panelDisplay";
			this->panelDisplay->Size = System::Drawing::Size(1033, 687);
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
			this->tabController->Controls->Add(this->tabDisplayStock);
			this->tabController->Controls->Add(this->tabModifyStock);
			this->tabController->Controls->Add(this->tabAddStock);
			this->tabController->Controls->Add(this->tabDeleteStock);
			this->tabController->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabController->Location = System::Drawing::Point(0, 0);
			this->tabController->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->tabController->Multiline = true;
			this->tabController->Name = L"tabController";
			this->tabController->SelectedIndex = 0;
			this->tabController->Size = System::Drawing::Size(1033, 687);
			this->tabController->TabIndex = 0;
			// 
			// tabLogin
			// 
			this->tabLogin->BackColor = System::Drawing::Color::OldLace;
			this->tabLogin->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->tabLogin->Controls->Add(this->panelLogin);
			this->tabLogin->ForeColor = System::Drawing::Color::Black;
			this->tabLogin->Location = System::Drawing::Point(4, 67);
			this->tabLogin->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->tabLogin->Name = L"tabLogin";
			this->tabLogin->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->tabLogin->Size = System::Drawing::Size(1025, 616);
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
			this->panelLogin->Location = System::Drawing::Point(212, 67);
			this->panelLogin->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->panelLogin->Name = L"panelLogin";
			this->panelLogin->Size = System::Drawing::Size(588, 361);
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
			this->panelMainLogin->Location = System::Drawing::Point(33, 88);
			this->panelMainLogin->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->panelMainLogin->Name = L"panelMainLogin";
			this->panelMainLogin->Size = System::Drawing::Size(529, 247);
			this->panelMainLogin->TabIndex = 1;
			// 
			// textBoxUsername
			// 
			this->textBoxUsername->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxUsername->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->textBoxUsername->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxUsername->ForeColor = System::Drawing::Color::DarkGray;
			this->textBoxUsername->Location = System::Drawing::Point(0, 37);
			this->textBoxUsername->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBoxUsername->Name = L"textBoxUsername";
			this->textBoxUsername->Size = System::Drawing::Size(529, 30);
			this->textBoxUsername->TabIndex = 3;
			this->textBoxUsername->Text = L"Username";
			// 
			// panelCon2
			// 
			this->panelCon2->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panelCon2->Location = System::Drawing::Point(0, 67);
			this->panelCon2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->panelCon2->Name = L"panelCon2";
			this->panelCon2->Size = System::Drawing::Size(529, 50);
			this->panelCon2->TabIndex = 4;
			// 
			// textBoxPassword
			// 
			this->textBoxPassword->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->textBoxPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxPassword->ForeColor = System::Drawing::Color::DarkGray;
			this->textBoxPassword->Location = System::Drawing::Point(0, 117);
			this->textBoxPassword->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBoxPassword->Name = L"textBoxPassword";
			this->textBoxPassword->Size = System::Drawing::Size(529, 30);
			this->textBoxPassword->TabIndex = 3;
			this->textBoxPassword->Text = L"Password";
			// 
			// panelCon1
			// 
			this->panelCon1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panelCon1->Location = System::Drawing::Point(0, 147);
			this->panelCon1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->panelCon1->Name = L"panelCon1";
			this->panelCon1->Size = System::Drawing::Size(529, 50);
			this->panelCon1->TabIndex = 1;
			// 
			// buttonPressLogin
			// 
			this->buttonPressLogin->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(120)),
				static_cast<System::Int32>(static_cast<System::Byte>(120)));
			this->buttonPressLogin->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->buttonPressLogin->Location = System::Drawing::Point(0, 197);
			this->buttonPressLogin->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->buttonPressLogin->Name = L"buttonPressLogin";
			this->buttonPressLogin->Size = System::Drawing::Size(529, 50);
			this->buttonPressLogin->TabIndex = 0;
			this->buttonPressLogin->Text = L"login";
			this->buttonPressLogin->UseVisualStyleBackColor = false;
			// 
			// panelHeaderLogin
			// 
			this->panelHeaderLogin->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->panelHeaderLogin->AutoSize = true;
			this->panelHeaderLogin->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(70)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->panelHeaderLogin->Controls->Add(this->labelTitleLogin);
			this->panelHeaderLogin->Location = System::Drawing::Point(0, 0);
			this->panelHeaderLogin->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->panelHeaderLogin->Name = L"panelHeaderLogin";
			this->panelHeaderLogin->Size = System::Drawing::Size(588, 67);
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
			this->labelTitleLogin->Location = System::Drawing::Point(224, 22);
			this->labelTitleLogin->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelTitleLogin->Name = L"labelTitleLogin";
			this->labelTitleLogin->Size = System::Drawing::Size(152, 27);
			this->labelTitleLogin->TabIndex = 0;
			this->labelTitleLogin->Text = L"User Login";
			// 
			// tabDisplayClient
			// 
			this->tabDisplayClient->Controls->Add(this->label2);
			this->tabDisplayClient->Location = System::Drawing::Point(4, 67);
			this->tabDisplayClient->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->tabDisplayClient->Name = L"tabDisplayClient";
			this->tabDisplayClient->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->tabDisplayClient->Size = System::Drawing::Size(1025, 616);
			this->tabDisplayClient->TabIndex = 1;
			this->tabDisplayClient->Text = L"tabDisplayClient";
			this->tabDisplayClient->UseVisualStyleBackColor = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(371, 226);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(44, 16);
			this->label2->TabIndex = 0;
			this->label2->Text = L"label2";
			// 
			// tabModifyClient
			// 
			this->tabModifyClient->BackColor = System::Drawing::Color::OldLace;
			this->tabModifyClient->Location = System::Drawing::Point(4, 67);
			this->tabModifyClient->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->tabModifyClient->Name = L"tabModifyClient";
			this->tabModifyClient->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->tabModifyClient->Size = System::Drawing::Size(1025, 616);
			this->tabModifyClient->TabIndex = 2;
			this->tabModifyClient->Text = L"tabModifyClient";
			this->tabModifyClient->UseVisualStyleBackColor = true;
			// 
			// tabAddClient
			// 
			this->tabAddClient->BackColor = System::Drawing::Color::OldLace;
			this->tabAddClient->Location = System::Drawing::Point(4, 67);
			this->tabAddClient->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->tabAddClient->Name = L"tabAddClient";
			this->tabAddClient->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->tabAddClient->Size = System::Drawing::Size(1025, 616);
			this->tabAddClient->TabIndex = 3;
			this->tabAddClient->Text = L"tabAddClient";
			this->tabAddClient->UseVisualStyleBackColor = true;
			// 
			// tabDeleteClient
			// 
			this->tabDeleteClient->Location = System::Drawing::Point(4, 67);
			this->tabDeleteClient->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->tabDeleteClient->Name = L"tabDeleteClient";
			this->tabDeleteClient->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->tabDeleteClient->Size = System::Drawing::Size(1025, 616);
			this->tabDeleteClient->TabIndex = 4;
			this->tabDeleteClient->Text = L"tabDeleteClient";
			this->tabDeleteClient->UseVisualStyleBackColor = true;
			// 
			// tabDisplayEmployee
			// 
			this->tabDisplayEmployee->Controls->Add(this->label3);
			this->tabDisplayEmployee->Location = System::Drawing::Point(4, 67);
			this->tabDisplayEmployee->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->tabDisplayEmployee->Name = L"tabDisplayEmployee";
			this->tabDisplayEmployee->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->tabDisplayEmployee->Size = System::Drawing::Size(1025, 616);
			this->tabDisplayEmployee->TabIndex = 5;
			this->tabDisplayEmployee->Text = L"tabDisplayEmployee";
			this->tabDisplayEmployee->UseVisualStyleBackColor = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(311, 319);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(44, 16);
			this->label3->TabIndex = 0;
			this->label3->Text = L"label3";
			// 
			// tabModifyEmployee
			// 
			this->tabModifyEmployee->Location = System::Drawing::Point(4, 67);
			this->tabModifyEmployee->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->tabModifyEmployee->Name = L"tabModifyEmployee";
			this->tabModifyEmployee->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->tabModifyEmployee->Size = System::Drawing::Size(1025, 616);
			this->tabModifyEmployee->TabIndex = 6;
			this->tabModifyEmployee->Text = L"tabModifyEmployee";
			this->tabModifyEmployee->UseVisualStyleBackColor = true;
			// 
			// tabAddEmployee
			// 
			this->tabAddEmployee->Location = System::Drawing::Point(4, 67);
			this->tabAddEmployee->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->tabAddEmployee->Name = L"tabAddEmployee";
			this->tabAddEmployee->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->tabAddEmployee->Size = System::Drawing::Size(1025, 616);
			this->tabAddEmployee->TabIndex = 7;
			this->tabAddEmployee->Text = L"tabAddEmployee";
			this->tabAddEmployee->UseVisualStyleBackColor = true;
			// 
			// tabDeleteEmployee
			// 
			this->tabDeleteEmployee->Location = System::Drawing::Point(4, 67);
			this->tabDeleteEmployee->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->tabDeleteEmployee->Name = L"tabDeleteEmployee";
			this->tabDeleteEmployee->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->tabDeleteEmployee->Size = System::Drawing::Size(1025, 616);
			this->tabDeleteEmployee->TabIndex = 8;
			this->tabDeleteEmployee->Text = L"tabDeleteEmployee";
			this->tabDeleteEmployee->UseVisualStyleBackColor = true;
			// 
			// tabDisplayCommand
			// 
			this->tabDisplayCommand->Location = System::Drawing::Point(4, 67);
			this->tabDisplayCommand->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->tabDisplayCommand->Name = L"tabDisplayCommand";
			this->tabDisplayCommand->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->tabDisplayCommand->Size = System::Drawing::Size(1025, 616);
			this->tabDisplayCommand->TabIndex = 9;
			this->tabDisplayCommand->Text = L"tabDisplayCommand";
			this->tabDisplayCommand->UseVisualStyleBackColor = true;
			// 
			// tabModifyCommand
			// 
			this->tabModifyCommand->Location = System::Drawing::Point(4, 67);
			this->tabModifyCommand->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->tabModifyCommand->Name = L"tabModifyCommand";
			this->tabModifyCommand->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->tabModifyCommand->Size = System::Drawing::Size(1025, 616);
			this->tabModifyCommand->TabIndex = 10;
			this->tabModifyCommand->Text = L"tabModifyCommand";
			this->tabModifyCommand->UseVisualStyleBackColor = true;
			// 
			// tabAddCommand
			// 
			this->tabAddCommand->Location = System::Drawing::Point(4, 67);
			this->tabAddCommand->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->tabAddCommand->Name = L"tabAddCommand";
			this->tabAddCommand->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->tabAddCommand->Size = System::Drawing::Size(1025, 616);
			this->tabAddCommand->TabIndex = 11;
			this->tabAddCommand->Text = L"tabAddCommand";
			this->tabAddCommand->UseVisualStyleBackColor = true;
			// 
			// tabDeleteCommand
			// 
			this->tabDeleteCommand->Location = System::Drawing::Point(4, 67);
			this->tabDeleteCommand->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->tabDeleteCommand->Name = L"tabDeleteCommand";
			this->tabDeleteCommand->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->tabDeleteCommand->Size = System::Drawing::Size(1025, 616);
			this->tabDeleteCommand->TabIndex = 12;
			this->tabDeleteCommand->Text = L"tabDeleteCommand";
			this->tabDeleteCommand->UseVisualStyleBackColor = true;
			// 
			// tabStatistics
			// 
			this->tabStatistics->Controls->Add(this->label1);
			this->tabStatistics->Location = System::Drawing::Point(4, 67);
			this->tabStatistics->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->tabStatistics->Name = L"tabStatistics";
			this->tabStatistics->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->tabStatistics->Size = System::Drawing::Size(1025, 616);
			this->tabStatistics->TabIndex = 13;
			this->tabStatistics->Text = L"tabStatistics";
			this->tabStatistics->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(437, 303);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(48, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Stonks";
			// 
			// tabHelp
			// 
			this->tabHelp->Controls->Add(this->label4);
			this->tabHelp->Location = System::Drawing::Point(4, 67);
			this->tabHelp->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->tabHelp->Name = L"tabHelp";
			this->tabHelp->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->tabHelp->Size = System::Drawing::Size(1025, 616);
			this->tabHelp->TabIndex = 14;
			this->tabHelp->Text = L"tabHelp";
			this->tabHelp->UseVisualStyleBackColor = true;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(437, 303);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(36, 16);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Help";
			// 
			// tabDisplayStock
			// 
			this->tabDisplayStock->Location = System::Drawing::Point(4, 67);
			this->tabDisplayStock->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->tabDisplayStock->Name = L"tabDisplayStock";
			this->tabDisplayStock->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->tabDisplayStock->Size = System::Drawing::Size(1025, 616);
			this->tabDisplayStock->TabIndex = 15;
			this->tabDisplayStock->Text = L"tabDisplayStock";
			this->tabDisplayStock->UseVisualStyleBackColor = true;
			// 
			// tabModifyStock
			// 
			this->tabModifyStock->Location = System::Drawing::Point(4, 67);
			this->tabModifyStock->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->tabModifyStock->Name = L"tabModifyStock";
			this->tabModifyStock->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->tabModifyStock->Size = System::Drawing::Size(1025, 616);
			this->tabModifyStock->TabIndex = 16;
			this->tabModifyStock->Text = L"tabModifyStock";
			this->tabModifyStock->UseVisualStyleBackColor = true;
			// 
			// tabAddStock
			// 
			this->tabAddStock->Location = System::Drawing::Point(4, 67);
			this->tabAddStock->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->tabAddStock->Name = L"tabAddStock";
			this->tabAddStock->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->tabAddStock->Size = System::Drawing::Size(1025, 616);
			this->tabAddStock->TabIndex = 17;
			this->tabAddStock->Text = L"tabAddStock";
			this->tabAddStock->UseVisualStyleBackColor = true;
			// 
			// tabDeleteStock
			// 
			this->tabDeleteStock->Location = System::Drawing::Point(4, 67);
			this->tabDeleteStock->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->tabDeleteStock->Name = L"tabDeleteStock";
			this->tabDeleteStock->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->tabDeleteStock->Size = System::Drawing::Size(1025, 616);
			this->tabDeleteStock->TabIndex = 18;
			this->tabDeleteStock->Text = L"tabDeleteStock";
			this->tabDeleteStock->UseVisualStyleBackColor = true;
			// 
			// panelSubNavigation
			// 
			this->panelSubNavigation->BackColor = System::Drawing::Color::DimGray;
			this->panelSubNavigation->Controls->Add(this->panelSubButtonCommand);
			this->panelSubNavigation->Controls->Add(this->panelSubButtonStock);
			this->panelSubNavigation->Controls->Add(this->panelSubButtonEmployee);
			this->panelSubNavigation->Controls->Add(this->panelSubButtonClient);
			this->panelSubNavigation->Dock = System::Windows::Forms::DockStyle::Left;
			this->panelSubNavigation->Location = System::Drawing::Point(218, 33);
			this->panelSubNavigation->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->panelSubNavigation->Name = L"panelSubNavigation";
			this->panelSubNavigation->Size = System::Drawing::Size(145, 687);
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
			this->panelSubButtonCommand->Location = System::Drawing::Point(0, 600);
			this->panelSubButtonCommand->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->panelSubButtonCommand->Name = L"panelSubButtonCommand";
			this->panelSubButtonCommand->Size = System::Drawing::Size(145, 200);
			this->panelSubButtonCommand->TabIndex = 2;
			this->panelSubButtonCommand->Visible = false;
			// 
			// buttonDeleteCommand
			// 
			this->buttonDeleteCommand->Dock = System::Windows::Forms::DockStyle::Top;
			this->buttonDeleteCommand->FlatAppearance->BorderSize = 0;
			this->buttonDeleteCommand->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonDeleteCommand->Location = System::Drawing::Point(0, 150);
			this->buttonDeleteCommand->Margin = System::Windows::Forms::Padding(2, 2, 2, 17);
			this->buttonDeleteCommand->Name = L"buttonDeleteCommand";
			this->buttonDeleteCommand->Size = System::Drawing::Size(145, 50);
			this->buttonDeleteCommand->TabIndex = 3;
			this->buttonDeleteCommand->Text = L"Delete";
			this->buttonDeleteCommand->UseVisualStyleBackColor = true;
			// 
			// buttonAddCommand
			// 
			this->buttonAddCommand->Dock = System::Windows::Forms::DockStyle::Top;
			this->buttonAddCommand->FlatAppearance->BorderSize = 0;
			this->buttonAddCommand->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonAddCommand->Location = System::Drawing::Point(0, 100);
			this->buttonAddCommand->Margin = System::Windows::Forms::Padding(2, 2, 2, 17);
			this->buttonAddCommand->Name = L"buttonAddCommand";
			this->buttonAddCommand->Size = System::Drawing::Size(145, 50);
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
			this->buttonModifyCommand->Location = System::Drawing::Point(0, 50);
			this->buttonModifyCommand->Margin = System::Windows::Forms::Padding(2, 2, 2, 17);
			this->buttonModifyCommand->Name = L"buttonModifyCommand";
			this->buttonModifyCommand->Size = System::Drawing::Size(145, 50);
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
			this->buttonDisplayCommand->Margin = System::Windows::Forms::Padding(2, 2, 2, 17);
			this->buttonDisplayCommand->Name = L"buttonDisplayCommand";
			this->buttonDisplayCommand->Size = System::Drawing::Size(145, 50);
			this->buttonDisplayCommand->TabIndex = 0;
			this->buttonDisplayCommand->Text = L"Display";
			this->buttonDisplayCommand->UseVisualStyleBackColor = true;
			this->buttonDisplayCommand->Click += gcnew System::EventHandler(this, &Interface::buttonDisplayCommand_Click);
			// 
			// panelSubButtonStock
			// 
			this->panelSubButtonStock->Controls->Add(this->buttonDeleteStock);
			this->panelSubButtonStock->Controls->Add(this->buttonAddStock);
			this->panelSubButtonStock->Controls->Add(this->buttonModifyStock);
			this->panelSubButtonStock->Controls->Add(this->buttonDisplayStock);
			this->panelSubButtonStock->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelSubButtonStock->Location = System::Drawing::Point(0, 400);
			this->panelSubButtonStock->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->panelSubButtonStock->Name = L"panelSubButtonStock";
			this->panelSubButtonStock->Size = System::Drawing::Size(145, 200);
			this->panelSubButtonStock->TabIndex = 2;
			this->panelSubButtonStock->Visible = false;
			// 
			// buttonDeleteStock
			// 
			this->buttonDeleteStock->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonDeleteStock->Dock = System::Windows::Forms::DockStyle::Top;
			this->buttonDeleteStock->FlatAppearance->BorderSize = 0;
			this->buttonDeleteStock->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonDeleteStock->Location = System::Drawing::Point(0, 150);
			this->buttonDeleteStock->Margin = System::Windows::Forms::Padding(2, 2, 2, 17);
			this->buttonDeleteStock->Name = L"buttonDeleteStock";
			this->buttonDeleteStock->Size = System::Drawing::Size(145, 50);
			this->buttonDeleteStock->TabIndex = 3;
			this->buttonDeleteStock->Text = L"Delete";
			this->buttonDeleteStock->UseVisualStyleBackColor = true;
			this->buttonDeleteStock->Click += gcnew System::EventHandler(this, &Interface::buttonDeleteStock_Click);
			// 
			// buttonAddStock
			// 
			this->buttonAddStock->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonAddStock->Dock = System::Windows::Forms::DockStyle::Top;
			this->buttonAddStock->FlatAppearance->BorderSize = 0;
			this->buttonAddStock->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonAddStock->Location = System::Drawing::Point(0, 100);
			this->buttonAddStock->Margin = System::Windows::Forms::Padding(2, 2, 2, 17);
			this->buttonAddStock->Name = L"buttonAddStock";
			this->buttonAddStock->Size = System::Drawing::Size(145, 50);
			this->buttonAddStock->TabIndex = 2;
			this->buttonAddStock->Text = L"Add";
			this->buttonAddStock->UseVisualStyleBackColor = true;
			this->buttonAddStock->Click += gcnew System::EventHandler(this, &Interface::buttonAddStock_Click);
			// 
			// buttonModifyStock
			// 
			this->buttonModifyStock->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonModifyStock->Dock = System::Windows::Forms::DockStyle::Top;
			this->buttonModifyStock->FlatAppearance->BorderSize = 0;
			this->buttonModifyStock->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonModifyStock->Location = System::Drawing::Point(0, 50);
			this->buttonModifyStock->Margin = System::Windows::Forms::Padding(2, 2, 2, 17);
			this->buttonModifyStock->Name = L"buttonModifyStock";
			this->buttonModifyStock->Size = System::Drawing::Size(145, 50);
			this->buttonModifyStock->TabIndex = 1;
			this->buttonModifyStock->Text = L"Modify";
			this->buttonModifyStock->UseVisualStyleBackColor = true;
			this->buttonModifyStock->Click += gcnew System::EventHandler(this, &Interface::buttonModifyStock_Click);
			// 
			// buttonDisplayStock
			// 
			this->buttonDisplayStock->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonDisplayStock->Dock = System::Windows::Forms::DockStyle::Top;
			this->buttonDisplayStock->FlatAppearance->BorderSize = 0;
			this->buttonDisplayStock->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonDisplayStock->Location = System::Drawing::Point(0, 0);
			this->buttonDisplayStock->Margin = System::Windows::Forms::Padding(2, 2, 2, 17);
			this->buttonDisplayStock->Name = L"buttonDisplayStock";
			this->buttonDisplayStock->Size = System::Drawing::Size(145, 50);
			this->buttonDisplayStock->TabIndex = 0;
			this->buttonDisplayStock->Text = L"Display";
			this->buttonDisplayStock->UseVisualStyleBackColor = true;
			this->buttonDisplayStock->Click += gcnew System::EventHandler(this, &Interface::buttonDisplayStock_Click);
			// 
			// panelSubButtonEmployee
			// 
			this->panelSubButtonEmployee->Controls->Add(this->buttonDeleteEmployee);
			this->panelSubButtonEmployee->Controls->Add(this->buttonAddEmployee);
			this->panelSubButtonEmployee->Controls->Add(this->buttonModifyEmployee);
			this->panelSubButtonEmployee->Controls->Add(this->buttonDisplayEmployee);
			this->panelSubButtonEmployee->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelSubButtonEmployee->Location = System::Drawing::Point(0, 200);
			this->panelSubButtonEmployee->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->panelSubButtonEmployee->Name = L"panelSubButtonEmployee";
			this->panelSubButtonEmployee->Size = System::Drawing::Size(145, 200);
			this->panelSubButtonEmployee->TabIndex = 1;
			this->panelSubButtonEmployee->Visible = false;
			// 
			// buttonDeleteEmployee
			// 
			this->buttonDeleteEmployee->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonDeleteEmployee->Dock = System::Windows::Forms::DockStyle::Top;
			this->buttonDeleteEmployee->FlatAppearance->BorderSize = 0;
			this->buttonDeleteEmployee->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonDeleteEmployee->Location = System::Drawing::Point(0, 150);
			this->buttonDeleteEmployee->Margin = System::Windows::Forms::Padding(2, 2, 2, 17);
			this->buttonDeleteEmployee->Name = L"buttonDeleteEmployee";
			this->buttonDeleteEmployee->Size = System::Drawing::Size(145, 50);
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
			this->buttonAddEmployee->Location = System::Drawing::Point(0, 100);
			this->buttonAddEmployee->Margin = System::Windows::Forms::Padding(2, 2, 2, 17);
			this->buttonAddEmployee->Name = L"buttonAddEmployee";
			this->buttonAddEmployee->Size = System::Drawing::Size(145, 50);
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
			this->buttonModifyEmployee->Location = System::Drawing::Point(0, 50);
			this->buttonModifyEmployee->Margin = System::Windows::Forms::Padding(2, 2, 2, 17);
			this->buttonModifyEmployee->Name = L"buttonModifyEmployee";
			this->buttonModifyEmployee->Size = System::Drawing::Size(145, 50);
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
			this->buttonDisplayEmployee->Margin = System::Windows::Forms::Padding(2, 2, 2, 17);
			this->buttonDisplayEmployee->Name = L"buttonDisplayEmployee";
			this->buttonDisplayEmployee->Size = System::Drawing::Size(145, 50);
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
			this->panelSubButtonClient->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->panelSubButtonClient->Name = L"panelSubButtonClient";
			this->panelSubButtonClient->Size = System::Drawing::Size(145, 200);
			this->panelSubButtonClient->TabIndex = 0;
			this->panelSubButtonClient->Visible = false;
			// 
			// buttonDeleteClient
			// 
			this->buttonDeleteClient->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonDeleteClient->Dock = System::Windows::Forms::DockStyle::Top;
			this->buttonDeleteClient->FlatAppearance->BorderSize = 0;
			this->buttonDeleteClient->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonDeleteClient->Location = System::Drawing::Point(0, 150);
			this->buttonDeleteClient->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->buttonDeleteClient->Name = L"buttonDeleteClient";
			this->buttonDeleteClient->Size = System::Drawing::Size(145, 50);
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
			this->buttonAddClient->Location = System::Drawing::Point(0, 100);
			this->buttonAddClient->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->buttonAddClient->Name = L"buttonAddClient";
			this->buttonAddClient->Size = System::Drawing::Size(145, 50);
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
			this->buttonModifyClient->Location = System::Drawing::Point(0, 50);
			this->buttonModifyClient->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->buttonModifyClient->Name = L"buttonModifyClient";
			this->buttonModifyClient->Size = System::Drawing::Size(145, 50);
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
			this->buttonDisplayClient->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->buttonDisplayClient->Name = L"buttonDisplayClient";
			this->buttonDisplayClient->Size = System::Drawing::Size(145, 50);
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
			this->panelNavigation->Location = System::Drawing::Point(0, 33);
			this->panelNavigation->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->panelNavigation->Name = L"panelNavigation";
			this->panelNavigation->Size = System::Drawing::Size(218, 687);
			this->panelNavigation->TabIndex = 1;
			// 
			// panelComplement
			// 
			this->panelComplement->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelComplement->Location = System::Drawing::Point(0, 327);
			this->panelComplement->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->panelComplement->Name = L"panelComplement";
			this->panelComplement->Size = System::Drawing::Size(218, 313);
			this->panelComplement->TabIndex = 4;
			// 
			// panelButtonHelp
			// 
			this->panelButtonHelp->Controls->Add(this->buttonHelp);
			this->panelButtonHelp->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panelButtonHelp->Location = System::Drawing::Point(0, 640);
			this->panelButtonHelp->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->panelButtonHelp->Name = L"panelButtonHelp";
			this->panelButtonHelp->Size = System::Drawing::Size(218, 47);
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
			this->buttonHelp->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->buttonHelp->Name = L"buttonHelp";
			this->buttonHelp->Size = System::Drawing::Size(218, 47);
			this->buttonHelp->TabIndex = 1;
			this->buttonHelp->Text = L"Help";
			this->buttonHelp->UseVisualStyleBackColor = false;
			this->buttonHelp->Click += gcnew System::EventHandler(this, &Interface::buttonHelp_Click);
			// 
			// panelButtonNavigation
			// 
			this->panelButtonNavigation->Controls->Add(this->buttonStatistics);
			this->panelButtonNavigation->Controls->Add(this->buttonCommand);
			this->panelButtonNavigation->Controls->Add(this->buttonStock);
			this->panelButtonNavigation->Controls->Add(this->buttonEmployee);
			this->panelButtonNavigation->Controls->Add(this->buttonClient);
			this->panelButtonNavigation->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelButtonNavigation->Location = System::Drawing::Point(0, 100);
			this->panelButtonNavigation->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->panelButtonNavigation->Name = L"panelButtonNavigation";
			this->panelButtonNavigation->Size = System::Drawing::Size(218, 227);
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
			this->buttonStatistics->Location = System::Drawing::Point(0, 188);
			this->buttonStatistics->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->buttonStatistics->Name = L"buttonStatistics";
			this->buttonStatistics->Size = System::Drawing::Size(218, 47);
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
			this->buttonCommand->Location = System::Drawing::Point(0, 141);
			this->buttonCommand->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->buttonCommand->Name = L"buttonCommand";
			this->buttonCommand->Size = System::Drawing::Size(218, 47);
			this->buttonCommand->TabIndex = 3;
			this->buttonCommand->Text = L"Command";
			this->buttonCommand->UseVisualStyleBackColor = false;
			this->buttonCommand->Click += gcnew System::EventHandler(this, &Interface::buttonCommand_Click);
			// 
			// buttonStock
			// 
			this->buttonStock->BackColor = System::Drawing::Color::Transparent;
			this->buttonStock->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonStock->Dock = System::Windows::Forms::DockStyle::Top;
			this->buttonStock->FlatAppearance->BorderSize = 0;
			this->buttonStock->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonStock->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.142858F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonStock->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(47)), static_cast<System::Int32>(static_cast<System::Byte>(62)),
				static_cast<System::Int32>(static_cast<System::Byte>(67)));
			this->buttonStock->Location = System::Drawing::Point(0, 94);
			this->buttonStock->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->buttonStock->Name = L"buttonStock";
			this->buttonStock->Size = System::Drawing::Size(218, 47);
			this->buttonStock->TabIndex = 2;
			this->buttonStock->Text = L"Stock";
			this->buttonStock->UseVisualStyleBackColor = false;
			this->buttonStock->Click += gcnew System::EventHandler(this, &Interface::buttonStock_Click);
			// 
			// buttonEmployee
			// 
			this->buttonEmployee->BackColor = System::Drawing::Color::Transparent;
			this->buttonEmployee->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonEmployee->Dock = System::Windows::Forms::DockStyle::Top;
			this->buttonEmployee->FlatAppearance->BorderSize = 0;
			this->buttonEmployee->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonEmployee->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.142858F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonEmployee->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(47)), static_cast<System::Int32>(static_cast<System::Byte>(62)),
				static_cast<System::Int32>(static_cast<System::Byte>(67)));
			this->buttonEmployee->Location = System::Drawing::Point(0, 47);
			this->buttonEmployee->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->buttonEmployee->Name = L"buttonEmployee";
			this->buttonEmployee->Size = System::Drawing::Size(218, 47);
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
			this->buttonClient->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->buttonClient->Name = L"buttonClient";
			this->buttonClient->Size = System::Drawing::Size(218, 47);
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
			this->panelLogo->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->panelLogo->Name = L"panelLogo";
			this->panelLogo->Size = System::Drawing::Size(218, 100);
			this->panelLogo->TabIndex = 1;
			// 
			// Logo
			// 
			this->Logo->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->Logo->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Logo->Location = System::Drawing::Point(0, 0);
			this->Logo->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Logo->Name = L"Logo";
			this->Logo->Size = System::Drawing::Size(218, 100);
			this->Logo->TabIndex = 0;
			this->Logo->TabStop = false;
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
			this->panelHeader->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->panelHeader->Name = L"panelHeader";
			this->panelHeader->Size = System::Drawing::Size(1396, 33);
			this->panelHeader->TabIndex = 0;
			// 
			// labelSubTitle
			// 
			this->labelSubTitle->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.85714F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelSubTitle->ForeColor = System::Drawing::Color::Gainsboro;
			this->labelSubTitle->Location = System::Drawing::Point(364, 0);
			this->labelSubTitle->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelSubTitle->Name = L"labelSubTitle";
			this->labelSubTitle->Size = System::Drawing::Size(255, 33);
			this->labelSubTitle->TabIndex = 2;
			// 
			// labelTitle
			// 
			this->labelTitle->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.85714F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelTitle->ForeColor = System::Drawing::Color::Gainsboro;
			this->labelTitle->Location = System::Drawing::Point(145, 0);
			this->labelTitle->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelTitle->Name = L"labelTitle";
			this->labelTitle->Size = System::Drawing::Size(218, 33);
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
			this->panelControlButton->Location = System::Drawing::Point(1251, 0);
			this->panelControlButton->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->panelControlButton->Name = L"panelControlButton";
			this->panelControlButton->Size = System::Drawing::Size(145, 33);
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
			this->buttonMinimize->Location = System::Drawing::Point(37, 0);
			this->buttonMinimize->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->buttonMinimize->Name = L"buttonMinimize";
			this->buttonMinimize->Size = System::Drawing::Size(36, 33);
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
			this->buttonMaximize->Location = System::Drawing::Point(73, 0);
			this->buttonMaximize->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->buttonMaximize->Name = L"buttonMaximize";
			this->buttonMaximize->Size = System::Drawing::Size(36, 33);
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
			this->buttonClose->Location = System::Drawing::Point(109, 0);
			this->buttonClose->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->buttonClose->Name = L"buttonClose";
			this->buttonClose->Size = System::Drawing::Size(36, 33);
			this->buttonClose->TabIndex = 0;
			this->buttonClose->Text = L"X";
			this->buttonClose->UseVisualStyleBackColor = true;
			this->buttonClose->Click += gcnew System::EventHandler(this, &Interface::buttonClose_Click);
			// 
			// Interface
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->AutoSize = true;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(48)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->ClientSize = System::Drawing::Size(1396, 720);
			this->Controls->Add(this->panelInterface);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->MaximumSize = System::Drawing::Size(1964, 1133);
			this->MinimumSize = System::Drawing::Size(1395, 719);
			this->Name = L"Interface";
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->Text = L"Interface";
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
			this->tabDisplayClient->PerformLayout();
			this->tabDisplayEmployee->ResumeLayout(false);
			this->tabDisplayEmployee->PerformLayout();
			this->tabStatistics->ResumeLayout(false);
			this->tabStatistics->PerformLayout();
			this->tabHelp->ResumeLayout(false);
			this->tabHelp->PerformLayout();
			this->panelSubNavigation->ResumeLayout(false);
			this->panelSubButtonCommand->ResumeLayout(false);
			this->panelSubButtonStock->ResumeLayout(false);
			this->panelSubButtonEmployee->ResumeLayout(false);
			this->panelSubButtonClient->ResumeLayout(false);
			this->panelNavigation->ResumeLayout(false);
			this->panelButtonHelp->ResumeLayout(false);
			this->panelButtonNavigation->ResumeLayout(false);
			this->panelLogo->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Logo))->EndInit();
			this->panelHeader->ResumeLayout(false);
			this->panelControlButton->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
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
	private: System::Void buttonStock_Click(System::Object^ sender, System::EventArgs^) {
		labelTitle->Text = buttonStock->Text;
		SubNavigationRemover();
		panelSubNavigation->Visible = true;
		panelSubButtonStock->Visible = true;
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
		//Change la taille de la fenêtre
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

	private: System::Void buttonDisplayStock_Click(System::Object^ sender, System::EventArgs^) {
		if (tabController->SelectedTab != tabDisplayStock) {
			tabController->SelectedTab = tabDisplayStock;
			labelSubTitle->Text = " - " + buttonDisplayStock->Text;
		}
	}
	private: System::Void buttonModifyStock_Click(System::Object^ sender, System::EventArgs^) {
		if (tabController->SelectedTab != tabModifyStock) {
			tabController->SelectedTab = tabModifyStock;
			labelSubTitle->Text = " - " + buttonModifyStock->Text;
		}
	}
	private: System::Void buttonAddStock_Click(System::Object^ sender, System::EventArgs^) {
		if (tabController->SelectedTab != tabAddStock) {
			tabController->SelectedTab = tabAddStock;
			labelSubTitle->Text = " - " + buttonAddStock->Text;
		}
	}
	private: System::Void buttonDeleteStock_Click(System::Object^ sender, System::EventArgs^) {
		if (tabController->SelectedTab != tabDeleteStock) {
			tabController->SelectedTab = tabDeleteStock;
			labelSubTitle->Text = " - " + buttonDeleteStock->Text;
		}
	}

	private: System::Void buttonDisplayCommand_Click(System::Object^ sender, System::EventArgs^) {
		if (tabController->SelectedTab != tabDisplayCommand) {
			tabController->SelectedTab = tabDisplayCommand;
			labelSubTitle->Text = " - " + buttonDisplayCommand->Text;
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
		panelSubButtonStock->Visible = false;
		panelSubButtonCommand->Visible = false;
	}
	};
}