#pragma once


namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Reflection;
	using namespace Emgu::CV;
	using namespace Emgu::CV::Structure;
	using namespace Emgu::CV::UI;
	using namespace std;


	public ref class Form1 : public System::Windows::Forms::Form
	{
	
		bool camOn = false;
		String^ camLink;
		int camCount;
		bool keyControl = false;



	private: System::Windows::Forms::GroupBox^ groupBox2;

	private: System::Windows::Forms::Button^ camStopBtn;

	private: System::Windows::Forms::Button^ CamBtn;
	private: System::Windows::Forms::ComboBox^ linkBox;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: Bunifu::Framework::UI::BunifuElipse^ bunifuElipse1;


		   Emgu::CV::Capture^ cap;
	private: Bunifu::Framework::UI::BunifuImageButton^ bunifuImageButton1;
	private: Bunifu::Framework::UI::BunifuDragControl^ bunifuDragControl1;

	private: System::Windows::Forms::TextBox^ textBox4;
	private: Bunifu::Framework::UI::BunifuiOSSwitch^ keyboardControlSwitch;
	private: Bunifu::Framework::UI::BunifuiOSSwitch^ camSwitch;












		   System::Reflection::Assembly^ asmbly;
	
	public:


		Form1(void)
		{
			InitializeComponent();
		}

	protected:

		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^ PortBox;
	private: System::Windows::Forms::Button^ OnBtn;
	private: System::Windows::Forms::Button^ OffBtn;


	private: System::IO::Ports::SerialPort^ serialPort1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;

	private: System::Windows::Forms::PictureBox^ pictureBox1;


	private: System::ComponentModel::IContainer^ components;
	protected:


	protected:

	private:


#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->PortBox = (gcnew System::Windows::Forms::ComboBox());
			this->OnBtn = (gcnew System::Windows::Forms::Button());
			this->OffBtn = (gcnew System::Windows::Forms::Button());
			this->serialPort1 = (gcnew System::IO::Ports::SerialPort(this->components));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->camStopBtn = (gcnew System::Windows::Forms::Button());
			this->CamBtn = (gcnew System::Windows::Forms::Button());
			this->linkBox = (gcnew System::Windows::Forms::ComboBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->bunifuElipse1 = (gcnew Bunifu::Framework::UI::BunifuElipse(this->components));
			this->bunifuImageButton1 = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->bunifuDragControl1 = (gcnew Bunifu::Framework::UI::BunifuDragControl(this->components));
			this->keyboardControlSwitch = (gcnew Bunifu::Framework::UI::BunifuiOSSwitch());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->camSwitch = (gcnew Bunifu::Framework::UI::BunifuiOSSwitch());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton1))->BeginInit();
			this->SuspendLayout();
			// 
			// PortBox
			// 
			this->PortBox->BackColor = System::Drawing::Color::White;
			this->PortBox->ForeColor = System::Drawing::Color::Black;
			this->PortBox->FormattingEnabled = true;
			this->PortBox->Location = System::Drawing::Point(90, 8);
			this->PortBox->Name = L"PortBox";
			this->PortBox->Size = System::Drawing::Size(109, 21);
			this->PortBox->TabIndex = 0;
			this->PortBox->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::comboBox1_SelectedIndexChanged);
			// 
			// OnBtn
			// 
			this->OnBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
				static_cast<System::Int32>(static_cast<System::Byte>(250)));
			this->OnBtn->ForeColor = System::Drawing::Color::Black;
			this->OnBtn->Location = System::Drawing::Point(41, 32);
			this->OnBtn->Name = L"OnBtn";
			this->OnBtn->Size = System::Drawing::Size(75, 23);
			this->OnBtn->TabIndex = 1;
			this->OnBtn->Text = L"On";
			this->OnBtn->UseVisualStyleBackColor = false;
			this->OnBtn->Click += gcnew System::EventHandler(this, &Form1::OnBtn_Click);
			// 
			// OffBtn
			// 
			this->OffBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
				static_cast<System::Int32>(static_cast<System::Byte>(250)));
			this->OffBtn->ForeColor = System::Drawing::Color::Black;
			this->OffBtn->Location = System::Drawing::Point(124, 32);
			this->OffBtn->Name = L"OffBtn";
			this->OffBtn->Size = System::Drawing::Size(75, 23);
			this->OffBtn->TabIndex = 2;
			this->OffBtn->Text = L"Off";
			this->OffBtn->UseVisualStyleBackColor = false;
			this->OffBtn->Click += gcnew System::EventHandler(this, &Form1::OffBtn_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
				static_cast<System::Int32>(static_cast<System::Byte>(250)));
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Enabled = false;
			this->textBox1->ForeColor = System::Drawing::Color::Black;
			this->textBox1->Location = System::Drawing::Point(6, 11);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(86, 13);
			this->textBox1->TabIndex = 3;
			this->textBox1->Text = L"Select Com Port:";
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
				static_cast<System::Int32>(static_cast<System::Byte>(250)));
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->ForeColor = System::Drawing::Color::Black;
			this->textBox2->Location = System::Drawing::Point(6, 37);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(29, 13);
			this->textBox2->TabIndex = 4;
			this->textBox2->Text = L"Led:";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Right;
			this->pictureBox1->Location = System::Drawing::Point(232, 0);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(397, 358);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::Transparent;
			this->groupBox2->Controls->Add(this->textBox2);
			this->groupBox2->Controls->Add(this->OffBtn);
			this->groupBox2->Controls->Add(this->OnBtn);
			this->groupBox2->Controls->Add(this->PortBox);
			this->groupBox2->Controls->Add(this->textBox1);
			this->groupBox2->Location = System::Drawing::Point(12, 25);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(202, 64);
			this->groupBox2->TabIndex = 11;
			this->groupBox2->TabStop = false;
			// 
			// camStopBtn
			// 
			this->camStopBtn->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->camStopBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
				static_cast<System::Int32>(static_cast<System::Byte>(250)));
			this->camStopBtn->ForeColor = System::Drawing::Color::Black;
			this->camStopBtn->Location = System::Drawing::Point(105, 29);
			this->camStopBtn->Name = L"camStopBtn";
			this->camStopBtn->Size = System::Drawing::Size(90, 23);
			this->camStopBtn->TabIndex = 13;
			this->camStopBtn->Text = L"Stop Camera";
			this->camStopBtn->UseVisualStyleBackColor = false;
			this->camStopBtn->Click += gcnew System::EventHandler(this, &Form1::camStopBtn_Click);
			// 
			// CamBtn
			// 
			this->CamBtn->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->CamBtn->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->CamBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
				static_cast<System::Int32>(static_cast<System::Byte>(250)));
			this->CamBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->CamBtn->ForeColor = System::Drawing::Color::Black;
			this->CamBtn->Location = System::Drawing::Point(6, 29);
			this->CamBtn->Name = L"CamBtn";
			this->CamBtn->Size = System::Drawing::Size(90, 23);
			this->CamBtn->TabIndex = 5;
			this->CamBtn->Text = L"Start Camera";
			this->CamBtn->UseVisualStyleBackColor = false;
			this->CamBtn->Click += gcnew System::EventHandler(this, &Form1::CamBtn_Click);
			// 
			// linkBox
			// 
			this->linkBox->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->linkBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
				static_cast<System::Int32>(static_cast<System::Byte>(250)));
			this->linkBox->ForeColor = System::Drawing::Color::Black;
			this->linkBox->FormattingEnabled = true;
			this->linkBox->Location = System::Drawing::Point(96, 7);
			this->linkBox->Name = L"linkBox";
			this->linkBox->Size = System::Drawing::Size(99, 21);
			this->linkBox->TabIndex = 7;
			this->linkBox->Text = L"192.168.1.184";
			this->linkBox->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::linkBox_SelectedIndexChanged);
			// 
			// textBox3
			// 
			this->textBox3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
				static_cast<System::Int32>(static_cast<System::Byte>(250)));
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Enabled = false;
			this->textBox3->ForeColor = System::Drawing::Color::Black;
			this->textBox3->Location = System::Drawing::Point(8, 10);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(86, 13);
			this->textBox3->TabIndex = 8;
			this->textBox3->Text = L"Camera Ip Adress:";
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->Controls->Add(this->camStopBtn);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->linkBox);
			this->groupBox1->Controls->Add(this->CamBtn);
			this->groupBox1->ForeColor = System::Drawing::Color::White;
			this->groupBox1->Location = System::Drawing::Point(12, 107);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(202, 61);
			this->groupBox1->TabIndex = 10;
			this->groupBox1->TabStop = false;
			// 
			// bunifuElipse1
			// 
			this->bunifuElipse1->ElipseRadius = 35;
			this->bunifuElipse1->TargetControl = this;
			// 
			// bunifuImageButton1
			// 
			this->bunifuImageButton1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bunifuImageButton1->ImageActive = nullptr;
			this->bunifuImageButton1->Location = System::Drawing::Point(592, 12);
			this->bunifuImageButton1->Name = L"bunifuImageButton1";
			this->bunifuImageButton1->Size = System::Drawing::Size(25, 25);
			this->bunifuImageButton1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton1->TabIndex = 12;
			this->bunifuImageButton1->TabStop = false;
			this->bunifuImageButton1->Zoom = 10;
			this->bunifuImageButton1->Click += gcnew System::EventHandler(this, &Form1::bunifuImageButton1_Click);
			// 
			// bunifuDragControl1
			// 
			this->bunifuDragControl1->Fixed = false;
			this->bunifuDragControl1->Horizontal = true;
			this->bunifuDragControl1->TargetControl = this;
			this->bunifuDragControl1->Vertical = true;
			// 
			// keyboardControlSwitch
			// 
			this->keyboardControlSwitch->BackColor = System::Drawing::Color::Transparent;
			this->keyboardControlSwitch->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->keyboardControlSwitch->Cursor = System::Windows::Forms::Cursors::Hand;
			this->keyboardControlSwitch->Location = System::Drawing::Point(179, 7);
			this->keyboardControlSwitch->Name = L"keyboardControlSwitch";
			this->keyboardControlSwitch->OffColor = System::Drawing::Color::Gray;
			this->keyboardControlSwitch->OnColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(71)),
				static_cast<System::Int32>(static_cast<System::Byte>(202)), static_cast<System::Int32>(static_cast<System::Byte>(94)));
			this->keyboardControlSwitch->Size = System::Drawing::Size(35, 20);
			this->keyboardControlSwitch->TabIndex = 13;
			this->keyboardControlSwitch->Value = false;
			this->keyboardControlSwitch->OnValueChange += gcnew System::EventHandler(this, &Form1::keyboardControlSwitch_OnValueChange);
			this->keyboardControlSwitch->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::keyboardControlSwitch_KeyDown);
			this->keyboardControlSwitch->Leave += gcnew System::EventHandler(this, &Form1::keyboardControlSwitch_Leave);
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
				static_cast<System::Int32>(static_cast<System::Byte>(250)));
			this->textBox4->Enabled = false;
			this->textBox4->Location = System::Drawing::Point(87, 7);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(86, 20);
			this->textBox4->TabIndex = 14;
			this->textBox4->Text = L"Manual Control";
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// camSwitch
			// 
			this->camSwitch->BackColor = System::Drawing::Color::Transparent;
			this->camSwitch->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->camSwitch->Cursor = System::Windows::Forms::Cursors::Hand;
			this->camSwitch->Location = System::Drawing::Point(179, 185);
			this->camSwitch->Name = L"camSwitch";
			this->camSwitch->OffColor = System::Drawing::Color::Gray;
			this->camSwitch->OnColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(71)), static_cast<System::Int32>(static_cast<System::Byte>(202)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)));
			this->camSwitch->Size = System::Drawing::Size(35, 20);
			this->camSwitch->TabIndex = 15;
			this->camSwitch->Value = false;
			this->camSwitch->OnValueChange += gcnew System::EventHandler(this, &Form1::camSwitch_OnValueChange);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Desktop;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(629, 358);
			this->Controls->Add(this->camSwitch);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->keyboardControlSwitch);
			this->Controls->Add(this->bunifuImageButton1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->pictureBox1);
			this->ForeColor = System::Drawing::Color::White;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MinimumSize = System::Drawing::Size(629, 358);
			this->Name = L"Form1";
			this->ShowIcon = false;
			this->Text = L"Çılgın Robot 3.0";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) 
		{
			try
			{
				serialPort1->PortName = PortBox->Text;
			}
			catch (Exception^ ex)
			{
				System::Windows::Forms::MessageBox::Show(ex->Message);
			}
		}
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) 
		{
		try
		{
			PortBox->Items->AddRange(System::IO::Ports::SerialPort::GetPortNames());
			PortBox->SelectedIndex = 0;

			serialPort1->BaudRate = (9600);
			serialPort1->ReadTimeout = (3000);
			serialPort1->WriteTimeout = (3000);

			bunifuImageButton1->Image = Drawing::Image::FromFile("exitbutton.png");
			pictureBox1->Image = Drawing::Image::FromFile("ananke2.png");
			BackgroundImage = Drawing::Image::FromFile("anankebg.png");

		}
		catch (...)
		{
			
		}

	
		}
	
	
	private: System::Void OnBtn_Click(System::Object^ sender, System::EventArgs^ e)
	{
		try
		{
			serialPort1->Open();
			serialPort1->WriteLine("led on");
			serialPort1->Close();
		}

		catch (Exception^ ex)
		{
			System::Windows::Forms::MessageBox::Show(ex->Message);
		}
	}
	private: System::Void OffBtn_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		try
		{
			serialPort1->Open();
			serialPort1->WriteLine("led off");
			serialPort1->Close();
		}

		catch (Exception^ ex)
		{
			System::Windows::Forms::MessageBox::Show(ex->Message);
		}
	}

	private: System::Void CamBtn_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		if (camCount < 1)
		{
			camLink = "http://" + linkBox->Text + "/mjpeg/1";
			cap = gcnew Emgu::CV::Capture(camLink);
			cap->ImageGrabbed += gcnew System::EventHandler(this, &CppCLRWinformsProjekt::Form1::OnImageGrabbed);
			cap->Start();
			linkBox->Enabled = false;
			camOn = true;
			camCount++;
		}
		else
		{
			camOn = true;
			cap->Start();
		}
	}

	   void OnImageGrabbed(System::Object^ sender, System::EventArgs^ e);


