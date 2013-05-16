#pragma once

namespace Test1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  clickMeButton;
	private: System::Windows::Forms::LinkLabel^  siteLinkLabel;
	private: System::Windows::Forms::TextBox^  introTextBox;

	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->clickMeButton = (gcnew System::Windows::Forms::Button());
			this->siteLinkLabel = (gcnew System::Windows::Forms::LinkLabel());
			this->introTextBox = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// clickMeButton
			// 
			this->clickMeButton->Location = System::Drawing::Point(163, 152);
			this->clickMeButton->Name = L"clickMeButton";
			this->clickMeButton->Size = System::Drawing::Size(82, 23);
			this->clickMeButton->TabIndex = 0;
			this->clickMeButton->Text = L"Click Me!";
			this->clickMeButton->UseVisualStyleBackColor = true;
			this->clickMeButton->Click += gcnew System::EventHandler(this, &Form1::clickMeButton_Click);
			// 
			// siteLinkLabel
			// 
			this->siteLinkLabel->AutoSize = true;
			this->siteLinkLabel->Location = System::Drawing::Point(12, 240);
			this->siteLinkLabel->Name = L"siteLinkLabel";
			this->siteLinkLabel->Size = System::Drawing::Size(175, 13);
			this->siteLinkLabel->TabIndex = 1;
			this->siteLinkLabel->TabStop = true;
			this->siteLinkLabel->Text = L"Copyright © 2012 Joshua Kennedy.";
			this->siteLinkLabel->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Form1::siteLinkLabel_LinkClicked);
			// 
			// introTextBox
			// 
			this->introTextBox->Location = System::Drawing::Point(12, 12);
			this->introTextBox->Multiline = true;
			this->introTextBox->Name = L"introTextBox";
			this->introTextBox->ReadOnly = true;
			this->introTextBox->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->introTextBox->Size = System::Drawing::Size(385, 134);
			this->introTextBox->TabIndex = 2;
			this->introTextBox->Text = resources->GetString(L"introTextBox.Text");
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(409, 262);
			this->Controls->Add(this->introTextBox);
			this->Controls->Add(this->siteLinkLabel);
			this->Controls->Add(this->clickMeButton);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"What\'s up World\?!";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Form1::Form1_FormClosing);
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: int clicks;

	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
				 Console::WriteLine(gcnew System::String("\n\nTest 1 Started!"));
			 }
	private: System::Void clickMeButton_Click(System::Object^  sender, System::EventArgs^  e) {
				 clicks++;
				 //printf("\nUser clicked the button in Test1! They pressed it %i times.", clicks);
				 Console::WriteLine("\nUser clicked the button in Test1! They pressed it " + clicks + " times.");
			 }
	private: System::Void siteLinkLabel_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
				 ShellExecuteA(static_cast<HWND>(this->Handle.ToPointer()), "open", "http://www.joshuakennedy.co.cc/", NULL, NULL, SW_SHOWDEFAULT);
			 }
	private: System::Void Form1_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
				 printf("\nTest 1 Ended.\n");
			 }
};
}
