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
	private: System::Windows::Forms::Button^  button1;
	protected:

	private: System::Windows::Forms::Button^  button3;

	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;

	private: System::Windows::Forms::Button^  button8;

	private: System::Windows::Forms::Button^  changeMode;
	private: System::Windows::Forms::Label^  label4;


	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::LinkLabel^  linkLabel2;
	private: System::Windows::Forms::LinkLabel^  linkLabel1;

	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;

	private: System::Windows::Forms::ToolStripMenuItem^  deutschToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  englishToolStripMenuItem;



	private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  aboutToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  feedbackToolStripMenuItem;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ToolStripMenuItem^  updateToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  downloadNewestZIPToDesktopToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  languageToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  germanToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  englishToolStripMenuItem1;





    





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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->changeMode = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->linkLabel2 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->languageToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->germanToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->englishToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->feedbackToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->updateToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->downloadNewestZIPToDesktopToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->deutschToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->englishToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 46);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(110, 30);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Boot Fastboot";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(12, 82);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(110, 30);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Boot Recovery";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(12, 118);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(110, 30);
			this->button5->TabIndex = 4;
			this->button5->Text = L"OEM unlock";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(134, 118);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(110, 30);
			this->button6->TabIndex = 5;
			this->button6->Text = L"Restore";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(134, 154);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(110, 30);
			this->button8->TabIndex = 7;
			this->button8->Text = L"Reboot [Fastboot]";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// changeMode
			// 
			this->changeMode->Location = System::Drawing::Point(0, 0);
			this->changeMode->Name = L"changeMode";
			this->changeMode->Size = System::Drawing::Size(75, 23);
			this->changeMode->TabIndex = 0;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 356);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(442, 13);
			this->label4->TabIndex = 25;
			this->label4->Text = L"*Um ein anderes Betriebssystem zu installieren, muss zuerst der Bootloader entspe"
				L"rrt werden.";
			this->label4->Visible = false;
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(124, 163);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(110, 30);
			this->button9->TabIndex = 16;
			this->button9->Text = L"Root";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click_1);
			// 
			// label2
			// 
			this->label2->Location = System::Drawing::Point(12, 257);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(232, 80);
			this->label2->TabIndex = 23;
			this->label2->Text = resources->GetString(L"label2.Text");
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// linkLabel2
			// 
			this->linkLabel2->AutoSize = true;
			this->linkLabel2->Location = System::Drawing::Point(12, 400);
			this->linkLabel2->Name = L"linkLabel2";
			this->linkLabel2->Size = System::Drawing::Size(102, 13);
			this->linkLabel2->TabIndex = 22;
			this->linkLabel2->TabStop = true;
			this->linkLabel2->Text = L"OnePlus One Forum";
			this->linkLabel2->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::linkLabel2_LinkClicked_1);
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Location = System::Drawing::Point(149, 400);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(95, 13);
			this->linkLabel1->TabIndex = 21;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Developer website";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::linkLabel1_LinkClicked_1);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(12, 190);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(110, 30);
			this->button12->TabIndex = 20;
			this->button12->Text = L"Device list";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click_1);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(12, 154);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(110, 30);
			this->button7->TabIndex = 17;
			this->button7->Text = L"Flash";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click_1);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->languageToolStripMenuItem,
					this->helpToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(255, 24);
			this->menuStrip1->TabIndex = 27;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// languageToolStripMenuItem
			// 
			this->languageToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->germanToolStripMenuItem,
					this->englishToolStripMenuItem1
			});
			this->languageToolStripMenuItem->Name = L"languageToolStripMenuItem";
			this->languageToolStripMenuItem->Size = System::Drawing::Size(71, 20);
			this->languageToolStripMenuItem->Text = L"Language";
			// 
			// germanToolStripMenuItem
			// 
			this->germanToolStripMenuItem->Name = L"germanToolStripMenuItem";
			this->germanToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->germanToolStripMenuItem->Text = L"German";
			this->germanToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::germanToolStripMenuItem_Click_1);
			// 
			// englishToolStripMenuItem1
			// 
			this->englishToolStripMenuItem1->Name = L"englishToolStripMenuItem1";
			this->englishToolStripMenuItem1->Size = System::Drawing::Size(152, 22);
			this->englishToolStripMenuItem1->Text = L"English";
			this->englishToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::englishToolStripMenuItem1_Click_1);
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->aboutToolStripMenuItem,
					this->feedbackToolStripMenuItem, this->updateToolStripMenuItem
			});
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(44, 20);
			this->helpToolStripMenuItem->Text = L"Help";
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(124, 22);
			this->aboutToolStripMenuItem->Text = L"About";
			// 
			// feedbackToolStripMenuItem
			// 
			this->feedbackToolStripMenuItem->Name = L"feedbackToolStripMenuItem";
			this->feedbackToolStripMenuItem->Size = System::Drawing::Size(124, 22);
			this->feedbackToolStripMenuItem->Text = L"Feedback";
			// 
			// updateToolStripMenuItem
			// 
			this->updateToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->downloadNewestZIPToDesktopToolStripMenuItem });
			this->updateToolStripMenuItem->Name = L"updateToolStripMenuItem";
			this->updateToolStripMenuItem->Size = System::Drawing::Size(124, 22);
			this->updateToolStripMenuItem->Text = L"Update";
			// 
			// downloadNewestZIPToDesktopToolStripMenuItem
			// 
			this->downloadNewestZIPToDesktopToolStripMenuItem->Name = L"downloadNewestZIPToDesktopToolStripMenuItem";
			this->downloadNewestZIPToDesktopToolStripMenuItem->Size = System::Drawing::Size(248, 22);
			this->downloadNewestZIPToDesktopToolStripMenuItem->Text = L"Download newest ZIP to Desktop";
			this->downloadNewestZIPToDesktopToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::downloadNewestZIPToDesktopToolStripMenuItem_Click);
			// button2
			// 
			this->button2->Location = System::Drawing::Point(133, 46);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(110, 30);
			this->button2->TabIndex = 28;
			this->button2->Text = L"Reboot";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(133, 82);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(110, 30);
			this->button4->TabIndex = 29;
			this->button4->Text = L"Backup";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click_1);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button9);
			this->groupBox1->Location = System::Drawing::Point(9, 27);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(237, 204);
			this->groupBox1->TabIndex = 30;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Control";
			// 
			// label1
			// 
			this->label1->Location = System::Drawing::Point(12, 356);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(247, 30);
			this->label1->TabIndex = 31;
			this->label1->Text = L"*If you want to install a new operating system you have to OEM unlock your device"
				L" first.";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(255, 417);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->linkLabel2);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->groupBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"OPO Toolkit";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void splitContainer1_Panel2_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	system("adb reboot fastboot");
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	system("adb reboot");
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	system("adb reboot recovery");
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	SaveFileDialog^ sfd = gcnew SaveFileDialog();
	sfd->Filter = "Backup Files|*.ab|All Files|*.*";
	if (sfd->ShowDialog() != System::Windows::Forms::DialogResult::OK)
	{
		return;
	}


	using namespace System::Runtime::InteropServices;

	System::String^ s = "start cmd.exe /k adb backup -all -apk -shared -f " + sfd->FileName;
	char* cmd = (char*)Marshal::StringToHGlobalAnsi(s).ToPointer();
	system(cmd);
	Marshal::FreeHGlobal((IntPtr)cmd);
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	if (MessageBox::Show("This will delete all files on your device. Are you sure you want to do that?", "Warning",
		MessageBoxButtons::YesNo, MessageBoxIcon::Warning) == ::System::Windows::Forms::DialogResult::Yes){

		system("fastboot oem unlock");
	}
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	if (MessageBox::Show("This will delete all files on your device. Are you sure you want to do that?", "Warning",
		MessageBoxButtons::YesNo, MessageBoxIcon::Warning) == ::System::Windows::Forms::DialogResult::Yes){
		OpenFileDialog^ sfd = gcnew OpenFileDialog();
		sfd->Filter = "Backup Files|*.ab|All Files|*.*";
		if (sfd->ShowDialog() != System::Windows::Forms::DialogResult::OK)
		{
			return;
		}


		using namespace System::Runtime::InteropServices;

		System::String^ s = "start cmd.exe /k adb restore " + sfd->FileName;
		char* cmd = (char*)Marshal::StringToHGlobalAnsi(s).ToPointer();
		system(cmd);
		Marshal::FreeHGlobal((IntPtr)cmd);
	}
	
}
private: System::Void linkLabel1_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
	system("explorer.exe http://p-devs.info");
}
private: System::Void linkLabel2_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
	system("explorer.exe https://forums.oneplus.net/threads/oneplus-one-flash-tool.266612/");
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	system("fastboot reboot");
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	if (MessageBox::Show("This will delete all files on your device. Are you sure you want to do that?", "Warning",
		MessageBoxButtons::YesNo, MessageBoxIcon::Warning) == ::System::Windows::Forms::DialogResult::Yes){
		OpenFileDialog^ sfd = gcnew OpenFileDialog();
		sfd->Filter = ".zip Files|*.zip|All Files|*.*";
		if (sfd->ShowDialog() != System::Windows::Forms::DialogResult::OK)
		{
			return;
		}

		using namespace System::Runtime::InteropServices;

		System::String^ s = "start cmd.exe /k fastboot flash recovery " + sfd->FileName;
		char* cmd = (char*)Marshal::StringToHGlobalAnsi(s).ToPointer();
		system(cmd);
		Marshal::FreeHGlobal((IntPtr)cmd);
	}
}
		 // UPDATER!:: download file from FTP server  FTP Benutzer u239166583.updater wurde auf AREKEs0UDg
		 

