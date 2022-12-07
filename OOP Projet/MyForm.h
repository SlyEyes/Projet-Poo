#pragma once
#include "Employee.h"
#include "Table.h"
#include "Statistics.h"
#include "Article.h"
#include "Client.h"
#include "Purchase.h"
#include "DBInteraction.h"


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
	private: System::Windows::Forms::Panel^ panelNavigation;
	private: System::Windows::Forms::Panel^ panelButtonHelp;
	private: System::Windows::Forms::Button^ buttonHelp;
	private: System::Windows::Forms::Panel^ panelButtonNavigation;
	private: System::Windows::Forms::Button^ buttonPurchase;
	private: System::Windows::Forms::Button^ buttonArticle;
	private: System::Windows::Forms::Button^ buttonEmployee;
	private: System::Windows::Forms::Panel^ panelLogo;
	private: System::Windows::Forms::Panel^ panelHeader;
	private: System::String^ Display = "panelLogin";
	private: Boolean Login = false;
	private: System::String^ username = "antoine_ritter";
	private: System::String^ password = "Ritter-001";
	private: System::String^ Mode;
	private: System::String^ statsMenu;
	private: System::String^ statsText;
	private: System::Windows::Forms::Panel^ panelControlButton;
	private: System::Windows::Forms::Button^ buttonMinimize;
	private: System::Windows::Forms::Button^ buttonMaximize;
	private: System::Windows::Forms::Button^ buttonClose;
	private: System::Windows::Forms::Label^ labelTitle;
	private: System::Windows::Forms::PictureBox^ Logo;
	private: System::Windows::Forms::Panel^ panelDisplay;
	private: System::Windows::Forms::Label^ labelSubTitle;
	private: Article^ DB_Article;
	private: Client^ DB_Client;
	private: Purchase^ DB_Purchase;
	private: Purchase^ DB_ArticlesInPurchase;
	private: Employee^ DB_Employee;
	private: Statistics^ DB_Stats;

	private: System::Data::DataSet^ DB_Data_Set_Article;
	private: System::Data::DataSet^ DB_Data_Set;
	private: System::Data::DataSet^ DB_Data_Set_Purchase;
	private: System::Data::DataSet^ DB_Data_Set_ArticlesInPurchase;
	private: System::Data::DataSet^ DB_Data_Set_Employee;
	private: System::Windows::Forms::Panel^ panelButtonNavigationStatistics;
	private: System::Windows::Forms::Button^ buttonStatistics;
	private: System::Windows::Forms::Panel^ panelButtonNavigationPurchase;
	private: System::Windows::Forms::Panel^ panelButtonNavigationArticle;
	private: System::Windows::Forms::Panel^ panelButtonNavigationEmployee;
	private: System::Windows::Forms::Panel^ panelButtonNavigationClient;
	private: System::Windows::Forms::Button^ buttonClient;
	private: System::String^ Chemin = System::IO::Directory::GetCurrentDirectory();
	private: System::Windows::Forms::TabControl^ tabController;
	private: System::Windows::Forms::TabPage^ tabLogin;
	private: System::Windows::Forms::Panel^ panelLogin;
	private: System::Windows::Forms::Panel^ panelMainLogin;
	private: System::Windows::Forms::Label^ labelPassword;
	private: System::Windows::Forms::TextBox^ textBoxUsername;
	private: System::Windows::Forms::Panel^ panelCon2;
	private: System::Windows::Forms::Label^ labelUsername;
	private: System::Windows::Forms::TextBox^ textBoxPassword;
	private: System::Windows::Forms::Panel^ panelCon1;
	private: System::Windows::Forms::Button^ buttonPressLogin;
	private: System::Windows::Forms::Panel^ panelHeaderLogin;
	private: System::Windows::Forms::Label^ labelTitleLogin;
	private: System::Windows::Forms::TabPage^ tabClient;
	private: System::Windows::Forms::DataGridView^ dataGridDisplayClient;
	private: System::Windows::Forms::TabPage^ tabEmployee;
	private: System::Windows::Forms::TabPage^ tabPurchase;
	private: System::Windows::Forms::DataGridView^ dataGridDisplayPurchase;
	private: System::Windows::Forms::TabPage^ tabStatistics;
	private: System::Windows::Forms::TabPage^ tabHelp;
	private: System::Windows::Forms::TabPage^ tabArticle;
	private: System::Windows::Forms::DataGridView^ dataGridDisplayArticle;
	private: System::Windows::Forms::TabPage^ tabPageHome;
	private: System::Windows::Forms::Button^ buttonModifyClient;
	private: System::Windows::Forms::Button^ buttonAddClient;
	private: System::Windows::Forms::Button^ buttonRemoveClient;
	private: System::Windows::Forms::Button^ buttonSearchClient;
	private: System::Windows::Forms::Label^ labelClientpersonId;
	private: System::Windows::Forms::TextBox^ textBoxClientpersonId;
	private: System::Windows::Forms::Label^ labelClientFirstName;
	private: System::Windows::Forms::TextBox^ textBoxClientFirstName;
	private: System::Windows::Forms::Label^ labelClientCompanyName;
	private: System::Windows::Forms::TextBox^ textBoxClientCompanyName;
	private: System::Windows::Forms::Label^ labelClientLastName;
	private: System::Windows::Forms::TextBox^ textBoxClientLastName;
	private: System::Windows::Forms::Label^ labelCLientBirthDate;
	private: System::Windows::Forms::TextBox^ textBoxClientBirthDate;
	private: System::Windows::Forms::DataGridView^ dataGridDisplayEmployee;	
	private: System::Windows::Forms::TextBox^ textBoxEmployeehiringDate;

	private: System::Windows::Forms::TextBox^ textBoxEmployeePersonId;
	private: System::Windows::Forms::TextBox^ textBoxEmployeeemployeeRank;
	private: System::Windows::Forms::TextBox^ textBoxEmployeeBirthDate;
	private: System::Windows::Forms::TextBox^ textBoxEmployeeLastName;

	private: System::Windows::Forms::Label^ labelEmployeehiringDate;
	private: System::Windows::Forms::Label^ labelEmployeeFirstName;
	private: System::Windows::Forms::Label^ labelEmployeepersonId;
	private: System::Windows::Forms::Button^ buttonAddEmployee;
	private: System::Windows::Forms::Label^ labelEmployeeemployeeRank;
	private: System::Windows::Forms::Label^ labelEmployeeBirthDate;
	private: System::Windows::Forms::Label^ labelEmployeeLastName;
	private: System::Windows::Forms::Button^ buttonSearchEmployee;
	private: System::Windows::Forms::Button^ buttonModifyEmployee;
	private: System::Windows::Forms::Button^ buttonRemoveEmployee;
	private: System::Windows::Forms::Label^ labelPurchasepurchaseDate;
	private: System::Windows::Forms::Label^ labelPurchasepurchaseTotalWithTax;
	private: System::Windows::Forms::Label^ labelPurchasepurchaseTax;
	private: System::Windows::Forms::Label^ labelPurchasetotalPrice;
	private: System::Windows::Forms::Label^ labelPurchasepurchaseReference;
	private: System::Windows::Forms::Label^ labelPurchasepurchaseId;
	private: System::Windows::Forms::TextBox^ textBoxPurchasepurchaseDate;
	private: System::Windows::Forms::TextBox^ textBoxPurchasepurchaseTotalWithTax;
	private: System::Windows::Forms::TextBox^ textBoxPurchasepurchaseTax;
	private: System::Windows::Forms::TextBox^ textBoxPurchasetotalPrice;
	private: System::Windows::Forms::TextBox^ textBoxPurchasepurchaseReference;
	private: System::Windows::Forms::TextBox^ textBoxPurchasepurchaseId;
	private: System::Windows::Forms::Button^ buttonSearchPurchase;
	private: System::Windows::Forms::Button^ buttonModifyPurchase;
	private: System::Windows::Forms::Button^ buttonRemovePurchase;
	private: System::Windows::Forms::Button^ buttonAddPurchase;
	private: System::Windows::Forms::TextBox^ textBoxArticlearticleTax;
	private: System::Windows::Forms::TextBox^ textBoxArticlearticleId;

	private: System::Windows::Forms::Button^ buttonSearchArticle;

	private: System::Windows::Forms::Button^ buttonModifyArticle;
	private: System::Windows::Forms::Button^ buttonRemoveArticle;


	private: System::Windows::Forms::Button^ buttonAddArticle;

	private: System::Windows::Forms::Label^ labelArticlearticleDescription;
	private: System::Windows::Forms::Label^ labelArticlearticleQuantity;
	private: System::Windows::Forms::Label^ labelArticlearticleTax;
	private: System::Windows::Forms::Label^ labelArticlearticleDenomination;
	private: System::Windows::Forms::Label^ labelArticlearticleReference;
private: System::Windows::Forms::Label^ labelArticlearticleId;

private: System::Windows::Forms::TextBox^ textBoxArticlearticleDescription;

private: System::Windows::Forms::TextBox^ textBoxArticlearticleQuantity;

private: System::Windows::Forms::TextBox^ textBoxArticlearticleDenomination;

private: System::Windows::Forms::TextBox^ textBoxArticlearticleReference;

	private: System::Windows::Forms::Button^ buttonClientValidation;
private: System::Windows::Forms::Label^ label1;
private: System::Windows::Forms::TextBox^ textBoxArticlereapprovalTreshold;

private: System::Windows::Forms::Label^ label2;
private: System::Windows::Forms::TextBox^ textBoxArticlearticlePrice;

private: System::Windows::Forms::Label^ label3;
private: System::Windows::Forms::TextBox^ textBoxArticlearticleValue;

private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
private: System::Windows::Forms::Label^ labelPurchasenumberOfPayment;
private: System::Windows::Forms::Label^ labelPurchasedeliveryDate;
private: System::Windows::Forms::Label^ labelPurchasepaymentIssueDate;
private: System::Windows::Forms::TextBox^ textBoxPurchasenumberOfPayment;

private: System::Windows::Forms::TextBox^ textBoxPurchasedeliveryDate;

private: System::Windows::Forms::TextBox^ textBoxPurchasepaymentIssueDate;

private: System::Windows::Forms::Label^ labelPurchasepersonFirstName;
private: System::Windows::Forms::Label^ labelPurchasepersonLastName;
private: System::Windows::Forms::Label^ labelPurchasepersonId;
private: System::Windows::Forms::TextBox^ textBoxPurchasepersonFirstName;

private: System::Windows::Forms::TextBox^ textBoxPurchasepersonLastName;

private: System::Windows::Forms::TextBox^ textBoxPurchasepersonId;
private: System::Windows::Forms::Button^ buttonEmployeeValidation;
private: System::Windows::Forms::DataGridView^ statsGrid;


private: System::Windows::Forms::Button^ buttonArticleValidation;
private: System::Windows::Forms::Button^ buttonPurchaseValidation;
private: System::Windows::Forms::Button^ buttonStats;

private: System::Windows::Forms::ComboBox^ comboBoxStats;
private: System::Windows::Forms::TextBox^ textBoxStats;
private: System::Windows::Forms::Label^ statsLabel1;

private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
private: System::Windows::Forms::Label^ statsLabel2;
private: System::Windows::Forms::Label^ labelClientclientId;
private: System::Windows::Forms::TextBox^ textBoxClientclientId;
private: System::Windows::Forms::Label^ labelEmployeeemployeeId;
private: System::Windows::Forms::TextBox^ textBoxEmployeeEmployeeId;
private: System::Windows::Forms::Panel^ panelClient;
private: System::Windows::Forms::Panel^ panel1;
private: System::Windows::Forms::Panel^ panel2;
private: System::Windows::Forms::Panel^ panel3;
private: System::Windows::Forms::Panel^ panel4;
private: System::Windows::Forms::TabPage^ tabArticlesInPurchase;











































private: System::Windows::Forms::DataGridView^ dataGridDisplayArticlesInPurchase;
private: System::Windows::Forms::Button^ buttonArticlesInPurchase;
private: System::Windows::Forms::TextBox^ textBoxEmployeeFirstName;













