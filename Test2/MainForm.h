#pragma once

namespace Test2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace CSharpHelper1;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  clickMeButton;
	protected: 
	private: System::Windows::Forms::Button^  infoButton;
	private: CSharpHelper1::TestControl^  testControl1;

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
			this->clickMeButton = (gcnew System::Windows::Forms::Button());
			this->infoButton = (gcnew System::Windows::Forms::Button());
			this->testControl1 = (gcnew CSharpHelper1::TestControl());
			this->SuspendLayout();
			// 
			// clickMeButton
			// 
			this->clickMeButton->Location = System::Drawing::Point(286, 12);
			this->clickMeButton->Name = L"clickMeButton";
			this->clickMeButton->Size = System::Drawing::Size(119, 23);
			this->clickMeButton->TabIndex = 0;
			this->clickMeButton->Text = L"Press me please\?";
			this->clickMeButton->UseVisualStyleBackColor = true;
			this->clickMeButton->Click += gcnew System::EventHandler(this, &MainForm::clickMeButton_Click);
			// 
			// infoButton
			// 
			this->infoButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->infoButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->infoButton->Location = System::Drawing::Point(470, 230);
			this->infoButton->Name = L"infoButton";
			this->infoButton->Size = System::Drawing::Size(21, 23);
			this->infoButton->TabIndex = 1;
			this->infoButton->Text = L"\?";
			this->infoButton->UseVisualStyleBackColor = true;
			this->infoButton->Click += gcnew System::EventHandler(this, &MainForm::infoButton_Click);
			// 
			// testControl1
			// 
			this->testControl1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->testControl1->Location = System::Drawing::Point(12, 12);
			this->testControl1->Name = L"testControl1";
			this->testControl1->Size = System::Drawing::Size(268, 241);
			this->testControl1->TabIndex = 2;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(503, 265);
			this->Controls->Add(this->testControl1);
			this->Controls->Add(this->infoButton);
			this->Controls->Add(this->clickMeButton);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"C# Integration Test";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MainForm::MainForm_FormClosing);
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void infoButton_Click(System::Object^  sender, System::EventArgs^  e) {
				 MessageBoxA(static_cast<HWND>(this->Handle.ToPointer()), "This test displays a control written in C#, and pressing the button will call a C# function.\n\nThis message box was called with MessageBoxA.", "About This Test", MB_OK | MB_ICONINFORMATION);
			 }
	private: System::Void MainForm_Load(System::Object^  sender, System::EventArgs^  e) {
				 Console::WriteLine("\nTest 2 Started!");
			 }
	private: System::Void MainForm_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
				 Console::WriteLine("\nTest 2 Ended.");
			 }
	private: System::Void clickMeButton_Click(System::Object^  sender, System::EventArgs^  e) {
				 TestClass^ myClass = gcnew TestClass();
				 myClass->CallMe();
			 }
	};
}