private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button12_Click_1(System::Object^  sender, System::EventArgs^  e) {
	system("start cmd.exe /k adb devices");
}
private: System::Void button11_Click_1(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
//Download
}
private: System::Void button9_Click_1(System::Object^  sender, System::EventArgs^  e) {
	system("adb reboot fastboot");
	system("fastboot flash recovery SuperSUv2.46.zip");
	system("fastboot reboot");
}
private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void linkLabel2_LinkClicked_1(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
}
private: System::Void linkLabel1_LinkClicked_1(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button7_Click_1(System::Object^  sender, System::EventArgs^  e) {
	if (MessageBox::Show("This will delete all files on your device. Are you sure you want to do that?", "Warning",
		MessageBoxButtons::YesNo, MessageBoxIcon::Warning) == ::System::Windows::Forms::DialogResult::Yes){
		OpenFileDialog^ sfd = gcnew OpenFileDialog();
		sfd->Filter = ".zip Files|*.zip|All Files|*.*";
		if (sfd->ShowDialog() != System::Windows::Forms::DialogResult::OK)
		{
			return;
		}

		using namespace System::Runtime::InteropServices;

		System::String^ s = "fastboot flash recovery " + sfd->FileName;
		char* cmd = (char*)Marshal::StringToHGlobalAnsi(s).ToPointer();
		system(cmd);
		Marshal::FreeHGlobal((IntPtr)cmd);

		system("fastboot reboot");
	}
}
private: System::Void downloadNewestZIPToDesktopToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	system("start powershell.exe Invoke-WebRequest 'http://p-devs.info/OPO/OPOT.zip' -OutFile $pwd'\Desktop\OPOT.zip'");
}
private: System::Void button4_Click_1(System::Object^  sender, System::EventArgs^  e) {
	if (MessageBox::Show("Do you want to make a file-only backup? This will copy all files from your device to the computer. By pressing 'NO' the tool will make a normal backup.", "Attention",
		MessageBoxButtons::YesNo, MessageBoxIcon::Question) == ::System::Windows::Forms::DialogResult::Yes){
		system("adb pull / /backup");
	} else {
		SaveFileDialog^ sfd = gcnew SaveFileDialog();
		sfd->Filter = ".zip Files|*.zip|All Files|*.*";
		if (sfd->ShowDialog() != System::Windows::Forms::DialogResult::OK)
		{
			return;
		}

		using namespace System::Runtime::InteropServices;

		System::String^ s = "start cmd.exe /k adb backup - all - apk - shared - f  " + sfd->FileName;
		char* cmd = (char*)Marshal::StringToHGlobalAnsi(s).ToPointer();
		system(cmd);
		Marshal::FreeHGlobal((IntPtr)cmd);

	}
}
private: System::Void germanToolStripMenuItem_Click_1(System::Object^  sender, System::EventArgs^  e) {
	this->ClientSize = System::Drawing::Size(500, 417);

	this->button1->Text = L"In Fastboot starten";
	this->button2->Text = L"Gerät neustarten";
	this->button3->Text = L"In Recovery starten";
	this->button4->Text = L"Dateien sichern";
	this->button5->Text = L"Bootloader entsperren*";
	this->button6->Text = L"Sicherung wiederherstellen";
	this->button7->Text = L"Betriebssystem installieren";
	this->button8->Text = L"Aus Fastboot neustarten";
	this->button12->Text = L"ADB Geräte Liste";

	this->button1->Size = System::Drawing::Size(210, 30);
	this->button2->Size = System::Drawing::Size(210, 30);
	this->button3->Size = System::Drawing::Size(210, 30);
	this->button4->Size = System::Drawing::Size(210, 30);
	this->button5->Size = System::Drawing::Size(210, 30);
	this->button6->Size = System::Drawing::Size(210, 30);
	this->button7->Size = System::Drawing::Size(210, 30);
	this->button8->Size = System::Drawing::Size(210, 30);
	this->button9->Size = System::Drawing::Size(210, 30);
	this->label2->Size = System::Drawing::Size(480, 80);
	this->button12->Size = System::Drawing::Size(210, 30);

	this->button2->Location = System::Drawing::Point(278, 46);
	this->button4->Location = System::Drawing::Point(278, 82);
	this->button6->Location = System::Drawing::Point(278, 118);
	this->button8->Location = System::Drawing::Point(278, 154);
	this->linkLabel1->Location = System::Drawing::Point(390, 400);
	this->linkLabel2->Location = System::Drawing::Point(12, 400);
	this->button9->Location = System::Drawing::Point(268, 163);
	this->label4->Visible = true;
	this->label1->Visible = false;

	this->groupBox1->Size = System::Drawing::Size(482, 232);
	this->groupBox1->Text = L"Steuerung";
}
private: System::Void englishToolStripMenuItem1_Click_1(System::Object^  sender, System::EventArgs^  e) {
	this->button1 = (gcnew System::Windows::Forms::Button());
	this->button3 = (gcnew System::Windows::Forms::Button());
	this->button5 = (gcnew System::Windows::Forms::Button());
	this->button6 = (gcnew System::Windows::Forms::Button());
	this->button8 = (gcnew System::Windows::Forms::Button());
	this->changeMode = (gcnew System::Windows::Forms::Button());
	this->label4 = (gcnew System::Windows::Forms::Label());
	this->button9 = (gcnew System::Windows::Forms::Button());
	this->label2 = (gcnew System::Windows::Forms::Label());
	this->linkLabel2 = (gcnew System::Windows::Forms::LinkLabel());
	this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
	this->button12 = (gcnew System::Windows::Forms::Button());
	this->button7 = (gcnew System::Windows::Forms::Button());
	this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
	this->languageToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
	this->germanToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
	this->englishToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
	this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
	this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
	this->feedbackToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
	this->updateToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
	this->downloadNewestZIPToDesktopToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
	this->deutschToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
	this->englishToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
	this->button2 = (gcnew System::Windows::Forms::Button());
	this->button4 = (gcnew System::Windows::Forms::Button());
	this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
	this->label1 = (gcnew System::Windows::Forms::Label());
	this->menuStrip1->SuspendLayout();
	this->groupBox1->SuspendLayout();
	this->SuspendLayout();
	// 
	// button1
	// 
	this->button1->Location = System::Drawing::Point(12, 46);
	this->button1->Name = L"button1";
	this->button1->Size = System::Drawing::Size(110, 30);
	this->button1->TabIndex = 0;
	this->button1->Text = L"Boot Fastboot";
	this->button1->UseVisualStyleBackColor = true;
	this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
	// 
	// button3
	// 
	this->button3->Location = System::Drawing::Point(12, 82);
	this->button3->Name = L"button3";
	this->button3->Size = System::Drawing::Size(110, 30);
	this->button3->TabIndex = 2;
	this->button3->Text = L"Boot Recovery";
	this->button3->UseVisualStyleBackColor = true;
	this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
	// 
	// button5
	// 
	this->button5->Location = System::Drawing::Point(12, 118);
	this->button5->Name = L"button5";
	this->button5->Size = System::Drawing::Size(110, 30);
	this->button5->TabIndex = 4;
	this->button5->Text = L"OEM unlock";
	this->button5->UseVisualStyleBackColor = true;
	this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
	// 
	// button6
	// 
	this->button6->Location = System::Drawing::Point(134, 118);
	this->button6->Name = L"button6";
	this->button6->Size = System::Drawing::Size(110, 30);
	this->button6->TabIndex = 5;
	this->button6->Text = L"Restore";
	this->button6->UseVisualStyleBackColor = true;
	this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
	// 
	// button8
	// 
	this->button8->Location = System::Drawing::Point(134, 154);
	this->button8->Name = L"button8";
	this->button8->Size = System::Drawing::Size(110, 30);
	this->button8->TabIndex = 7;
	this->button8->Text = L"Reboot [Fastboot]";
	this->button8->UseVisualStyleBackColor = true;
	this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
	// 
	// changeMode
	// 
	this->changeMode->Location = System::Drawing::Point(0, 0);
	this->changeMode->Name = L"changeMode";
	this->changeMode->Size = System::Drawing::Size(75, 23);
	this->changeMode->TabIndex = 0;
	// 
	// label4
	// 
	this->label4->AutoSize = true;
	this->label4->Location = System::Drawing::Point(12, 356);
	this->label4->Name = L"label4";
	this->label4->Size = System::Drawing::Size(442, 13);
	this->label4->TabIndex = 25;
	this->label4->Text = L"*Um ein anderes Betriebssystem zu installieren, muss zuerst der Bootloader entspe"
		L"rrt werden.";
	this->label4->Visible = false;
	this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
	// 
	// button9
	// 
	this->button9->Location = System::Drawing::Point(124, 163);
	this->button9->Name = L"button9";
	this->button9->Size = System::Drawing::Size(110, 30);
	this->button9->TabIndex = 16;
	this->button9->Text = L"Root";
	this->button9->UseVisualStyleBackColor = true;
	this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click_1);
	// 
	// label2
	// 
	this->label2->Location = System::Drawing::Point(12, 257);
	this->label2->Name = L"label2";
	this->label2->Size = System::Drawing::Size(232, 80);
	this->label2->TabIndex = 23;
	this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
	// 
	// linkLabel2
	// 
	this->linkLabel2->AutoSize = true;
	this->linkLabel2->Location = System::Drawing::Point(12, 400);
	this->linkLabel2->Name = L"linkLabel2";
	this->linkLabel2->Size = System::Drawing::Size(102, 13);
	this->linkLabel2->TabIndex = 22;
	this->linkLabel2->TabStop = true;
	this->linkLabel2->Text = L"OnePlus One Forum";
	this->linkLabel2->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::linkLabel2_LinkClicked_1);
	// 
	// linkLabel1
	// 
	this->linkLabel1->AutoSize = true;
	this->linkLabel1->Location = System::Drawing::Point(149, 400);
	this->linkLabel1->Name = L"linkLabel1";
	this->linkLabel1->Size = System::Drawing::Size(95, 13);
	this->linkLabel1->TabIndex = 21;
	this->linkLabel1->TabStop = true;
	this->linkLabel1->Text = L"Developer website";
	this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::linkLabel1_LinkClicked_1);
	// 
	// button12
	// 
	this->button12->Location = System::Drawing::Point(12, 190);
	this->button12->Name = L"button12";
	this->button12->Size = System::Drawing::Size(110, 30);
	this->button12->TabIndex = 20;
	this->button12->Text = L"Device list";
	this->button12->UseVisualStyleBackColor = true;
	this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click_1);
	// 
	// button7
	// 
	this->button7->Location = System::Drawing::Point(12, 154);
	this->button7->Name = L"button7";
	this->button7->Size = System::Drawing::Size(110, 30);
	this->button7->TabIndex = 17;
	this->button7->Text = L"Flash";
	this->button7->UseVisualStyleBackColor = true;
	this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click_1);
	// 
	// menuStrip1
	// 
	this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
		this->languageToolStripMenuItem,
			this->helpToolStripMenuItem
	});
	this->menuStrip1->Location = System::Drawing::Point(0, 0);
	this->menuStrip1->Name = L"menuStrip1";
	this->menuStrip1->Size = System::Drawing::Size(255, 24);
	this->menuStrip1->TabIndex = 27;
	this->menuStrip1->Text = L"menuStrip1";
	// 
	// languageToolStripMenuItem
	// 
	this->languageToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
		this->germanToolStripMenuItem,
			this->englishToolStripMenuItem1
	});
	this->languageToolStripMenuItem->Name = L"languageToolStripMenuItem";
	this->languageToolStripMenuItem->Size = System::Drawing::Size(71, 20);
	this->languageToolStripMenuItem->Text = L"Language";
	// 
	// germanToolStripMenuItem
	// 
	this->germanToolStripMenuItem->Name = L"germanToolStripMenuItem";
	this->germanToolStripMenuItem->Size = System::Drawing::Size(152, 22);
	this->germanToolStripMenuItem->Text = L"German";
	this->germanToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::germanToolStripMenuItem_Click_1);
	// 
	// englishToolStripMenuItem1
	// 
	this->englishToolStripMenuItem1->Name = L"englishToolStripMenuItem1";
	this->englishToolStripMenuItem1->Size = System::Drawing::Size(152, 22);
	this->englishToolStripMenuItem1->Text = L"English";
	this->englishToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::englishToolStripMenuItem1_Click_1);
	// 
	// helpToolStripMenuItem
	// 
	this->helpToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
		this->aboutToolStripMenuItem,
			this->feedbackToolStripMenuItem, this->updateToolStripMenuItem
	});
	this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
	this->helpToolStripMenuItem->Size = System::Drawing::Size(44, 20);
	this->helpToolStripMenuItem->Text = L"Help";
	// 
	// aboutToolStripMenuItem
	// 
	this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
	this->aboutToolStripMenuItem->Size = System::Drawing::Size(124, 22);
	this->aboutToolStripMenuItem->Text = L"About";
	// 
	// feedbackToolStripMenuItem
	// 
	this->feedbackToolStripMenuItem->Name = L"feedbackToolStripMenuItem";
	this->feedbackToolStripMenuItem->Size = System::Drawing::Size(124, 22);
	this->feedbackToolStripMenuItem->Text = L"Feedback";
	// 
	// updateToolStripMenuItem
	// 
	this->updateToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->downloadNewestZIPToDesktopToolStripMenuItem });
	this->updateToolStripMenuItem->Name = L"updateToolStripMenuItem";
	this->updateToolStripMenuItem->Size = System::Drawing::Size(124, 22);
	this->updateToolStripMenuItem->Text = L"Update";
	// 
	// downloadNewestZIPToDesktopToolStripMenuItem
	// 
	this->downloadNewestZIPToDesktopToolStripMenuItem->Name = L"downloadNewestZIPToDesktopToolStripMenuItem";
	this->downloadNewestZIPToDesktopToolStripMenuItem->Size = System::Drawing::Size(248, 22);
	this->downloadNewestZIPToDesktopToolStripMenuItem->Text = L"Download newest ZIP to Desktop";
	this->downloadNewestZIPToDesktopToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::downloadNewestZIPToDesktopToolStripMenuItem_Click);
	// button2
	// 
	this->button2->Location = System::Drawing::Point(133, 46);
	this->button2->Name = L"button2";
	this->button2->Size = System::Drawing::Size(110, 30);
	this->button2->TabIndex = 28;
	this->button2->Text = L"Reboot";
	this->button2->UseVisualStyleBackColor = true;
	// 
	// button4
	// 
	this->button4->Location = System::Drawing::Point(133, 82);
	this->button4->Name = L"button4";
	this->button4->Size = System::Drawing::Size(110, 30);
	this->button4->TabIndex = 29;
	this->button4->Text = L"Backup";
	this->button4->UseVisualStyleBackColor = true;
	this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click_1);
	// 
	// groupBox1
	// 
	this->groupBox1->Controls->Add(this->button9);
	this->groupBox1->Location = System::Drawing::Point(9, 27);
	this->groupBox1->Name = L"groupBox1";
	this->groupBox1->Size = System::Drawing::Size(237, 204);
	this->groupBox1->TabIndex = 30;
	this->groupBox1->TabStop = false;
	this->groupBox1->Text = L"Control";
	// 
	// label1
	// 
	this->label1->Location = System::Drawing::Point(12, 356);
	this->label1->Name = L"label1";
	this->label1->Size = System::Drawing::Size(247, 30);
	this->label1->TabIndex = 31;
	this->label1->Text = L"*If you want to install a new operating system you have to OEM unlock your device"
		L" first.";
	// 
	// MyForm
	// 
	this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
	this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
	this->ClientSize = System::Drawing::Size(255, 417);
	this->Controls->Add(this->label1);
	this->Controls->Add(this->button4);
	this->Controls->Add(this->button2);
	this->Controls->Add(this->label4);
	this->Controls->Add(this->label2);
	this->Controls->Add(this->linkLabel2);
	this->Controls->Add(this->linkLabel1);
	this->Controls->Add(this->button12);
	this->Controls->Add(this->button7);
	this->Controls->Add(this->button8);
	this->Controls->Add(this->button6);
	this->Controls->Add(this->button5);
	this->Controls->Add(this->button3);
	this->Controls->Add(this->button1);
	this->Controls->Add(this->menuStrip1);
	this->Controls->Add(this->groupBox1);
	this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
	this->MainMenuStrip = this->menuStrip1;
	this->Name = L"MyForm";
	this->Text = L"OPO Toolkit";
	this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
	this->menuStrip1->ResumeLayout(false);
	this->menuStrip1->PerformLayout();
	this->groupBox1->ResumeLayout(false);
	this->ResumeLayout(false);
	this->PerformLayout();
}
};
}