private: System::Void camStopBtn_Click(System::Object^ sender, System::EventArgs^ e) 
{
	camOn = false;
	cap->Stop();
	pictureBox1->Image = Drawing::Image::FromFile("ananke2.png");
}
private: System::Void camStartBtn_Click(System::Object^ sender, System::EventArgs^ e) 
{
	camOn = true;
	cap->Start();
}

private: System::Void linkBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}


private: System::Void bunifuImageButton1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}


private: System::Void keyboardControlSwitch_OnValueChange(System::Object^ sender, System::EventArgs^ e) 
{
	System::Windows::Forms::MessageBox::Show("valChange");

	if (keyboardControlSwitch->Value == true)
	{
		keyControl = true;
	}

	else
	{
		keyControl = false;
	}
}

private: System::Void camSwitch_OnValueChange(System::Object^ sender, System::EventArgs^ e) 
{
	camOn != camOn;

	if (camOn)
	{
		camStart();
	}
	else
	{
		camStop();
	}
}

	   void camStart()
	   {
		   if (camCount < 1)
		   {
			   camLink = "http://" + linkBox->Text + "/mjpeg/1";
			   cap = gcnew Emgu::CV::Capture(camLink);
			   cap->ImageGrabbed += gcnew System::EventHandler(this, &CppCLRWinformsProjekt::Form1::OnImageGrabbed);
			   cap->Start();
			   linkBox->Enabled = false;
			   camOn = true;
			   camCount++;
		   }
		   else
		   {
			   camOn = true;
			   cap->Start();
		   }
	   }

	   void camStop()
	   {
		   camOn = false;
		   cap->Stop();
		   pictureBox1->Image = Drawing::Image::FromFile("ananke2.png");
	   }

