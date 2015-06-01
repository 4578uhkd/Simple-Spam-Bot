#include <windows.h>
#include <stdio.h>
#include "include/CkHttp.h"


#pragma once

namespace OPO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Button^  changeMode;

	private: System::Windows::Forms::ToolStripMenuItem^  deutschToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  englishToolStripMenuItem;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  aboutToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  developerWebsiteToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  gitHubToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  informationToolStripMenuItem;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::ComponentModel::IContainer^  components;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->changeMode = (gcnew System::Windows::Forms::Button());
			this->deutschToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->englishToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->developerWebsiteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->gitHubToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->informationToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// changeMode
			// 
			this->changeMode->Location = System::Drawing::Point(0, 0);
			this->changeMode->Name = L"changeMode";
			this->changeMode->Size = System::Drawing::Size(75, 23);
			this->changeMode->TabIndex = 0;
			// 
			// deutschToolStripMenuItem
			// 
			this->deutschToolStripMenuItem->Name = L"deutschToolStripMenuItem";
			this->deutschToolStripMenuItem->Size = System::Drawing::Size(32, 19);
			// 
			// englishToolStripMenuItem
			// 
			this->englishToolStripMenuItem->Name = L"englishToolStripMenuItem";
			this->englishToolStripMenuItem->Size = System::Drawing::Size(32, 19);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(13, 53);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Start";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(211, 53);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Stop";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(13, 27);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(273, 20);
			this->textBox1->TabIndex = 2;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->aboutToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(298, 24);
			this->menuStrip1->TabIndex = 5;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->developerWebsiteToolStripMenuItem,
					this->gitHubToolStripMenuItem, this->informationToolStripMenuItem
			});
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(52, 20);
			this->aboutToolStripMenuItem->Text = L"About";
			// 
			// developerWebsiteToolStripMenuItem
			// 
			this->developerWebsiteToolStripMenuItem->Name = L"developerWebsiteToolStripMenuItem";
			this->developerWebsiteToolStripMenuItem->Size = System::Drawing::Size(170, 22);
			this->developerWebsiteToolStripMenuItem->Text = L"Developer website";
			this->developerWebsiteToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::developerWebsiteToolStripMenuItem_Click);
			// 
			// gitHubToolStripMenuItem
			// 
			this->gitHubToolStripMenuItem->Name = L"gitHubToolStripMenuItem";
			this->gitHubToolStripMenuItem->Size = System::Drawing::Size(170, 22);
			this->gitHubToolStripMenuItem->Text = L"GitHub";
			this->gitHubToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::gitHubToolStripMenuItem_Click);
			// 
			// informationToolStripMenuItem
			// 
			this->informationToolStripMenuItem->Name = L"informationToolStripMenuItem";
			this->informationToolStripMenuItem->Size = System::Drawing::Size(170, 22);
			this->informationToolStripMenuItem->Text = L"Information";
			this->informationToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::informationToolStripMenuItem_Click);
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(298, 87);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"#Whiler2 by Bostrot";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		//Start
private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
	timer1->Start(); //start timer
}
		 //Timer
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
	SendKeys::Send(textBox1->Text); //use text from textbox1
	SendKeys::Send("{ENTER}"); //press enter
}
		 //Stop
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	timer1->Stop(); //stop timer
}
private: System::Void developerWebsiteToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	system("explorer.exe http://p-devs.info/"); //open my website
}
private: System::Void gitHubToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	system("explorer.exe https://github.com/Bostrot/"); //open my github site
}
private: System::Void informationToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	MessageBox::Show("Developed by Bostrot\nJust type in a text and spam your friend with the 'spam' button.","Information"); //show information
}
};
}
