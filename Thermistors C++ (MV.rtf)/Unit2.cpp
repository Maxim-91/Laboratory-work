//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
#include "Unit1.h"
#include "Unit3.h"
#include "Unit4.h"
#include "Unit5.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
//---------------------------------------------------------------------------
 float r[10][31]={{32650,25690,19090,15710,12490,10000,8057,6531,5327,4369,3603,2986,2488,2083,1752,1481,1258,1072,917.7,788.5,680,588.6,511.2,445.4,389.3,341.7,300.9,265.4,234.8,208.3,185.3},
 {16325,12696,9951,7856,6247,5000,4029,3266,2663,2184,1801,1493,1244,1042,876,740,627.5,535,457.8,393.3,339.3,293.8,255.3,222.7,194.8,171,150.5,132.9,117.7,104.5,93.05},
 {2691,2181,1779,1459,1204,1000,833.7,699,589,498.6,423.9,362,310.5,267.3,231,200.4,174.5,152.4,133.6,117.5,103.6,91.66,81.3,72.31,64.5,57.7,51.7,46.45,41.83,37.75,31.14},
 {3265,2539,1990,1571,1249,1000,805.7,653.1,532.6,436.8,360.2,298.6,248.8,208.3,175.2,148,125.5,107,91.55,78.66,67.86,58.76,51.06,44.53,38.96,34.19,30.1,26.58,23.53,20.89,18.61},
 {350800,268900,207800,161700,126800,100000,79460,63520,51080,41320,33610,27490,22600,18670,15500,12930,10830,9113,7700,6532,5563,4755,4079,3511,3032,2628,2284,1992,1742,1528,1344},
 {5650,4532,3660,2974,2432,2000,1654,1375,1149.4,965.4,814.6,690.6,588.2,503,432,372.4,322.4,280,244.2,213.52,187.4,164.94,145.64,129,114.6,102.08,91.20,81.68,73.36,66.04,59.6},
 {27280,22070,17960,14695,12091,10000,8313,6944.2,5828,4913.2,4160,3537,3021.2,2590.3,2229,1925.1,1668.4,1451,1266.1,1108.5,973.5,857.66,757.82,671.5,596.65,531.56,474.8,425.17,381.65,343.4,309.7},
 {97950,76176,59703,47136,37479,30000,24171,19593,15978,13104,10806,8958,7464,6249,5256,4440,3765,3210,2747,2360,2036,1763,1532,1336,1169,1026,903,797.4,705.9,626.7,558.3},
 {1225,1011.5,841,703,591.5,500,424.85,362.65,310.95,267.75,231.5,200.9,175,152.95,134.15,118,104.15,92.2,81.85,72.85,65,58.25,52.3,47.15,42.6,38.55,35,31.8,29,26.45,24.15},
 {245,202.3,168.2,140.6,118.3,100,84.97,72.53,62.19,53.55,46.3,40.18,35,30.59,26.83,23.6,20.83,18.44,16.37,14.57,13,11.65,10.46,9.43,8.52,7.71,7,6.36,5.8,5.29,4.83}};
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------






