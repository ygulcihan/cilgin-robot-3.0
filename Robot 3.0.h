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
		bool keyControl = false;
		bool licensed = false;
		int speed = 1;
		bool lineFollow = false;
		bool debounced = true;
		bool keyDown = false;



	private: System::Windows::Forms::GroupBox^ groupBox2;




	private: System::Windows::Forms::ComboBox^ linkBox;


	private: Bunifu::Framework::UI::BunifuElipse^ bunifuElipse1;


		   Emgu::CV::Capture^ cap;
	private: Bunifu::Framework::UI::BunifuImageButton^ bunifuImageButton1;
	private: Bunifu::Framework::UI::BunifuDragControl^ bunifuDragControl1;

	private: System::Windows::Forms::TextBox^ textBox4;
	private: Bunifu::Framework::UI::BunifuiOSSwitch^ keyboardControlSwitch;
	private: Bunifu::Framework::UI::BunifuiOSSwitch^ camSwitch;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: Bunifu::Framework::UI::BunifuiOSSwitch^ ledSwitch;
	private: System::Windows::Forms::GroupBox^ groupBox1;

	private: Bunifu::Framework::UI::BunifuSlider^ bunifuSlider1;
	private: System::Windows::Forms::TextBox^ speedDesc;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: Bunifu::Framework::UI::BunifuiOSSwitch^ lineFollowSwitch;
	private: System::Windows::Forms::Button^ stopButton;
	private: System::Windows::Forms::Timer^ debounceTimer;
	private: System::Windows::Forms::PictureBox^ checkpointBox;
	private: System::Windows::Forms::GroupBox^ groupBox4;



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
			this->serialPort1 = (gcnew System::IO::Ports::SerialPort(this->components));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->ledSwitch = (gcnew Bunifu::Framework::UI::BunifuiOSSwitch());
			this->keyboardControlSwitch = (gcnew Bunifu::Framework::UI::BunifuiOSSwitch());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->linkBox = (gcnew System::Windows::Forms::ComboBox());
			this->bunifuElipse1 = (gcnew Bunifu::Framework::UI::BunifuElipse(this->components));
			this->bunifuImageButton1 = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->bunifuDragControl1 = (gcnew Bunifu::Framework::UI::BunifuDragControl(this->components));
			this->camSwitch = (gcnew Bunifu::Framework::UI::BunifuiOSSwitch());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->bunifuSlider1 = (gcnew Bunifu::Framework::UI::BunifuSlider());
			this->speedDesc = (gcnew System::Windows::Forms::TextBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->stopButton = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->lineFollowSwitch = (gcnew Bunifu::Framework::UI::BunifuiOSSwitch());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->debounceTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->checkpointBox = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->checkpointBox))->BeginInit();
			this->groupBox4->SuspendLayout();
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
			this->PortBox->TabStop = false;
			this->PortBox->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::comboBox1_SelectedIndexChanged);
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
			this->textBox1->TabStop = false;
			this->textBox1->Text = L"Select Com Port:";
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
				static_cast<System::Int32>(static_cast<System::Byte>(250)));
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Enabled = false;
			this->textBox2->ForeColor = System::Drawing::Color::Black;
			this->textBox2->Location = System::Drawing::Point(128, 42);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(29, 13);
			this->textBox2->TabIndex = 4;
			this->textBox2->Text = L"Led:";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Right;
			this->pictureBox1->Location = System::Drawing::Point(233, 0);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(500, 358);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::Transparent;
			this->groupBox2->Controls->Add(this->ledSwitch);
			this->groupBox2->Controls->Add(this->textBox2);
			this->groupBox2->Controls->Add(this->PortBox);
			this->groupBox2->Controls->Add(this->keyboardControlSwitch);
			this->groupBox2->Controls->Add(this->textBox4);
			this->groupBox2->Controls->Add(this->textBox1);
			this->groupBox2->Location = System::Drawing::Point(12, 25);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(202, 64);
			this->groupBox2->TabIndex = 11;
			this->groupBox2->TabStop = false;
			// 
			// ledSwitch
			// 
			this->ledSwitch->BackColor = System::Drawing::Color::Transparent;
			this->ledSwitch->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ledSwitch->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ledSwitch->Location = System::Drawing::Point(163, 38);
			this->ledSwitch->Name = L"ledSwitch";
			this->ledSwitch->OffColor = System::Drawing::Color::Gray;
			this->ledSwitch->OnColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(71)), static_cast<System::Int32>(static_cast<System::Byte>(202)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)));
			this->ledSwitch->Size = System::Drawing::Size(35, 20);
			this->ledSwitch->TabIndex = 17;
			this->ledSwitch->TabStop = false;
			this->ledSwitch->Value = false;
			this->ledSwitch->OnValueChange += gcnew System::EventHandler(this, &Form1::ledSwitch_OnValueChange);
			// 
			// keyboardControlSwitch
			// 
			this->keyboardControlSwitch->BackColor = System::Drawing::Color::Transparent;
			this->keyboardControlSwitch->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->keyboardControlSwitch->Cursor = System::Windows::Forms::Cursors::Hand;
			this->keyboardControlSwitch->Location = System::Drawing::Point(85, 38);
			this->keyboardControlSwitch->Name = L"keyboardControlSwitch";
			this->keyboardControlSwitch->OffColor = System::Drawing::Color::Gray;
			this->keyboardControlSwitch->OnColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(71)),
				static_cast<System::Int32>(static_cast<System::Byte>(202)), static_cast<System::Int32>(static_cast<System::Byte>(94)));
			this->keyboardControlSwitch->Size = System::Drawing::Size(35, 20);
			this->keyboardControlSwitch->TabIndex = 13;
			this->keyboardControlSwitch->TabStop = false;
			this->keyboardControlSwitch->Value = false;
			this->keyboardControlSwitch->OnValueChange += gcnew System::EventHandler(this, &Form1::keyboardControlSwitch_OnValueChange);
			this->keyboardControlSwitch->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::keyboardControlSwitch_KeyDown);
			this->keyboardControlSwitch->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::keyboardControlSwitch_KeyUp);
			this->keyboardControlSwitch->Leave += gcnew System::EventHandler(this, &Form1::keyboardControlSwitch_Leave);
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
				static_cast<System::Int32>(static_cast<System::Byte>(250)));
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox4->Enabled = false;
			this->textBox4->Location = System::Drawing::Point(6, 42);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(73, 13);
			this->textBox4->TabIndex = 14;
			this->textBox4->Text = L"Manual Control";
			// 
			// linkBox
			// 
			this->linkBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
				static_cast<System::Int32>(static_cast<System::Byte>(250)));
			this->linkBox->ForeColor = System::Drawing::Color::Black;
			this->linkBox->FormattingEnabled = true;
			this->linkBox->Location = System::Drawing::Point(58, 15);
			this->linkBox->Name = L"linkBox";
			this->linkBox->Size = System::Drawing::Size(99, 21);
			this->linkBox->TabIndex = 7;
			this->linkBox->TabStop = false;
			this->linkBox->Text = L"192.168.1.184";
			this->linkBox->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::linkBox_SelectedIndexChanged);
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
			this->bunifuImageButton1->Location = System::Drawing::Point(696, 12);
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
			// camSwitch
			// 
			this->camSwitch->BackColor = System::Drawing::Color::Transparent;
			this->camSwitch->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->camSwitch->Cursor = System::Windows::Forms::Cursors::Hand;
			this->camSwitch->Location = System::Drawing::Point(163, 16);
			this->camSwitch->Name = L"camSwitch";
			this->camSwitch->OffColor = System::Drawing::Color::Gray;
			this->camSwitch->OnColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(71)), static_cast<System::Int32>(static_cast<System::Byte>(202)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)));
			this->camSwitch->Size = System::Drawing::Size(35, 20);
			this->camSwitch->TabIndex = 15;
			this->camSwitch->TabStop = false;
			this->camSwitch->Value = false;
			this->camSwitch->OnValueChange += gcnew System::EventHandler(this, &Form1::camSwitch_OnValueChange);
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
				static_cast<System::Int32>(static_cast<System::Byte>(250)));
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Enabled = false;
			this->textBox3->Location = System::Drawing::Point(6, 19);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(46, 13);
			this->textBox3->TabIndex = 16;
			this->textBox3->TabStop = false;
			this->textBox3->Text = L"CamIP:";
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->camSwitch);
			this->groupBox1->Controls->Add(this->linkBox);
			this->groupBox1->Location = System::Drawing::Point(12, 110);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(202, 48);
			this->groupBox1->TabIndex = 17;
			this->groupBox1->TabStop = false;
			// 
			// bunifuSlider1
			// 
			this->bunifuSlider1->BackColor = System::Drawing::Color::Transparent;
			this->bunifuSlider1->BackgroudColor = System::Drawing::Color::DarkGray;
			this->bunifuSlider1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->bunifuSlider1->BorderRadius = 0;
			this->bunifuSlider1->ForeColor = System::Drawing::Color::White;
			this->bunifuSlider1->IndicatorColor = System::Drawing::Color::Red;
			this->bunifuSlider1->Location = System::Drawing::Point(85, 9);
			this->bunifuSlider1->MaximumValue = 3;
			this->bunifuSlider1->Name = L"bunifuSlider1";
			this->bunifuSlider1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->bunifuSlider1->Size = System::Drawing::Size(111, 30);
			this->bunifuSlider1->TabIndex = 19;
			this->bunifuSlider1->TabStop = false;
			this->bunifuSlider1->Value = 0;
			this->bunifuSlider1->ValueChanged += gcnew System::EventHandler(this, &Form1::bunifuSlider1_ValueChanged);
			this->bunifuSlider1->ValueChangeComplete += gcnew System::EventHandler(this, &Form1::bunifuSlider1_ValueChangeComplete);
			this->bunifuSlider1->Load += gcnew System::EventHandler(this, &Form1::bunifuSlider1_Load);
			// 
			// speedDesc
			// 
			this->speedDesc->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
				static_cast<System::Int32>(static_cast<System::Byte>(250)));
			this->speedDesc->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->speedDesc->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->speedDesc->Enabled = false;
			this->speedDesc->Location = System::Drawing::Point(6, 15);
			this->speedDesc->Name = L"speedDesc";
			this->speedDesc->Size = System::Drawing::Size(73, 13);
			this->speedDesc->TabIndex = 20;
			this->speedDesc->TabStop = false;
			this->speedDesc->Text = L"Motor Speed:";
			// 
			// groupBox3
			// 
			this->groupBox3->BackColor = System::Drawing::Color::Transparent;
			this->groupBox3->Controls->Add(this->stopButton);
			this->groupBox3->Controls->Add(this->textBox5);
			this->groupBox3->Controls->Add(this->lineFollowSwitch);
			this->groupBox3->Controls->Add(this->speedDesc);
			this->groupBox3->Controls->Add(this->bunifuSlider1);
			this->groupBox3->Location = System::Drawing::Point(12, 176);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(202, 64);
			this->groupBox3->TabIndex = 21;
			this->groupBox3->TabStop = false;
			// 
			// stopButton
			// 
			this->stopButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->stopButton->Location = System::Drawing::Point(129, 35);
			this->stopButton->Name = L"stopButton";
			this->stopButton->Size = System::Drawing::Size(67, 25);
			this->stopButton->TabIndex = 22;
			this->stopButton->TabStop = false;
			this->stopButton->UseVisualStyleBackColor = true;
			this->stopButton->Click += gcnew System::EventHandler(this, &Form1::stopButton_Click);
			// 
			// textBox5
			// 
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox5->Enabled = false;
			this->textBox5->Location = System::Drawing::Point(6, 42);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(55, 13);
			this->textBox5->TabIndex = 23;
			this->textBox5->TabStop = false;
			this->textBox5->Text = L"Follow Line";
			// 
			// lineFollowSwitch
			// 
			this->lineFollowSwitch->BackColor = System::Drawing::Color::Transparent;
			this->lineFollowSwitch->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->lineFollowSwitch->Cursor = System::Windows::Forms::Cursors::Hand;
			this->lineFollowSwitch->Location = System::Drawing::Point(67, 38);
			this->lineFollowSwitch->Name = L"lineFollowSwitch";
			this->lineFollowSwitch->OffColor = System::Drawing::Color::Gray;
			this->lineFollowSwitch->OnColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(71)), static_cast<System::Int32>(static_cast<System::Byte>(202)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)));
			this->lineFollowSwitch->Size = System::Drawing::Size(35, 20);
			this->lineFollowSwitch->TabIndex = 22;
			this->lineFollowSwitch->TabStop = false;
			this->lineFollowSwitch->Value = false;
			this->lineFollowSwitch->OnValueChange += gcnew System::EventHandler(this, &Form1::lineFollowSwitch_OnValueChange);
			// 
			// timer1
			// 
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			// 
			// debounceTimer
			// 
			this->debounceTimer->Interval = 1000;
			this->debounceTimer->Tick += gcnew System::EventHandler(this, &Form1::debounceTimer_Tick);
			// 
			// checkpointBox
			// 
			this->checkpointBox->BackColor = System::Drawing::SystemColors::Desktop;
			this->checkpointBox->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->checkpointBox->Location = System::Drawing::Point(2, 8);
			this->checkpointBox->Name = L"checkpointBox";
			this->checkpointBox->Size = System::Drawing::Size(202, 64);
			this->checkpointBox->TabIndex = 22;
			this->checkpointBox->TabStop = false;
			// 
			// groupBox4
			// 
			this->groupBox4->BackColor = System::Drawing::Color::Transparent;
			this->groupBox4->Controls->Add(this->checkpointBox);
			this->groupBox4->Location = System::Drawing::Point(10, 261);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(206, 75);
			this->groupBox4->TabIndex = 23;
			this->groupBox4->TabStop = false;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Desktop;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(733, 358);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->bunifuImageButton1);
			this->Controls->Add(this->groupBox2);
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->checkpointBox))->EndInit();
			this->groupBox4->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
		private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) 
		{
			try
			{
				if (serialPort1->IsOpen == true)
				{
					serialPort1->Close();
					serialPort1->PortName = PortBox->Text;
					serialPort1->Open();
				}

				else
				{
					serialPort1->PortName = PortBox->Text;
				}
				
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

			serialPort1->BaudRate = (115200);
			serialPort1->ReadTimeout = (1000);
			serialPort1->WriteTimeout = (1000);
			serialPort1->Open();

			bunifuImageButton1->Image = Drawing::Image::FromFile("exitbutton.png");
			pictureBox1->Image = Drawing::Image::FromFile("cam.png");
			BackgroundImage = Drawing::Image::FromFile("background.png");
			stopButton->BackgroundImage = Drawing::Image::FromFile("stop.png");
			checkpointBox->BackgroundImage = Drawing::Image::FromFile("c0.png");

		}
		catch (...)
		{
			
		}

	
		}
	
	
	private: System::Void OnBtn_Click(System::Object^ sender, System::EventArgs^ e)
	{
		try
		{
			serialPort1->WriteLine("led on");
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
			serialPort1->WriteLine("led off");
		}

		catch (Exception^ ex)
		{
			System::Windows::Forms::MessageBox::Show(ex->Message);
		}
	}

	   void OnImageGrabbed(System::Object^ sender, System::EventArgs^ e);


