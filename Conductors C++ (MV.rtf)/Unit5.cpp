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
 float r[30][2]={{6.57840,10.23307},
{12.91316,20.95344},
{41.66323,204.14981},
{259.48150,414.68312},
{33.13567,49.94714},
{5.36018,8.04027},
{219.28014,330.38208},
{121.82230,121.89540},
{185.16990,286.28241},
{151.05965,268.98364},

{17.29877,19.49157},
{31.67380,56.28190},
{104.76718,105.01082},
{4.19069,6.36887},
{13.15681,20.56360},
{21.19708,3.80086},
{3.65467,5.50637},
{272.88196,287.01334},
{53.60181,84.95887},
{26.06997,39.22678},

{26.31362,38.73949},
{233.89882,261.18702},
{52.13995,73.82432},
{50.67808,75.04254},
{3.89831,5.96929},
{29.23735,43.61238},
{102.33073,160.80544},
{31.67380,41.66323},
{14.37503,21.19708},
{99.89429,158.36899}};

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
 Label4->Caption=((r[0][1]-r[0][0])/26)*a+r[0][0];
 else if (ListBox1->Selected[1])
 Label4->Caption=((r[1][1]-r[1][0])/26)*a+r[1][0];
 else if (ListBox1->Selected[2])
 Label4->Caption=((r[2][1]-r[2][0])/26)*a+r[2][0];
 else if (ListBox1->Selected[3])
 Label4->Caption=((r[3][1]-r[3][0])/26)*a+r[3][0];
 else if (ListBox1->Selected[4])
 Label4->Caption=((r[4][1]-r[4][0])/26)*a+r[4][0];
 else if (ListBox1->Selected[5])
 Label4->Caption=((r[5][1]-r[5][0])/26)*a+r[5][0];
 else if (ListBox1->Selected[6])
 Label4->Caption=((r[6][1]-r[6][0])/26)*a+r[6][0];
 else if (ListBox1->Selected[7])
 Label4->Caption=((r[7][1]-r[7][0])/26)*a+r[7][0];
 else if (ListBox1->Selected[8])
 Label4->Caption=((r[8][1]-r[8][0])/26)*a+r[8][0];
 else if (ListBox1->Selected[9])
 Label4->Caption=((r[9][1]-r[9][0])/26)*a+r[9][0];

 else if (ListBox1->Selected[10])
 Label4->Caption=((r[10][1]-r[10][0])/26)*a+r[10][0];
 else if (ListBox1->Selected[11])
 Label4->Caption=((r[11][1]-r[11][0])/26)*a+r[11][0];
 else if (ListBox1->Selected[12])
 Label4->Caption=((r[12][1]-r[12][0])/26)*a+r[12][0];
 else if (ListBox1->Selected[13])
 Label4->Caption=((r[13][1]-r[13][0])/26)*a+r[13][0];
 else if (ListBox1->Selected[14])
 Label4->Caption=((r[14][1]-r[14][0])/26)*a+r[14][0];
 else if (ListBox1->Selected[15])
 Label4->Caption=((r[15][1]-r[15][0])/26)*a+r[15][0];
 else if (ListBox1->Selected[16])
 Label4->Caption=((r[16][1]-r[16][0])/26)*a+r[16][0];
 else if (ListBox1->Selected[17])
 Label4->Caption=((r[17][1]-r[17][0])/26)*a+r[17][0];
 else if (ListBox1->Selected[18])
 Label4->Caption=((r[18][1]-r[18][0])/26)*a+r[18][0];
 else if (ListBox1->Selected[19])
 Label4->Caption=((r[19][1]-r[19][0])/26)*a+r[19][0];

 if (ListBox1->Selected[20])
 Label4->Caption=((r[20][1]-r[20][0])/26)*a+r[20][0];
 else if (ListBox1->Selected[21])
 Label4->Caption=((r[21][1]-r[21][0])/26)*a+r[21][0];
 else if (ListBox1->Selected[22])
 Label4->Caption=((r[22][1]-r[22][0])/26)*a+r[22][0];
 else if (ListBox1->Selected[23])
 Label4->Caption=((r[23][1]-r[23][0])/26)*a+r[23][0];
 else if (ListBox1->Selected[24])
 Label4->Caption=((r[24][1]-r[24][0])/26)*a+r[24][0];
 else if (ListBox1->Selected[25])
 Label4->Caption=((r[25][1]-r[25][0])/26)*a+r[25][0];
 else if (ListBox1->Selected[26])
 Label4->Caption=((r[26][1]-r[26][0])/26)*a+r[26][0];
 else if (ListBox1->Selected[27])
 Label4->Caption=((r[27][1]-r[27][0])/26)*a+r[27][0];
 else if (ListBox1->Selected[28])
 Label4->Caption=((r[28][1]-r[28][0])/26)*a+r[28][0];
 else if (ListBox1->Selected[29])
 Label4->Caption=((r[29][1]-r[29][0])/26)*a+r[29][0];

 s:
}
//---------------------------------------------------------------------------


