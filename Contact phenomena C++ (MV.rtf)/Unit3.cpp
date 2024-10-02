//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit3.h"
#include "Unit4.h"
#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm3 *Form3;
//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm3::BitBtn1Click(TObject *Sender)
{
 if (Edit1->Text==Table1->Fields->Fields[0]->AsString&&
     MaskEdit1->Text==Table1->Fields->Fields[1]->AsString)
 {
  Form4->Visible=true;
  Form3->Visible=false;
  Label3->Visible=true;
  Label4->Visible=true;
  Label5->Visible=false;
  Label6->Visible=false;

  Table1->First();
  Form4->Label12->Caption=Table1->Fields->Fields[0]->AsString;
  Form4->Label13->Caption=Table1->Fields->Fields[1]->AsString;
 }
 else if (Edit1->Text!=Table1->Fields->Fields[0]->AsString&&
          MaskEdit1->Text==Table1->Fields->Fields[1]->AsString)
 {
  Label3->Visible=false;
  Label4->Visible=false;
  Label5->Visible=true;
  Label6->Visible=false;
  Edit1->Text="";
  MaskEdit1->Text="";
 }
 else if (Edit1->Text==Table1->Fields->Fields[0]->AsString&&
          MaskEdit1->Text!=Table1->Fields->Fields[1]->AsString)
 {
  Label3->Visible=false;
  Label4->Visible=false;
  Label5->Visible=false;
  Label6->Visible=true;
  Edit1->Text="";
  MaskEdit1->Text="";
 }
 else
 {
  Label3->Visible=false;
  Label4->Visible=false;
  Label5->Visible=true;
  Label6->Visible=true;
  Edit1->Text="";
  MaskEdit1->Text="";
 }
}
//---------------------------------------------------------------------------
void __fastcall TForm3::BitBtn2Click(TObject *Sender)
{
 Form1->Visible=true;
 Form3->Visible=false;
 Label3->Visible=true;
 Label4->Visible=true;
 Label5->Visible=false;
 Label6->Visible=false;
}
//---------------------------------------------------------------------------