private: System::Void linkBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}


private: System::Void bunifuImageButton1_Click(System::Object^ sender, System::EventArgs^ e) 
{
	serialPort1->WriteLine("stop");

	System::Windows::Forms::MessageBox::Show("Developed & Built by: Yigit Gülcihan \n \t \t      Ahmet Bal \n \t \t      Mehmet Engin Höcü \n \t \t      Mert Karaoglu \n \t \t      Kahraman Berke Çelenay", "Çilgin Robot 3.0");
	timer1->Interval = 5;
	timer1->Start();
}


private: System::Void keyboardControlSwitch_OnValueChange(System::Object^ sender, System::EventArgs^ e) 
{
	if (lineFollow && keyboardControlSwitch->Value == true)
	{
		lineFollow = false;
		lineFollowSwitch->Value = false;
		licenseCheck();

	}

	else if (keyboardControlSwitch->Value == true)
	{
		licenseCheck();
	}

	else
	{
		keyControl = false;
	}
}

void licenseCheck()
{
		if (!licensed)
		{
			DialogResult = System::Windows::Forms::MessageBox::Show(" Do you have a driver's license? ", "Manual Control", MessageBoxButtons::YesNoCancel, MessageBoxIcon::Question);
			if (DialogResult == System::Windows::Forms::DialogResult::Yes)
			{
				keyControl = true;
				licensed = true;
				System::Windows::Forms::MessageBox::Show(" Beware of Robot's Surroundings ", "Manual Control Enabled", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
			else if (DialogResult == System::Windows::Forms::DialogResult::No)
			{
				System::Windows::Forms::MessageBox::Show("Permission Denied", "No Driver's license", MessageBoxButtons::OK, MessageBoxIcon::Stop);
				keyboardControlSwitch->Value = false;
			}
			else if (DialogResult == System::Windows::Forms::DialogResult::Cancel)
			{
				keyboardControlSwitch->Value = false;
			}
		}

		else if (licensed)
		{
			keyControl = true;
			System::Windows::Forms::MessageBox::Show(" Always Beware of Robot's Surroundings ", "Manual Control Enabled", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
}

private: System::Void camSwitch_OnValueChange(System::Object^ sender, System::EventArgs^ e) 
{
	camOn = camSwitch->Value;

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
	camLink = "http://" + linkBox->Text + "/mjpeg/1";
	cap = gcnew Emgu::CV::Capture(camLink);
	cap->ImageGrabbed += gcnew System::EventHandler(this, &CppCLRWinformsProjekt::Form1::OnImageGrabbed);
	cap->Start();
	linkBox->Enabled = false;
	camOn = true;
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
		if ((e->KeyValue == (char)Keys::Up || e->KeyValue == (char)Keys::W) && !keyDown)
		{
			serialPort1->WriteLine("forward");
			keyDown = true;
		}

		else if ((e->KeyValue == (char)Keys::Down || e->KeyValue == (char)Keys::S) && !keyDown)
		{
			serialPort1->WriteLine("reverse");
			keyDown = true;
		}

		else if ((e->KeyValue == (char)Keys::Left || e->KeyValue == (char)Keys::A) && !keyDown)
		{
			serialPort1->WriteLine("left");
			keyDown = true;
		}

		else if ((e->KeyValue == (char)Keys::Right || e->KeyValue == (char)Keys::D) && !keyDown)
		{
			serialPort1->WriteLine("right");
			keyDown = true;
		}

	}
}

	   void debounce(unsigned int delayTime)
	   {
		   debounced = false;
		   debounceTimer->Interval = delayTime;
		   debounceTimer->Start();
	   }

private: System::Void debounceTimer_Tick(System::Object^ sender, System::EventArgs^ e)
{
	debounced = true;
	debounceTimer->Stop();
}
private: System::Void keyboardControlSwitch_Leave(System::Object^ sender, System::EventArgs^ e) 
{
	keyboardControlSwitch->Value = false;
}

private: System::Void keyboardControlSwitch_KeyUp(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) 
{
	if (keyControl && (e->KeyValue == (char)Keys::Up || e->KeyValue == (char)Keys::W || e->KeyValue == (char)Keys::Down || e->KeyValue == (char)Keys::S || e->KeyValue == (char)Keys::Left || e->KeyValue == (char)Keys::A || e->KeyValue == (char)Keys::Right || e->KeyValue == (char)Keys::D))
	{
		serialPort1->WriteLine("stop");
		keyDown = false;
	}

}

private: System::Void ledSwitch_OnValueChange(System::Object^ sender, System::EventArgs^ e) 
{
	if (ledSwitch->Value == true)
	{
		try
		{
			serialPort1->WriteLine("led on");
		}
		catch (Exception^ ex)
		{
			System::Windows::Forms::MessageBox::Show(ex->Message);
		}
	}

	else if(ledSwitch->Value == false)
	{
		try
		{
			serialPort1->WriteLine("led off");
		}
		catch (Exception^ ex)
		{
			System::Windows::Forms::MessageBox::Show(ex->Message);
		}
	}
}
private: System::Void bunifuSlider1_Load(System::Object^ sender, System::EventArgs^ e) 
	{
		bunifuSlider1->Value = 1;
	}
private: System::Void bunifuSlider1_ValueChanged(System::Object^ sender, System::EventArgs^ e) 
	{
		speed = bunifuSlider1->Value;
	}
private: System::Void bunifuSlider1_ValueChangeComplete(System::Object^ sender, System::EventArgs^ e) 
	{
		bunifuSlider1->Value = speed;

		serialPort1->WriteLine("speed" + speed);
	}

private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) 
{
	serialPort1->Close();
	this->Close();
}

private: System::Void lineFollowSwitch_OnValueChange(System::Object^ sender, System::EventArgs^ e) 
	{
		if (keyControl && lineFollowSwitch->Value == true)
		{
			keyControl = false;
			keyboardControlSwitch->Value = false;
			lineFollow = true;
			serialPort1->WriteLine("lineFollow");
		}

		else if(lineFollowSwitch->Value == true)
		{
			lineFollow = true;
			serialPort1->WriteLine("lineFollow");
		}
		else
		{
			lineFollow = false;
			serialPort1->WriteLine("stop");
		}
	}
private: System::Void stopButton_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		serialPort1->WriteLine("stop");
		keyControl = false;
		keyboardControlSwitch->Value = false;
		lineFollow = false;
		lineFollowSwitch->Value = false;
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
		{
			pictureBox1->Image = m->ToImage<Bgr, Byte>(false)->Bitmap;
		}
		else
		{
			delete m;
			delete cap;
			pictureBox1->Image = Drawing::Image::FromFile("ananke2.png");
		}
	}
	catch (...)
	{
		
	}
}