void __fastcall TForm2::TrackBar1Change(TObject *Sender)
{
 int j,i;
 i=TrackBar1->Position;
 TrackBar1->Hint=i*5;
 Label1->Caption=i*5;
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
 Label4->Caption=r[j][i];
 if (i<=3) Label1->Font->Color=clNavy;
 else if (i>3&&i<=6) Label1->Font->Color=clBlue;
 else if (i>6&&i<=9) Label1->Font->Color=clTeal;
 else if (i>9&&i<=12) Label1->Font->Color=clAqua;
 else if (i>12&&i<=15) Label1->Font->Color=clLime;
 else if (i>15&&i<=18) Label1->Font->Color=clYellow;
 else if (i>18&&i<=21) Label1->Font->Color=clFuchsia;
 else if (i>21&&i<=24) Label1->Font->Color=clPurple;
 else if (i>24&&i<=27) Label1->Font->Color=clMaroon;
 else if (i>27&&i<=30) Label1->Font->Color=clRed;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::ListBox1Click(TObject *Sender)
{
 int a;
 if (ListBox1->Selected[0])
 {
  Image2->Picture->LoadFromFile("B(S)//B1.jpg");
  Image3->Picture->LoadFromFile("B(S)//B2.jpg");
  RichEdit1->Lines->LoadFromFile("B(S)//B.txt");
 }
 else if (ListBox1->Selected[1])
 {
  Image2->Picture->LoadFromFile("DC//DC1.jpg");
  Image3->Picture->LoadFromFile("DC//DC2.jpg");
  RichEdit1->Lines->LoadFromFile("DC//DC.txt");
 }
 else if (ListBox1->Selected[2])
 {
  Image2->Picture->LoadFromFile("PW PX//PW PX1.jpg");
  Image3->Picture->LoadFromFile("PW PX//PW PX2.jpg");
  RichEdit1->Lines->LoadFromFile("PW PX//PW PX.txt");
 }
 else if (ListBox1->Selected[3])
 {
  Image2->Picture->LoadFromFile("PW PX//PW PX1.jpg");
  Image3->Picture->LoadFromFile("PW PX//PW PX2.jpg");
  RichEdit1->Lines->LoadFromFile("PW PX//PW PX.txt");
 }
 else if (ListBox1->Selected[4])
 {
  Image2->Picture->LoadFromFile("PW PX//PW PX1.jpg");
  Image3->Picture->LoadFromFile("PW PX//PW PX2.jpg");
  RichEdit1->Lines->LoadFromFile("PW PX//PW PX.txt");
 }
 else if (ListBox1->Selected[5])
 {
  Image2->Picture->LoadFromFile("202 103//202 1031.jpg");
  Image3->Picture->LoadFromFile("202 103//202 1032.jpg");
  RichEdit1->Lines->LoadFromFile("202 103//202 103.txt");
 }
 else if (ListBox1->Selected[6])
 {
  Image2->Picture->LoadFromFile("202 103//202 1031.jpg");
  Image3->Picture->LoadFromFile("202 103//202 1032.jpg");
  RichEdit1->Lines->LoadFromFile("202 103//202 103.txt");
 }
 else if (ListBox1->Selected[7])
 {
  Image2->Picture->LoadFromFile("DC//DC1.jpg");
  Image3->Picture->LoadFromFile("DC//DC2.jpg");
  RichEdit1->Lines->LoadFromFile("DC//DC.txt");
 }
 else if (ListBox1->Selected[8])
 {
  Image2->Picture->LoadFromFile("BC//BC1.jpg");
  Image3->Picture->LoadFromFile("BC//BC2.jpg");
  RichEdit1->Lines->LoadFromFile("BC//BC.txt");
 }
 else if (ListBox1->Selected[9])
 {
  Image2->Picture->LoadFromFile("BC//BC1.jpg");
  Image3->Picture->LoadFromFile("BC//BC2.jpg");
  RichEdit1->Lines->LoadFromFile("BC//BC.txt");
 }

 if (BitBtn1->Caption=="¬кл.")
 goto s;
 a=TrackBar1->Position;
 if (ListBox1->Selected[0])
 Label4->Caption=r[0][a];
 else if (ListBox1->Selected[1])
 Label4->Caption=r[1][a];
 else if (ListBox1->Selected[2])
 Label4->Caption=r[2][a];
 else if (ListBox1->Selected[3])
 Label4->Caption=r[3][a];
 else if (ListBox1->Selected[4])
 Label4->Caption=r[4][a];
 else if (ListBox1->Selected[5])
 Label4->Caption=r[5][a];
 else if (ListBox1->Selected[6])
 Label4->Caption=r[6][a];
 else if (ListBox1->Selected[7])
 Label4->Caption=r[7][a];
 else if (ListBox1->Selected[8])
 Label4->Caption=r[8][a];
 else if (ListBox1->Selected[9])
 Label4->Caption=r[9][a];
 s:
}
//---------------------------------------------------------------------------


void __fastcall TForm2::BitBtn1Click(TObject *Sender)
{
 int a;                                                  
 if (ListBox1->Selected[0]||ListBox1->Selected[1]||ListBox1->Selected[2]||ListBox1->Selected[3]||ListBox1->Selected[4]||ListBox1->Selected[5]||ListBox1->Selected[6]||ListBox1->Selected[7]||ListBox1->Selected[8]||ListBox1->Selected[9])
{
 if (BitBtn1->Caption=="¬кл.")
 {
  BitBtn1->Font->Color=clRed;
  BitBtn1->Glyph->LoadFromFile("prefs16r.bmp");
  TrackBar1->Enabled=true;
  TrackBar1->Position=0;
  BitBtn1->Caption="¬икл.";
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

  Label5->Enabled=true;
  Label1->Enabled=true;
  Label1->Caption=0;
  Label2->Enabled=true;
  Label3->Enabled=true;
 }
 else if (BitBtn1->Caption=="¬икл.")
 {
  BitBtn1->Font->Color=clBlue;
  BitBtn1->Glyph->LoadFromFile("prefs16b.bmp");
  TrackBar1->Position=0;
  TrackBar1->Enabled=false;
  Label4->Caption=0;
  Label4->Enabled=false;
  Label5->Enabled=false;
  Label1->Caption=0;
  Label1->Enabled=false;
  Label2->Enabled=false;
  Label3->Enabled=false;
  BitBtn1->Caption="¬кл.";
  }
 }
  else ShowMessage("ќбер≥ть терм≥стор!");
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button1Click(TObject *Sender)
{
 Form3->Visible=true;
}
//---------------------------------------------------------------------------


void __fastcall TForm2::BitBtn2Click(TObject *Sender)
{
 Form5->Visible=true;
 Form5->RichEdit1->Lines->LoadFromFile("MV.rtf");
}
//---------------------------------------------------------------------------

void __fastcall TForm2::BitBtn3Click(TObject *Sender)
{
 Form3->Visible=true;        
}
//---------------------------------------------------------------------------

void __fastcall TForm2::BitBtn4Click(TObject *Sender)
{
 Form1->Close();        
}
//---------------------------------------------------------------------------

void __fastcall TForm2::BitBtn5Click(TObject *Sender)
{
 Form4->Visible=true;
}
//---------------------------------------------------------------------------

