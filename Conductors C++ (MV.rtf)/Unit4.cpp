//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit4.h"
#include "Unit1.h"
#include "Unit3.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm4 *Form4;
//---------------------------------------------------------------------------
__fastcall TForm4::TForm4(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm4::BitBtn2Click(TObject *Sender)
{
 Form1->Visible=true;
 Form4->Visible=false;
 Form3->Edit1->Text="";
 Form3->MaskEdit1->Text="";
}
//---------------------------------------------------------------------------
void __fastcall TForm4::BitBtn1Click(TObject *Sender)
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


void __fastcall TForm4::BitBtn3Click(TObject *Sender)
{
 Form3->Table1->First();
 Form3->Table1->Delete();
 Form3->Table1->Insert();
 Form3->Table1->Fields->Fields[0]->AsString=Edit7->Text;
 Form3->Table1->Fields->Fields[1]->AsString=Label13->Caption;
 Form3->Table1->Next();
 Label13->Caption=Edit7->Text;
 Edit7->Text="";
}
//---------------------------------------------------------------------------

void __fastcall TForm4::BitBtn4Click(TObject *Sender)
{
 Form3->Table1->First();
 Form3->Table1->Delete();
 Form3->Table1->Insert();
 Form3->Table1->Fields->Fields[0]->AsString=Label12->Caption;
 Form3->Table1->Fields->Fields[1]->AsString=Edit8->Text;
 Form3->Table1->Next();
 Label12->Caption=Edit8->Text;
 Edit8->Text="";
}
//---------------------------------------------------------------------------

