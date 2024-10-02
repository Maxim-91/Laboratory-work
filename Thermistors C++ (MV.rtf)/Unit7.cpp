//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit7.h"
#include "Unit6.h"
#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm7 *Form7;
//---------------------------------------------------------------------------
__fastcall TForm7::TForm7(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm7::Edit1Change(TObject *Sender)
{
 if (Edit1->Text==""||MaskEdit1->Text=="")
 BitBtn1->Enabled=false;
 else BitBtn1->Enabled=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm7::MaskEdit1Change(TObject *Sender)
{
 if (Edit1->Text==""||MaskEdit1->Text=="")
 BitBtn1->Enabled=false;
 else BitBtn1->Enabled=true;
         
}
//---------------------------------------------------------------------------
void __fastcall TForm7::BitBtn1Click(TObject *Sender)
{
 if (Edit1->Text==Form6->Label9->Caption&&MaskEdit1->Text==Form6->Label10->Caption)
 {Form6->Visible=true;
 Form7->Visible=false;
 Form1->Visible=false;}

 else  if (Edit1->Text==Form6->Label9->Caption)
 { if (MaskEdit1->Text!=Form6->Label10->Caption)
 ShowMessage("Ви ввели не вірний пароль."); }

 else  if (MaskEdit1->Text==Form6->Label10->Caption)
 { if (Edit1->Text!=Form6->Label9->Caption)
 ShowMessage("Ви ввели не вірний логін.");}

 else  ShowMessage("Ви ввели не вірний логін та пароль.");
 }
//---------------------------------------------------------------------------

