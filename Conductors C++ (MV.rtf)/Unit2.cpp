//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "fstream.h"
#include "Unit2.h"
#include "Unit1.h"
#include "Unit4.h"
#include "Unit5.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
int p[5],put=1,pr=0,nepr=0;
FILE *ran;

//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------


void __fastcall TForm2::BitBtn2Click(TObject *Sender)
{
 int i,j,n;
 if (put==1)
 {
  p[0]=StrToFloat(StringGrid1->Cells[0][0]);

  for (i=1;i<5;i++)
   {
    f: p[i]=p[i-1]+3; if (p[i]>Form4->Table1->RecordCount) p[i]=p[i-1]-15;
    for (j=0;j<i;j++)
    {
     if (p[i]==p[j]) goto f;
    }
    StringGrid1->Cells[0][i]=p[i];
   }
  ofstream ran("Chisl.text");
  int f=StrToFloat(Label1->Caption)+1;
  if (f>=Form4->Table1->RecordCount) f=0;
  ran<<f;
  ran.close();

  if (RadioButton1->Checked==true&&RadioButton1->Caption==Label2->Caption||
      RadioButton2->Checked==true&&RadioButton2->Caption==Label2->Caption||
      RadioButton3->Checked==true&&RadioButton3->Caption==Label2->Caption||
      RadioButton4->Checked==true&&RadioButton4->Caption==Label2->Caption)
  pr++;
  else nepr++;

  n=StrToFloat(StringGrid1->Cells[0][1]);
  RadioGroup1->Caption=StringGrid1->Cells[n][0];

  RadioButton1->Caption=StringGrid1->Cells[n][1];
  RadioButton2->Caption=StringGrid1->Cells[n][2];
  RadioButton3->Caption=StringGrid1->Cells[n][3];
  RadioButton4->Caption=StringGrid1->Cells[n][4];

  Label2->Caption=StringGrid1->Cells[n][5];
  put=2;
 }
  else if (put==2)
 {
  if (RadioButton1->Checked==true&&RadioButton1->Caption==Label2->Caption||
      RadioButton2->Checked==true&&RadioButton2->Caption==Label2->Caption||
      RadioButton3->Checked==true&&RadioButton3->Caption==Label2->Caption||
      RadioButton4->Checked==true&&RadioButton4->Caption==Label2->Caption)
  pr++;
  else nepr++;

  n=StrToFloat(StringGrid1->Cells[0][2]);
  RadioGroup1->Caption=StringGrid1->Cells[n][0];

  RadioButton1->Caption=StringGrid1->Cells[n][1];
  RadioButton2->Caption=StringGrid1->Cells[n][2];
  RadioButton3->Caption=StringGrid1->Cells[n][3];
  RadioButton4->Caption=StringGrid1->Cells[n][4];

  Label2->Caption=StringGrid1->Cells[n][5];

  put=3;
 }

 else if (put==3)
 {
  if (RadioButton1->Checked==true&&RadioButton1->Caption==Label2->Caption||
      RadioButton2->Checked==true&&RadioButton2->Caption==Label2->Caption||
      RadioButton3->Checked==true&&RadioButton3->Caption==Label2->Caption||
      RadioButton4->Checked==true&&RadioButton4->Caption==Label2->Caption)
  pr++;
  else nepr++;

  n=StrToFloat(StringGrid1->Cells[0][3]);
  RadioGroup1->Caption=StringGrid1->Cells[n][0];

  RadioButton1->Caption=StringGrid1->Cells[n][1];
  RadioButton2->Caption=StringGrid1->Cells[n][2];
  RadioButton3->Caption=StringGrid1->Cells[n][3];
  RadioButton4->Caption=StringGrid1->Cells[n][4];

  Label2->Caption=StringGrid1->Cells[n][5];

  put=4;
 }
 else if (put==4)
 {
  if (RadioButton1->Checked==true&&RadioButton1->Caption==Label2->Caption||
      RadioButton2->Checked==true&&RadioButton2->Caption==Label2->Caption||
      RadioButton3->Checked==true&&RadioButton3->Caption==Label2->Caption||
      RadioButton4->Checked==true&&RadioButton4->Caption==Label2->Caption)
  pr++;
  else nepr++;

  n=StrToFloat(StringGrid1->Cells[0][4]);
  RadioGroup1->Caption=StringGrid1->Cells[n][0];

  RadioButton1->Caption=StringGrid1->Cells[n][1];
  RadioButton2->Caption=StringGrid1->Cells[n][2];
  RadioButton3->Caption=StringGrid1->Cells[n][3];
  RadioButton4->Caption=StringGrid1->Cells[n][4];

  Label2->Caption=StringGrid1->Cells[n][5];


  put=5;
 }
 else if (put==5)
 {
  if (RadioButton1->Checked==true&&RadioButton1->Caption==Label2->Caption||
      RadioButton2->Checked==true&&RadioButton2->Caption==Label2->Caption||
      RadioButton3->Checked==true&&RadioButton3->Caption==Label2->Caption||
      RadioButton4->Checked==true&&RadioButton4->Caption==Label2->Caption)
  pr++;
  else nepr++;

  Label3->Caption=pr;
  Label4->Caption=nepr;

  Label5->Visible=true;
  Label3->Visible=true;
  Label6->Visible=true;
  Label4->Visible=true;
  Label7->Visible=true;

  RadioButton1->Enabled=false;
  RadioButton2->Enabled=false;
  RadioButton3->Enabled=false;
  RadioButton4->Enabled=false;
  BitBtn2->Enabled=false;

  if (pr>=3) BitBtn3->Visible=true;
  else
  {
   Label8->Visible=true;
   Label9->Visible=true;
   BitBtn1->Visible=true;
  }
 }
 RadioButton1->Checked=false;
 RadioButton2->Checked=false;
 RadioButton3->Checked=false;
 RadioButton4->Checked=false;
 BitBtn2->Enabled=false;
}
//---------------------------------------------------------------------------


void __fastcall TForm2::BitBtn3Click(TObject *Sender)
{
 Form5->Visible=true;
 Form2->Visible=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::RadioButton1Click(TObject *Sender)
{
 BitBtn2->Enabled=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::RadioButton2Click(TObject *Sender)
{
  BitBtn2->Enabled=true;        
}
//---------------------------------------------------------------------------

void __fastcall TForm2::RadioButton3Click(TObject *Sender)
{
  BitBtn2->Enabled=true;        
}
//---------------------------------------------------------------------------

void __fastcall TForm2::RadioButton4Click(TObject *Sender)
{
  BitBtn2->Enabled=true;        
}
//---------------------------------------------------------------------------


void __fastcall TForm2::BitBtn1Click(TObject *Sender)
{
 Form1->Close();        
}
//---------------------------------------------------------------------------