void __fastcall TForm5::TrackBar1Change(TObject *Sender)
{
 int j,i;
 i=TrackBar1->Position;
 TrackBar1->Hint=(i+4)*5;
 Label1->Caption=(i+4)*5;
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

 else if(ListBox1->Selected[10]) j=10;
 else if (ListBox1->Selected[11]) j=11;
 else if (ListBox1->Selected[12]) j=12;
 else if (ListBox1->Selected[13]) j=13;
 else if (ListBox1->Selected[14]) j=14;
 else if (ListBox1->Selected[15]) j=15;
 else if (ListBox1->Selected[16]) j=16;
 else if (ListBox1->Selected[17]) j=17;
 else if (ListBox1->Selected[18]) j=18;
 else if (ListBox1->Selected[19]) j=19;

 else if(ListBox1->Selected[20]) j=20;
 else if (ListBox1->Selected[21]) j=21;
 else if (ListBox1->Selected[22]) j=22;
 else if (ListBox1->Selected[23]) j=23;
 else if (ListBox1->Selected[24]) j=24;
 else if (ListBox1->Selected[25]) j=25;
 else if (ListBox1->Selected[26]) j=26;
 else if (ListBox1->Selected[27]) j=27;
 else if (ListBox1->Selected[28]) j=28;
 else if (ListBox1->Selected[29]) j=29;

 Label4->Caption=((r[j][1]-r[j][0])/26)*i+r[j][0];

 if (i<=4) Label1->Font->Color=clNavy;
 else if (i>4&&i<=9) Label1->Font->Color=clBlue;
 else if (i>9&&i<=14) Label1->Font->Color=clActiveCaption;
 else if (i>14&&i<=18) Label1->Font->Color=clPurple;
 else if (i>18&&i<=23) Label1->Font->Color=clFuchsia;
 else if (i>23) Label1->Font->Color=clRed;
}
//---------------------------------------------------------------------------

