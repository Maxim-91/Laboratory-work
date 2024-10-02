//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit6.h"
#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm6 *Form6;
//---------------------------------------------------------------------------
__fastcall TForm6::TForm6(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm6::BitBtn1Click(TObject *Sender)
{
 int i;
 if (Edit1->Text==""||Edit2->Text==""||Edit3->Text==""||Edit4->Text==""||Edit5->Text==""||Edit6->Text=="")
 {
  ShowMessage("Заповніть всі поля!");
  goto a;
 }

 Table1->First();
 for (i=0;i<=Table1->RecordCount;i++)
 {
  if (Edit1->Text==Table1->Fields->Fields[0]->AsString)
  {
   ShowMessage("Дане питання вже є в базі даних.");
   goto a;
  }
  else Table1->Next();
 }

 if (Edit6->Text!=Edit2->Text&&Edit6->Text!=Edit3->Text&&Edit6->Text!=Edit4->Text&&Edit6->Text!=Edit5->Text)
 ShowMessage("Правильна відповідь не відповідає ні одноній з відповідей!");

 else {Table1->First();
 Table1->Insert();
 Table1->Fields->Fields[0]->AsString=Edit1->Text;
 Table1->Fields->Fields[1]->AsString=Edit2->Text;
 Table1->Fields->Fields[2]->AsString=Edit3->Text;
 Table1->Fields->Fields[3]->AsString=Edit4->Text;
 Table1->Fields->Fields[4]->AsString=Edit5->Text;
 Table1->Fields->Fields[5]->AsString=Edit6->Text;
 Edit1->Text="";
 Edit2->Text="";
 Edit3->Text="";
 Edit4->Text="";
 Edit5->Text="";
 Edit6->Text="";
 Table1->Next();
 }
 a:
}
//---------------------------------------------------------------------------
void __fastcall TForm6::BitBtn2Click(TObject *Sender)
{
 Form1->Visible=true;
 Form6->Visible=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm6::BitBtn3Click(TObject *Sender)
{
 Edit7->Visible=true;
 BitBtn5->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm6::BitBtn5Click(TObject *Sender)
{
 Label9->Caption=Edit7->Text;
 Edit7->Visible=false;
 BitBtn5->Visible=false;
 Table2->First();
 Table2->Delete();
 Table2->Insert();
 Table2->Fields->Fields[0]->AsString=Edit7->Text;
 Table2->Fields->Fields[1]->AsString=Label10->Caption;
 Table2->Next();
 Edit7->Text="";
}
//---------------------------------------------------------------------------


void __fastcall TForm6::BitBtn4Click(TObject *Sender)
{
 Edit8->Visible=true;
 BitBtn6->Visible=true;
}
//---------------------------------------------------------------------------


void __fastcall TForm6::BitBtn6Click(TObject *Sender)
{
 Label10->Caption=Edit8->Text;
 Edit8->Visible=false;
 BitBtn6->Visible=false;
 Table2->First();
 Table2->Delete();
 Table2->Insert();
 Table2->Fields->Fields[0]->AsString=Label9->Caption;
 Table2->Fields->Fields[1]->AsString=Edit8->Text;
 Table2->Next();
 Edit8->Text="";
}
//---------------------------------------------------------------------------

