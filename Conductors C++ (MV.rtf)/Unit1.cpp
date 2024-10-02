//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "fstream.h"
#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
#include "Unit4.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
 FILE *ran;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BitBtn1Click(TObject *Sender)
{
 int k,n,i,j;
 Form4->Table1->First();
 Form2->StringGrid1->ColCount=Form4->Table1->RecordCount;
 Form4->Table1->First();
 for (i=1;i<=Form4->Table1->RecordCount+1;i++)
 {
  Form2->StringGrid1->Cells[i][0]=Form4->Table1->Fields->Fields[0]->AsString;
  Form2->StringGrid1->Cells[i][1]=Form4->Table1->Fields->Fields[1]->AsString;
  Form2->StringGrid1->Cells[i][2]=Form4->Table1->Fields->Fields[2]->AsString;
  Form2->StringGrid1->Cells[i][3]=Form4->Table1->Fields->Fields[3]->AsString;
  Form2->StringGrid1->Cells[i][4]=Form4->Table1->Fields->Fields[4]->AsString;
  Form2->StringGrid1->Cells[i][5]=Form4->Table1->Fields->Fields[5]->AsString;
  Form4->Table1->Next();
}
 
 randomize;
 ifstream ran("Chisl.text");
 ran>>k;
 ran.close();
 n=k+1;

 Form2->StringGrid1->Cells[0][0]=n;
 Form2->Label1->Caption=k;
 
 Form2->RadioGroup1->Caption=Form2->StringGrid1->Cells[n][0];

 Form2->RadioButton1->Caption=Form2->StringGrid1->Cells[n][1];
 Form2->RadioButton2->Caption=Form2->StringGrid1->Cells[n][2];
 Form2->RadioButton3->Caption=Form2->StringGrid1->Cells[n][3];
 Form2->RadioButton4->Caption=Form2->StringGrid1->Cells[n][4];

 Form2->Label2->Caption=Form2->StringGrid1->Cells[n][5];

 Form2->Visible=true;
 Form1->Visible=false;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::BitBtn2Click(TObject *Sender)
{
 Form3->Visible=true;
 Form1->Visible=false;
}
//---------------------------------------------------------------------------