void __fastcall TForm5::BitBtn1Click(TObject *Sender)
{
int a;
 if (ListBox1->Selected[0]||ListBox1->Selected[1]||ListBox1->Selected[2]||ListBox1->Selected[3]||ListBox1->Selected[4]||ListBox1->Selected[5]||ListBox1->Selected[6]||ListBox1->Selected[7]||ListBox1->Selected[8]||ListBox1->Selected[9]||ListBox1->Selected[10]||ListBox1->Selected[11]||ListBox1->Selected[12]||ListBox1->Selected[13]||ListBox1->Selected[14]||ListBox1->Selected[15]||ListBox1->Selected[16]||ListBox1->Selected[17]||ListBox1->Selected[18]||ListBox1->Selected[19]||ListBox1->Selected[20]||ListBox1->Selected[21]||ListBox1->Selected[22]||ListBox1->Selected[23]||ListBox1->Selected[24]||ListBox1->Selected[25]||ListBox1->Selected[26]||ListBox1->Selected[27]||ListBox1->Selected[28]||ListBox1->Selected[29])
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

  else if (ListBox1->Selected[10])
  Label4->Caption=r[10][0];
  else if (ListBox1->Selected[11])
  Label4->Caption=r[11][0];
  else if (ListBox1->Selected[21])
  Label4->Caption=r[12][0];
  else if (ListBox1->Selected[13])
  Label4->Caption=r[13][0];
  else if (ListBox1->Selected[14])
  Label4->Caption=r[14][0];
  else if (ListBox1->Selected[15])
  Label4->Caption=r[15][0];
  else if (ListBox1->Selected[16])
  Label4->Caption=r[16][0];
  else if (ListBox1->Selected[17])
  Label4->Caption=r[17][0];
  else if (ListBox1->Selected[18])
  Label4->Caption=r[18][0];
  else if (ListBox1->Selected[19])
  Label4->Caption=r[19][0];

  else if (ListBox1->Selected[20])
  Label4->Caption=r[20][0];
  else if (ListBox1->Selected[21])
  Label4->Caption=r[21][0];
  else if (ListBox1->Selected[22])
  Label4->Caption=r[22][0];
  else if (ListBox1->Selected[23])
  Label4->Caption=r[23][0];
  else if (ListBox1->Selected[24])
  Label4->Caption=r[24][0];
  else if (ListBox1->Selected[25])
  Label4->Caption=r[25][0];
  else if (ListBox1->Selected[26])
  Label4->Caption=r[26][0];
  else if (ListBox1->Selected[27])
  Label4->Caption=r[27][0];
  else if (ListBox1->Selected[28])
  Label4->Caption=r[28][0];
  else if (ListBox1->Selected[29])
  Label4->Caption=r[29][0];

  Label1->Enabled=true;
  Label1->Caption=20;
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
  Label1->Caption=20;
  Label1->Enabled=false;
  BitBtn1->Caption="Вкл.";

  Image1->Picture->LoadFromFile("off1.bmp");
  Image2->Picture->LoadFromFile("off2.bmp");
  }
 }
  else ShowMessage("Оберіть провідник!");           
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
 if (Edit1->Text=="") Edit1->Text=="0,00";  
 if (ListBox1->Selected[0]||ListBox1->Selected[1]||ListBox1->Selected[2]||ListBox1->Selected[3]||ListBox1->Selected[4]||ListBox1->Selected[5]||ListBox1->Selected[6]||ListBox1->Selected[7]||ListBox1->Selected[8]||ListBox1->Selected[9]||ListBox1->Selected[10]||ListBox1->Selected[11]||ListBox1->Selected[12]||ListBox1->Selected[13]||ListBox1->Selected[14]||ListBox1->Selected[15]||ListBox1->Selected[16]||ListBox1->Selected[17]||ListBox1->Selected[18]||ListBox1->Selected[19]||ListBox1->Selected[20]||ListBox1->Selected[21]||ListBox1->Selected[22]||ListBox1->Selected[23]||ListBox1->Selected[24]||ListBox1->Selected[25]||ListBox1->Selected[26]||ListBox1->Selected[27]||ListBox1->Selected[28]||ListBox1->Selected[29])
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

 else if(ListBox1->Selected[10]) j=10;
 else if (ListBox1->Selected[11]) j=11;
 else if (ListBox1->Selected[12]) j=12;
 else if (ListBox1->Selected[13]) j=13;
 else if (ListBox1->Selected[14]) j=14;
 else if (ListBox1->Selected[15]) j=15;
 else if (ListBox1->Selected[16]) j=16;
 else if (ListBox1->Selected[17]) j=17;
 else if (ListBox1->Selected[18]) j=18;
 else if (ListBox1->Selected[19]) j=19;

 else if(ListBox1->Selected[20]) j=20;
 else if (ListBox1->Selected[21]) j=21;
 else if (ListBox1->Selected[22]) j=22;
 else if (ListBox1->Selected[23]) j=23;
 else if (ListBox1->Selected[24]) j=24;
 else if (ListBox1->Selected[25]) j=25;
 else if (ListBox1->Selected[26]) j=26;
 else if (ListBox1->Selected[27]) j=27;
 else if (ListBox1->Selected[28]) j=28;
 else if (ListBox1->Selected[29]) j=29;

float alf[30][2]={{4,4.4},
{4.6,5},
{28,32},
{4.4,4.8},
{3.7,4.1},
{3.5,3.9},
{3.7,4.1},
{0.001,0.01},
{4,4.4},
{5.8,6.2},

{0.8,1.2},
{5.8,6.2},
{0.01,0.02},
{3.8,4.2},
{4.13,4.53},
{5.9,6.3},
{3.7,4.1},
{0.2,0.6},
{4.3,4.7},
{3.7,4.1},

{3.4,3.8},
{0.7,1.1},
{3,3.4},
{3.5,3.9},
{3.9,4.3},
{3.6,4},
{4.2,4.6},
{2.2,2.6},
{3.5,3.9},
{4.3,4.7}};

 if (StrToFloat(Edit1->Text)>=alf[j][0]&&
     StrToFloat(Edit1->Text)<=alf[j][1])
 ShowMessage("Вітаю, Ви вірно виконали обчислення!");
 else ShowMessage("Шкода, Ваші дані не відповідають дійсним!");
}
 else ShowMessage("Оберіть провідник!");

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
  if (Edit1->Text=="0,00") Edit1->Text="";          
}
//---------------------------------------------------------------------------

void __fastcall TForm5::BitBtn5Click(TObject *Sender)
{
 Form7->Visible=true;
 Form7->RichEdit1->Lines->LoadFromFile("MV.rtf");
}
//---------------------------------------------------------------------------