private: System::Void keyboardControlSwitch_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) 
{
	if (keyControl)
	{

		if (e->KeyValue == (char)Keys::Up || e->KeyValue == (char)Keys::W)
		{
			serialPort1->Open();
			serialPort1->WriteLine("forward");
			serialPort1->Close();
		}

		else if (e->KeyValue == (char)Keys::Down || e->KeyValue == (char)Keys::S)
		{
			serialPort1->Open();
			serialPort1->WriteLine("reverse");
			serialPort1->Close();
		}

		else if (e->KeyValue == (char)Keys::Left || e->KeyValue == (char)Keys::A)
		{
			serialPort1->Open();
			serialPort1->WriteLine("left");
			serialPort1->Close();
		}

		else if (e->KeyValue == (char)Keys::Right || e->KeyValue == (char)Keys::D)
		{
			serialPort1->Open();
			serialPort1->WriteLine("right");
			serialPort1->Close();
		}

	}
}

private: System::Void keyboardControlSwitch_Leave(System::Object^ sender, System::EventArgs^ e) 
{
	keyboardControlSwitch->Value = false;
}

};
}



void CppCLRWinformsProjekt::Form1::OnImageGrabbed(System::Object^ sender, System::EventArgs^ e)
{
	try
	{
		Mat^ m = gcnew Mat();
		cap->Retrieve(m, 0);
		if (camOn)
			pictureBox1->Image = m->ToImage<Bgr, Byte>(false)->Bitmap;
		else
			pictureBox1->Image = Drawing::Image::FromFile("ananke2.png");
	}
	catch (...)
	{
		
	}
}
