#pragma once
#include <string>
namespace TicTacToeGamev2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	
	bool gameStarted = false;
	int cells[9];

	
	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	
	private: System::Windows::Forms::PictureBox^ Field4;
	protected:

	private: System::Windows::Forms::PictureBox^ Field3;
	private: System::Windows::Forms::PictureBox^ Field5;
	protected:


	private: System::Windows::Forms::PictureBox^ Field2;
	private: System::Windows::Forms::PictureBox^ Field6;


	private: System::Windows::Forms::PictureBox^ Field1;
	private: System::Windows::Forms::PictureBox^ Field7;
	private: System::Windows::Forms::PictureBox^ Field8;
	private: System::Windows::Forms::PictureBox^ Field9;




	private: System::Windows::Forms::PictureBox^ pictureBox10;
	private: System::Windows::Forms::PictureBox^ pictureBox11;
	private: System::Windows::Forms::PictureBox^ pictureBox12;
	private: System::Windows::Forms::PictureBox^ pictureBox13;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ StartGameButton;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ CurrentPlayerLabel;
	private: System::Windows::Forms::Label^ ErrorMsgLabel;
	private: System::Windows::Forms::Label^ PlayerWonLabel;















	protected:


	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Text = "TicTacToeGame";
			this->Field4 = (gcnew System::Windows::Forms::PictureBox());
			this->Field3 = (gcnew System::Windows::Forms::PictureBox());
			this->Field5 = (gcnew System::Windows::Forms::PictureBox());
			this->Field2 = (gcnew System::Windows::Forms::PictureBox());
			this->Field6 = (gcnew System::Windows::Forms::PictureBox());
			this->Field1 = (gcnew System::Windows::Forms::PictureBox());
			this->Field7 = (gcnew System::Windows::Forms::PictureBox());
			this->Field8 = (gcnew System::Windows::Forms::PictureBox());
			this->Field9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->StartGameButton = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->CurrentPlayerLabel = (gcnew System::Windows::Forms::Label());
			this->ErrorMsgLabel = (gcnew System::Windows::Forms::Label());
			this->PlayerWonLabel = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Field4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Field3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Field5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Field2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Field6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Field1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Field7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Field8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Field9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
			this->SuspendLayout();
			// 
			// Field4
			// 
			this->Field4->Location = System::Drawing::Point(212, 161);
			this->Field4->Name = L"Field4";
			this->Field4->Size = System::Drawing::Size(93, 85);
			this->Field4->TabIndex = 3;
			this->Field4->TabStop = false;
			this->Field4->Click += gcnew System::EventHandler(this, &MyForm::Field_Click);
			// 
			// Field3
			// 
			this->Field3->Location = System::Drawing::Point(419, 58);
			this->Field3->Name = L"Field3";
			this->Field3->Size = System::Drawing::Size(93, 85);
			this->Field3->TabIndex = 2;
			this->Field3->TabStop = false;
			this->Field3->Click += gcnew System::EventHandler(this, &MyForm::Field_Click);
			// 
			// Field5
			// 
			this->Field5->Location = System::Drawing::Point(320, 161);
			this->Field5->Name = L"Field5";
			this->Field5->Size = System::Drawing::Size(93, 85);
			this->Field5->TabIndex = 4;
			this->Field5->TabStop = false;
			this->Field5->Click += gcnew System::EventHandler(this, &MyForm::Field_Click);
			// 
			// Field2
			// 
			this->Field2->Location = System::Drawing::Point(320, 59);
			this->Field2->Name = L"Field2";
			this->Field2->Size = System::Drawing::Size(93, 85);
			this->Field2->TabIndex = 1;
			this->Field2->TabStop = false;
			this->Field2->WaitOnLoad = true;
			this->Field2->Click += gcnew System::EventHandler(this, &MyForm::Field_Click);
			// 
			// Field6
			// 
			this->Field6->Location = System::Drawing::Point(419, 161);
			this->Field6->Name = L"Field6";
			this->Field6->Size = System::Drawing::Size(93, 85);
			this->Field6->TabIndex = 5;
			this->Field6->TabStop = false;
			this->Field6->Click += gcnew System::EventHandler(this, &MyForm::Field_Click);
			// 
			// Field1
			// 
			this->Field1->Location = System::Drawing::Point(212, 58);
			this->Field1->Name = L"Field1";
			this->Field1->Size = System::Drawing::Size(93, 85);
			this->Field1->TabIndex = 0;
			this->Field1->TabStop = false;
			this->Field1->Click += gcnew System::EventHandler(this, &MyForm::Field_Click);
			// 
			// Field7
			// 
			this->Field7->Location = System::Drawing::Point(212, 271);
			this->Field7->Name = L"Field7";
			this->Field7->Size = System::Drawing::Size(93, 85);
			this->Field7->TabIndex = 6;
			this->Field7->TabStop = false;
			this->Field7->Click += gcnew System::EventHandler(this, &MyForm::Field_Click);
			// 
			// Field8
			// 
			this->Field8->Location = System::Drawing::Point(319, 271);
			this->Field8->Name = L"Field8";
			this->Field8->Size = System::Drawing::Size(93, 85);
			this->Field8->TabIndex = 7;
			this->Field8->TabStop = false;
			this->Field8->Click += gcnew System::EventHandler(this, &MyForm::Field_Click);
			// 
			// Field9
			// 
			this->Field9->Location = System::Drawing::Point(419, 271);
			this->Field9->Name = L"Field9";
			this->Field9->Size = System::Drawing::Size(93, 85);
			this->Field9->TabIndex = 8;
			this->Field9->TabStop = false;
			this->Field9->Click += gcnew System::EventHandler(this, &MyForm::Field_Click);
			// 
			// pictureBox10
			// 
			this->pictureBox10->BackColor = System::Drawing::SystemColors::Desktop;
			this->pictureBox10->Location = System::Drawing::Point(208, 146);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(304, 14);
			this->pictureBox10->TabIndex = 9;
			this->pictureBox10->TabStop = false;
			// 
			// pictureBox11
			// 
			this->pictureBox11->BackColor = System::Drawing::SystemColors::Desktop;
			this->pictureBox11->Location = System::Drawing::Point(306, 55);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(14, 304);
			this->pictureBox11->TabIndex = 10;
			this->pictureBox11->TabStop = false;
			// 
			// pictureBox12
			// 
			this->pictureBox12->BackColor = System::Drawing::SystemColors::Desktop;
			this->pictureBox12->Location = System::Drawing::Point(404, 55);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(14, 304);
			this->pictureBox12->TabIndex = 11;
			this->pictureBox12->TabStop = false;
			// 
			// pictureBox13
			// 
			this->pictureBox13->BackColor = System::Drawing::SystemColors::Desktop;
			this->pictureBox13->Location = System::Drawing::Point(208, 252);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(304, 14);
			this->pictureBox13->TabIndex = 12;
			this->pictureBox13->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(73, 17);
			this->label1->TabIndex = 13;
			this->label1->Text = L"Player1: X";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 26);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(75, 17);
			this->label2->TabIndex = 14;
			this->label2->Text = L"Player2: O";
			// 
			// StartGameButton
			// 
			this->StartGameButton->Location = System::Drawing::Point(241, 387);
			this->StartGameButton->Name = L"StartGameButton";
			this->StartGameButton->Size = System::Drawing::Size(242, 84);
			this->StartGameButton->TabIndex = 15;
			this->StartGameButton->Text = L"StartGame";
			this->StartGameButton->UseVisualStyleBackColor = true;
			this->StartGameButton->Click += gcnew System::EventHandler(this, &MyForm::StartGameButton_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(530, 50);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(93, 17);
			this->label3->TabIndex = 16;
			this->label3->Text = L"Current Turn:";
			// 
			// CurrentPlayerLabel
			// 
			this->CurrentPlayerLabel->AutoSize = true;
			this->CurrentPlayerLabel->Location = System::Drawing::Point(629, 50);
			this->CurrentPlayerLabel->Name = L"CurrentPlayerLabel";
			this->CurrentPlayerLabel->Size = System::Drawing::Size(60, 17);
			this->CurrentPlayerLabel->TabIndex = 17;
			this->CurrentPlayerLabel->Text = L"Player 1";
			this->CurrentPlayerLabel->Visible = false;
			// 
			// ErrorMsgLabel
			// 
			this->ErrorMsgLabel->AutoSize = true;
			this->ErrorMsgLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ErrorMsgLabel->ForeColor = System::Drawing::Color::DarkRed;
			this->ErrorMsgLabel->Location = System::Drawing::Point(257, 498);
			this->ErrorMsgLabel->Name = L"ErrorMsgLabel";
			this->ErrorMsgLabel->Size = System::Drawing::Size(0, 18);
			this->ErrorMsgLabel->TabIndex = 18;
			// 
			// PlayerWonLabel
			// 
			this->PlayerWonLabel->AutoSize = true;
			this->PlayerWonLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->PlayerWonLabel->ForeColor = System::Drawing::Color::Green;
			this->PlayerWonLabel->Location = System::Drawing::Point(236, 9);
			this->PlayerWonLabel->Name = L"PlayerWonLabel";
			this->PlayerWonLabel->Size = System::Drawing::Size(0, 25);
			this->PlayerWonLabel->TabIndex = 19;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(732, 574);
			this->Controls->Add(this->PlayerWonLabel);
			this->Controls->Add(this->ErrorMsgLabel);
			this->Controls->Add(this->CurrentPlayerLabel);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->StartGameButton);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox12);
			this->Controls->Add(this->pictureBox11);
			this->Controls->Add(this->Field9);
			this->Controls->Add(this->Field6);
			this->Controls->Add(this->Field8);
			this->Controls->Add(this->Field1);
			this->Controls->Add(this->Field7);
			this->Controls->Add(this->Field2);
			this->Controls->Add(this->Field3);
			this->Controls->Add(this->Field5);
			this->Controls->Add(this->Field4);
			this->Controls->Add(this->pictureBox13);
			this->Controls->Add(this->pictureBox10);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"MyForm";
			this->ShowIcon = false;
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Field4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Field3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Field5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Field2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Field6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Field1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Field7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Field8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Field9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		


	private: System::Void Field_Click(System::Object^ sender, System::EventArgs^ e)
	{
		PictureBox^ box = static_cast<PictureBox^>(sender);
		if (!gameStarted)
		{
			this->ErrorMsgLabel->Text = "Start the game first";
		}
		else if(cells[box->TabIndex] != 0)
		{
			this->ErrorMsgLabel->Text = "This cell is already occupied";
		}
		else
		{
			this->ErrorMsgLabel->Text = "";
			if (CurrentPlayerLabel->Text == "Player 1") {
				DrawCross(box);
				cells[box->TabIndex] = 1;
				if (!checkWinCondition(cells) && !isDraw(cells))
					CurrentPlayerLabel->Text = "Player 2";
			}
			else if (CurrentPlayerLabel->Text == "Player 2")
			{
				DrawCircle(box);
				cells[box->TabIndex] = 2;
				if(!checkWinCondition(cells) && !isDraw(cells))
					CurrentPlayerLabel->Text = "Player 1";
			}
			if (checkWinCondition(cells))
			{
				gameStarted = false;
				PlayerWonLabel->Text = CurrentPlayerLabel->Text + " won!";
			}
			else if (isDraw(cells))
			{
				gameStarted = false;
				PlayerWonLabel->Text = "Game ended in a draw";
			}
		}
		
	}

	private: System::Void DrawCross(PictureBox^ box)
	{
		Graphics^ g = box->CreateGraphics();
		Pen^ pp = gcnew Pen(Brushes::Black, 4);
		g->DrawLine(pp, 5, 7, 50, 60);
		g->DrawLine(pp, 5, 60, 50, 7);
	}

	private: System::Void DrawCircle(PictureBox^ box)
	{
		Graphics^ g = box->CreateGraphics();
		Pen^ pp = gcnew Pen(Brushes::Black, 4);
		g->DrawEllipse(pp, 5, 7, 50, 50);
	}
	private: System::Void StartGameButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		gameStarted = true;
		Field1->Invalidate();
		Field2->Invalidate();
		Field3->Invalidate();
		Field4->Invalidate();
		Field5->Invalidate();
		Field6->Invalidate();
		Field7->Invalidate();
		Field8->Invalidate();
		Field9->Invalidate();
		PlayerWonLabel->Text = "";
		ErrorMsgLabel->Text = "";
		for (int i = 0; i < 9; i++)
			cells[i] = 0;
		CurrentPlayerLabel->Text = "Player 1";
		CurrentPlayerLabel->Visible = true;
	}

   bool checkWinCondition(int field[])
   {
	   int conditions[8][3] = { {0, 1, 2}, {3, 4, 5}, {6, 7, 8}, {0, 3, 6}, {1, 4, 7}, {2, 5, 8}, {0, 4, 8}, {2, 4, 6} };
	   bool isWon = false;
	   for (int i = 0; i < 8; i++)
	   {
		   if ((field[conditions[i][0]] == 1 || field[conditions[i][0]] == 2) &&
			   (field[conditions[i][0]] == field[conditions[i][1]]) &&
			   (field[conditions[i][1]] == field[conditions[i][2]]))
		   {
			   isWon = true;
		   }
	   }
	   return isWon;
   }

   bool isDraw(int field[])
   {
	   bool zeroInField = false;
	   for (int i = 0; i < 9; i++)
	   {
		   if (field[i] == 0)
		   {
			   zeroInField = true;
		   }
	   }
	   return !zeroInField;
   }

};
}
