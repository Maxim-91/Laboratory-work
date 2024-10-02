//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit5.h"
#include "Unit1.h"
#include "Unit6.h"
#include "Unit7.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm5 *Form5;
//---------------------------------------------------------------------------
 float r[10][2]={{0,16.12246},
{0,33.21000},
{0,4.17125},
{0,3.06178},
{0,5.99978},
{0,4756.47059},
{0,4221.64706},
{0,3018.88889},
{0,22080},
{0,20815.3846}};

//---------------------------------------------------------------------------
__fastcall TForm5::TForm5(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------



void __fastcall TForm5::ListBox1Click(TObject *Sender)
{
 int a;
 if (BitBtn1->Caption=="Вкл.")
 goto s;
 a=TrackBar1->Position;
 if (ListBox1->Selected[0])
 Label4->Caption=((r[0][1]-r[0][0])/40)*a+r[0][0];
 else if (ListBox1->Selected[1])
 Label4->Caption=((r[1][1]-r[1][0])/40)*a+r[1][0];
 else if (ListBox1->Selected[2])
 Label4->Caption=((r[2][1]-r[2][0])/40)*a+r[2][0];
 else if (ListBox1->Selected[3])
 Label4->Caption=((r[3][1]-r[3][0])/40)*a+r[3][0];
 else if (ListBox1->Selected[4])
 Label4->Caption=((r[4][1]-r[4][0])/40)*a+r[4][0];
 else if (ListBox1->Selected[5])
 Label4->Caption=((r[5][1]-r[5][0])/40)*a+r[5][0];
 else if (ListBox1->Selected[6])
 Label4->Caption=((r[6][1]-r[6][0])/40)*a+r[6][0];
 else if (ListBox1->Selected[7])
 Label4->Caption=((r[7][1]-r[7][0])/40)*a+r[7][0];
 else if (ListBox1->Selected[8])
 Label4->Caption=((r[8][1]-r[8][0])/40)*a+r[8][0];
 else if (ListBox1->Selected[9])
 Label4->Caption=((r[9][1]-r[9][0])/40)*a+r[9][0];
 s:
}
//---------------------------------------------------------------------------


void __fastcall TForm5::TrackBar1Change(TObject *Sender)
{
 int j,i;
 i=TrackBar1->Position;
 TrackBar1->Hint=i*10;
 Label1->Caption=i*10;
 if(ListBox1->Selected[0]) j=0;
 else if (ListBox1->Selected[1]) j=1;
 else if (ListBox1->Selected[2]) j=2;
 else if (ListBox1->Selected[3]) j=3;
 else if (ListBox1->Selected[4]) j=4;
 else if (ListBox1->Selected[5]) j=5;
 else if (ListBox1->Selected[6]) j=6;
 else if (ListBox1->Selected[7]) j=7;
 else if (ListBox1->Selected[8]) j=8;
 else if (ListBox1->Selected[9]) j=9;

 Label4->Caption=((r[j][1]-r[j][0])/40)*i+r[j][0];

 if (i<=7) Label1->Font->Color=clNavy;
 else if (i>7&&i<=14) Label1->Font->Color=clBlue;
 else if (i>14&&i<=21) Label1->Font->Color=clActiveCaption;
 else if (i>21&&i<=27) Label1->Font->Color=clPurple;
 else if (i>27&&i<=33) Label1->Font->Color=clFuchsia;
 else if (i>33) Label1->Font->Color=clRed;
}
//---------------------------------------------------------------------------

void __fastcall TForm5::BitBtn1Click(TObject *Sender)
{
int a;
 if (ListBox1->Selected[0]||ListBox1->Selected[1]||ListBox1->Selected[2]||ListBox1->Selected[3]||ListBox1->Selected[4]||ListBox1->Selected[5]||ListBox1->Selected[6]||ListBox1->Selected[7]||ListBox1->Selected[8]||ListBox1->Selected[9])
{
 if (BitBtn1->Caption=="Вкл.")
 {
  BitBtn1->Font->Color=clRed;
  BitBtn1->Glyph->LoadFromFile("prefs16r.bmp");
  TrackBar1->Enabled=true;
  TrackBar1->Position=0;
  BitBtn1->Caption="Викл.";
  Label4->Enabled=true;

  if (ListBox1->Selected[0])
  Label4->Caption=r[0][0];
  else if (ListBox1->Selected[1])
  Label4->Caption=r[1][0];
  else if (ListBox1->Selected[2])
  Label4->Caption=r[2][0];
  else if (ListBox1->Selected[3])
  Label4->Caption=r[3][0];
  else if (ListBox1->Selected[4])
  Label4->Caption=r[4][0];
  else if (ListBox1->Selected[5])
  Label4->Caption=r[5][0];
  else if (ListBox1->Selected[6])
  Label4->Caption=r[6][0];
  else if (ListBox1->Selected[7])
  Label4->Caption=r[7][0];
  else if (ListBox1->Selected[8])
  Label4->Caption=r[8][0];
  else if (ListBox1->Selected[9])
  Label4->Caption=r[9][0];

  Label1->Enabled=true;
  Label1->Caption=0;
  Label1->Font->Color=clNavy;

  Image1->Picture->LoadFromFile("on1.bmp");
  Image2->Picture->LoadFromFile("on2.bmp");
 }
 else if (BitBtn1->Caption=="Викл.")
 {
  BitBtn1->Font->Color=clBlue;
  BitBtn1->Glyph->LoadFromFile("prefs16b.bmp");
  TrackBar1->Position=0;
  TrackBar1->Enabled=false;
  Label4->Caption=0;
  Label4->Enabled=false;
  Label1->Caption=0;
  Label1->Enabled=false;
  BitBtn1->Caption="Вкл.";

  Image1->Picture->LoadFromFile("off1.bmp");
  Image2->Picture->LoadFromFile("off2.bmp");
  }
 }
  else ShowMessage("Оберіть метал!");           
}
//---------------------------------------------------------------------------

void __fastcall TForm5::BitBtn2Click(TObject *Sender)
{
 Form1->Close();           
}
//---------------------------------------------------------------------------



void __fastcall TForm5::BitBtn3Click(TObject *Sender)
{
 Form6->Visible=true;
 Form5->Visible=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm5::BitBtn4Click(TObject *Sender)
{
 int j;
 if (ListBox1->Selected[0]||ListBox1->Selected[1]||ListBox1->Selected[2]||ListBox1->Selected[3]||ListBox1->Selected[4]||ListBox1->Selected[5]||ListBox1->Selected[6]||ListBox1->Selected[7]||ListBox1->Selected[8]||ListBox1->Selected[9])
{
 if(ListBox1->Selected[0]) j=0;
 else if (ListBox1->Selected[1]) j=1;
 else if (ListBox1->Selected[2]) j=2;
 else if (ListBox1->Selected[3]) j=3;
 else if (ListBox1->Selected[4]) j=4;
 else if (ListBox1->Selected[5]) j=5;
 else if (ListBox1->Selected[6]) j=6;
 else if (ListBox1->Selected[7]) j=7;
 else if (ListBox1->Selected[8]) j=8;
 else if (ListBox1->Selected[9]) j=9;

float alf[30][2]={{0.038,0.042},
{0.08,0.085},
{0.009,0.011},
{0.006,0.008},
{0.012,0.017},
{11.8,12},
{10,11},
{7,8},
{55,55.4},
{51.8,52.2}};

 if (StrToFloat(Edit1->Text)>=alf[j][0]&&
     StrToFloat(Edit1->Text)<=alf[j][1])
 ShowMessage("Вітаю, Ви вірно виконали обчислення!");
 else ShowMessage("Шкода, Ваші дані не відповідають дійсним!");
}
 else ShowMessage("Оберіть провідник!");
 if (Edit1->Text=="") Edit1->Text="0,0000";
}
//---------------------------------------------------------------------------

void __fastcall TForm5::Edit1KeyPress(TObject *Sender, char &Key)
{
{if ((Key >= '0') && (Key <= '9') || Key == VK_BACK || Key =='-') {}  // цифры и 'Key == '-'' - на всякий случай для отрицательных чисел, по надобности можно убрать.
  else if (Key == ',') // запятая
        {
        if (((TEdit*)Sender)->Text.Pos(DecimalSeparator)!=0) // если запятая уже есть
                Key = 0;
        else // если еще нет запятой
                Key = DecimalSeparator;
        }

  else if (Key == '.') // запятая
        {
        if (((TEdit*)Sender)->Text.Pos(DecimalSeparator)!=0) // если запятая уже есть
                Key = 0;
        else // если еще нет запятой
                Key = DecimalSeparator;
        }

  else Key = 0; // не цифра
  if (Key==0) ShowMessage("Ви ввели не вірний символ! Можна вводити лише цифри від 0 до 9, символ ' , ' (якщо це дробове чисело) та ' - ' (якщо від'ємне)"); }               
}
//---------------------------------------------------------------------------


void __fastcall TForm5::Edit1Click(TObject *Sender)
{
  if (Edit1->Text=="0,0000") Edit1->Text="";          
}
//---------------------------------------------------------------------------

void __fastcall TForm5::BitBtn5Click(TObject *Sender)
{
 Form7->Visible=true;
 Form7->RichEdit1->Lines->LoadFromFile("MV.rtf");
}
//---------------------------------------------------------------------------