private: System::ComponentModel::IContainer^ components;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code Modifyor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->panelInterface = (gcnew System::Windows::Forms::Panel());
			this->panelDisplay = (gcnew System::Windows::Forms::Panel());
			this->tabController = (gcnew System::Windows::Forms::TabControl());
			this->tabLogin = (gcnew System::Windows::Forms::TabPage());
			this->panelLogin = (gcnew System::Windows::Forms::Panel());
			this->panelMainLogin = (gcnew System::Windows::Forms::Panel());
			this->labelPassword = (gcnew System::Windows::Forms::Label());
			this->textBoxUsername = (gcnew System::Windows::Forms::TextBox());
			this->panelCon2 = (gcnew System::Windows::Forms::Panel());
			this->labelUsername = (gcnew System::Windows::Forms::Label());
			this->textBoxPassword = (gcnew System::Windows::Forms::TextBox());
			this->panelCon1 = (gcnew System::Windows::Forms::Panel());
			this->buttonPressLogin = (gcnew System::Windows::Forms::Button());
			this->panelHeaderLogin = (gcnew System::Windows::Forms::Panel());
			this->labelTitleLogin = (gcnew System::Windows::Forms::Label());
			this->tabClient = (gcnew System::Windows::Forms::TabPage());
			this->panelClient = (gcnew System::Windows::Forms::Panel());
			this->buttonAddClient = (gcnew System::Windows::Forms::Button());
			this->buttonSearchClient = (gcnew System::Windows::Forms::Button());
			this->buttonRemoveClient = (gcnew System::Windows::Forms::Button());
			this->labelCLientBirthDate = (gcnew System::Windows::Forms::Label());
			this->labelClientclientId = (gcnew System::Windows::Forms::Label());
			this->textBoxClientBirthDate = (gcnew System::Windows::Forms::TextBox());
			this->textBoxClientLastName = (gcnew System::Windows::Forms::TextBox());
			this->textBoxClientclientId = (gcnew System::Windows::Forms::TextBox());
			this->labelClientFirstName = (gcnew System::Windows::Forms::Label());
			this->buttonModifyClient = (gcnew System::Windows::Forms::Button());
			this->labelClientLastName = (gcnew System::Windows::Forms::Label());
			this->buttonClientValidation = (gcnew System::Windows::Forms::Button());
			this->textBoxClientFirstName = (gcnew System::Windows::Forms::TextBox());
			this->textBoxClientpersonId = (gcnew System::Windows::Forms::TextBox());
			this->textBoxClientCompanyName = (gcnew System::Windows::Forms::TextBox());
			this->labelClientCompanyName = (gcnew System::Windows::Forms::Label());
			this->labelClientpersonId = (gcnew System::Windows::Forms::Label());
			this->dataGridDisplayClient = (gcnew System::Windows::Forms::DataGridView());
			this->tabEmployee = (gcnew System::Windows::Forms::TabPage());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->textBoxEmployeePersonId = (gcnew System::Windows::Forms::TextBox());
			this->labelEmployeeemployeeId = (gcnew System::Windows::Forms::Label());
			this->textBoxEmployeeEmployeeId = (gcnew System::Windows::Forms::TextBox());
			this->buttonEmployeeValidation = (gcnew System::Windows::Forms::Button());
			this->textBoxEmployeeLastName = (gcnew System::Windows::Forms::TextBox());
			this->buttonSearchEmployee = (gcnew System::Windows::Forms::Button());
			this->textBoxEmployeehiringDate = (gcnew System::Windows::Forms::TextBox());
			this->buttonModifyEmployee = (gcnew System::Windows::Forms::Button());
			this->textBoxEmployeeBirthDate = (gcnew System::Windows::Forms::TextBox());
			this->buttonRemoveEmployee = (gcnew System::Windows::Forms::Button());
			this->textBoxEmployeeemployeeRank = (gcnew System::Windows::Forms::TextBox());
			this->buttonAddEmployee = (gcnew System::Windows::Forms::Button());
			this->labelEmployeepersonId = (gcnew System::Windows::Forms::Label());
			this->labelEmployeehiringDate = (gcnew System::Windows::Forms::Label());
			this->labelEmployeeFirstName = (gcnew System::Windows::Forms::Label());
			this->labelEmployeeemployeeRank = (gcnew System::Windows::Forms::Label());
			this->labelEmployeeLastName = (gcnew System::Windows::Forms::Label());
			this->labelEmployeeBirthDate = (gcnew System::Windows::Forms::Label());
			this->dataGridDisplayEmployee = (gcnew System::Windows::Forms::DataGridView());
			this->tabPurchase = (gcnew System::Windows::Forms::TabPage());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->buttonArticlesInPurchase = (gcnew System::Windows::Forms::Button());
			this->buttonAddPurchase = (gcnew System::Windows::Forms::Button());
			this->buttonPurchaseValidation = (gcnew System::Windows::Forms::Button());
			this->buttonModifyPurchase = (gcnew System::Windows::Forms::Button());
			this->labelPurchasepersonFirstName = (gcnew System::Windows::Forms::Label());
			this->buttonSearchPurchase = (gcnew System::Windows::Forms::Button());
			this->labelPurchasenumberOfPayment = (gcnew System::Windows::Forms::Label());
			this->buttonRemovePurchase = (gcnew System::Windows::Forms::Button());
			this->labelPurchasepersonLastName = (gcnew System::Windows::Forms::Label());
			this->textBoxPurchasepurchaseId = (gcnew System::Windows::Forms::TextBox());
			this->labelPurchasepurchaseDate = (gcnew System::Windows::Forms::Label());
			this->textBoxPurchasepurchaseReference = (gcnew System::Windows::Forms::TextBox());
			this->labelPurchasedeliveryDate = (gcnew System::Windows::Forms::Label());
			this->textBoxPurchasetotalPrice = (gcnew System::Windows::Forms::TextBox());
			this->labelPurchasepurchaseTotalWithTax = (gcnew System::Windows::Forms::Label());
			this->textBoxPurchasepurchaseTax = (gcnew System::Windows::Forms::TextBox());
			this->labelPurchasepaymentIssueDate = (gcnew System::Windows::Forms::Label());
			this->textBoxPurchasepersonId = (gcnew System::Windows::Forms::TextBox());
			this->labelPurchasepurchaseTax = (gcnew System::Windows::Forms::Label());
			this->textBoxPurchasepurchaseTotalWithTax = (gcnew System::Windows::Forms::TextBox());
			this->labelPurchasepersonId = (gcnew System::Windows::Forms::Label());
			this->textBoxPurchasepaymentIssueDate = (gcnew System::Windows::Forms::TextBox());
			this->labelPurchasetotalPrice = (gcnew System::Windows::Forms::Label());
			this->textBoxPurchasepurchaseDate = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPurchasepersonFirstName = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPurchasedeliveryDate = (gcnew System::Windows::Forms::TextBox());
			this->labelPurchasepurchaseReference = (gcnew System::Windows::Forms::Label());
			this->textBoxPurchasepersonLastName = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPurchasenumberOfPayment = (gcnew System::Windows::Forms::TextBox());
			this->labelPurchasepurchaseId = (gcnew System::Windows::Forms::Label());
			this->dataGridDisplayPurchase = (gcnew System::Windows::Forms::DataGridView());
			this->tabStatistics = (gcnew System::Windows::Forms::TabPage());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->statsLabel1 = (gcnew System::Windows::Forms::Label());
			this->statsLabel2 = (gcnew System::Windows::Forms::Label());
			this->comboBoxStats = (gcnew System::Windows::Forms::ComboBox());
			this->buttonStats = (gcnew System::Windows::Forms::Button());
			this->textBoxStats = (gcnew System::Windows::Forms::TextBox());
			this->statsGrid = (gcnew System::Windows::Forms::DataGridView());
			this->tabHelp = (gcnew System::Windows::Forms::TabPage());
			this->tabArticle = (gcnew System::Windows::Forms::TabPage());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->buttonAddArticle = (gcnew System::Windows::Forms::Button());
			this->labelArticlearticleDescription = (gcnew System::Windows::Forms::Label());
			this->buttonArticleValidation = (gcnew System::Windows::Forms::Button());
			this->labelArticlearticleQuantity = (gcnew System::Windows::Forms::Label());
			this->buttonModifyArticle = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->buttonSearchArticle = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->buttonRemoveArticle = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->labelArticlearticleDenomination = (gcnew System::Windows::Forms::Label());
			this->labelArticlearticleTax = (gcnew System::Windows::Forms::Label());
			this->textBoxArticlearticleId = (gcnew System::Windows::Forms::TextBox());
			this->textBoxArticlearticleReference = (gcnew System::Windows::Forms::TextBox());
			this->labelArticlearticleReference = (gcnew System::Windows::Forms::Label());
			this->textBoxArticlearticleDenomination = (gcnew System::Windows::Forms::TextBox());
			this->textBoxArticlearticleValue = (gcnew System::Windows::Forms::TextBox());
			this->textBoxArticlearticleTax = (gcnew System::Windows::Forms::TextBox());
			this->labelArticlearticleId = (gcnew System::Windows::Forms::Label());
			this->textBoxArticlearticleQuantity = (gcnew System::Windows::Forms::TextBox());
			this->textBoxArticlearticlePrice = (gcnew System::Windows::Forms::TextBox());
			this->textBoxArticlereapprovalTreshold = (gcnew System::Windows::Forms::TextBox());
			this->textBoxArticlearticleDescription = (gcnew System::Windows::Forms::TextBox());
			this->dataGridDisplayArticle = (gcnew System::Windows::Forms::DataGridView());
			this->tabPageHome = (gcnew System::Windows::Forms::TabPage());
			this->tabArticlesInPurchase = (gcnew System::Windows::Forms::TabPage());
			this->dataGridDisplayArticlesInPurchase = (gcnew System::Windows::Forms::DataGridView());
			this->panelNavigation = (gcnew System::Windows::Forms::Panel());
			this->panelButtonHelp = (gcnew System::Windows::Forms::Panel());
			this->buttonHelp = (gcnew System::Windows::Forms::Button());
			this->panelButtonNavigation = (gcnew System::Windows::Forms::Panel());
			this->panelButtonNavigationStatistics = (gcnew System::Windows::Forms::Panel());
			this->buttonStatistics = (gcnew System::Windows::Forms::Button());
			this->panelButtonNavigationPurchase = (gcnew System::Windows::Forms::Panel());
			this->buttonPurchase = (gcnew System::Windows::Forms::Button());
			this->panelButtonNavigationArticle = (gcnew System::Windows::Forms::Panel());
			this->buttonArticle = (gcnew System::Windows::Forms::Button());
			this->panelButtonNavigationEmployee = (gcnew System::Windows::Forms::Panel());
			this->buttonEmployee = (gcnew System::Windows::Forms::Button());
			this->panelButtonNavigationClient = (gcnew System::Windows::Forms::Panel());
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
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->textBoxEmployeeFirstName = (gcnew System::Windows::Forms::TextBox());
			this->panelInterface->SuspendLayout();
			this->panelDisplay->SuspendLayout();
			this->tabController->SuspendLayout();
			this->tabLogin->SuspendLayout();
			this->panelLogin->SuspendLayout();
			this->panelMainLogin->SuspendLayout();
			this->panelCon2->SuspendLayout();
			this->panelHeaderLogin->SuspendLayout();
			this->tabClient->SuspendLayout();
			this->panelClient->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridDisplayClient))->BeginInit();
			this->tabEmployee->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridDisplayEmployee))->BeginInit();
			this->tabPurchase->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridDisplayPurchase))->BeginInit();
			this->tabStatistics->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->statsGrid))->BeginInit();
			this->tabArticle->SuspendLayout();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridDisplayArticle))->BeginInit();
			this->tabArticlesInPurchase->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridDisplayArticlesInPurchase))->BeginInit();
			this->panelNavigation->SuspendLayout();
			this->panelButtonHelp->SuspendLayout();
			this->panelButtonNavigation->SuspendLayout();
			this->panelButtonNavigationStatistics->SuspendLayout();
			this->panelButtonNavigationPurchase->SuspendLayout();
			this->panelButtonNavigationArticle->SuspendLayout();
			this->panelButtonNavigationEmployee->SuspendLayout();
			this->panelButtonNavigationClient->SuspendLayout();
			this->panelLogo->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Logo))->BeginInit();
			this->panelHeader->SuspendLayout();
			this->panelControlButton->SuspendLayout();
			this->SuspendLayout();
			// 
			// panelInterface
			// 
			this->panelInterface->Controls->Add(this->panelDisplay);
			this->panelInterface->Controls->Add(this->panelNavigation);
			this->panelInterface->Controls->Add(this->panelHeader);
			this->panelInterface->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelInterface->Location = System::Drawing::Point(0, 0);
			this->panelInterface->Margin = System::Windows::Forms::Padding(1, 3, 1, 3);
			this->panelInterface->Name = L"panelInterface";
			this->panelInterface->Size = System::Drawing::Size(1918, 1628);
			this->panelInterface->TabIndex = 0;
			// 
			// panelDisplay
			// 
			this->panelDisplay->BackColor = System::Drawing::Color::LightSlateGray;
			this->panelDisplay->Controls->Add(this->tabController);
			this->panelDisplay->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelDisplay->Location = System::Drawing::Point(300, 51);
			this->panelDisplay->Margin = System::Windows::Forms::Padding(0);
			this->panelDisplay->Name = L"panelDisplay";
			this->panelDisplay->Size = System::Drawing::Size(1618, 1577);
			this->panelDisplay->TabIndex = 3;
			// 
			// tabController
			// 
			this->tabController->Controls->Add(this->tabLogin);
			this->tabController->Controls->Add(this->tabClient);
			this->tabController->Controls->Add(this->tabEmployee);
			this->tabController->Controls->Add(this->tabPurchase);
			this->tabController->Controls->Add(this->tabStatistics);
			this->tabController->Controls->Add(this->tabHelp);
			this->tabController->Controls->Add(this->tabArticle);
			this->tabController->Controls->Add(this->tabPageHome);
			this->tabController->Controls->Add(this->tabArticlesInPurchase);
			this->tabController->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabController->Location = System::Drawing::Point(0, 0);
			this->tabController->Margin = System::Windows::Forms::Padding(1, 3, 1, 3);
			this->tabController->Multiline = true;
			this->tabController->Name = L"tabController";
			this->tabController->SelectedIndex = 0;
			this->tabController->Size = System::Drawing::Size(1618, 1577);
			this->tabController->TabIndex = 0;
			// 
			// tabLogin
			// 
			this->tabLogin->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(243)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->tabLogin->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->tabLogin->Controls->Add(this->panelLogin);
			this->tabLogin->ForeColor = System::Drawing::Color::Black;
			this->tabLogin->Location = System::Drawing::Point(4, 33);
			this->tabLogin->Margin = System::Windows::Forms::Padding(1, 3, 1, 3);
			this->tabLogin->Name = L"tabLogin";
			this->tabLogin->Padding = System::Windows::Forms::Padding(1, 3, 1, 3);
			this->tabLogin->Size = System::Drawing::Size(1610, 1540);
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
			this->panelLogin->Location = System::Drawing::Point(412, 488);
			this->panelLogin->Margin = System::Windows::Forms::Padding(1, 3, 1, 3);
			this->panelLogin->Name = L"panelLogin";
			this->panelLogin->Size = System::Drawing::Size(808, 540);
			this->panelLogin->TabIndex = 0;
			// 
			// panelMainLogin
			// 
			this->panelMainLogin->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->panelMainLogin->Controls->Add(this->labelPassword);
			this->panelMainLogin->Controls->Add(this->textBoxUsername);
			this->panelMainLogin->Controls->Add(this->panelCon2);
			this->panelMainLogin->Controls->Add(this->textBoxPassword);
			this->panelMainLogin->Controls->Add(this->panelCon1);
			this->panelMainLogin->Controls->Add(this->buttonPressLogin);
			this->panelMainLogin->Location = System::Drawing::Point(43, 123);
			this->panelMainLogin->Margin = System::Windows::Forms::Padding(1, 3, 1, 3);
			this->panelMainLogin->Name = L"panelMainLogin";
			this->panelMainLogin->Size = System::Drawing::Size(727, 330);
			this->panelMainLogin->TabIndex = 1;
			// 
			// labelPassword
			// 
			this->labelPassword->AutoSize = true;
			this->labelPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelPassword->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->labelPassword->Location = System::Drawing::Point(3, 105);
			this->labelPassword->Name = L"labelPassword";
			this->labelPassword->Size = System::Drawing::Size(199, 35);
			this->labelPassword->TabIndex = 1;
			this->labelPassword->Text = L"      Password";
			this->labelPassword->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBoxUsername
			// 
			this->textBoxUsername->Dock = System::Windows::Forms::DockStyle::Top;
			this->textBoxUsername->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxUsername->ForeColor = System::Drawing::Color::Black;
			this->textBoxUsername->Location = System::Drawing::Point(0, 48);
			this->textBoxUsername->Margin = System::Windows::Forms::Padding(1, 3, 1, 3);
			this->textBoxUsername->Name = L"textBoxUsername";
			this->textBoxUsername->Size = System::Drawing::Size(727, 39);
			this->textBoxUsername->TabIndex = 3;
			// 
			// panelCon2
			// 
			this->panelCon2->AccessibleDescription = L"";
			this->panelCon2->AccessibleName = L"";
			this->panelCon2->Controls->Add(this->labelUsername);
			this->panelCon2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelCon2->Location = System::Drawing::Point(0, 0);
			this->panelCon2->Margin = System::Windows::Forms::Padding(1, 3, 1, 3);
			this->panelCon2->Name = L"panelCon2";
			this->panelCon2->Size = System::Drawing::Size(727, 48);
			this->panelCon2->TabIndex = 4;
			// 
			// labelUsername
			// 
			this->labelUsername->AutoSize = true;
			this->labelUsername->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelUsername->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->labelUsername->Location = System::Drawing::Point(3, 9);
			this->labelUsername->Name = L"labelUsername";
			this->labelUsername->Size = System::Drawing::Size(204, 35);
			this->labelUsername->TabIndex = 0;
			this->labelUsername->Text = L"      Username";
			this->labelUsername->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBoxPassword
			// 
			this->textBoxPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxPassword->ForeColor = System::Drawing::Color::Black;
			this->textBoxPassword->Location = System::Drawing::Point(0, 147);
			this->textBoxPassword->Margin = System::Windows::Forms::Padding(1, 3, 1, 3);
			this->textBoxPassword->Name = L"textBoxPassword";
			this->textBoxPassword->PasswordChar = '*';
			this->textBoxPassword->Size = System::Drawing::Size(724, 39);
			this->textBoxPassword->TabIndex = 3;
			this->textBoxPassword->UseSystemPasswordChar = true;
			// 
			// panelCon1
			// 
			this->panelCon1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panelCon1->Location = System::Drawing::Point(0, 180);
			this->panelCon1->Margin = System::Windows::Forms::Padding(1, 3, 1, 3);
			this->panelCon1->Name = L"panelCon1";
			this->panelCon1->Size = System::Drawing::Size(727, 69);
			this->panelCon1->TabIndex = 1;
			// 
			// buttonPressLogin
			// 
			this->buttonPressLogin->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(63)),
				static_cast<System::Int32>(static_cast<System::Byte>(78)));
			this->buttonPressLogin->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->buttonPressLogin->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonPressLogin->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(243)),
				static_cast<System::Int32>(static_cast<System::Byte>(245)), static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->buttonPressLogin->Location = System::Drawing::Point(0, 249);
			this->buttonPressLogin->Margin = System::Windows::Forms::Padding(1, 3, 1, 3);
			this->buttonPressLogin->Name = L"buttonPressLogin";
			this->buttonPressLogin->Size = System::Drawing::Size(727, 81);
			this->buttonPressLogin->TabIndex = 0;
			this->buttonPressLogin->Text = L"LOGIN";
			this->buttonPressLogin->UseVisualStyleBackColor = false;
			this->buttonPressLogin->Click += gcnew System::EventHandler(this, &Interface::buttonPressLogin_Click);
			// 
			// panelHeaderLogin
			// 
			this->panelHeaderLogin->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->panelHeaderLogin->AutoSize = true;
			this->panelHeaderLogin->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(63)),
				static_cast<System::Int32>(static_cast<System::Byte>(78)));
			this->panelHeaderLogin->Controls->Add(this->labelTitleLogin);
			this->panelHeaderLogin->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panelHeaderLogin->Location = System::Drawing::Point(0, 3);
			this->panelHeaderLogin->Margin = System::Windows::Forms::Padding(1, 3, 1, 3);
			this->panelHeaderLogin->Name = L"panelHeaderLogin";
			this->panelHeaderLogin->Size = System::Drawing::Size(808, 81);
			this->panelHeaderLogin->TabIndex = 0;
			// 
			// labelTitleLogin
			// 
			this->labelTitleLogin->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->labelTitleLogin->AutoSize = true;
			this->labelTitleLogin->BackColor = System::Drawing::Color::Transparent;
			this->labelTitleLogin->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelTitleLogin->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(243)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->labelTitleLogin->Location = System::Drawing::Point(318, 15);
			this->labelTitleLogin->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->labelTitleLogin->Name = L"labelTitleLogin";
			this->labelTitleLogin->Size = System::Drawing::Size(177, 40);
			this->labelTitleLogin->TabIndex = 0;
			this->labelTitleLogin->Text = L"User Login";
			// 
			// tabClient
			// 
			this->tabClient->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(243)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->tabClient->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tabClient->Controls->Add(this->panelClient);
			this->tabClient->Controls->Add(this->dataGridDisplayClient);
			this->tabClient->Location = System::Drawing::Point(4, 33);
			this->tabClient->Name = L"tabClient";
			this->tabClient->Padding = System::Windows::Forms::Padding(3);
			this->tabClient->Size = System::Drawing::Size(1610, 1540);
			this->tabClient->TabIndex = 22;
			this->tabClient->Text = L"tabClient";
			// 
			// panelClient
			// 
			this->panelClient->Controls->Add(this->buttonAddClient);
			this->panelClient->Controls->Add(this->buttonSearchClient);
			this->panelClient->Controls->Add(this->buttonRemoveClient);
			this->panelClient->Controls->Add(this->labelCLientBirthDate);
			this->panelClient->Controls->Add(this->labelClientclientId);
			this->panelClient->Controls->Add(this->textBoxClientBirthDate);
			this->panelClient->Controls->Add(this->textBoxClientLastName);
			this->panelClient->Controls->Add(this->textBoxClientclientId);
			this->panelClient->Controls->Add(this->labelClientFirstName);
			this->panelClient->Controls->Add(this->buttonModifyClient);
			this->panelClient->Controls->Add(this->labelClientLastName);
			this->panelClient->Controls->Add(this->buttonClientValidation);
			this->panelClient->Controls->Add(this->textBoxClientFirstName);
			this->panelClient->Controls->Add(this->textBoxClientpersonId);
			this->panelClient->Controls->Add(this->textBoxClientCompanyName);
			this->panelClient->Controls->Add(this->labelClientCompanyName);
			this->panelClient->Controls->Add(this->labelClientpersonId);
			this->panelClient->Location = System::Drawing::Point(208, 654);
			this->panelClient->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->panelClient->Name = L"panelClient";
			this->panelClient->Size = System::Drawing::Size(764, 360);
			this->panelClient->TabIndex = 24;
			// 
			// buttonAddClient
			// 
			this->buttonAddClient->BackColor = System::Drawing::Color::Transparent;
			this->buttonAddClient->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonAddClient->FlatAppearance->BorderSize = 0;
			this->buttonAddClient->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->buttonAddClient->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->buttonAddClient->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonAddClient->Location = System::Drawing::Point(104, 18);
			this->buttonAddClient->Name = L"buttonAddClient";
			this->buttonAddClient->Size = System::Drawing::Size(82, 75);
			this->buttonAddClient->TabIndex = 19;
			this->buttonAddClient->UseVisualStyleBackColor = false;
			this->buttonAddClient->Click += gcnew System::EventHandler(this, &Interface::buttonAddClient_Click);
			// 
			// buttonSearchClient
			// 
			this->buttonSearchClient->BackColor = System::Drawing::Color::Transparent;
			this->buttonSearchClient->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonSearchClient->FlatAppearance->BorderSize = 0;
			this->buttonSearchClient->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->buttonSearchClient->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->buttonSearchClient->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonSearchClient->ForeColor = System::Drawing::Color::Transparent;
			this->buttonSearchClient->Location = System::Drawing::Point(18, 18);
			this->buttonSearchClient->Name = L"buttonSearchClient";
			this->buttonSearchClient->Size = System::Drawing::Size(82, 75);
			this->buttonSearchClient->TabIndex = 20;
			this->buttonSearchClient->UseVisualStyleBackColor = false;
			this->buttonSearchClient->Click += gcnew System::EventHandler(this, &Interface::buttonSearchClient_Click);
			// 
			// buttonRemoveClient
			// 
			this->buttonRemoveClient->BackColor = System::Drawing::Color::Transparent;
			this->buttonRemoveClient->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonRemoveClient->FlatAppearance->BorderSize = 0;
			this->buttonRemoveClient->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->buttonRemoveClient->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->buttonRemoveClient->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonRemoveClient->Location = System::Drawing::Point(279, 18);
			this->buttonRemoveClient->Name = L"buttonRemoveClient";
			this->buttonRemoveClient->Size = System::Drawing::Size(82, 75);
			this->buttonRemoveClient->TabIndex = 21;
			this->buttonRemoveClient->UseVisualStyleBackColor = false;
			this->buttonRemoveClient->Click += gcnew System::EventHandler(this, &Interface::buttonRemoveClient_Click);
			// 
			// labelCLientBirthDate
			// 
			this->labelCLientBirthDate->AutoSize = true;
			this->labelCLientBirthDate->BackColor = System::Drawing::Color::Transparent;
			this->labelCLientBirthDate->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelCLientBirthDate->Location = System::Drawing::Point(282, 184);
			this->labelCLientBirthDate->Name = L"labelCLientBirthDate";
			this->labelCLientBirthDate->Size = System::Drawing::Size(100, 22);
			this->labelCLientBirthDate->TabIndex = 11;
			this->labelCLientBirthDate->Text = L"Birth Date";
			// 
			// labelClientclientId
			// 
			this->labelClientclientId->AutoSize = true;
			this->labelClientclientId->BackColor = System::Drawing::Color::Transparent;
			this->labelClientclientId->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelClientclientId->Location = System::Drawing::Point(14, 184);
			this->labelClientclientId->Name = L"labelClientclientId";
			this->labelClientclientId->Size = System::Drawing::Size(85, 22);
			this->labelClientclientId->TabIndex = 23;
			this->labelClientclientId->Text = L"Client Id";
			// 
			// textBoxClientBirthDate
			// 
			this->textBoxClientBirthDate->Location = System::Drawing::Point(280, 216);
			this->textBoxClientBirthDate->Name = L"textBoxClientBirthDate";
			this->textBoxClientBirthDate->Size = System::Drawing::Size(201, 29);
			this->textBoxClientBirthDate->TabIndex = 94;
			// 
			// textBoxClientLastName
			// 
			this->textBoxClientLastName->Location = System::Drawing::Point(547, 126);
			this->textBoxClientLastName->Name = L"textBoxClientLastName";
			this->textBoxClientLastName->Size = System::Drawing::Size(201, 29);
			this->textBoxClientLastName->TabIndex = 92;
			// 
			// textBoxClientclientId
			// 
			this->textBoxClientclientId->Location = System::Drawing::Point(12, 216);
			this->textBoxClientclientId->Name = L"textBoxClientclientId";
			this->textBoxClientclientId->Size = System::Drawing::Size(201, 29);
			this->textBoxClientclientId->TabIndex = 93;
			// 
			// labelClientFirstName
			// 
			this->labelClientFirstName->AutoSize = true;
			this->labelClientFirstName->BackColor = System::Drawing::Color::Transparent;
			this->labelClientFirstName->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelClientFirstName->Location = System::Drawing::Point(282, 96);
			this->labelClientFirstName->Name = L"labelClientFirstName";
			this->labelClientFirstName->Size = System::Drawing::Size(103, 22);
			this->labelClientFirstName->TabIndex = 9;
			this->labelClientFirstName->Text = L"First Name";
			// 
			// buttonModifyClient
			// 
			this->buttonModifyClient->BackColor = System::Drawing::Color::Transparent;
			this->buttonModifyClient->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonModifyClient->FlatAppearance->BorderSize = 0;
			this->buttonModifyClient->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->buttonModifyClient->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->buttonModifyClient->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonModifyClient->Location = System::Drawing::Point(192, 18);
			this->buttonModifyClient->Name = L"buttonModifyClient";
			this->buttonModifyClient->Size = System::Drawing::Size(82, 75);
			this->buttonModifyClient->TabIndex = 17;
			this->buttonModifyClient->UseVisualStyleBackColor = false;
			this->buttonModifyClient->Click += gcnew System::EventHandler(this, &Interface::buttonModifyClient_Click);
			// 
			// labelClientLastName
			// 
			this->labelClientLastName->AutoSize = true;
			this->labelClientLastName->BackColor = System::Drawing::Color::Transparent;
			this->labelClientLastName->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelClientLastName->Location = System::Drawing::Point(549, 96);
			this->labelClientLastName->Name = L"labelClientLastName";
			this->labelClientLastName->Size = System::Drawing::Size(107, 22);
			this->labelClientLastName->TabIndex = 13;
			this->labelClientLastName->Text = L"Last Name";
			// 
			// buttonClientValidation
			// 
			this->buttonClientValidation->BackColor = System::Drawing::Color::Transparent;
			this->buttonClientValidation->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonClientValidation->FlatAppearance->BorderSize = 0;
			this->buttonClientValidation->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->buttonClientValidation->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->buttonClientValidation->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonClientValidation->Location = System::Drawing::Point(667, 18);
			this->buttonClientValidation->Name = L"buttonClientValidation";
			this->buttonClientValidation->Size = System::Drawing::Size(82, 75);
			this->buttonClientValidation->TabIndex = 16;
			this->buttonClientValidation->UseVisualStyleBackColor = false;
			this->buttonClientValidation->Click += gcnew System::EventHandler(this, &Interface::buttonClientValidation_Click);
			// 
			// textBoxClientFirstName
			// 
			this->textBoxClientFirstName->Location = System::Drawing::Point(280, 126);
			this->textBoxClientFirstName->Name = L"textBoxClientFirstName";
			this->textBoxClientFirstName->Size = System::Drawing::Size(201, 29);
			this->textBoxClientFirstName->TabIndex = 91;
			// 
			// textBoxClientpersonId
			// 
			this->textBoxClientpersonId->Location = System::Drawing::Point(12, 126);
			this->textBoxClientpersonId->Name = L"textBoxClientpersonId";
			this->textBoxClientpersonId->Size = System::Drawing::Size(201, 29);
			this->textBoxClientpersonId->TabIndex = 90;
			// 
			// textBoxClientCompanyName
			// 
			this->textBoxClientCompanyName->Location = System::Drawing::Point(547, 216);
			this->textBoxClientCompanyName->Name = L"textBoxClientCompanyName";
			this->textBoxClientCompanyName->Size = System::Drawing::Size(201, 29);
			this->textBoxClientCompanyName->TabIndex = 95;
			// 
			// labelClientCompanyName
			// 
			this->labelClientCompanyName->AutoSize = true;
			this->labelClientCompanyName->BackColor = System::Drawing::Color::Transparent;
			this->labelClientCompanyName->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelClientCompanyName->Location = System::Drawing::Point(550, 184);
			this->labelClientCompanyName->Name = L"labelClientCompanyName";
			this->labelClientCompanyName->Size = System::Drawing::Size(164, 22);
			this->labelClientCompanyName->TabIndex = 15;
			this->labelClientCompanyName->Text = L"Company Name";
			// 
			// labelClientpersonId
			// 
			this->labelClientpersonId->AutoSize = true;
			this->labelClientpersonId->BackColor = System::Drawing::Color::Transparent;
			this->labelClientpersonId->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelClientpersonId->Location = System::Drawing::Point(14, 94);
			this->labelClientpersonId->Name = L"labelClientpersonId";
			this->labelClientpersonId->Size = System::Drawing::Size(93, 22);
			this->labelClientpersonId->TabIndex = 5;
			this->labelClientpersonId->Text = L"Person Id";
			// 
			// dataGridDisplayClient
			// 
			this->dataGridDisplayClient->AllowUserToAddRows = false;
			this->dataGridDisplayClient->AllowUserToDeleteRows = false;
			this->dataGridDisplayClient->AllowUserToOrderColumns = true;
			this->dataGridDisplayClient->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridDisplayClient->EditMode = System::Windows::Forms::DataGridViewEditMode::EditOnF2;
			this->dataGridDisplayClient->Location = System::Drawing::Point(40, 33);
			this->dataGridDisplayClient->Name = L"dataGridDisplayClient";
			this->dataGridDisplayClient->ReadOnly = true;
			this->dataGridDisplayClient->RowHeadersWidth = 72;
			this->dataGridDisplayClient->RowTemplate->Height = 31;
			this->dataGridDisplayClient->ShowCellToolTips = false;
			this->dataGridDisplayClient->ShowEditingIcon = false;
			this->dataGridDisplayClient->Size = System::Drawing::Size(1063, 600);
			this->dataGridDisplayClient->TabIndex = 18;
			this->dataGridDisplayClient->TabStop = false;
			// 
			// tabEmployee
			// 
			this->tabEmployee->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(243)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->tabEmployee->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tabEmployee->Controls->Add(this->panel1);
			this->tabEmployee->Controls->Add(this->dataGridDisplayEmployee);
			this->tabEmployee->Location = System::Drawing::Point(4, 33);
			this->tabEmployee->Name = L"tabEmployee";
			this->tabEmployee->Padding = System::Windows::Forms::Padding(3);
			this->tabEmployee->Size = System::Drawing::Size(1610, 1540);
			this->tabEmployee->TabIndex = 10;
			this->tabEmployee->Text = L"tabEmployee";
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->textBoxEmployeePersonId);
			this->panel1->Controls->Add(this->labelEmployeeemployeeId);
			this->panel1->Controls->Add(this->textBoxEmployeeEmployeeId);
			this->panel1->Controls->Add(this->textBoxEmployeeFirstName);
			this->panel1->Controls->Add(this->buttonEmployeeValidation);
			this->panel1->Controls->Add(this->textBoxEmployeeLastName);
			this->panel1->Controls->Add(this->buttonSearchEmployee);
			this->panel1->Controls->Add(this->textBoxEmployeehiringDate);
			this->panel1->Controls->Add(this->buttonModifyEmployee);
			this->panel1->Controls->Add(this->textBoxEmployeeBirthDate);
			this->panel1->Controls->Add(this->buttonRemoveEmployee);
			this->panel1->Controls->Add(this->textBoxEmployeeemployeeRank);
			this->panel1->Controls->Add(this->buttonAddEmployee);
			this->panel1->Controls->Add(this->labelEmployeepersonId);
			this->panel1->Controls->Add(this->labelEmployeehiringDate);
			this->panel1->Controls->Add(this->labelEmployeeFirstName);
			this->panel1->Controls->Add(this->labelEmployeeemployeeRank);
			this->panel1->Controls->Add(this->labelEmployeeLastName);
			this->panel1->Controls->Add(this->labelEmployeeBirthDate);
			this->panel1->Location = System::Drawing::Point(208, 654);
			this->panel1->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(764, 360);
			this->panel1->TabIndex = 41;
			// 
			// textBoxEmployeePersonId
			// 
			this->textBoxEmployeePersonId->Location = System::Drawing::Point(12, 126);
			this->textBoxEmployeePersonId->Name = L"textBoxEmployeePersonId";
			this->textBoxEmployeePersonId->Size = System::Drawing::Size(201, 29);
			this->textBoxEmployeePersonId->TabIndex = 100;
			// 
			// labelEmployeeemployeeId
			// 
			this->labelEmployeeemployeeId->AutoSize = true;
			this->labelEmployeeemployeeId->BackColor = System::Drawing::Color::Transparent;
			this->labelEmployeeemployeeId->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelEmployeeemployeeId->Location = System::Drawing::Point(14, 184);
			this->labelEmployeeemployeeId->Name = L"labelEmployeeemployeeId";
			this->labelEmployeeemployeeId->Size = System::Drawing::Size(123, 22);
			this->labelEmployeeemployeeId->TabIndex = 40;
			this->labelEmployeeemployeeId->Text = L"Employee Id";
			// 
			// textBoxEmployeeEmployeeId
			// 
			this->textBoxEmployeeEmployeeId->Location = System::Drawing::Point(12, 216);
			this->textBoxEmployeeEmployeeId->Name = L"textBoxEmployeeEmployeeId";
			this->textBoxEmployeeEmployeeId->Size = System::Drawing::Size(201, 29);
			this->textBoxEmployeeEmployeeId->TabIndex = 103;
			// 
			// buttonEmployeeValidation
			// 
			this->buttonEmployeeValidation->BackColor = System::Drawing::Color::Transparent;
			this->buttonEmployeeValidation->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonEmployeeValidation->FlatAppearance->BorderSize = 0;
			this->buttonEmployeeValidation->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->buttonEmployeeValidation->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->buttonEmployeeValidation->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonEmployeeValidation->Location = System::Drawing::Point(667, 18);
			this->buttonEmployeeValidation->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->buttonEmployeeValidation->Name = L"buttonEmployeeValidation";
			this->buttonEmployeeValidation->Size = System::Drawing::Size(82, 75);
			this->buttonEmployeeValidation->TabIndex = 9;
			this->buttonEmployeeValidation->UseVisualStyleBackColor = false;
			this->buttonEmployeeValidation->Click += gcnew System::EventHandler(this, &Interface::buttonEmployeeValidation_Click);
			// 
			// textBoxEmployeeLastName
			// 
			this->textBoxEmployeeLastName->Location = System::Drawing::Point(547, 126);
			this->textBoxEmployeeLastName->Name = L"textBoxEmployeeLastName";
			this->textBoxEmployeeLastName->Size = System::Drawing::Size(201, 29);
			this->textBoxEmployeeLastName->TabIndex = 102;
			// 
			// buttonSearchEmployee
			// 
			this->buttonSearchEmployee->BackColor = System::Drawing::Color::Transparent;
			this->buttonSearchEmployee->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonSearchEmployee->FlatAppearance->BorderSize = 0;
			this->buttonSearchEmployee->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->buttonSearchEmployee->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->buttonSearchEmployee->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonSearchEmployee->Location = System::Drawing::Point(18, 18);
			this->buttonSearchEmployee->Name = L"buttonSearchEmployee";
			this->buttonSearchEmployee->Size = System::Drawing::Size(82, 75);
			this->buttonSearchEmployee->TabIndex = 8;
			this->buttonSearchEmployee->UseVisualStyleBackColor = false;
			this->buttonSearchEmployee->Click += gcnew System::EventHandler(this, &Interface::buttonSearchEmployee_Click);
			// 
			// textBoxEmployeehiringDate
			// 
			this->textBoxEmployeehiringDate->Location = System::Drawing::Point(280, 216);
			this->textBoxEmployeehiringDate->Name = L"textBoxEmployeehiringDate";
			this->textBoxEmployeehiringDate->Size = System::Drawing::Size(201, 29);
			this->textBoxEmployeehiringDate->TabIndex = 104;
			// 
			// buttonModifyEmployee
			// 
			this->buttonModifyEmployee->BackColor = System::Drawing::Color::Transparent;
			this->buttonModifyEmployee->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonModifyEmployee->FlatAppearance->BorderSize = 0;
			this->buttonModifyEmployee->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->buttonModifyEmployee->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->buttonModifyEmployee->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonModifyEmployee->Location = System::Drawing::Point(192, 18);
			this->buttonModifyEmployee->Name = L"buttonModifyEmployee";
			this->buttonModifyEmployee->Size = System::Drawing::Size(82, 75);
			this->buttonModifyEmployee->TabIndex = 7;
			this->buttonModifyEmployee->UseVisualStyleBackColor = false;
			this->buttonModifyEmployee->Click += gcnew System::EventHandler(this, &Interface::buttonModifyEmployee_Click);
			// 
			// textBoxEmployeeBirthDate
			// 
			this->textBoxEmployeeBirthDate->Location = System::Drawing::Point(547, 216);
			this->textBoxEmployeeBirthDate->Name = L"textBoxEmployeeBirthDate";
			this->textBoxEmployeeBirthDate->Size = System::Drawing::Size(201, 29);
			this->textBoxEmployeeBirthDate->TabIndex = 105;
			// 
			// buttonRemoveEmployee
			// 
			this->buttonRemoveEmployee->BackColor = System::Drawing::Color::Transparent;
			this->buttonRemoveEmployee->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonRemoveEmployee->FlatAppearance->BorderSize = 0;
			this->buttonRemoveEmployee->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->buttonRemoveEmployee->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->buttonRemoveEmployee->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonRemoveEmployee->Location = System::Drawing::Point(279, 18);
			this->buttonRemoveEmployee->Name = L"buttonRemoveEmployee";
			this->buttonRemoveEmployee->Size = System::Drawing::Size(82, 75);
			this->buttonRemoveEmployee->TabIndex = 7;
			this->buttonRemoveEmployee->UseVisualStyleBackColor = false;
			this->buttonRemoveEmployee->Click += gcnew System::EventHandler(this, &Interface::buttonRemoveEmployee_Click);
			// 
			// textBoxEmployeeemployeeRank
			// 
			this->textBoxEmployeeemployeeRank->Location = System::Drawing::Point(12, 294);
			this->textBoxEmployeeemployeeRank->Name = L"textBoxEmployeeemployeeRank";
			this->textBoxEmployeeemployeeRank->Size = System::Drawing::Size(201, 29);
			this->textBoxEmployeeemployeeRank->TabIndex = 106;
			// 
			// buttonAddEmployee
			// 
			this->buttonAddEmployee->BackColor = System::Drawing::Color::Transparent;
			this->buttonAddEmployee->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonAddEmployee->FlatAppearance->BorderSize = 0;
			this->buttonAddEmployee->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->buttonAddEmployee->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->buttonAddEmployee->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonAddEmployee->Location = System::Drawing::Point(104, 18);
			this->buttonAddEmployee->Name = L"buttonAddEmployee";
			this->buttonAddEmployee->Size = System::Drawing::Size(82, 75);
			this->buttonAddEmployee->TabIndex = 6;
			this->buttonAddEmployee->UseVisualStyleBackColor = false;
			this->buttonAddEmployee->Click += gcnew System::EventHandler(this, &Interface::buttonAddEmployee_Click);
			// 
			// labelEmployeepersonId
			// 
			this->labelEmployeepersonId->AutoSize = true;
			this->labelEmployeepersonId->BackColor = System::Drawing::Color::Transparent;
			this->labelEmployeepersonId->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelEmployeepersonId->Location = System::Drawing::Point(14, 94);
			this->labelEmployeepersonId->Name = L"labelEmployeepersonId";
			this->labelEmployeepersonId->Size = System::Drawing::Size(93, 22);
			this->labelEmployeepersonId->TabIndex = 33;
			this->labelEmployeepersonId->Text = L"Person Id";
			// 
			// labelEmployeehiringDate
			// 
			this->labelEmployeehiringDate->AutoSize = true;
			this->labelEmployeehiringDate->BackColor = System::Drawing::Color::Transparent;
			this->labelEmployeehiringDate->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelEmployeehiringDate->Location = System::Drawing::Point(280, 184);
			this->labelEmployeehiringDate->Name = L"labelEmployeehiringDate";
			this->labelEmployeehiringDate->Size = System::Drawing::Size(111, 22);
			this->labelEmployeehiringDate->TabIndex = 38;
			this->labelEmployeehiringDate->Text = L"Hiring Date";
			// 
			// labelEmployeeFirstName
			// 
			this->labelEmployeeFirstName->AutoSize = true;
			this->labelEmployeeFirstName->BackColor = System::Drawing::Color::Transparent;
			this->labelEmployeeFirstName->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelEmployeeFirstName->Location = System::Drawing::Point(280, 96);
			this->labelEmployeeFirstName->Name = L"labelEmployeeFirstName";
			this->labelEmployeeFirstName->Size = System::Drawing::Size(103, 22);
			this->labelEmployeeFirstName->TabIndex = 34;
			this->labelEmployeeFirstName->Text = L"First Name";
			// 
			// labelEmployeeemployeeRank
			// 
			this->labelEmployeeemployeeRank->AutoSize = true;
			this->labelEmployeeemployeeRank->BackColor = System::Drawing::Color::Transparent;
			this->labelEmployeeemployeeRank->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelEmployeeemployeeRank->Location = System::Drawing::Point(12, 264);
			this->labelEmployeeemployeeRank->Name = L"labelEmployeeemployeeRank";
			this->labelEmployeeemployeeRank->Size = System::Drawing::Size(152, 22);
			this->labelEmployeeemployeeRank->TabIndex = 37;
			this->labelEmployeeemployeeRank->Text = L"Employee Rank";
			// 
			// labelEmployeeLastName
			// 
			this->labelEmployeeLastName->AutoSize = true;
			this->labelEmployeeLastName->BackColor = System::Drawing::Color::Transparent;
			this->labelEmployeeLastName->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelEmployeeLastName->Location = System::Drawing::Point(547, 96);
			this->labelEmployeeLastName->Name = L"labelEmployeeLastName";
			this->labelEmployeeLastName->Size = System::Drawing::Size(107, 22);
			this->labelEmployeeLastName->TabIndex = 35;
			this->labelEmployeeLastName->Text = L"Last Name";
			// 
			// labelEmployeeBirthDate
			// 
			this->labelEmployeeBirthDate->AutoSize = true;
			this->labelEmployeeBirthDate->BackColor = System::Drawing::Color::Transparent;
			this->labelEmployeeBirthDate->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelEmployeeBirthDate->Location = System::Drawing::Point(547, 184);
			this->labelEmployeeBirthDate->Name = L"labelEmployeeBirthDate";
			this->labelEmployeeBirthDate->Size = System::Drawing::Size(100, 22);
			this->labelEmployeeBirthDate->TabIndex = 36;
			this->labelEmployeeBirthDate->Text = L"Birth Date";
			// 
			// dataGridDisplayEmployee
			// 
			this->dataGridDisplayEmployee->AllowUserToAddRows = false;
			this->dataGridDisplayEmployee->AllowUserToDeleteRows = false;
			this->dataGridDisplayEmployee->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridDisplayEmployee->Location = System::Drawing::Point(40, 33);
			this->dataGridDisplayEmployee->Name = L"dataGridDisplayEmployee";
			this->dataGridDisplayEmployee->RowHeadersWidth = 72;
			this->dataGridDisplayEmployee->RowTemplate->Height = 31;
			this->dataGridDisplayEmployee->ShowEditingIcon = false;
			this->dataGridDisplayEmployee->Size = System::Drawing::Size(1063, 600);
			this->dataGridDisplayEmployee->TabIndex = 12;
			// 
			// tabPurchase
			// 
			this->tabPurchase->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(243)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->tabPurchase->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tabPurchase->Controls->Add(this->panel2);
			this->tabPurchase->Controls->Add(this->dataGridDisplayPurchase);
			this->tabPurchase->Location = System::Drawing::Point(4, 33);
			this->tabPurchase->Name = L"tabPurchase";
			this->tabPurchase->Padding = System::Windows::Forms::Padding(3);
			this->tabPurchase->Size = System::Drawing::Size(1610, 1540);
			this->tabPurchase->TabIndex = 9;
			this->tabPurchase->Text = L"tabPurchase";
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->buttonArticlesInPurchase);
			this->panel2->Controls->Add(this->buttonAddPurchase);
			this->panel2->Controls->Add(this->buttonPurchaseValidation);
			this->panel2->Controls->Add(this->buttonModifyPurchase);
			this->panel2->Controls->Add(this->labelPurchasepersonFirstName);
			this->panel2->Controls->Add(this->buttonSearchPurchase);
			this->panel2->Controls->Add(this->labelPurchasenumberOfPayment);
			this->panel2->Controls->Add(this->buttonRemovePurchase);
			this->panel2->Controls->Add(this->labelPurchasepersonLastName);
			this->panel2->Controls->Add(this->textBoxPurchasepurchaseId);
			this->panel2->Controls->Add(this->labelPurchasepurchaseDate);
			this->panel2->Controls->Add(this->textBoxPurchasepurchaseReference);
			this->panel2->Controls->Add(this->labelPurchasedeliveryDate);
			this->panel2->Controls->Add(this->textBoxPurchasetotalPrice);
			this->panel2->Controls->Add(this->labelPurchasepurchaseTotalWithTax);
			this->panel2->Controls->Add(this->textBoxPurchasepurchaseTax);
			this->panel2->Controls->Add(this->labelPurchasepaymentIssueDate);
			this->panel2->Controls->Add(this->textBoxPurchasepersonId);
			this->panel2->Controls->Add(this->labelPurchasepurchaseTax);
			this->panel2->Controls->Add(this->textBoxPurchasepurchaseTotalWithTax);
			this->panel2->Controls->Add(this->labelPurchasepersonId);
			this->panel2->Controls->Add(this->textBoxPurchasepaymentIssueDate);
			this->panel2->Controls->Add(this->labelPurchasetotalPrice);
			this->panel2->Controls->Add(this->textBoxPurchasepurchaseDate);
			this->panel2->Controls->Add(this->textBoxPurchasepersonFirstName);
			this->panel2->Controls->Add(this->textBoxPurchasedeliveryDate);
			this->panel2->Controls->Add(this->labelPurchasepurchaseReference);
			this->panel2->Controls->Add(this->textBoxPurchasepersonLastName);
			this->panel2->Controls->Add(this->textBoxPurchasenumberOfPayment);
			this->panel2->Controls->Add(this->labelPurchasepurchaseId);
			this->panel2->Location = System::Drawing::Point(208, 654);
			this->panel2->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(764, 443);
			this->panel2->TabIndex = 82;
			// 
			// buttonArticlesInPurchase
			// 
			this->buttonArticlesInPurchase->FlatAppearance->BorderSize = 0;
			this->buttonArticlesInPurchase->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonArticlesInPurchase->Location = System::Drawing::Point(375, 18);
			this->buttonArticlesInPurchase->Name = L"buttonArticlesInPurchase";
			this->buttonArticlesInPurchase->Size = System::Drawing::Size(82, 75);
			this->buttonArticlesInPurchase->TabIndex = 82;
			this->buttonArticlesInPurchase->UseVisualStyleBackColor = true;
			this->buttonArticlesInPurchase->Click += gcnew System::EventHandler(this, &Interface::buttonArticlesInPurchase_Click);
			// 
			// buttonAddPurchase
			// 
			this->buttonAddPurchase->BackColor = System::Drawing::Color::Transparent;
			this->buttonAddPurchase->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->buttonAddPurchase->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonAddPurchase->FlatAppearance->BorderSize = 0;
			this->buttonAddPurchase->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->buttonAddPurchase->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->buttonAddPurchase->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonAddPurchase->Location = System::Drawing::Point(107, 18);
			this->buttonAddPurchase->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->buttonAddPurchase->Name = L"buttonAddPurchase";
			this->buttonAddPurchase->Size = System::Drawing::Size(82, 75);
			this->buttonAddPurchase->TabIndex = 3;
			this->buttonAddPurchase->UseVisualStyleBackColor = false;
			this->buttonAddPurchase->Click += gcnew System::EventHandler(this, &Interface::buttonAddPurchase_Click);
			// 
			// buttonPurchaseValidation
			// 
			this->buttonPurchaseValidation->BackColor = System::Drawing::Color::Transparent;
			this->buttonPurchaseValidation->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonPurchaseValidation->FlatAppearance->BorderSize = 0;
			this->buttonPurchaseValidation->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->buttonPurchaseValidation->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->buttonPurchaseValidation->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonPurchaseValidation->Location = System::Drawing::Point(664, 18);
			this->buttonPurchaseValidation->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->buttonPurchaseValidation->Name = L"buttonPurchaseValidation";
			this->buttonPurchaseValidation->Size = System::Drawing::Size(82, 75);
			this->buttonPurchaseValidation->TabIndex = 4;
			this->buttonPurchaseValidation->UseVisualStyleBackColor = false;
			this->buttonPurchaseValidation->Click += gcnew System::EventHandler(this, &Interface::buttonPurchaseValidation_Click);
			// 
			// buttonModifyPurchase
			// 
			this->buttonModifyPurchase->BackColor = System::Drawing::Color::Transparent;
			this->buttonModifyPurchase->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->buttonModifyPurchase->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonModifyPurchase->FlatAppearance->BorderSize = 0;
			this->buttonModifyPurchase->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->buttonModifyPurchase->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->buttonModifyPurchase->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonModifyPurchase->Location = System::Drawing::Point(197, 18);
			this->buttonModifyPurchase->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->buttonModifyPurchase->Name = L"buttonModifyPurchase";
			this->buttonModifyPurchase->Size = System::Drawing::Size(82, 75);
			this->buttonModifyPurchase->TabIndex = 3;
			this->buttonModifyPurchase->UseVisualStyleBackColor = false;
			this->buttonModifyPurchase->Click += gcnew System::EventHandler(this, &Interface::buttonModifyPurchase_Click);
			// 
			// labelPurchasepersonFirstName
			// 
			this->labelPurchasepersonFirstName->AutoSize = true;
			this->labelPurchasepersonFirstName->BackColor = System::Drawing::Color::Transparent;
			this->labelPurchasepersonFirstName->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelPurchasepersonFirstName->Location = System::Drawing::Point(546, 360);
			this->labelPurchasepersonFirstName->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelPurchasepersonFirstName->Name = L"labelPurchasepersonFirstName";
			this->labelPurchasepersonFirstName->Size = System::Drawing::Size(160, 22);
			this->labelPurchasepersonFirstName->TabIndex = 2;
			this->labelPurchasepersonFirstName->Text = L"personFirstName";
			// 
			// buttonSearchPurchase
			// 
			this->buttonSearchPurchase->BackColor = System::Drawing::Color::Transparent;
			this->buttonSearchPurchase->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->buttonSearchPurchase->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonSearchPurchase->FlatAppearance->BorderSize = 0;
			this->buttonSearchPurchase->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->buttonSearchPurchase->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->buttonSearchPurchase->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonSearchPurchase->Location = System::Drawing::Point(18, 18);
			this->buttonSearchPurchase->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->buttonSearchPurchase->Name = L"buttonSearchPurchase";
			this->buttonSearchPurchase->Size = System::Drawing::Size(82, 75);
			this->buttonSearchPurchase->TabIndex = 3;
			this->buttonSearchPurchase->UseVisualStyleBackColor = false;
			this->buttonSearchPurchase->Click += gcnew System::EventHandler(this, &Interface::buttonSearchPurchase_Click);
			// 
			// labelPurchasenumberOfPayment
			// 
			this->labelPurchasenumberOfPayment->AutoSize = true;
			this->labelPurchasenumberOfPayment->BackColor = System::Drawing::Color::Transparent;
			this->labelPurchasenumberOfPayment->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelPurchasenumberOfPayment->Location = System::Drawing::Point(546, 276);
			this->labelPurchasenumberOfPayment->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelPurchasenumberOfPayment->Name = L"labelPurchasenumberOfPayment";
			this->labelPurchasenumberOfPayment->Size = System::Drawing::Size(200, 22);
			this->labelPurchasenumberOfPayment->TabIndex = 2;
			this->labelPurchasenumberOfPayment->Text = L"Number Of Payment";
			// 
			// buttonRemovePurchase
			// 
			this->buttonRemovePurchase->BackColor = System::Drawing::Color::Transparent;
			this->buttonRemovePurchase->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->buttonRemovePurchase->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonRemovePurchase->FlatAppearance->BorderSize = 0;
			this->buttonRemovePurchase->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->buttonRemovePurchase->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->buttonRemovePurchase->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonRemovePurchase->Location = System::Drawing::Point(286, 18);
			this->buttonRemovePurchase->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->buttonRemovePurchase->Name = L"buttonRemovePurchase";
			this->buttonRemovePurchase->Size = System::Drawing::Size(82, 75);
			this->buttonRemovePurchase->TabIndex = 3;
			this->buttonRemovePurchase->UseVisualStyleBackColor = false;
			this->buttonRemovePurchase->Click += gcnew System::EventHandler(this, &Interface::buttonRemovePurchase_Click);
			// 
			// labelPurchasepersonLastName
			// 
			this->labelPurchasepersonLastName->AutoSize = true;
			this->labelPurchasepersonLastName->BackColor = System::Drawing::Color::Transparent;
			this->labelPurchasepersonLastName->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelPurchasepersonLastName->Location = System::Drawing::Point(282, 360);
			this->labelPurchasepersonLastName->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelPurchasepersonLastName->Name = L"labelPurchasepersonLastName";
			this->labelPurchasepersonLastName->Size = System::Drawing::Size(164, 22);
			this->labelPurchasepersonLastName->TabIndex = 2;
			this->labelPurchasepersonLastName->Text = L"personLastName";
			// 
			// textBoxPurchasepurchaseId
			// 
			this->textBoxPurchasepurchaseId->Location = System::Drawing::Point(12, 126);
			this->textBoxPurchasepurchaseId->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->textBoxPurchasepurchaseId->Name = L"textBoxPurchasepurchaseId";
			this->textBoxPurchasepurchaseId->Size = System::Drawing::Size(201, 29);
			this->textBoxPurchasepurchaseId->TabIndex = 70;
			// 
			// labelPurchasepurchaseDate
			// 
			this->labelPurchasepurchaseDate->AutoSize = true;
			this->labelPurchasepurchaseDate->BackColor = System::Drawing::Color::Transparent;
			this->labelPurchasepurchaseDate->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelPurchasepurchaseDate->Location = System::Drawing::Point(546, 184);
			this->labelPurchasepurchaseDate->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelPurchasepurchaseDate->Name = L"labelPurchasepurchaseDate";
			this->labelPurchasepurchaseDate->Size = System::Drawing::Size(146, 22);
			this->labelPurchasepurchaseDate->TabIndex = 2;
			this->labelPurchasepurchaseDate->Text = L"Purchase Date";
			// 
			// textBoxPurchasepurchaseReference
			// 
			this->textBoxPurchasepurchaseReference->Location = System::Drawing::Point(280, 126);
			this->textBoxPurchasepurchaseReference->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->textBoxPurchasepurchaseReference->Name = L"textBoxPurchasepurchaseReference";
			this->textBoxPurchasepurchaseReference->Size = System::Drawing::Size(201, 29);
			this->textBoxPurchasepurchaseReference->TabIndex = 71;
			// 
			// labelPurchasedeliveryDate
			// 
			this->labelPurchasedeliveryDate->AutoSize = true;
			this->labelPurchasedeliveryDate->BackColor = System::Drawing::Color::Transparent;
			this->labelPurchasedeliveryDate->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelPurchasedeliveryDate->Location = System::Drawing::Point(282, 276);
			this->labelPurchasedeliveryDate->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelPurchasedeliveryDate->Name = L"labelPurchasedeliveryDate";
			this->labelPurchasedeliveryDate->Size = System::Drawing::Size(135, 22);
			this->labelPurchasedeliveryDate->TabIndex = 2;
			this->labelPurchasedeliveryDate->Text = L"Delivery Date";
			// 
			// textBoxPurchasetotalPrice
			// 
			this->textBoxPurchasetotalPrice->Location = System::Drawing::Point(544, 126);
			this->textBoxPurchasetotalPrice->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->textBoxPurchasetotalPrice->Name = L"textBoxPurchasetotalPrice";
			this->textBoxPurchasetotalPrice->Size = System::Drawing::Size(201, 29);
			this->textBoxPurchasetotalPrice->TabIndex = 72;
			// 
			// labelPurchasepurchaseTotalWithTax
			// 
			this->labelPurchasepurchaseTotalWithTax->AutoSize = true;
			this->labelPurchasepurchaseTotalWithTax->BackColor = System::Drawing::Color::Transparent;
			this->labelPurchasepurchaseTotalWithTax->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelPurchasepurchaseTotalWithTax->Location = System::Drawing::Point(282, 184);
			this->labelPurchasepurchaseTotalWithTax->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelPurchasepurchaseTotalWithTax->Name = L"labelPurchasepurchaseTotalWithTax";
			this->labelPurchasepurchaseTotalWithTax->Size = System::Drawing::Size(194, 22);
			this->labelPurchasepurchaseTotalWithTax->TabIndex = 2;
			this->labelPurchasepurchaseTotalWithTax->Text = L"Purchase Total + Tax";
			// 
			// textBoxPurchasepurchaseTax
			// 
			this->textBoxPurchasepurchaseTax->Location = System::Drawing::Point(12, 216);
			this->textBoxPurchasepurchaseTax->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->textBoxPurchasepurchaseTax->Name = L"textBoxPurchasepurchaseTax";
			this->textBoxPurchasepurchaseTax->Size = System::Drawing::Size(201, 29);
			this->textBoxPurchasepurchaseTax->TabIndex = 73;
			// 
			// labelPurchasepaymentIssueDate
			// 
			this->labelPurchasepaymentIssueDate->AutoSize = true;
			this->labelPurchasepaymentIssueDate->BackColor = System::Drawing::Color::Transparent;
			this->labelPurchasepaymentIssueDate->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelPurchasepaymentIssueDate->Location = System::Drawing::Point(14, 276);
			this->labelPurchasepaymentIssueDate->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelPurchasepaymentIssueDate->Name = L"labelPurchasepaymentIssueDate";
			this->labelPurchasepaymentIssueDate->Size = System::Drawing::Size(192, 22);
			this->labelPurchasepaymentIssueDate->TabIndex = 2;
			this->labelPurchasepaymentIssueDate->Text = L"Payment Issue Date";
			// 
			// textBoxPurchasepersonId
			// 
			this->textBoxPurchasepersonId->Location = System::Drawing::Point(12, 393);
			this->textBoxPurchasepersonId->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->textBoxPurchasepersonId->Name = L"textBoxPurchasepersonId";
			this->textBoxPurchasepersonId->Size = System::Drawing::Size(201, 29);
			this->textBoxPurchasepersonId->TabIndex = 79;
			// 
			// labelPurchasepurchaseTax
			// 
			this->labelPurchasepurchaseTax->AutoSize = true;
			this->labelPurchasepurchaseTax->BackColor = System::Drawing::Color::Transparent;
			this->labelPurchasepurchaseTax->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelPurchasepurchaseTax->Location = System::Drawing::Point(14, 184);
			this->labelPurchasepurchaseTax->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelPurchasepurchaseTax->Name = L"labelPurchasepurchaseTax";
			this->labelPurchasepurchaseTax->Size = System::Drawing::Size(130, 22);
			this->labelPurchasepurchaseTax->TabIndex = 2;
			this->labelPurchasepurchaseTax->Text = L"Purchase Tax";
			// 
			// textBoxPurchasepurchaseTotalWithTax
			// 
			this->textBoxPurchasepurchaseTotalWithTax->Location = System::Drawing::Point(280, 216);
			this->textBoxPurchasepurchaseTotalWithTax->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->textBoxPurchasepurchaseTotalWithTax->Name = L"textBoxPurchasepurchaseTotalWithTax";
			this->textBoxPurchasepurchaseTotalWithTax->Size = System::Drawing::Size(201, 29);
			this->textBoxPurchasepurchaseTotalWithTax->TabIndex = 74;
			// 
			// labelPurchasepersonId
			// 
			this->labelPurchasepersonId->AutoSize = true;
			this->labelPurchasepersonId->BackColor = System::Drawing::Color::Transparent;
			this->labelPurchasepersonId->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelPurchasepersonId->Location = System::Drawing::Point(14, 360);
			this->labelPurchasepersonId->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelPurchasepersonId->Name = L"labelPurchasepersonId";
			this->labelPurchasepersonId->Size = System::Drawing::Size(90, 22);
			this->labelPurchasepersonId->TabIndex = 2;
			this->labelPurchasepersonId->Text = L"personId";
			// 
			// textBoxPurchasepaymentIssueDate
			// 
			this->textBoxPurchasepaymentIssueDate->Location = System::Drawing::Point(12, 306);
			this->textBoxPurchasepaymentIssueDate->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->textBoxPurchasepaymentIssueDate->Name = L"textBoxPurchasepaymentIssueDate";
			this->textBoxPurchasepaymentIssueDate->Size = System::Drawing::Size(201, 29);
			this->textBoxPurchasepaymentIssueDate->TabIndex = 76;
			// 
			// labelPurchasetotalPrice
			// 
			this->labelPurchasetotalPrice->AutoSize = true;
			this->labelPurchasetotalPrice->BackColor = System::Drawing::Color::Transparent;
			this->labelPurchasetotalPrice->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelPurchasetotalPrice->Location = System::Drawing::Point(546, 96);
			this->labelPurchasetotalPrice->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelPurchasetotalPrice->Name = L"labelPurchasetotalPrice";
			this->labelPurchasetotalPrice->Size = System::Drawing::Size(143, 22);
			this->labelPurchasetotalPrice->TabIndex = 2;
			this->labelPurchasetotalPrice->Text = L"Purchase Total";
			// 
			// textBoxPurchasepurchaseDate
			// 
			this->textBoxPurchasepurchaseDate->Location = System::Drawing::Point(544, 216);
			this->textBoxPurchasepurchaseDate->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->textBoxPurchasepurchaseDate->Name = L"textBoxPurchasepurchaseDate";
			this->textBoxPurchasepurchaseDate->Size = System::Drawing::Size(201, 29);
			this->textBoxPurchasepurchaseDate->TabIndex = 75;
			// 
			// textBoxPurchasepersonFirstName
			// 
			this->textBoxPurchasepersonFirstName->Location = System::Drawing::Point(544, 393);
			this->textBoxPurchasepersonFirstName->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->textBoxPurchasepersonFirstName->Name = L"textBoxPurchasepersonFirstName";
			this->textBoxPurchasepersonFirstName->Size = System::Drawing::Size(201, 29);
			this->textBoxPurchasepersonFirstName->TabIndex = 81;
			// 
			// textBoxPurchasedeliveryDate
			// 
			this->textBoxPurchasedeliveryDate->Location = System::Drawing::Point(280, 306);
			this->textBoxPurchasedeliveryDate->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->textBoxPurchasedeliveryDate->Name = L"textBoxPurchasedeliveryDate";
			this->textBoxPurchasedeliveryDate->Size = System::Drawing::Size(201, 29);
			this->textBoxPurchasedeliveryDate->TabIndex = 77;
			// 
			// labelPurchasepurchaseReference
			// 
			this->labelPurchasepurchaseReference->AutoSize = true;
			this->labelPurchasepurchaseReference->BackColor = System::Drawing::Color::Transparent;
			this->labelPurchasepurchaseReference->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelPurchasepurchaseReference->Location = System::Drawing::Point(282, 96);
			this->labelPurchasepurchaseReference->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelPurchasepurchaseReference->Name = L"labelPurchasepurchaseReference";
			this->labelPurchasepurchaseReference->Size = System::Drawing::Size(196, 22);
			this->labelPurchasepurchaseReference->TabIndex = 2;
			this->labelPurchasepurchaseReference->Text = L"Purchase Reference";
			// 
			// textBoxPurchasepersonLastName
			// 
			this->textBoxPurchasepersonLastName->Location = System::Drawing::Point(280, 393);
			this->textBoxPurchasepersonLastName->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->textBoxPurchasepersonLastName->Name = L"textBoxPurchasepersonLastName";
			this->textBoxPurchasepersonLastName->Size = System::Drawing::Size(201, 29);
			this->textBoxPurchasepersonLastName->TabIndex = 80;
			// 
			// textBoxPurchasenumberOfPayment
			// 
			this->textBoxPurchasenumberOfPayment->Location = System::Drawing::Point(544, 306);
			this->textBoxPurchasenumberOfPayment->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->textBoxPurchasenumberOfPayment->Name = L"textBoxPurchasenumberOfPayment";
			this->textBoxPurchasenumberOfPayment->Size = System::Drawing::Size(201, 29);
			this->textBoxPurchasenumberOfPayment->TabIndex = 78;
			// 
			// labelPurchasepurchaseId
			// 
			this->labelPurchasepurchaseId->AutoSize = true;
			this->labelPurchasepurchaseId->BackColor = System::Drawing::Color::Transparent;
			this->labelPurchasepurchaseId->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelPurchasepurchaseId->Location = System::Drawing::Point(14, 96);
			this->labelPurchasepurchaseId->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelPurchasepurchaseId->Name = L"labelPurchasepurchaseId";
			this->labelPurchasepurchaseId->Size = System::Drawing::Size(118, 22);
			this->labelPurchasepurchaseId->TabIndex = 2;
			this->labelPurchasepurchaseId->Text = L"Purchase Id";
			// 
			// dataGridDisplayPurchase
			// 
			this->dataGridDisplayPurchase->AllowUserToAddRows = false;
			this->dataGridDisplayPurchase->AllowUserToDeleteRows = false;
			this->dataGridDisplayPurchase->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridDisplayPurchase->Location = System::Drawing::Point(40, 33);
			this->dataGridDisplayPurchase->Name = L"dataGridDisplayPurchase";
			this->dataGridDisplayPurchase->RowHeadersWidth = 72;
			this->dataGridDisplayPurchase->RowTemplate->Height = 31;
			this->dataGridDisplayPurchase->Size = System::Drawing::Size(1063, 600);
			this->dataGridDisplayPurchase->TabIndex = 0;
			// 
			// tabStatistics
			// 
			this->tabStatistics->Controls->Add(this->panel3);
			this->tabStatistics->Controls->Add(this->statsGrid);
			this->tabStatistics->Location = System::Drawing::Point(4, 33);
			this->tabStatistics->Name = L"tabStatistics";
			this->tabStatistics->Padding = System::Windows::Forms::Padding(3);
			this->tabStatistics->Size = System::Drawing::Size(1610, 1540);
			this->tabStatistics->TabIndex = 13;
			this->tabStatistics->Text = L"tabStatistics";
			this->tabStatistics->UseVisualStyleBackColor = true;
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->statsLabel1);
			this->panel3->Controls->Add(this->statsLabel2);
			this->panel3->Controls->Add(this->comboBoxStats);
			this->panel3->Controls->Add(this->buttonStats);
			this->panel3->Controls->Add(this->textBoxStats);
			this->panel3->Location = System::Drawing::Point(367, 654);
			this->panel3->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(446, 282);
			this->panel3->TabIndex = 6;
			// 
			// statsLabel1
			// 
			this->statsLabel1->AutoSize = true;
			this->statsLabel1->BackColor = System::Drawing::Color::Transparent;
			this->statsLabel1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->statsLabel1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.142858F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->statsLabel1->Location = System::Drawing::Point(11, 10);
			this->statsLabel1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->statsLabel1->Name = L"statsLabel1";
			this->statsLabel1->Size = System::Drawing::Size(175, 23);
			this->statsLabel1->TabIndex = 4;
			this->statsLabel1->Text = L"Select a statistics";
			// 
			// statsLabel2
			// 
			this->statsLabel2->AutoSize = true;
			this->statsLabel2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->statsLabel2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.142858F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->statsLabel2->Location = System::Drawing::Point(15, 111);
			this->statsLabel2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->statsLabel2->Name = L"statsLabel2";
			this->statsLabel2->Size = System::Drawing::Size(0, 23);
			this->statsLabel2->TabIndex = 5;
			// 
			// comboBoxStats
			// 
			this->comboBoxStats->FormattingEnabled = true;
			this->comboBoxStats->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"Average basket", L"Sales figure per month",
					L"Articles under reapproval limit", L"Total amount of a client", L"10 best articles", L"10 worst articles", L"Value of the stock",
					L"Commercial value of the stock"
			});
			this->comboBoxStats->Location = System::Drawing::Point(16, 54);
			this->comboBoxStats->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->comboBoxStats->Name = L"comboBoxStats";
			this->comboBoxStats->Size = System::Drawing::Size(407, 32);
			this->comboBoxStats->TabIndex = 1;
			this->comboBoxStats->SelectedIndexChanged += gcnew System::EventHandler(this, &Interface::comboBoxStats_SelectedIndexChanged);
			// 
			// buttonStats
			// 
			this->buttonStats->BackColor = System::Drawing::Color::Transparent;
			this->buttonStats->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonStats->FlatAppearance->BorderSize = 0;
			this->buttonStats->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->buttonStats->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->buttonStats->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonStats->Location = System::Drawing::Point(16, 201);
			this->buttonStats->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->buttonStats->Name = L"buttonStats";
			this->buttonStats->Size = System::Drawing::Size(60, 66);
			this->buttonStats->TabIndex = 2;
			this->buttonStats->UseVisualStyleBackColor = false;
			this->buttonStats->Click += gcnew System::EventHandler(this, &Interface::buttonStats_Click);
			// 
			// textBoxStats
			// 
			this->textBoxStats->Location = System::Drawing::Point(16, 147);
			this->textBoxStats->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->textBoxStats->Name = L"textBoxStats";
			this->textBoxStats->Size = System::Drawing::Size(407, 29);
			this->textBoxStats->TabIndex = 3;
			this->textBoxStats->TextChanged += gcnew System::EventHandler(this, &Interface::textBoxStats_TextChanged);
			// 
			// statsGrid
			// 
			this->statsGrid->AllowUserToAddRows = false;
			this->statsGrid->AllowUserToDeleteRows = false;
			this->statsGrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->statsGrid->Location = System::Drawing::Point(32, 28);
			this->statsGrid->Name = L"statsGrid";
			this->statsGrid->RowHeadersWidth = 72;
			this->statsGrid->RowTemplate->Height = 31;
			this->statsGrid->Size = System::Drawing::Size(1063, 600);
			this->statsGrid->TabIndex = 0;
			// 
			// tabHelp
			// 
			this->tabHelp->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tabHelp->Location = System::Drawing::Point(4, 33);
			this->tabHelp->Name = L"tabHelp";
			this->tabHelp->Padding = System::Windows::Forms::Padding(3);
			this->tabHelp->Size = System::Drawing::Size(1610, 1540);
			this->tabHelp->TabIndex = 14;
			this->tabHelp->Text = L"tabHelp";
			this->tabHelp->UseVisualStyleBackColor = true;
			// 
			// tabArticle
			// 
			this->tabArticle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(243)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->tabArticle->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tabArticle->Controls->Add(this->panel4);
			this->tabArticle->Controls->Add(this->dataGridDisplayArticle);
			this->tabArticle->Location = System::Drawing::Point(4, 33);
			this->tabArticle->Name = L"tabArticle";
			this->tabArticle->Padding = System::Windows::Forms::Padding(3);
			this->tabArticle->Size = System::Drawing::Size(1610, 1540);
			this->tabArticle->TabIndex = 15;
			this->tabArticle->Text = L"tabArticle";
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->buttonAddArticle);
			this->panel4->Controls->Add(this->labelArticlearticleDescription);
			this->panel4->Controls->Add(this->buttonArticleValidation);
			this->panel4->Controls->Add(this->labelArticlearticleQuantity);
			this->panel4->Controls->Add(this->buttonModifyArticle);
			this->panel4->Controls->Add(this->label3);
			this->panel4->Controls->Add(this->buttonSearchArticle);
			this->panel4->Controls->Add(this->label2);
			this->panel4->Controls->Add(this->buttonRemoveArticle);
			this->panel4->Controls->Add(this->label1);
			this->panel4->Controls->Add(this->labelArticlearticleDenomination);
			this->panel4->Controls->Add(this->labelArticlearticleTax);
			this->panel4->Controls->Add(this->textBoxArticlearticleId);
			this->panel4->Controls->Add(this->textBoxArticlearticleReference);
			this->panel4->Controls->Add(this->labelArticlearticleReference);
			this->panel4->Controls->Add(this->textBoxArticlearticleDenomination);
			this->panel4->Controls->Add(this->textBoxArticlearticleValue);
			this->panel4->Controls->Add(this->textBoxArticlearticleTax);
			this->panel4->Controls->Add(this->labelArticlearticleId);
			this->panel4->Controls->Add(this->textBoxArticlearticleQuantity);
			this->panel4->Controls->Add(this->textBoxArticlearticlePrice);
			this->panel4->Controls->Add(this->textBoxArticlereapprovalTreshold);
			this->panel4->Controls->Add(this->textBoxArticlearticleDescription);
			this->panel4->Location = System::Drawing::Point(208, 654);
			this->panel4->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(764, 360);
			this->panel4->TabIndex = 49;
			// 
			// buttonAddArticle
			// 
			this->buttonAddArticle->BackColor = System::Drawing::Color::Transparent;
			this->buttonAddArticle->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonAddArticle->FlatAppearance->BorderSize = 0;
			this->buttonAddArticle->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->buttonAddArticle->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->buttonAddArticle->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonAddArticle->Location = System::Drawing::Point(107, 18);
			this->buttonAddArticle->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->buttonAddArticle->Name = L"buttonAddArticle";
			this->buttonAddArticle->Size = System::Drawing::Size(82, 75);
			this->buttonAddArticle->TabIndex = 3;
			this->buttonAddArticle->UseVisualStyleBackColor = false;
			this->buttonAddArticle->Click += gcnew System::EventHandler(this, &Interface::buttonAddArticle_Click);
			// 
			// labelArticlearticleDescription
			// 
			this->labelArticlearticleDescription->AutoSize = true;
			this->labelArticlearticleDescription->BackColor = System::Drawing::Color::Transparent;
			this->labelArticlearticleDescription->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelArticlearticleDescription->Location = System::Drawing::Point(547, 184);
			this->labelArticlearticleDescription->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelArticlearticleDescription->Name = L"labelArticlearticleDescription";
			this->labelArticlearticleDescription->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->labelArticlearticleDescription->Size = System::Drawing::Size(174, 22);
			this->labelArticlearticleDescription->TabIndex = 2;
			this->labelArticlearticleDescription->Text = L"Article Description";
			// 
			// buttonArticleValidation
			// 
			this->buttonArticleValidation->BackColor = System::Drawing::Color::Transparent;
			this->buttonArticleValidation->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonArticleValidation->FlatAppearance->BorderSize = 0;
			this->buttonArticleValidation->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->buttonArticleValidation->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->buttonArticleValidation->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonArticleValidation->Location = System::Drawing::Point(666, 18);
			this->buttonArticleValidation->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->buttonArticleValidation->Name = L"buttonArticleValidation";
			this->buttonArticleValidation->Size = System::Drawing::Size(82, 75);
			this->buttonArticleValidation->TabIndex = 4;
			this->buttonArticleValidation->UseVisualStyleBackColor = false;
			this->buttonArticleValidation->Click += gcnew System::EventHandler(this, &Interface::buttonArticleValidation_Click);
			// 
			// labelArticlearticleQuantity
			// 
			this->labelArticlearticleQuantity->AutoSize = true;
			this->labelArticlearticleQuantity->BackColor = System::Drawing::Color::Transparent;
			this->labelArticlearticleQuantity->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelArticlearticleQuantity->Location = System::Drawing::Point(282, 184);
			this->labelArticlearticleQuantity->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelArticlearticleQuantity->Name = L"labelArticlearticleQuantity";
			this->labelArticlearticleQuantity->Size = System::Drawing::Size(155, 22);
			this->labelArticlearticleQuantity->TabIndex = 2;
			this->labelArticlearticleQuantity->Text = L"Article Quantity";
			// 
			// buttonModifyArticle
			// 
			this->buttonModifyArticle->BackColor = System::Drawing::Color::Transparent;
			this->buttonModifyArticle->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonModifyArticle->FlatAppearance->BorderSize = 0;
			this->buttonModifyArticle->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->buttonModifyArticle->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->buttonModifyArticle->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonModifyArticle->Location = System::Drawing::Point(197, 18);
			this->buttonModifyArticle->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->buttonModifyArticle->Name = L"buttonModifyArticle";
			this->buttonModifyArticle->Size = System::Drawing::Size(82, 75);
			this->buttonModifyArticle->TabIndex = 3;
			this->buttonModifyArticle->UseVisualStyleBackColor = false;
			this->buttonModifyArticle->Click += gcnew System::EventHandler(this, &Interface::buttonModifyArticle_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(547, 276);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(128, 22);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Article Value";
			// 
			// buttonSearchArticle
			// 
			this->buttonSearchArticle->BackColor = System::Drawing::Color::Transparent;
			this->buttonSearchArticle->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonSearchArticle->FlatAppearance->BorderSize = 0;
			this->buttonSearchArticle->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->buttonSearchArticle->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->buttonSearchArticle->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonSearchArticle->Location = System::Drawing::Point(18, 18);
			this->buttonSearchArticle->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->buttonSearchArticle->Name = L"buttonSearchArticle";
			this->buttonSearchArticle->Size = System::Drawing::Size(82, 75);
			this->buttonSearchArticle->TabIndex = 3;
			this->buttonSearchArticle->UseVisualStyleBackColor = false;
			this->buttonSearchArticle->Click += gcnew System::EventHandler(this, &Interface::buttonSearchArticle_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(282, 276);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(117, 22);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Article Price";
			// 
			// buttonRemoveArticle
			// 
			this->buttonRemoveArticle->BackColor = System::Drawing::Color::Transparent;
			this->buttonRemoveArticle->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonRemoveArticle->FlatAppearance->BorderSize = 0;
			this->buttonRemoveArticle->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->buttonRemoveArticle->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->buttonRemoveArticle->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonRemoveArticle->Location = System::Drawing::Point(286, 18);
			this->buttonRemoveArticle->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->buttonRemoveArticle->Name = L"buttonRemoveArticle";
			this->buttonRemoveArticle->Size = System::Drawing::Size(82, 75);
			this->buttonRemoveArticle->TabIndex = 3;
			this->buttonRemoveArticle->UseVisualStyleBackColor = false;
			this->buttonRemoveArticle->Click += gcnew System::EventHandler(this, &Interface::buttonRemoveArticle_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(14, 276);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(198, 22);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Reapproval Treshold";
			// 
			// labelArticlearticleDenomination
			// 
			this->labelArticlearticleDenomination->AutoSize = true;
			this->labelArticlearticleDenomination->BackColor = System::Drawing::Color::Transparent;
			this->labelArticlearticleDenomination->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelArticlearticleDenomination->Location = System::Drawing::Point(547, 96);
			this->labelArticlearticleDenomination->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelArticlearticleDenomination->Name = L"labelArticlearticleDenomination";
			this->labelArticlearticleDenomination->Size = System::Drawing::Size(145, 22);
			this->labelArticlearticleDenomination->TabIndex = 2;
			this->labelArticlearticleDenomination->Text = L"Article Denom.";
			// 
			// labelArticlearticleTax
			// 
			this->labelArticlearticleTax->AutoSize = true;
			this->labelArticlearticleTax->BackColor = System::Drawing::Color::Transparent;
			this->labelArticlearticleTax->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelArticlearticleTax->Location = System::Drawing::Point(14, 184);
			this->labelArticlearticleTax->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelArticlearticleTax->Name = L"labelArticlearticleTax";
			this->labelArticlearticleTax->Size = System::Drawing::Size(103, 22);
			this->labelArticlearticleTax->TabIndex = 2;
			this->labelArticlearticleTax->Text = L"Article Tax";
			// 
			// textBoxArticlearticleId
			// 
			this->textBoxArticlearticleId->Location = System::Drawing::Point(12, 126);
			this->textBoxArticlearticleId->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->textBoxArticlearticleId->Name = L"textBoxArticlearticleId";
			this->textBoxArticlearticleId->Size = System::Drawing::Size(201, 29);
			this->textBoxArticlearticleId->TabIndex = 40;
			// 
			// textBoxArticlearticleReference
			// 
			this->textBoxArticlearticleReference->Location = System::Drawing::Point(280, 126);
			this->textBoxArticlearticleReference->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->textBoxArticlearticleReference->Name = L"textBoxArticlearticleReference";
			this->textBoxArticlearticleReference->Size = System::Drawing::Size(201, 29);
			this->textBoxArticlearticleReference->TabIndex = 41;
			// 
			// labelArticlearticleReference
			// 
			this->labelArticlearticleReference->AutoSize = true;
			this->labelArticlearticleReference->BackColor = System::Drawing::Color::Transparent;
			this->labelArticlearticleReference->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelArticlearticleReference->Location = System::Drawing::Point(282, 96);
			this->labelArticlearticleReference->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelArticlearticleReference->Name = L"labelArticlearticleReference";
			this->labelArticlearticleReference->Size = System::Drawing::Size(169, 22);
			this->labelArticlearticleReference->TabIndex = 2;
			this->labelArticlearticleReference->Text = L"Article Reference";
			// 
			// textBoxArticlearticleDenomination
			// 
			this->textBoxArticlearticleDenomination->Location = System::Drawing::Point(546, 126);
			this->textBoxArticlearticleDenomination->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->textBoxArticlearticleDenomination->Name = L"textBoxArticlearticleDenomination";
			this->textBoxArticlearticleDenomination->Size = System::Drawing::Size(201, 29);
			this->textBoxArticlearticleDenomination->TabIndex = 42;
			// 
			// textBoxArticlearticleValue
			// 
			this->textBoxArticlearticleValue->Location = System::Drawing::Point(546, 306);
			this->textBoxArticlearticleValue->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->textBoxArticlearticleValue->Name = L"textBoxArticlearticleValue";
			this->textBoxArticlearticleValue->Size = System::Drawing::Size(201, 29);
			this->textBoxArticlearticleValue->TabIndex = 48;
			// 
			// textBoxArticlearticleTax
			// 
			this->textBoxArticlearticleTax->Location = System::Drawing::Point(12, 216);
			this->textBoxArticlearticleTax->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->textBoxArticlearticleTax->Name = L"textBoxArticlearticleTax";
			this->textBoxArticlearticleTax->Size = System::Drawing::Size(201, 29);
			this->textBoxArticlearticleTax->TabIndex = 43;
			// 
			// labelArticlearticleId
			// 
			this->labelArticlearticleId->AutoSize = true;
			this->labelArticlearticleId->BackColor = System::Drawing::Color::Transparent;
			this->labelArticlearticleId->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelArticlearticleId->Location = System::Drawing::Point(14, 96);
			this->labelArticlearticleId->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelArticlearticleId->Name = L"labelArticlearticleId";
			this->labelArticlearticleId->Size = System::Drawing::Size(91, 22);
			this->labelArticlearticleId->TabIndex = 2;
			this->labelArticlearticleId->Text = L"Article Id";
			// 
			// textBoxArticlearticleQuantity
			// 
			this->textBoxArticlearticleQuantity->Location = System::Drawing::Point(280, 216);
			this->textBoxArticlearticleQuantity->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->textBoxArticlearticleQuantity->Name = L"textBoxArticlearticleQuantity";
			this->textBoxArticlearticleQuantity->Size = System::Drawing::Size(201, 29);
			this->textBoxArticlearticleQuantity->TabIndex = 44;
			// 
			// textBoxArticlearticlePrice
			// 
			this->textBoxArticlearticlePrice->Location = System::Drawing::Point(280, 306);
			this->textBoxArticlearticlePrice->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->textBoxArticlearticlePrice->Name = L"textBoxArticlearticlePrice";
			this->textBoxArticlearticlePrice->Size = System::Drawing::Size(201, 29);
			this->textBoxArticlearticlePrice->TabIndex = 47;
			// 
			// textBoxArticlereapprovalTreshold
			// 
			this->textBoxArticlereapprovalTreshold->Location = System::Drawing::Point(12, 306);
			this->textBoxArticlereapprovalTreshold->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->textBoxArticlereapprovalTreshold->Name = L"textBoxArticlereapprovalTreshold";
			this->textBoxArticlereapprovalTreshold->Size = System::Drawing::Size(201, 29);
			this->textBoxArticlereapprovalTreshold->TabIndex = 46;
			// 
			// textBoxArticlearticleDescription
			// 
			this->textBoxArticlearticleDescription->Location = System::Drawing::Point(546, 216);
			this->textBoxArticlearticleDescription->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->textBoxArticlearticleDescription->Name = L"textBoxArticlearticleDescription";
			this->textBoxArticlearticleDescription->Size = System::Drawing::Size(201, 29);
			this->textBoxArticlearticleDescription->TabIndex = 45;
			// 
			// dataGridDisplayArticle
			// 
			this->dataGridDisplayArticle->AllowUserToAddRows = false;
			this->dataGridDisplayArticle->AllowUserToDeleteRows = false;
			this->dataGridDisplayArticle->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridDisplayArticle->Location = System::Drawing::Point(40, 33);
			this->dataGridDisplayArticle->Name = L"dataGridDisplayArticle";
			this->dataGridDisplayArticle->RowHeadersWidth = 72;
			this->dataGridDisplayArticle->RowTemplate->Height = 31;
			this->dataGridDisplayArticle->Size = System::Drawing::Size(1063, 600);
			this->dataGridDisplayArticle->TabIndex = 0;
			// 
			// tabPageHome
			// 
			this->tabPageHome->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tabPageHome->Location = System::Drawing::Point(4, 33);
			this->tabPageHome->Margin = System::Windows::Forms::Padding(0);
			this->tabPageHome->Name = L"tabPageHome";
			this->tabPageHome->Size = System::Drawing::Size(1610, 1540);
			this->tabPageHome->TabIndex = 19;
			this->tabPageHome->Text = L"Home";
			this->tabPageHome->UseVisualStyleBackColor = true;
			// 
			// tabArticlesInPurchase
			// 
			this->tabArticlesInPurchase->Controls->Add(this->dataGridDisplayArticlesInPurchase);
			this->tabArticlesInPurchase->Location = System::Drawing::Point(4, 33);
			this->tabArticlesInPurchase->Name = L"tabArticlesInPurchase";
			this->tabArticlesInPurchase->Padding = System::Windows::Forms::Padding(3);
			this->tabArticlesInPurchase->Size = System::Drawing::Size(1610, 1540);
			this->tabArticlesInPurchase->TabIndex = 23;
			this->tabArticlesInPurchase->Text = L"ArticlesInPurchase";
			this->tabArticlesInPurchase->UseVisualStyleBackColor = true;
			// 
			// dataGridDisplayArticlesInPurchase
			// 
			this->dataGridDisplayArticlesInPurchase->AllowUserToAddRows = false;
			this->dataGridDisplayArticlesInPurchase->AllowUserToDeleteRows = false;
			this->dataGridDisplayArticlesInPurchase->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridDisplayArticlesInPurchase->Location = System::Drawing::Point(40, 33);
			this->dataGridDisplayArticlesInPurchase->Name = L"dataGridDisplayArticlesInPurchase";
			this->dataGridDisplayArticlesInPurchase->RowHeadersWidth = 72;
			this->dataGridDisplayArticlesInPurchase->RowTemplate->Height = 31;
			this->dataGridDisplayArticlesInPurchase->Size = System::Drawing::Size(1063, 600);
			this->dataGridDisplayArticlesInPurchase->TabIndex = 1;
			// 
			// panelNavigation
			// 
			this->panelNavigation->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(83)), static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(124)));
			this->panelNavigation->Controls->Add(this->panelButtonHelp);
			this->panelNavigation->Controls->Add(this->panelButtonNavigation);
			this->panelNavigation->Controls->Add(this->panelLogo);
			this->panelNavigation->Dock = System::Windows::Forms::DockStyle::Left;
			this->panelNavigation->Location = System::Drawing::Point(0, 51);
			this->panelNavigation->Name = L"panelNavigation";
			this->panelNavigation->Size = System::Drawing::Size(300, 1577);
			this->panelNavigation->TabIndex = 1;
			// 
			// panelButtonHelp
			// 
			this->panelButtonHelp->Controls->Add(this->buttonHelp);
			this->panelButtonHelp->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panelButtonHelp->Location = System::Drawing::Point(0, 1508);
			this->panelButtonHelp->Name = L"panelButtonHelp";
			this->panelButtonHelp->Size = System::Drawing::Size(300, 69);
			this->panelButtonHelp->TabIndex = 3;
			// 
			// buttonHelp
			// 
			this->buttonHelp->BackColor = System::Drawing::Color::Transparent;
			this->buttonHelp->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->buttonHelp->FlatAppearance->BorderSize = 0;
			this->buttonHelp->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(86)), static_cast<System::Int32>(static_cast<System::Byte>(112)));
			this->buttonHelp->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonHelp->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.142858F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonHelp->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(47)), static_cast<System::Int32>(static_cast<System::Byte>(62)),
				static_cast<System::Int32>(static_cast<System::Byte>(67)));
			this->buttonHelp->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->buttonHelp->Location = System::Drawing::Point(0, 0);
			this->buttonHelp->Name = L"buttonHelp";
			this->buttonHelp->Size = System::Drawing::Size(300, 69);
			this->buttonHelp->TabIndex = 1;
			this->buttonHelp->Text = L"      Help";
			this->buttonHelp->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->buttonHelp->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->buttonHelp->UseVisualStyleBackColor = false;
			this->buttonHelp->Click += gcnew System::EventHandler(this, &Interface::buttonHelp_Click);
			// 
			// panelButtonNavigation
			// 
			this->panelButtonNavigation->Controls->Add(this->panelButtonNavigationStatistics);
			this->panelButtonNavigation->Controls->Add(this->panelButtonNavigationPurchase);
			this->panelButtonNavigation->Controls->Add(this->panelButtonNavigationArticle);
			this->panelButtonNavigation->Controls->Add(this->panelButtonNavigationEmployee);
			this->panelButtonNavigation->Controls->Add(this->panelButtonNavigationClient);
			this->panelButtonNavigation->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelButtonNavigation->Location = System::Drawing::Point(0, 150);
			this->panelButtonNavigation->Name = L"panelButtonNavigation";
			this->panelButtonNavigation->Size = System::Drawing::Size(300, 600);
			this->panelButtonNavigation->TabIndex = 2;
			// 
			// panelButtonNavigationStatistics
			// 
			this->panelButtonNavigationStatistics->Controls->Add(this->buttonStatistics);
			this->panelButtonNavigationStatistics->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelButtonNavigationStatistics->Location = System::Drawing::Point(0, 276);
			this->panelButtonNavigationStatistics->Name = L"panelButtonNavigationStatistics";
			this->panelButtonNavigationStatistics->Size = System::Drawing::Size(300, 69);
			this->panelButtonNavigationStatistics->TabIndex = 16;
			// 
			// buttonStatistics
			// 
			this->buttonStatistics->BackColor = System::Drawing::Color::Transparent;
			this->buttonStatistics->Dock = System::Windows::Forms::DockStyle::Fill;
			this->buttonStatistics->FlatAppearance->BorderSize = 0;
			this->buttonStatistics->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(86)), static_cast<System::Int32>(static_cast<System::Byte>(112)));
			this->buttonStatistics->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonStatistics->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.142858F, System::Drawing::FontStyle::Bold));
			this->buttonStatistics->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(47)), static_cast<System::Int32>(static_cast<System::Byte>(62)),
				static_cast<System::Int32>(static_cast<System::Byte>(67)));
			this->buttonStatistics->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->buttonStatistics->Location = System::Drawing::Point(0, 0);
			this->buttonStatistics->Name = L"buttonStatistics";
			this->buttonStatistics->Size = System::Drawing::Size(300, 69);
			this->buttonStatistics->TabIndex = 0;
			this->buttonStatistics->Text = L"       Statistics";
			this->buttonStatistics->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->buttonStatistics->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->buttonStatistics->UseVisualStyleBackColor = false;
			this->buttonStatistics->Click += gcnew System::EventHandler(this, &Interface::buttonStatistics_Click);
			// 
			// panelButtonNavigationPurchase
			// 
			this->panelButtonNavigationPurchase->Controls->Add(this->buttonPurchase);
			this->panelButtonNavigationPurchase->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelButtonNavigationPurchase->Location = System::Drawing::Point(0, 207);
			this->panelButtonNavigationPurchase->Name = L"panelButtonNavigationPurchase";
			this->panelButtonNavigationPurchase->Size = System::Drawing::Size(300, 69);
			this->panelButtonNavigationPurchase->TabIndex = 14;
			// 
			// buttonPurchase
			// 
			this->buttonPurchase->BackColor = System::Drawing::Color::Transparent;
			this->buttonPurchase->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonPurchase->Dock = System::Windows::Forms::DockStyle::Fill;
			this->buttonPurchase->FlatAppearance->BorderSize = 0;
			this->buttonPurchase->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(86)), static_cast<System::Int32>(static_cast<System::Byte>(112)));
			this->buttonPurchase->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonPurchase->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.142858F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonPurchase->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(47)), static_cast<System::Int32>(static_cast<System::Byte>(62)),
				static_cast<System::Int32>(static_cast<System::Byte>(67)));
			this->buttonPurchase->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->buttonPurchase->Location = System::Drawing::Point(0, 0);
			this->buttonPurchase->Name = L"buttonPurchase";
			this->buttonPurchase->Size = System::Drawing::Size(300, 69);
			this->buttonPurchase->TabIndex = 3;
			this->buttonPurchase->Text = L"       Purchase";
			this->buttonPurchase->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->buttonPurchase->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->buttonPurchase->UseVisualStyleBackColor = false;
			this->buttonPurchase->Click += gcnew System::EventHandler(this, &Interface::buttonPurchase_Click);
			// 
			// panelButtonNavigationArticle
			// 
			this->panelButtonNavigationArticle->Controls->Add(this->buttonArticle);
			this->panelButtonNavigationArticle->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelButtonNavigationArticle->Location = System::Drawing::Point(0, 138);
			this->panelButtonNavigationArticle->Name = L"panelButtonNavigationArticle";
			this->panelButtonNavigationArticle->Size = System::Drawing::Size(300, 69);
			this->panelButtonNavigationArticle->TabIndex = 12;
			// 
			// buttonArticle
			// 
			this->buttonArticle->BackColor = System::Drawing::Color::Transparent;
			this->buttonArticle->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonArticle->Dock = System::Windows::Forms::DockStyle::Fill;
			this->buttonArticle->FlatAppearance->BorderSize = 0;
			this->buttonArticle->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(86)), static_cast<System::Int32>(static_cast<System::Byte>(112)));
			this->buttonArticle->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonArticle->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.142858F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonArticle->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(47)), static_cast<System::Int32>(static_cast<System::Byte>(62)),
				static_cast<System::Int32>(static_cast<System::Byte>(67)));
			this->buttonArticle->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->buttonArticle->Location = System::Drawing::Point(0, 0);
			this->buttonArticle->Name = L"buttonArticle";
			this->buttonArticle->Size = System::Drawing::Size(300, 69);
			this->buttonArticle->TabIndex = 2;
			this->buttonArticle->Text = L"       Article";
			this->buttonArticle->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->buttonArticle->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->buttonArticle->UseVisualStyleBackColor = false;
			this->buttonArticle->Click += gcnew System::EventHandler(this, &Interface::buttonArticle_Click);
			// 
			// panelButtonNavigationEmployee
			// 
			this->panelButtonNavigationEmployee->Controls->Add(this->buttonEmployee);
			this->panelButtonNavigationEmployee->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelButtonNavigationEmployee->Location = System::Drawing::Point(0, 69);
			this->panelButtonNavigationEmployee->Name = L"panelButtonNavigationEmployee";
			this->panelButtonNavigationEmployee->Size = System::Drawing::Size(300, 69);
			this->panelButtonNavigationEmployee->TabIndex = 10;
			// 
			// buttonEmployee
			// 
			this->buttonEmployee->BackColor = System::Drawing::Color::Transparent;
			this->buttonEmployee->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonEmployee->Dock = System::Windows::Forms::DockStyle::Fill;
			this->buttonEmployee->FlatAppearance->BorderSize = 0;
			this->buttonEmployee->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(86)), static_cast<System::Int32>(static_cast<System::Byte>(112)));
			this->buttonEmployee->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonEmployee->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.142858F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonEmployee->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(47)), static_cast<System::Int32>(static_cast<System::Byte>(62)),
				static_cast<System::Int32>(static_cast<System::Byte>(67)));
			this->buttonEmployee->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->buttonEmployee->Location = System::Drawing::Point(0, 0);
			this->buttonEmployee->Name = L"buttonEmployee";
			this->buttonEmployee->Size = System::Drawing::Size(300, 69);
			this->buttonEmployee->TabIndex = 1;
			this->buttonEmployee->Text = L"       Employee";
			this->buttonEmployee->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->buttonEmployee->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->buttonEmployee->UseVisualStyleBackColor = false;
			this->buttonEmployee->Click += gcnew System::EventHandler(this, &Interface::buttonEmployee_Click);
			// 
			// panelButtonNavigationClient
			// 
			this->panelButtonNavigationClient->Controls->Add(this->buttonClient);
			this->panelButtonNavigationClient->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelButtonNavigationClient->Location = System::Drawing::Point(0, 0);
			this->panelButtonNavigationClient->Name = L"panelButtonNavigationClient";
			this->panelButtonNavigationClient->Size = System::Drawing::Size(300, 69);
			this->panelButtonNavigationClient->TabIndex = 5;
			// 
			// buttonClient
			// 
			this->buttonClient->BackColor = System::Drawing::Color::Transparent;
			this->buttonClient->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonClient->Dock = System::Windows::Forms::DockStyle::Fill;
			this->buttonClient->FlatAppearance->BorderSize = 0;
			this->buttonClient->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(86)), static_cast<System::Int32>(static_cast<System::Byte>(112)));
			this->buttonClient->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonClient->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.142858F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonClient->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(47)), static_cast<System::Int32>(static_cast<System::Byte>(62)),
				static_cast<System::Int32>(static_cast<System::Byte>(67)));
			this->buttonClient->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->buttonClient->Location = System::Drawing::Point(0, 0);
			this->buttonClient->Name = L"buttonClient";
			this->buttonClient->Size = System::Drawing::Size(300, 69);
			this->buttonClient->TabIndex = 0;
			this->buttonClient->Text = L"       Client";
			this->buttonClient->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->buttonClient->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
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
			this->Logo->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(83)), static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(124)));
			this->Logo->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->Logo->Cursor = System::Windows::Forms::Cursors::Hand;
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
			this->panelHeader->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panelHeader->Controls->Add(this->labelSubTitle);
			this->panelHeader->Controls->Add(this->labelTitle);
			this->panelHeader->Controls->Add(this->panelControlButton);
			this->panelHeader->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panelHeader->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelHeader->Location = System::Drawing::Point(0, 0);
			this->panelHeader->Name = L"panelHeader";
			this->panelHeader->Size = System::Drawing::Size(1918, 51);
			this->panelHeader->TabIndex = 0;
			// 
			// labelSubTitle
			// 
			this->labelSubTitle->BackColor = System::Drawing::Color::Transparent;
			this->labelSubTitle->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.85714F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelSubTitle->ForeColor = System::Drawing::Color::Gainsboro;
			this->labelSubTitle->Location = System::Drawing::Point(340, 0);
			this->labelSubTitle->Name = L"labelSubTitle";
			this->labelSubTitle->Size = System::Drawing::Size(351, 51);
			this->labelSubTitle->TabIndex = 2;
			this->labelSubTitle->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTitle
			// 
			this->labelTitle->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelTitle->ForeColor = System::Drawing::Color::Gainsboro;
			this->labelTitle->ImageAlign = System::Drawing::ContentAlignment::BottomLeft;
			this->labelTitle->Location = System::Drawing::Point(3, -3);
			this->labelTitle->Name = L"labelTitle";
			this->labelTitle->Size = System::Drawing::Size(227, 51);
			this->labelTitle->TabIndex = 1;
			this->labelTitle->Text = L"      Login";
			this->labelTitle->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panelControlButton
			// 
			this->panelControlButton->Controls->Add(this->buttonMinimize);
			this->panelControlButton->Controls->Add(this->buttonMaximize);
			this->panelControlButton->Controls->Add(this->buttonClose);
			this->panelControlButton->Dock = System::Windows::Forms::DockStyle::Right;
			this->panelControlButton->Location = System::Drawing::Point(1719, 0);
			this->panelControlButton->Name = L"panelControlButton";
			this->panelControlButton->Size = System::Drawing::Size(199, 51);
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
			this->buttonMinimize->Size = System::Drawing::Size(50, 51);
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
			this->buttonMaximize->Size = System::Drawing::Size(50, 51);
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
			this->buttonClose->Size = System::Drawing::Size(50, 51);
			this->buttonClose->TabIndex = 0;
			this->buttonClose->Text = L"X";
			this->buttonClose->UseVisualStyleBackColor = true;
			this->buttonClose->Click += gcnew System::EventHandler(this, &Interface::buttonClose_Click);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// textBoxEmployeeFirstName
			// 
			this->textBoxEmployeeFirstName->Location = System::Drawing::Point(280, 126);
			this->textBoxEmployeeFirstName->Name = L"textBoxEmployeeFirstName";
			this->textBoxEmployeeFirstName->Size = System::Drawing::Size(201, 29);
			this->textBoxEmployeeFirstName->TabIndex = 101;
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
			this->ClientSize = System::Drawing::Size(1918, 1628);
			this->Controls->Add(this->panelInterface);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MaximumSize = System::Drawing::Size(2700, 1701);
			this->MinimumSize = System::Drawing::Size(1918, 1005);
			this->Name = L"Interface";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
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
			this->panelCon2->ResumeLayout(false);
			this->panelCon2->PerformLayout();
			this->panelHeaderLogin->ResumeLayout(false);
			this->panelHeaderLogin->PerformLayout();
			this->tabClient->ResumeLayout(false);
			this->panelClient->ResumeLayout(false);
			this->panelClient->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridDisplayClient))->EndInit();
			this->tabEmployee->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridDisplayEmployee))->EndInit();
			this->tabPurchase->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridDisplayPurchase))->EndInit();
			this->tabStatistics->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->statsGrid))->EndInit();
			this->tabArticle->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridDisplayArticle))->EndInit();
			this->tabArticlesInPurchase->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridDisplayArticlesInPurchase))->EndInit();
			this->panelNavigation->ResumeLayout(false);
			this->panelButtonHelp->ResumeLayout(false);
			this->panelButtonNavigation->ResumeLayout(false);
			this->panelButtonNavigationStatistics->ResumeLayout(false);
			this->panelButtonNavigationPurchase->ResumeLayout(false);
			this->panelButtonNavigationArticle->ResumeLayout(false);
			this->panelButtonNavigationEmployee->ResumeLayout(false);
			this->panelButtonNavigationClient->ResumeLayout(false);
			this->panelLogo->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Logo))->EndInit();
			this->panelHeader->ResumeLayout(false);
			this->panelControlButton->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Interface_Load(System::Object^ sender, System::EventArgs^ e)
	{
		TabRemover();
		labelTitle->Text = "      Login";
		tabController->SelectedTab = tabLogin;
		this->buttonClient->Image = Image::FromFile(Chemin + "\\bgIMG\\gens.png");
		this->buttonEmployee->Image = Image::FromFile(Chemin + "\\bgIMG\\directeur.png");
		this->buttonPurchase->Image = Image::FromFile(Chemin + "\\bgIMG\\bon-de-commande.png");
		this->buttonArticle->Image = Image::FromFile(Chemin + "\\bgIMG\\des-boites.png");
		this->buttonStatistics->Image = Image::FromFile(Chemin + "\\bgIMG\\graphique.png");
		this->buttonHelp->Image = Image::FromFile(Chemin + "\\bgIMG\\interrogation-mark.png");
		this->Logo->Image = Image::FromFile(Chemin + "\\bgIMG\\logo3.png");
		this->panelHeader->BackgroundImage = Image::FromFile(Chemin + "\\bgIMG\\logo2.png");
		this->labelUsername->Image = Image::FromFile(Chemin + "\\bgIMG\\id.png");
		this->labelPassword->Image = Image::FromFile(Chemin + "\\bgIMG\\mot-de-passe.png");
		this->tabPageHome->BackgroundImage = Image::FromFile(Chemin + "\\bgIMG\\bgHome.png");
		this->tabClient->BackgroundImage = Image::FromFile(Chemin + "\\bgIMG\\bg.png");
		this->tabEmployee->BackgroundImage = Image::FromFile(Chemin + "\\bgIMG\\bg.png");
		this->tabPurchase->BackgroundImage = Image::FromFile(Chemin + "\\bgIMG\\bg.png");
		this->tabArticle->BackgroundImage = Image::FromFile(Chemin + "\\bgIMG\\bg.png");
		this->tabStatistics->BackgroundImage = Image::FromFile(Chemin + "\\bgIMG\\bg.png");
		this->tabHelp->BackgroundImage = Image::FromFile(Chemin + "\\bgIMG\\bg.png");
		this->tabArticlesInPurchase->BackgroundImage = Image::FromFile(Chemin + "\\bgIMG\\bg.png");
		SetAllLogos();
		this->panelNavigation->Visible = false;
		this->statsLabel2->Text = L"";
		this->statsLabel2->BackColor = System::Drawing::Color::Transparent;
		this->textBoxStats->Enabled = false;
		this->textBoxStats->BackColor = System::Drawing::Color::LightGray;
		this->textBoxStats->Text = "";
	}

	private: System::Void SetAllLogos()
	{
		this->buttonClientValidation->Image = Image::FromFile(Chemin + "\\bgIMG\\validate.png");
		this->buttonEmployeeValidation->Image = Image::FromFile(Chemin + "\\bgIMG\\validate.png");
		this->buttonPurchaseValidation->Image = Image::FromFile(Chemin + "\\bgIMG\\validate.png");
		this->buttonArticleValidation->Image = Image::FromFile(Chemin + "\\bgIMG\\validate.png");
		this->buttonStats->Image = Image::FromFile(Chemin + "\\bgIMG\\validate.png");
		this->buttonArticlesInPurchase->Image = Image::FromFile(Chemin + "\\bgIMG\\stock.png");
		setLogoClient();
		setLogoEmployee();
		setLogoArticle();
		setLogoPurchase();
	}

	private: System::Void buttonPressLogin_Click(System::Object^ sender, System::EventArgs^ e) {
		if ((textBoxUsername->Text == "antoine_ritter" && textBoxPassword->Text == "Ritter-001") || (textBoxUsername->Text == "antoine_faure" && textBoxPassword->Text == "Faure-001") || (textBoxUsername->Text == "raphael_denni" && textBoxPassword->Text == "Denni-001") || (textBoxUsername->Text == "khalil_ameur" && textBoxPassword->Text == "Ameur-001"))
		{
			this->username = textBoxUsername->Text;
			this->password = textBoxPassword->Text;
			this->tabController->SelectedTab = tabPageHome;
			this->labelTitle->Text = "      Home";
			this->panelNavigation->Visible = true;
		}
		else
		{
			MessageBox::Show("Username or Password is incorrect");
		}
	}

	private: System::Void buttonClose_Click(System::Object^ sender, System::EventArgs^) {
		Application::Exit();
	}
	private: System::Void buttonMaximize_Click(System::Object^ sender, System::EventArgs^) {
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


	private: System::Void buttonClient_Click(System::Object^ sender, System::EventArgs^) {
		this->SuspendLayout();
		if (tabController->SelectedTab != tabClient) {
			tabController->SelectedTab = tabClient;
			labelTitle->Text = "      Client";

			DB_Client = gcnew Client(username, password);
			
			this->dataGridDisplayClient->Refresh();
			this->dataGridDisplayClient->DataSource = this->DB_Client->Select("client");
			this->dataGridDisplayClient->DataMember = "client";

		}
		SetAllLogos();
		this->ResumeLayout(false);
	}
	private: System::Void ActivateClientTextBox()
	{
		this->textBoxClientpersonId->Enabled = true;
		this->textBoxClientclientId->Enabled = true;
		this->textBoxClientLastName->Enabled = true;
		this->textBoxClientFirstName->Enabled = true;
		this->textBoxClientBirthDate->Enabled = true;
		this->textBoxClientCompanyName->Enabled = true;
		this->textBoxClientpersonId->BackColor = System::Drawing::Color::White;
		this->textBoxClientclientId->BackColor = System::Drawing::Color::White;
		this->textBoxClientLastName->BackColor = System::Drawing::Color::White;
		this->textBoxClientFirstName->BackColor = System::Drawing::Color::White;
		this->textBoxClientBirthDate->BackColor = System::Drawing::Color::White;
		this->textBoxClientCompanyName->BackColor = System::Drawing::Color::White;
		}
	private: System::Void setLogoClient() {
		this->SuspendLayout();
		this->buttonAddClient->Image = Image::FromFile(Chemin + "\\bgIMG\\add.png");
		this->buttonModifyClient->Image = Image::FromFile(Chemin + "\\bgIMG\\Edit.png");
		this->buttonRemoveClient->Image = Image::FromFile(Chemin + "\\bgIMG\\remove.png");
		this->buttonSearchClient->Image = Image::FromFile(Chemin + "\\bgIMG\\search.png");
		this->ResumeLayout(false);
	}
	private: System::Void buttonAddClient_Click(System::Object^ sender, System::EventArgs^) {
		if (Mode != "AddClient")
		{
			Mode = "AddClient";
			this->SuspendLayout();
			ActivateClientTextBox();
			this->buttonAddClient->Image = Image::FromFile(Chemin + "\\bgIMG\\addG.png");
			this->buttonModifyClient->Image = Image::FromFile(Chemin + "\\bgIMG\\Edit.png");
			this->buttonRemoveClient->Image = Image::FromFile(Chemin + "\\bgIMG\\remove.png");
			this->buttonSearchClient->Image = Image::FromFile(Chemin + "\\bgIMG\\search.png");
			this->textBoxClientpersonId->Enabled = false;
			this->textBoxClientpersonId->BackColor = System::Drawing::Color::LightGray;
			this->textBoxClientpersonId->Text = "";
			this->textBoxClientclientId->Enabled = false;
			this->textBoxClientclientId->BackColor = System::Drawing::Color::LightGray;
			this->textBoxClientclientId->Text = "";
			this->ResumeLayout(false);
		}
	}
	private: System::Void buttonModifyClient_Click(System::Object^ sender, System::EventArgs^) {
		if (Mode != "ModifyClient")
		{
			Mode = "ModifyClient";
			this->SuspendLayout();
			ActivateClientTextBox();
			this->buttonAddClient->Image = Image::FromFile(Chemin + "\\bgIMG\\add.png");
			this->buttonModifyClient->Image = Image::FromFile(Chemin + "\\bgIMG\\EditG.png");
			this->buttonRemoveClient->Image = Image::FromFile(Chemin + "\\bgIMG\\remove.png");
			this->buttonSearchClient->Image = Image::FromFile(Chemin + "\\bgIMG\\search.png");

			this->textBoxClientpersonId->BackColor = System::Drawing::Color::Orange;
			this->labelClientpersonId->Font->Bold;

			this->ResumeLayout(false);
		}
	}
	private: System::Void buttonRemoveClient_Click(System::Object^ sender, System::EventArgs^) {
		if (Mode != "RemoveClient")
		{
			Mode = "RemoveClient";
			this->SuspendLayout();
			ActivateClientTextBox();
			this->buttonAddClient->Image = Image::FromFile(Chemin + "\\bgIMG\\add.png");
			this->buttonModifyClient->Image = Image::FromFile(Chemin + "\\bgIMG\\Edit.png");
			this->buttonRemoveClient->Image = Image::FromFile(Chemin + "\\bgIMG\\removeG.png");
			this->buttonSearchClient->Image = Image::FromFile(Chemin + "\\bgIMG\\search.png");

			this->textBoxClientLastName->Enabled = false;
			this->textBoxClientLastName->BackColor = System::Drawing::Color::LightGray;
			this->textBoxClientLastName->Text = "";

			this->textBoxClientFirstName->Enabled = false;
			this->textBoxClientFirstName->BackColor = System::Drawing::Color::LightGray;
			this->textBoxClientFirstName->Text = "";

			this->textBoxClientBirthDate->Enabled = false;
			this->textBoxClientBirthDate->BackColor = System::Drawing::Color::LightGray;
			this->textBoxClientBirthDate->Text = "";

			this->textBoxClientCompanyName->Enabled = false;
			this->textBoxClientCompanyName->BackColor = System::Drawing::Color::LightGray;
			this->textBoxClientCompanyName->Text = "";

			this->ResumeLayout(false);
		}
	}
	private: System::Void buttonSearchClient_Click(System::Object^ sender, System::EventArgs^) {
		if (Mode != "SearchClient")
		{
			Mode = "SearchClient";
			this->SuspendLayout();
			ActivateClientTextBox();
			this->dataGridDisplayClient->Refresh();
			this->dataGridDisplayClient->DataSource = this->DB_Client->Select("client");
			this->dataGridDisplayClient->DataMember = "client";
			this->buttonAddClient->Image = Image::FromFile(Chemin + "\\bgIMG\\add.png");
			this->buttonModifyClient->Image = Image::FromFile(Chemin + "\\bgIMG\\Edit.png");
			this->buttonRemoveClient->Image = Image::FromFile(Chemin + "\\bgIMG\\remove.png");
			this->buttonSearchClient->Image = Image::FromFile(Chemin + "\\bgIMG\\searchG.png");
			this->ResumeLayout(false);
		}
	}
	private: System::Void buttonClientValidation_Click(System::Object^ sender, System::EventArgs^) {


		Client^ client = gcnew Client(this->username, this->password);

		String^ personid = "";
		String^ clientid = "";
		String^ lastName = "";
		String^ firstName = "";
		String^ birthDate = "";
		String^ companyName = "";

		if (this->textBoxClientpersonId->Text != "")
		{
			personid = this->textBoxClientpersonId->Text;
		}
		if (this->textBoxClientclientId->Text != "")
		{
			clientid = this->textBoxClientLastName->Text;
		}
		if (this->textBoxClientLastName->Text != "")
		{
			lastName = this->textBoxClientLastName->Text;
		}
		if (this->textBoxClientFirstName->Text != "")
		{
			firstName = this->textBoxClientFirstName->Text;
		}
		if (this->textBoxClientBirthDate->Text != "")
		{
			birthDate = this->textBoxClientBirthDate->Text;
		}
		if (this->textBoxClientCompanyName->Text != "")
		{
			companyName = this->textBoxClientCompanyName->Text;
		}

		if (Mode == "AddClient")
		{
			client->Add(lastName, firstName, birthDate, companyName);
			this->textBoxClientpersonId->Text = "";
			this->textBoxClientclientId->Text = "";
			this->textBoxClientLastName->Text = "";
			this->textBoxClientFirstName->Text = "";
			this->textBoxClientBirthDate->Text = "";
			this->textBoxClientCompanyName->Text = "";
			
			this->dataGridDisplayClient->Refresh();
			this->dataGridDisplayClient->DataSource = this->DB_Client->Select("client");
			this->dataGridDisplayClient->DataMember = "client";

			Mode = "";
			setLogoClient();
			ActivateClientTextBox();
		}
		else if (Mode == "ModifyClient")
		{
			client->Modify(personid, clientid, lastName, firstName, birthDate, companyName);
			this->textBoxClientpersonId->Text = "";
			this->textBoxClientclientId->Text = "";
			this->textBoxClientLastName->Text = "";
			this->textBoxClientFirstName->Text = "";
			this->textBoxClientBirthDate->Text = "";
			this->textBoxClientCompanyName->Text = "";

			this->dataGridDisplayClient->Refresh();
			this->dataGridDisplayClient->DataSource = this->DB_Client->Select("client");
			this->dataGridDisplayClient->DataMember = "client";

			Mode = "";
			setLogoClient();
			ActivateClientTextBox();
		}
		else if (Mode == "RemoveClient")
		{
			client->Remove(personid);
			this->textBoxClientpersonId->Text = "";
			this->textBoxClientclientId->Text = "";
			this->textBoxClientLastName->Text = "";
			this->textBoxClientFirstName->Text = "";
			this->textBoxClientBirthDate->Text = "";
			this->textBoxClientCompanyName->Text = "";

			this->dataGridDisplayClient->Refresh();
			this->dataGridDisplayClient->DataSource = this->DB_Client->Select("client");
			this->dataGridDisplayClient->DataMember = "client";

			Mode = "";
			setLogoClient();
			ActivateClientTextBox();
		}
		else if (Mode == "SearchClient")
		{
			this->dataGridDisplayClient->Refresh();
			this->dataGridDisplayClient->DataSource = client->Search(personid, clientid, lastName, firstName, birthDate, companyName);
			this->dataGridDisplayClient->DataMember = "client";
			this->textBoxClientpersonId->Text = "";
			this->textBoxClientclientId->Text = "";
			this->textBoxClientLastName->Text = "";
			this->textBoxClientFirstName->Text = "";
			this->textBoxClientBirthDate->Text = "";
			this->textBoxClientCompanyName->Text = "";
			Mode = "";
			setLogoClient();
			ActivateClientTextBox();
		}
	}

	private: System::Void buttonEmployee_Click(System::Object^ sender, System::EventArgs^) {
		this->SuspendLayout();
		if (tabController->SelectedTab != tabEmployee) {
			tabController->SelectedTab = tabEmployee;
			labelTitle->Text = "      Employee";

			DB_Employee = gcnew Employee(username, password);

			this->dataGridDisplayEmployee->Refresh();
			this->dataGridDisplayEmployee->DataSource = this->DB_Employee->Select("employee");
			this->dataGridDisplayEmployee->DataMember = "employee";
			
		}
		SetAllLogos();
		this->ResumeLayout(false);
	}
	private: System::Void ActivateEmployeeTextBox() {
		this->textBoxEmployeePersonId->Enabled = true;
		this->textBoxEmployeeEmployeeId->Enabled = true;
		this->textBoxEmployeeLastName->Enabled = true;
		this->textBoxEmployeeFirstName->Enabled = true;
		this->textBoxEmployeeBirthDate->Enabled = true;
		this->textBoxEmployeeemployeeRank->Enabled = true;
		this->textBoxEmployeehiringDate->Enabled = true;
		this->textBoxEmployeePersonId->BackColor = System::Drawing::Color::White;
		this->textBoxEmployeeEmployeeId->BackColor = System::Drawing::Color::White;
		this->textBoxEmployeeLastName->BackColor = System::Drawing::Color::White;
		this->textBoxEmployeeFirstName->BackColor = System::Drawing::Color::White;
		this->textBoxEmployeeBirthDate->BackColor = System::Drawing::Color::White;
		this->textBoxEmployeeemployeeRank->BackColor = System::Drawing::Color::White;
		this->textBoxEmployeehiringDate->BackColor = System::Drawing::Color::White;
		}
	private: System::Void setLogoEmployee() {
		this->SuspendLayout();
		this->buttonAddEmployee->Image = Image::FromFile(Chemin + "\\bgIMG\\add.png");
		this->buttonModifyEmployee->Image = Image::FromFile(Chemin + "\\bgIMG\\Edit.png");
		this->buttonRemoveEmployee->Image = Image::FromFile(Chemin + "\\bgIMG\\remove.png");
		this->buttonSearchEmployee->Image = Image::FromFile(Chemin + "\\bgIMG\\search.png");
		this->ResumeLayout(false);
	}
	private: System::Void buttonAddEmployee_Click(System::Object^ sender, System::EventArgs^) {
		if (Mode != "AddEmployee")
		{
			Mode = "AddEmployee";
			this->SuspendLayout();
			ActivateEmployeeTextBox();
			this->buttonAddEmployee->Image = Image::FromFile(Chemin + "\\bgIMG\\addG.png");
			this->buttonModifyEmployee->Image = Image::FromFile(Chemin + "\\bgIMG\\Edit.png");
			this->buttonRemoveEmployee->Image = Image::FromFile(Chemin + "\\bgIMG\\remove.png");
			this->buttonSearchEmployee->Image = Image::FromFile(Chemin + "\\bgIMG\\search.png");
			this->textBoxEmployeePersonId->Enabled = false;
			this->textBoxEmployeePersonId->BackColor = System::Drawing::Color::LightGray;
			this->textBoxEmployeePersonId->Text = "";
			this->textBoxEmployeeEmployeeId->Enabled = false;
			this->textBoxEmployeeEmployeeId->BackColor = System::Drawing::Color::LightGray;
			this->textBoxEmployeeEmployeeId->Text = "";
			this->ResumeLayout(false);
		}
	}
	private: System::Void buttonModifyEmployee_Click(System::Object^ sender, System::EventArgs^) {
		if (Mode != "ModifyEmployee")
		{
			Mode = "ModifyEmployee";
			this->SuspendLayout();
			ActivateEmployeeTextBox();
			this->buttonAddEmployee->Image = Image::FromFile(Chemin + "\\bgIMG\\add.png");
			this->buttonModifyEmployee->Image = Image::FromFile(Chemin + "\\bgIMG\\EditG.png");
			this->buttonRemoveEmployee->Image = Image::FromFile(Chemin + "\\bgIMG\\remove.png");
			this->buttonSearchEmployee->Image = Image::FromFile(Chemin + "\\bgIMG\\search.png");
			
			this->textBoxEmployeePersonId->BackColor = System::Drawing::Color::Orange;
			this->labelEmployeepersonId->Font->Bold;
			this->ResumeLayout(false);
		}
	}
	private: System::Void buttonRemoveEmployee_Click(System::Object^ sender, System::EventArgs^) {
		if (Mode != "RemoveEmployee")
		{
			Mode = "RemoveEmployee";
			this->SuspendLayout();
			ActivateEmployeeTextBox();
			this->buttonAddEmployee->Image = Image::FromFile(Chemin + "\\bgIMG\\add.png");
			this->buttonModifyEmployee->Image = Image::FromFile(Chemin + "\\bgIMG\\Edit.png");
			this->buttonRemoveEmployee->Image = Image::FromFile(Chemin + "\\bgIMG\\removeG.png");
			this->buttonSearchEmployee->Image = Image::FromFile(Chemin + "\\bgIMG\\search.png");
			
			this->textBoxEmployeeFirstName->Enabled = false;
			this->textBoxEmployeeFirstName->BackColor = System::Drawing::Color::LightGray;
			this->textBoxEmployeeFirstName->Text = "";
			
			this->textBoxEmployeeLastName->Enabled = false;
			this->textBoxEmployeeLastName->BackColor = System::Drawing::Color::LightGray;
			this->textBoxEmployeeLastName->Text = "";

			this->textBoxEmployeeBirthDate->Enabled = false;
			this->textBoxEmployeeBirthDate->BackColor = System::Drawing::Color::LightGray;
			this->textBoxEmployeeBirthDate->Text = "";

			this->textBoxEmployeehiringDate->Enabled = false;
			this->textBoxEmployeehiringDate->BackColor = System::Drawing::Color::LightGray;
			this->textBoxEmployeehiringDate->Text = "";

			this->textBoxEmployeeemployeeRank->Enabled = false;
			this->textBoxEmployeeemployeeRank->BackColor = System::Drawing::Color::LightGray;
			this->textBoxEmployeeemployeeRank->Text = "";
			
			this->ResumeLayout(false);
		}
	}
	private: System::Void buttonSearchEmployee_Click(System::Object^ sender, System::EventArgs^) {
		if (Mode != "SearchEmployee")
		{
			Mode = "SearchEmployee";
			this->SuspendLayout();
			ActivateEmployeeTextBox();
			this->buttonAddEmployee->Image = Image::FromFile(Chemin + "\\bgIMG\\add.png");
			this->buttonModifyEmployee->Image = Image::FromFile(Chemin + "\\bgIMG\\edit.png");
			this->buttonRemoveEmployee->Image = Image::FromFile(Chemin + "\\bgIMG\\remove.png");
			this->buttonSearchEmployee->Image = Image::FromFile(Chemin + "\\bgIMG\\searchG.png");
			this->ResumeLayout(false);
		}
	}
	private: System::Void buttonEmployeeValidation_Click(System::Object^ sender, System::EventArgs^) {


		Employee^ employee = gcnew Employee(this->username, this->password);

		String^ personid = "";
		String^ employeeid = "";
		String^ lastName = "";
		String^ firstName = "";
		String^ birthDate = "";
		String^ hiringDate = "";
		String^ employeeRank = "";

		if (this->textBoxEmployeePersonId->Text != "")
		{
			personid = this->textBoxEmployeePersonId->Text;
		}
		if (this->textBoxEmployeeEmployeeId->Text != "")
		{
			employeeid = this->textBoxEmployeeEmployeeId->Text;
		}
		if (this->textBoxEmployeeLastName->Text != "")
		{
			lastName = this->textBoxEmployeeLastName->Text;
		}
		if (this->textBoxEmployeeFirstName->Text != "")
		{
			firstName = this->textBoxEmployeeFirstName->Text;
		}
		if (this->textBoxEmployeeBirthDate->Text != "")
		{
			birthDate = this->textBoxEmployeeBirthDate->Text;
		}
		if (this->textBoxEmployeehiringDate->Text != "")
		{
			hiringDate = this->textBoxEmployeehiringDate->Text;
		}
		if (this->textBoxEmployeeemployeeRank->Text != "")
		{
			employeeRank = this->textBoxEmployeeemployeeRank->Text;
		}

		if (Mode == "AddEmployee")
		{
			employee->Add(lastName, firstName, birthDate, hiringDate, employeeRank);
			this->textBoxEmployeePersonId->Text = "";
			this->textBoxEmployeeEmployeeId->Text = "";
			this->textBoxEmployeeLastName->Text = "";
			this->textBoxEmployeeFirstName->Text = "";
			this->textBoxEmployeeBirthDate->Text = "";
			this->textBoxEmployeehiringDate->Text = "";
			this->textBoxEmployeeemployeeRank->Text = "";

			this->dataGridDisplayEmployee->Refresh();
			this->dataGridDisplayEmployee->DataSource = this->DB_Employee->Select("employee");
			this->dataGridDisplayEmployee->DataMember = "employee";

			Mode = "";
			setLogoEmployee();
			ActivateEmployeeTextBox();
		}
		else if (Mode == "ModifyEmployee")
		{
			employee->Modify(personid, employeeid, lastName, firstName, birthDate, hiringDate, employeeRank);
			this->textBoxEmployeePersonId->Text = "";
			this->textBoxEmployeeEmployeeId->Text = "";
			this->textBoxEmployeeLastName->Text = "";
			this->textBoxEmployeeFirstName->Text = "";
			this->textBoxEmployeeBirthDate->Text = "";
			this->textBoxEmployeehiringDate->Text = "";
			this->textBoxEmployeeemployeeRank->Text = "";

			this->dataGridDisplayEmployee->Refresh();
			this->dataGridDisplayEmployee->DataSource = this->DB_Employee->Select("employee");
			this->dataGridDisplayEmployee->DataMember = "employee";

			Mode = "";
			setLogoEmployee();
			ActivateEmployeeTextBox();
		}
		else if (Mode == "RemoveEmployee")
		{
			employee->Remove(personid);
			this->textBoxEmployeePersonId->Text = "";
			this->textBoxEmployeeEmployeeId->Text = "";
			this->textBoxEmployeeLastName->Text = "";
			this->textBoxEmployeeFirstName->Text = "";
			this->textBoxEmployeeBirthDate->Text = "";
			this->textBoxEmployeehiringDate->Text = "";
			this->textBoxEmployeeemployeeRank->Text = "";

			this->dataGridDisplayEmployee->Refresh();
			this->dataGridDisplayEmployee->DataSource = this->DB_Employee->Select("employee");
			this->dataGridDisplayEmployee->DataMember = "employee";

			Mode = "";
			setLogoEmployee();
			ActivateEmployeeTextBox();
		}
		else if (Mode == "SearchEmployee")
		{
			this->dataGridDisplayEmployee->Refresh();
			this->dataGridDisplayEmployee->DataSource = employee->Search(personid, employeeid, lastName, firstName, birthDate, hiringDate, employeeRank);
			this->dataGridDisplayEmployee->DataMember = "employee";
			this->textBoxEmployeePersonId->Text = "";
			this->textBoxEmployeeLastName->Text = "";
			this->textBoxEmployeeFirstName->Text = "";
			this->textBoxEmployeeBirthDate->Text = "";
			this->textBoxEmployeehiringDate->Text = "";
			this->textBoxEmployeeemployeeRank->Text = "";
			
			Mode = "";
			setLogoEmployee();
			ActivateEmployeeTextBox();
		}
	}

	private: System::Void buttonArticle_Click(System::Object^ sender, System::EventArgs^) {
		this->SuspendLayout();
		if (tabController->SelectedTab != tabArticle) {
			tabController->SelectedTab = tabArticle;
			labelTitle->Text = "      Article";

			DB_Article = gcnew Article(username, password);

			this->dataGridDisplayArticle->Refresh();
			this->dataGridDisplayArticle->DataSource = this->DB_Article->Select("Article");
			this->dataGridDisplayArticle->DataMember = "Article";
		}
		SetAllLogos();
		this->ResumeLayout(false);
	}
	private: System::Void ActivateArticleTextBox() {
		this->textBoxArticlearticleId->Enabled = true;
		this->textBoxArticlearticleReference->Enabled = true;
		this->textBoxArticlearticleDenomination->Enabled = true;
		this->textBoxArticlearticleTax->Enabled = true;
		this->textBoxArticlearticleQuantity->Enabled = true;
		this->textBoxArticlearticleDescription->Enabled = true;
		this->textBoxArticlereapprovalTreshold->Enabled = true;
		this->textBoxArticlearticlePrice->Enabled = true;
		this->textBoxArticlearticleValue->Enabled = true;

		this->textBoxArticlearticleId->BackColor = System::Drawing::Color::White;
		this->textBoxArticlearticleReference->BackColor = System::Drawing::Color::White;
		this->textBoxArticlearticleDenomination->BackColor = System::Drawing::Color::White;
		this->textBoxArticlearticleTax->BackColor = System::Drawing::Color::White;
		this->textBoxArticlearticleQuantity->BackColor = System::Drawing::Color::White;
		this->textBoxArticlearticleDescription->BackColor = System::Drawing::Color::White;
		this->textBoxArticlereapprovalTreshold->BackColor = System::Drawing::Color::White;
		this->textBoxArticlearticlePrice->BackColor = System::Drawing::Color::White;
		this->textBoxArticlearticleValue->BackColor = System::Drawing::Color::White;
	}
	private: System::Void setLogoArticle() {
		this->SuspendLayout();
		this->buttonAddArticle->Image = Image::FromFile(Chemin + "\\bgIMG\\add.png");
		this->buttonModifyArticle->Image = Image::FromFile(Chemin + "\\bgIMG\\edit.png");
		this->buttonRemoveArticle->Image = Image::FromFile(Chemin + "\\bgIMG\\remove.png");
		this->buttonSearchArticle->Image = Image::FromFile(Chemin + "\\bgIMG\\search.png");
		this->ResumeLayout(false);
	}
	private: System::Void buttonAddArticle_Click(System::Object^ sender, System::EventArgs^) {
		if (Mode != "AddArticle")
		{
			Mode = "AddArticle";
			this->SuspendLayout();
			ActivateArticleTextBox();
			this->buttonAddArticle->Image = Image::FromFile(Chemin + "\\bgIMG\\addG.png");
			this->buttonModifyArticle->Image = Image::FromFile(Chemin + "\\bgIMG\\edit.png");
			this->buttonRemoveArticle->Image = Image::FromFile(Chemin + "\\bgIMG\\remove.png");
			this->buttonSearchArticle->Image = Image::FromFile(Chemin + "\\bgIMG\\search.png");
			this->textBoxArticlearticleId->Enabled = false;
			this->textBoxArticlearticleId->BackColor = System::Drawing::Color::LightGray;
			this->textBoxArticlearticleId->Text = "";
			this->ResumeLayout(false);
		}
	}
	private: System::Void buttonModifyArticle_Click(System::Object^ sender, System::EventArgs^) {
		if (Mode != "ModifyArticle")
		{
			Mode = "ModifyArticle";
			this->SuspendLayout();
			ActivateArticleTextBox();
			this->buttonAddArticle->Image = Image::FromFile(Chemin + "\\bgIMG\\add.png");
			this->buttonModifyArticle->Image = Image::FromFile(Chemin + "\\bgIMG\\editG.png");
			this->buttonRemoveArticle->Image = Image::FromFile(Chemin + "\\bgIMG\\remove.png");
			this->buttonSearchArticle->Image = Image::FromFile(Chemin + "\\bgIMG\\search.png");

			this->textBoxArticlearticleId->BackColor = System::Drawing::Color::Orange;
			this->labelArticlearticleId->Font->Bold;

			this->ResumeLayout(false);
		}
	}
	private: System::Void buttonRemoveArticle_Click(System::Object^ sender, System::EventArgs^) {
		if (Mode != "RemoveArticle")
		{
			Mode = "RemoveArticle";
			this->SuspendLayout();
			ActivateArticleTextBox();

			this->buttonAddArticle->Image = Image::FromFile(Chemin + "\\bgIMG\\add.png");
			this->buttonModifyArticle->Image = Image::FromFile(Chemin + "\\bgIMG\\edit.png");
			this->buttonRemoveArticle->Image = Image::FromFile(Chemin + "\\bgIMG\\removeG.png");
			this->buttonSearchArticle->Image = Image::FromFile(Chemin + "\\bgIMG\\search.png");

			this->textBoxArticlearticleReference->Enabled = false;
			this->textBoxArticlearticleReference->BackColor = System::Drawing::Color::LightGray;
			this->textBoxArticlearticleReference->Text = "";

			this->textBoxArticlearticleDenomination->Enabled = false;
			this->textBoxArticlearticleDenomination->BackColor = System::Drawing::Color::LightGray;
			this->textBoxArticlearticleDenomination->Text = "";

			this->textBoxArticlearticleTax->Enabled = false;
			this->textBoxArticlearticleTax->BackColor = System::Drawing::Color::LightGray;
			this->textBoxArticlearticleTax->Text = "";

			this->textBoxArticlearticleQuantity->Enabled = false;
			this->textBoxArticlearticleQuantity->BackColor = System::Drawing::Color::LightGray;
			this->textBoxArticlearticleQuantity->Text = "";

			this->textBoxArticlearticleDescription->Enabled = false;
			this->textBoxArticlearticleDescription->BackColor = System::Drawing::Color::LightGray;
			this->textBoxArticlearticleDescription->Text = "";

			this->textBoxArticlereapprovalTreshold->Enabled = false;
			this->textBoxArticlereapprovalTreshold->BackColor = System::Drawing::Color::LightGray;
			this->textBoxArticlereapprovalTreshold->Text = "";

			this->textBoxArticlearticlePrice->Enabled = false;
			this->textBoxArticlearticlePrice->BackColor = System::Drawing::Color::LightGray;
			this->textBoxArticlearticlePrice->Text = "";

			this->textBoxArticlearticleValue->Enabled = false;
			this->textBoxArticlearticleValue->BackColor = System::Drawing::Color::LightGray;
			this->textBoxArticlearticleValue->Text = "";

			this->ResumeLayout(false);
		}
	}
	private: System::Void buttonSearchArticle_Click(System::Object^ sender, System::EventArgs^) {
		if (Mode != "SearchArticle")
		{
			Mode = "SearchArticle";
			this->SuspendLayout();
			ActivateArticleTextBox();
			this->dataGridDisplayArticle->Refresh();
			this->dataGridDisplayArticle->DataSource = this->DB_Article->Select("articles");
			this->dataGridDisplayArticle->DataMember = "articles";
			this->buttonAddArticle->Image = Image::FromFile(Chemin + "\\bgIMG\\add.png");
			this->buttonModifyArticle->Image = Image::FromFile(Chemin + "\\bgIMG\\edit.png");
			this->buttonRemoveArticle->Image = Image::FromFile(Chemin + "\\bgIMG\\remove.png");
			this->buttonSearchArticle->Image = Image::FromFile(Chemin + "\\bgIMG\\searchG.png");
			this->ResumeLayout(false);
		}
	}
	private: System::Void buttonArticleValidation_Click(System::Object^ sender, System::EventArgs^)
	{
		Article^ article = gcnew Article(this->username, this->password);

		String^ id = "";
		String^ reference = "";
		String^ denomination = "";
		String^ tax = "";
		String^ quantity = "";
		String^ description = "";
		String^ reapprovalTreshold = "";
		String^ price = "";
		String^ value = "";

		if (this->textBoxArticlearticleId->Text != "")
		{
			id = this->textBoxArticlearticleId->Text;
		}
		if (this->textBoxArticlearticleReference->Text != "")
		{
			reference = this->textBoxArticlearticleReference->Text;
		}
		if (this->textBoxArticlearticleDenomination->Text != "")
		{
			denomination = this->textBoxArticlearticleDenomination->Text;
		}
		if (this->textBoxArticlearticleTax->Text != "")
		{
			tax = this->textBoxArticlearticleTax->Text;
		}
		if (this->textBoxArticlearticleQuantity->Text != "")
		{
			quantity = this->textBoxArticlearticleQuantity->Text;
		}
		if (this->textBoxArticlearticleDescription->Text != "")
		{
			description = this->textBoxArticlearticleDescription->Text;
		}
		if (this->textBoxArticlereapprovalTreshold->Text != "")
		{
			reapprovalTreshold = this->textBoxArticlereapprovalTreshold->Text;
		}
		if (this->textBoxArticlearticlePrice->Text != "")
		{
			price = this->textBoxArticlearticlePrice->Text;
		}
		if (this->textBoxArticlearticleValue->Text != "")
		{
			value = this->textBoxArticlearticleValue->Text;
		}


		if (Mode == "AddArticle")
		{
			article->Add(reference, denomination, description, tax, quantity, reapprovalTreshold, price, value);
			this->textBoxArticlearticleId->Text = "";
			this->textBoxArticlearticleId->Text = "";
			this->textBoxArticlearticleReference->Text = "";
			this->textBoxArticlearticleDenomination->Text = "";
			this->textBoxArticlearticleTax->Text = "";
			this->textBoxArticlearticleQuantity->Text = "";
			this->textBoxArticlearticleDescription->Text = "";
			this->textBoxArticlereapprovalTreshold->Text = "";
			this->textBoxArticlearticlePrice->Text = "";
			this->textBoxArticlearticleValue->Text = "";

			this->dataGridDisplayArticle->Refresh();
			this->dataGridDisplayArticle->DataSource = this->DB_Article->Select("articles");
			this->dataGridDisplayArticle->DataMember = "articles";

			Mode = "";
			setLogoArticle();
			ActivateArticleTextBox();
		}
		else if (Mode == "ModifyArticle")
		{
			article->Modify(id, reference, denomination, description, tax, quantity, reapprovalTreshold, price, value);
			this->textBoxArticlearticleId->Text = "";
			this->textBoxArticlearticleId->Text = "";
			this->textBoxArticlearticleReference->Text = "";
			this->textBoxArticlearticleDenomination->Text = "";
			this->textBoxArticlearticleTax->Text = "";
			this->textBoxArticlearticleQuantity->Text = "";
			this->textBoxArticlearticleDescription->Text = "";
			this->textBoxArticlereapprovalTreshold->Text = "";
			this->textBoxArticlearticlePrice->Text = "";
			this->textBoxArticlearticleValue->Text = "";

			this->dataGridDisplayArticle->Refresh();
			this->dataGridDisplayArticle->DataSource = this->DB_Article->Select("articles");
			this->dataGridDisplayArticle->DataMember = "articles";

			Mode = "";
			setLogoArticle();
			ActivateArticleTextBox();
		}
		else if (Mode == "RemoveArticle")
		{
			article->Remove(id);
			this->textBoxArticlearticleId->Text = "";
			this->textBoxArticlearticleReference->Text = "";
			this->textBoxArticlearticleDenomination->Text = "";
			this->textBoxArticlearticleTax->Text = "";
			this->textBoxArticlearticleQuantity->Text = "";
			this->textBoxArticlearticleDescription->Text = "";
			this->textBoxArticlereapprovalTreshold->Text = "";
			this->textBoxArticlearticlePrice->Text = "";
			this->textBoxArticlearticleValue->Text = "";

			this->dataGridDisplayArticle->Refresh();
			this->dataGridDisplayArticle->DataSource = this->DB_Article->Select("articles");
			this->dataGridDisplayArticle->DataMember = "articles";

			Mode = "";
			setLogoArticle();
			ActivateArticleTextBox();
		}
		else if (Mode == "SearchArticle")
		{
			this->dataGridDisplayArticle->Refresh();
			this->dataGridDisplayArticle->DataSource = article->Search(id, reference, denomination, description, tax, quantity, reapprovalTreshold, price, value);
			this->dataGridDisplayArticle->DataMember = "articles";

			this->textBoxArticlearticleId->Text = "";
			this->textBoxArticlearticleReference->Text = "";
			this->textBoxArticlearticleDenomination->Text = "";
			this->textBoxArticlearticleTax->Text = "";
			this->textBoxArticlearticleQuantity->Text = "";
			this->textBoxArticlearticleDescription->Text = "";
			this->textBoxArticlereapprovalTreshold->Text = "";
			this->textBoxArticlearticlePrice->Text = "";
			this->textBoxArticlearticleValue->Text = "";


			Mode = "";
			setLogoArticle();
			ActivateArticleTextBox();
		}
	}

	private: System::Void buttonPurchase_Click(System::Object^ sender, System::EventArgs^) {
		if (tabController->SelectedTab != tabPurchase) {
			tabController->SelectedTab = tabPurchase;
			labelTitle->Text = "      Purchase";

			DB_Purchase = gcnew Purchase(username, password);

			this->dataGridDisplayPurchase->Refresh();
			this->dataGridDisplayPurchase->DataSource = this->DB_Purchase->Select("purchase");
			this->dataGridDisplayPurchase->DataMember = "purchase";
		}
		SetAllLogos();
	}
	private: System::Void ActivatePurchaseTextBox()
	{
		this->textBoxPurchasepurchaseId->Enabled = true;
		this->textBoxPurchasepurchaseReference->Enabled = true;
		this->textBoxPurchasetotalPrice->Enabled = true;
		this->textBoxPurchasepurchaseTax->Enabled = true;
		this->textBoxPurchasepurchaseTotalWithTax->Enabled = true;
		this->textBoxPurchasepurchaseDate->Enabled = true;
		this->textBoxPurchasepaymentIssueDate->Enabled = true;
		this->textBoxPurchasedeliveryDate->Enabled = true;
		this->textBoxPurchasenumberOfPayment->Enabled = true;
		this->textBoxPurchasepersonId->Enabled = true;
		this->textBoxPurchasepersonLastName->Enabled = true;
		this->textBoxPurchasepersonFirstName->Enabled = true;
		this->textBoxPurchasepurchaseId->BackColor = System::Drawing::Color::White;
		this->textBoxPurchasepurchaseReference->BackColor = System::Drawing::Color::White;
		this->textBoxPurchasetotalPrice->BackColor = System::Drawing::Color::White;
		this->textBoxPurchasepurchaseTax->BackColor = System::Drawing::Color::White;
		this->textBoxPurchasepurchaseTotalWithTax->BackColor = System::Drawing::Color::White;
		this->textBoxPurchasepurchaseDate->BackColor = System::Drawing::Color::White;
		this->textBoxPurchasepaymentIssueDate->BackColor = System::Drawing::Color::White;
		this->textBoxPurchasedeliveryDate->BackColor = System::Drawing::Color::White;
		this->textBoxPurchasenumberOfPayment->BackColor = System::Drawing::Color::White;
		this->textBoxPurchasepersonId->BackColor = System::Drawing::Color::White;
		this->textBoxPurchasepersonLastName->BackColor = System::Drawing::Color::White;
		this->textBoxPurchasepersonFirstName->BackColor = System::Drawing::Color::White;
	}
	private: System::Void setLogoPurchase() {
		this->SuspendLayout();
		this->buttonAddPurchase->Image = Image::FromFile(Chemin + "\\bgIMG\\add.png");
		this->buttonModifyPurchase->Image = Image::FromFile(Chemin + "\\bgIMG\\edit.png");
		this->buttonRemovePurchase->Image = Image::FromFile(Chemin + "\\bgIMG\\remove.png");
		this->buttonSearchPurchase->Image = Image::FromFile(Chemin + "\\bgIMG\\search.png");
		this->buttonArticlesInPurchase->Image = Image::FromFile(Chemin + "\\bgIMG\\stock.png");
		this->ResumeLayout(false);
	}
	private: System::Void buttonAddPurchase_Click(System::Object^ sender, System::EventArgs^) {
		if (Mode != "AddPurchase")
		{
			Mode = "AddPurchase";
			this->SuspendLayout();
			ActivatePurchaseTextBox();
			this->buttonAddPurchase->Image = Image::FromFile(Chemin + "\\bgIMG\\addG.png");
			this->buttonModifyPurchase->Image = Image::FromFile(Chemin + "\\bgIMG\\edit.png");
			this->buttonRemovePurchase->Image = Image::FromFile(Chemin + "\\bgIMG\\remove.png");
			this->buttonSearchPurchase->Image = Image::FromFile(Chemin + "\\bgIMG\\search.png");
			this->buttonArticlesInPurchase->Image = Image::FromFile(Chemin + "\\bgIMG\\stock.png");
			this->textBoxPurchasepurchaseId->Enabled = false;
			this->textBoxPurchasepurchaseId->BackColor = System::Drawing::Color::LightGray;
			this->textBoxPurchasepurchaseId->Text = "";
			this->ResumeLayout(false);
		}
	}
	private: System::Void buttonModifyPurchase_Click(System::Object^ sender, System::EventArgs^) {
		if (Mode != "ModifyPurchase")
		{
			Mode = "ModifyPurchase";
			this->SuspendLayout();
			ActivatePurchaseTextBox();
			this->buttonAddPurchase->Image = Image::FromFile(Chemin + "\\bgIMG\\add.png");
			this->buttonModifyPurchase->Image = Image::FromFile(Chemin + "\\bgIMG\\editG.png");
			this->buttonRemovePurchase->Image = Image::FromFile(Chemin + "\\bgIMG\\remove.png");
			this->buttonSearchPurchase->Image = Image::FromFile(Chemin + "\\bgIMG\\search.png");
			this->buttonArticlesInPurchase->Image = Image::FromFile(Chemin + "\\bgIMG\\stock.png");
			this->textBoxPurchasepurchaseId->BackColor = System::Drawing::Color::Orange;
			this->labelPurchasepurchaseId->Font->Bold;
			this->ResumeLayout(false);
		}
	}
	private: System::Void buttonRemovePurchase_Click(System::Object^ sender, System::EventArgs^) {
		if (Mode != "RemovePurchase")
		{
			Mode = "RemovePurchase";
			this->SuspendLayout();
			ActivatePurchaseTextBox();
			
			this->buttonAddPurchase->Image = Image::FromFile(Chemin + "\\bgIMG\\add.png");
			this->buttonModifyPurchase->Image = Image::FromFile(Chemin + "\\bgIMG\\edit.png");
			this->buttonRemovePurchase->Image = Image::FromFile(Chemin + "\\bgIMG\\removeG.png");
			this->buttonSearchPurchase->Image = Image::FromFile(Chemin + "\\bgIMG\\search.png");
			this->buttonArticlesInPurchase->Image = Image::FromFile(Chemin + "\\bgIMG\\stock.png");
			
			this->textBoxPurchasepurchaseReference->Enabled = false;
			this->textBoxPurchasepurchaseReference->BackColor = System::Drawing::Color::LightGray;
			this->textBoxPurchasepurchaseReference->Text = "";
			
			this->textBoxPurchasetotalPrice->Enabled = false;
			this->textBoxPurchasetotalPrice->BackColor = System::Drawing::Color::LightGray;
			this->textBoxPurchasetotalPrice->Text = "";
			
			this->textBoxPurchasepurchaseTax->Enabled = false;
			this->textBoxPurchasepurchaseTax->BackColor = System::Drawing::Color::LightGray;
			this->textBoxPurchasepurchaseTax->Text = "";

			this->textBoxPurchasepurchaseTotalWithTax->Enabled = false;
			this->textBoxPurchasepurchaseTotalWithTax->BackColor = System::Drawing::Color::LightGray;
			this->textBoxPurchasepurchaseTotalWithTax->Text = "";

			this->textBoxPurchasepurchaseDate->Enabled = false;
			this->textBoxPurchasepurchaseDate->BackColor = System::Drawing::Color::LightGray;
			this->textBoxPurchasepurchaseDate->Text = "";

			this->textBoxPurchasepaymentIssueDate->Enabled = false;
			this->textBoxPurchasepaymentIssueDate->BackColor = System::Drawing::Color::LightGray;
			this->textBoxPurchasepaymentIssueDate->Text = "";

			this->textBoxPurchasedeliveryDate->Enabled = false;
			this->textBoxPurchasedeliveryDate->BackColor = System::Drawing::Color::LightGray;
			this->textBoxPurchasedeliveryDate->Text = "";

			this->textBoxPurchasenumberOfPayment->Enabled = false;
			this->textBoxPurchasenumberOfPayment->BackColor = System::Drawing::Color::LightGray;
			this->textBoxPurchasenumberOfPayment->Text = "";

			this->textBoxPurchasepersonId->Enabled = false;
			this->textBoxPurchasepersonId->BackColor = System::Drawing::Color::LightGray;
			this->textBoxPurchasepersonId->Text = "";

			this->textBoxPurchasepersonLastName->Enabled = false;
			this->textBoxPurchasepersonLastName->BackColor = System::Drawing::Color::LightGray;
			this->textBoxPurchasepersonLastName->Text = "";
			
			this->textBoxPurchasepersonFirstName->Enabled = false;
			this->textBoxPurchasepersonFirstName->BackColor = System::Drawing::Color::LightGray;
			this->textBoxPurchasepersonFirstName->Text = "";
			
			this->ResumeLayout(false);
		}
	}
	private: System::Void buttonSearchPurchase_Click(System::Object^ sender, System::EventArgs^) {
		if (Mode != "SearchPurchase")
		{
			Mode = "SearchPurchase";
			this->SuspendLayout();
			ActivatePurchaseTextBox();
			this->dataGridDisplayPurchase->Refresh();
			this->dataGridDisplayPurchase->DataSource = this->DB_Purchase->Select("purchase");
			this->dataGridDisplayPurchase->DataMember = "purchase";
			this->buttonAddPurchase->Image = Image::FromFile(Chemin + "\\bgIMG\\add.png");
			this->buttonModifyPurchase->Image = Image::FromFile(Chemin + "\\bgIMG\\edit.png");
			this->buttonRemovePurchase->Image = Image::FromFile(Chemin + "\\bgIMG\\remove.png");
			this->buttonSearchPurchase->Image = Image::FromFile(Chemin + "\\bgIMG\\searchG.png");
			this->buttonArticlesInPurchase->Image = Image::FromFile(Chemin + "\\bgIMG\\stock.png");
			this->ResumeLayout(false);
		}
	}
	private: System::Void buttonPurchaseValidation_Click(System::Object^ sender, System::EventArgs^) 
	{
		Purchase^ purchase = gcnew Purchase(this->username, this->password);

		String^ id;
		String^ reference;
		String^ total;
		String^ tax;
		String^ totalwithtax;
		String^ date;
		String^ paymentissuedate;
		String^ deliverydate;
		String^ numberofpayment;
		String^ personid;
		String^ lastName;
		String^ firstName;
		
		if (this->textBoxPurchasepurchaseId->Text != "")
		{
			id = this->textBoxPurchasepurchaseId->Text;
		}
		
		if (this->textBoxPurchasepurchaseReference->Text != "")
		{
			reference = this->textBoxPurchasepurchaseReference->Text;
		}
		
		if (this->textBoxPurchasetotalPrice->Text != "")
		{
			total = this->textBoxPurchasetotalPrice->Text;
		}

		if (this->textBoxPurchasepurchaseTax->Text != "")
		{
			tax = this->textBoxPurchasepurchaseTax->Text;
		}

		if (this->textBoxPurchasepurchaseTotalWithTax->Text != "")
		{
			totalwithtax = this->textBoxPurchasepurchaseTotalWithTax->Text;
		}

		if (this->textBoxPurchasepurchaseDate->Text != "")
		{
			date = this->textBoxPurchasepurchaseDate->Text;
		}

		if (this->textBoxPurchasepaymentIssueDate->Text != "")
		{
			paymentissuedate = this->textBoxPurchasepaymentIssueDate->Text;
		}

		if (this->textBoxPurchasedeliveryDate->Text != "")
		{
			deliverydate = this->textBoxPurchasedeliveryDate->Text;
		}

		if (this->textBoxPurchasenumberOfPayment->Text != "")
		{
			numberofpayment = this->textBoxPurchasenumberOfPayment->Text;
		}

		if (this->textBoxPurchasepersonId->Text != "")
		{
			personid = this->textBoxPurchasepersonId->Text;
		}

		if (this->textBoxPurchasepersonLastName->Text != "")
		{
			lastName = this->textBoxPurchasepersonLastName->Text;
		}

		if (this->textBoxPurchasepersonFirstName->Text != "")
		{
			firstName = this->textBoxPurchasepersonFirstName->Text;
		}

		if (Mode == "AddPurchase")
		{
			purchase->Add(reference, total, tax, totalwithtax, date, paymentissuedate, deliverydate, numberofpayment, personid, lastName, firstName);
			this->textBoxArticlearticleId->Text = "";
			this->textBoxArticlearticleReference->Text = "";
			this->textBoxArticlearticleDenomination->Text = "";
			this->textBoxArticlearticleTax->Text = "";
			this->textBoxArticlearticleQuantity->Text = "";
			this->textBoxArticlearticleDescription->Text = "";
			this->textBoxArticlereapprovalTreshold->Text = "";
			this->textBoxArticlearticlePrice->Text = "";
			this->textBoxArticlearticleValue->Text = "";

			this->dataGridDisplayPurchase->Refresh();
			this->dataGridDisplayPurchase->DataSource = this->DB_Purchase->Select("purchase");
			this->dataGridDisplayPurchase->DataMember = "purchase";

			Mode = "";
			setLogoPurchase();
			ActivatePurchaseTextBox();
		}
		else if (Mode == "ModifyPurchase")
		{
			purchase->Modify(id, reference, total, tax, totalwithtax, date, paymentissuedate, deliverydate, numberofpayment, personid, lastName, firstName);
			this->textBoxArticlearticleId->Text = "";
			this->textBoxArticlearticleReference->Text = "";
			this->textBoxArticlearticleDenomination->Text = "";
			this->textBoxArticlearticleTax->Text = "";
			this->textBoxArticlearticleQuantity->Text = "";
			this->textBoxArticlearticleDescription->Text = "";
			this->textBoxArticlereapprovalTreshold->Text = "";
			this->textBoxArticlearticlePrice->Text = "";
			this->textBoxArticlearticleValue->Text = "";
			
			this->dataGridDisplayPurchase->Refresh();
			this->dataGridDisplayPurchase->DataSource = this->DB_Purchase->Select("purchase");
			this->dataGridDisplayPurchase->DataMember = "purchase";

			Mode = "";
			setLogoPurchase();
			ActivatePurchaseTextBox();
		}
		else if (Mode == "RemovePurchase")
		{
			purchase->Remove(id);
			this->textBoxArticlearticleId->Text = "";
			this->textBoxArticlearticleReference->Text = "";
			this->textBoxArticlearticleDenomination->Text = "";
			this->textBoxArticlearticleTax->Text = "";
			this->textBoxArticlearticleQuantity->Text = "";
			this->textBoxArticlearticleDescription->Text = "";
			this->textBoxArticlereapprovalTreshold->Text = "";
			this->textBoxArticlearticlePrice->Text = "";
			this->textBoxArticlearticleValue->Text = "";
			
			this->dataGridDisplayPurchase->Refresh();
			this->dataGridDisplayPurchase->DataSource = this->DB_Purchase->Select("purchase");
			this->dataGridDisplayPurchase->DataMember = "purchase";

			Mode = "";
			setLogoPurchase();
			ActivatePurchaseTextBox();
		}
		else if (Mode == "SearchPurchase")
		{
			this->dataGridDisplayPurchase->Refresh();
			this->dataGridDisplayPurchase->DataSource = this->DB_Purchase->Search(id, reference, total, tax, totalwithtax, date, paymentissuedate, deliverydate, numberofpayment, personid, lastName, firstName);
			this->dataGridDisplayPurchase->DataMember = "purchase";
			this->textBoxArticlearticleId->Text = "";
			this->textBoxArticlearticleReference->Text = "";
			this->textBoxArticlearticleDenomination->Text = "";
			this->textBoxArticlearticleTax->Text = "";
			this->textBoxArticlearticleQuantity->Text = "";
			this->textBoxArticlearticleDescription->Text = "";
			this->textBoxArticlereapprovalTreshold->Text = "";
			this->textBoxArticlearticlePrice->Text = "";
			this->textBoxArticlearticleValue->Text = "";

			Mode = "";
			setLogoPurchase();
			ActivatePurchaseTextBox();
		}
		else if (Mode == "ArticlesInPurchaseMode")
		{
			if (tabController->SelectedTab != tabArticlesInPurchase) {
				tabController->SelectedTab = tabArticlesInPurchase;
				labelTitle->Text = "      Articles In Purchase";
				this->dataGridDisplayArticlesInPurchase->Refresh();
				this->dataGridDisplayArticlesInPurchase->DataSource = this->DB_ArticlesInPurchase->SearchArticles(id, "", "", "");
				this->dataGridDisplayArticlesInPurchase->DataMember = "purchase";

				this->textBoxArticlearticleId->Text = "";
				this->textBoxArticlearticleReference->Text = "";
				this->textBoxArticlearticleDenomination->Text = "";
				this->textBoxArticlearticleTax->Text = "";
				this->textBoxArticlearticleQuantity->Text = "";
				this->textBoxArticlearticleDescription->Text = "";
				this->textBoxArticlereapprovalTreshold->Text = "";
				this->textBoxArticlearticlePrice->Text = "";
				this->textBoxArticlearticleValue->Text = "";
				
				Mode = "";
				setLogoPurchase();
				ActivatePurchaseTextBox();
			}
		}
	}

	private: System::Void buttonArticlesInPurchase_Click(System::Object^ sender, System::EventArgs^)
	{
		DB_ArticlesInPurchase = gcnew Purchase(username, password);
		System::String^ id = this->textBoxPurchasepurchaseId->Text;
		if (Mode != "ArticlesInPurchaseMode")
		{
			Mode = "ArticlesInPurchaseMode";
			this->SuspendLayout();
			ActivatePurchaseTextBox();
			this->buttonAddPurchase->Image = Image::FromFile(Chemin + "\\bgIMG\\add.png");
			this->buttonModifyPurchase->Image = Image::FromFile(Chemin + "\\bgIMG\\edit.png");
			this->buttonRemovePurchase->Image = Image::FromFile(Chemin + "\\bgIMG\\remove.png");
			this->buttonSearchPurchase->Image = Image::FromFile(Chemin + "\\bgIMG\\search.png");
			this->buttonArticlesInPurchase->Image = Image::FromFile(Chemin + "\\bgIMG\\stockG.png");
			
			this->textBoxPurchasepurchaseReference->Enabled = false;
			this->textBoxPurchasepurchaseReference->BackColor = System::Drawing::Color::LightGray;
			this->textBoxPurchasepurchaseReference->Text = "";

			this->textBoxPurchasetotalPrice->Enabled = false;
			this->textBoxPurchasetotalPrice->BackColor = System::Drawing::Color::LightGray;
			this->textBoxPurchasetotalPrice->Text = "";

			this->textBoxPurchasepurchaseTax->Enabled = false;
			this->textBoxPurchasepurchaseTax->BackColor = System::Drawing::Color::LightGray;
			this->textBoxPurchasepurchaseTax->Text = "";

			this->textBoxPurchasepurchaseTotalWithTax->Enabled = false;
			this->textBoxPurchasepurchaseTotalWithTax->BackColor = System::Drawing::Color::LightGray;
			this->textBoxPurchasepurchaseTotalWithTax->Text = "";

			this->textBoxPurchasepurchaseDate->Enabled = false;
			this->textBoxPurchasepurchaseDate->BackColor = System::Drawing::Color::LightGray;
			this->textBoxPurchasepurchaseDate->Text = "";

			this->textBoxPurchasepaymentIssueDate->Enabled = false;
			this->textBoxPurchasepaymentIssueDate->BackColor = System::Drawing::Color::LightGray;
			this->textBoxPurchasepaymentIssueDate->Text = "";

			this->textBoxPurchasedeliveryDate->Enabled = false;
			this->textBoxPurchasedeliveryDate->BackColor = System::Drawing::Color::LightGray;
			this->textBoxPurchasedeliveryDate->Text = "";

			this->textBoxPurchasenumberOfPayment->Enabled = false;
			this->textBoxPurchasenumberOfPayment->BackColor = System::Drawing::Color::LightGray;
			this->textBoxPurchasenumberOfPayment->Text = "";

			this->textBoxPurchasepersonId->Enabled = false;
			this->textBoxPurchasepersonId->BackColor = System::Drawing::Color::LightGray;
			this->textBoxPurchasepersonId->Text = "";

			this->textBoxPurchasepersonLastName->Enabled = false;
			this->textBoxPurchasepersonLastName->BackColor = System::Drawing::Color::LightGray;
			this->textBoxPurchasepersonLastName->Text = "";

			this->textBoxPurchasepersonFirstName->Enabled = false;
			this->textBoxPurchasepersonFirstName->BackColor = System::Drawing::Color::LightGray;
			this->textBoxPurchasepersonFirstName->Text = "";
			
			this->ResumeLayout(false);
		}
	}
	

	private: System::Void buttonStatistics_Click(System::Object^ sender, System::EventArgs^) {
		if (tabController->SelectedTab != tabStatistics) {
			labelTitle->Text = "      Statistics";
			tabController->SelectedTab = tabStatistics;
			labelSubTitle->Text = "";
		}
	}
	private: System::Void buttonStats_Click(System::Object^ sender, System::EventArgs^ e) {
		DB_Stats = gcnew Statistics(username, password);

		this->statsGrid->Refresh();

		if (statsMenu == "Average basket")
		{
			this->statsGrid->DataSource = this->DB_Stats->averageBasket("purchase");
			this->statsGrid->DataMember = "purchase";
		}
		else if (statsMenu == "Sales figure per month")
		{
			this->statsGrid->DataSource = this->DB_Stats->salesFigures("purchase", statsText);
			this->statsGrid->DataMember = "purchase";
		}
		else if (statsMenu == "Articles under reapproval limit")
		{
			this->statsGrid->DataSource = this->DB_Stats->underReapproval("articles");
			this->statsGrid->DataMember = "articles";
		}
		else if (statsMenu == "Total amount of a client")
		{
			this->statsGrid->DataSource = this->DB_Stats->totalPurchases("purchase", statsText);
			this->statsGrid->DataMember = "purchase";
		}
		else if (statsMenu == "10 best articles")
		{
			this->statsGrid->DataSource = this->DB_Stats->best10("purchase");
			this->statsGrid->DataMember = "purchase";
		}
		else if (statsMenu == "10 worst articles")
		{
			this->statsGrid->DataSource = this->DB_Stats->worst10("purchase");
			this->statsGrid->DataMember = "purchase";
		}
		else if (statsMenu == "Value of the stock")
		{
			this->statsGrid->DataSource = this->DB_Stats->articlesValue("articles");
			this->statsGrid->DataMember = "articles";
		}
		else if (statsMenu == "Commercial value of the stock")
		{
			this->statsGrid->DataSource = this->DB_Stats->commercialValue("articles");
			this->statsGrid->DataMember = "articles";
		}
	}
	private: System::Void comboBoxStats_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		statsMenu = this->comboBoxStats->Text;

		if (statsMenu == "Sales figure per month")
		{
			this->statsLabel2->Text = L"Enter a month number";
			this->textBoxStats->Enabled = true;
			this->textBoxStats->BackColor = System::Drawing::Color::White;
		}
		else if (statsMenu == "Total amount of a client")
		{
			this->statsLabel2->Text = L"Enter a client ID";
			this->textBoxStats->Enabled = true;
			this->textBoxStats->BackColor = System::Drawing::Color::White;
		}
		else
		{
			this->statsLabel2->Text = L"";
			this->statsLabel2->BackColor = System::Drawing::Color::Transparent;
			this->textBoxStats->Enabled = false;
			this->textBoxStats->BackColor = System::Drawing::Color::LightGray;
			this->textBoxStats->Text = "";
		}
	}
	private: System::Void textBoxStats_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		statsText = this->textBoxStats->Text;
	}

	private: System::Void buttonHelp_Click(System::Object^ sender, System::EventArgs^) {
		if (tabController->SelectedTab != tabHelp) {
			labelTitle->Text = "      Help";
			tabController->SelectedTab = tabHelp;
			labelSubTitle->Text = "";
		}
	}

	private: System::Void Logo_Click(System::Object^ sender, System::EventArgs^ e) {
		if (tabController->SelectedTab != tabPageHome) {
			labelTitle->Text = "Home";
			tabController->SelectedTab = tabPageHome;
			labelSubTitle->Text = "";
		}
	}
private: System::Void textBox9_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}