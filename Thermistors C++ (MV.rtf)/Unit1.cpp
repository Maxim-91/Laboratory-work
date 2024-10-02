//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "fstream.h"
#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
#include "Unit5.h"
#include "Unit6.h"
#include "Unit7.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
 int b[7],pr=0,nepr=1,h=0,n=1,a;
 FILE *ran;
 int kl=Form6->Table1->RecordCount;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BitBtn1Click(TObject *Sender)
{
 int j;
 h++;
 randomize;
 if (RadioButton1->Checked==true&&RadioButton1->Caption==StringGrid1->Cells[a][5]) pr++;
 else if (RadioButton2->Checked==true&&RadioButton2->Caption==StringGrid1->Cells[a][5]) pr++;
 else if (RadioButton3->Checked==true&&RadioButton3->Caption==StringGrid1->Cells[a][5]) pr++;
 else if (RadioButton4->Checked==true&&RadioButton4->Caption==StringGrid1->Cells[a][5]) pr++;
 else nepr++;
 if (h==5) goto e;
 c: a=random(kl)+1;
 for (j=0;j<h;j++)
 if (a==b[j]) goto c;
 b[h]=a;

 Label1->Caption=StringGrid1->Cells[a][0];
 RadioButton1->Caption=StringGrid1->Cells[a][1];
 RadioButton2->Caption=StringGrid1->Cells[a][2];
 RadioButton3->Caption=StringGrid1->Cells[a][3];
 RadioButton4->Caption=StringGrid1->Cells[a][4];

 BitBtn1->Enabled=false;
 RadioButton1->Checked=false;
 RadioButton2->Checked=false;
 RadioButton3->Checked=false;
 RadioButton4->Checked=false;
 goto d;
 e: BitBtn1->Visible=false;
 Label6->Caption=pr;
 Label5->Caption=nepr;

 Label6->Visible=true;
 Label4->Visible=true;
 Label5->Visible=true;
 Label7->Visible=true;

 Label1->Visible=false;
 Label2->Visible=false;
 Label3->Visible=false;
 RadioButton1->Visible=false;
 RadioButton2->Visible=false;
 RadioButton3->Visible=false;
 RadioButton4->Visible=false;

 if (pr<3)
 {
  Label8->Visible=true;
  BitBtn4->Visible=true;
  BitBtn2->Visible=true;
  Label14->Visible=true;
 }
 else
 {
  BitBtn3->Visible=true;
  Label13->Visible=true;
 }
 d:
   n++;
   if (n>=6) n=1;
   Label2->Caption=n;

   ofstream ran("Chisl.text");
  int f=a;
  ran<<f;
 ran.close();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::BitBtn2Click(TObject *Sender)
{
 int k,i;
 Label1->Visible=false;
 pr=0;
 nepr=0;
 StringGrid1->ColCount=kl;

 Form6->Table1->First();
 for (i=0;i<kl;i++)
 {
  StringGrid1->Cells[i][0]=Form6->Table1->Fields->Fields[0]->AsString;
  StringGrid1->Cells[i][1]=Form6->Table1->Fields->Fields[1]->AsString;
  StringGrid1->Cells[i][2]=Form6->Table1->Fields->Fields[2]->AsString;
  StringGrid1->Cells[i][3]=Form6->Table1->Fields->Fields[3]->AsString;
  StringGrid1->Cells[i][4]=Form6->Table1->Fields->Fields[4]->AsString;
  StringGrid1->Cells[i][5]=Form6->Table1->Fields->Fields[5]->AsString;
  Form6->Table1->Next();
 }
 
 randomize;
 ifstream ran("Chisl.text");
 ran>>k;
 ran.close();
 a=k+1;
 
 b[0]=a;
 Label1->Caption=StringGrid1->Cells[a][0];
 RadioButton1->Caption=StringGrid1->Cells[a][1];
 RadioButton2->Caption=StringGrid1->Cells[a][2];
 RadioButton3->Caption=StringGrid1->Cells[a][3];
 RadioButton4->Caption=StringGrid1->Cells[a][4];
 Label1->Visible=true;
 Label2->Visible=true;
 Label3->Visible=true;
 RadioButton1->Visible=true;
 RadioButton2->Visible=true;
 RadioButton3->Visible=true;
 RadioButton4->Visible=true;
 BitBtn1->Visible=true;
 BitBtn2->Visible=false;

 Label2->Caption=1;
 Label6->Visible=false;
 Label5->Visible=false;
 Label4->Visible=false;
 Label7->Visible=false;
 Label8->Visible=false;
 BitBtn4->Visible=false;
 pr=0;
 nepr=0;
 h=0;
 n=1;
 
 RadioButton1->Checked==false;
 RadioButton2->Checked==false;
 RadioButton3->Checked==false;
 RadioButton4->Checked==false;

 Image1->Visible=false;
 Label9->Visible=false;
 Label10->Visible=false;
 Label11->Visible=false;
 BitBtn5->Visible=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RadioButton1Click(TObject *Sender)
{
 BitBtn1->Enabled=true;        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RadioButton2Click(TObject *Sender)
{
 BitBtn1->Enabled=true;         
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RadioButton3Click(TObject *Sender)
{
 BitBtn1->Enabled=true;         
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RadioButton4Click(TObject *Sender)
{
 BitBtn1->Enabled=true;         
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BitBtn3Click(TObject *Sender)
{
 Form2->Visible=true;
 Form1->Visible=false;       
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BitBtn4Click(TObject *Sender)
{
 Form5->Visible=true;
 Form5->RichEdit1->Lines->LoadFromFile("MV.rtf");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BitBtn5Click(TObject *Sender)
{
 Form7->Edit1->Text="";
 Form7->MaskEdit1->Text="";
 Form6->Table2->First();
 Form6->Label9->Caption=Form6->Table2->Fields->Fields[0]->AsString;
 Form6->Label10->Caption=Form6->Table2->Fields->Fields[1]->AsString;
 Form7->Visible=true;
}
//---------------------------------------------------------------------------


