//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit6.h"
#include "Unit5.h"
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

void __fastcall TForm6::BitBtn2Click(TObject *Sender)
{
 Form1->Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm6::BitBtn3Click(TObject *Sender)
{
 Form5->Visible=true;
 Form6->Visible=false;
}
//---------------------------------------------------------------------------
void __fastcall TForm6::BitBtn1Click(TObject *Sender)
{
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
 
 int i,j;
 if (Edit1->Text==""||Edit2->Text==""||Edit3->Text==""||Edit4->Text==""||Edit5->Text==""||Edit6->Text==""||Edit7->Text==""||Edit8->Text==""||Edit9->Text==""||Edit10->Text==""||
     Edit11->Text==""||Edit12->Text==""||Edit13->Text==""||Edit14->Text==""||Edit15->Text==""||Edit16->Text==""||Edit17->Text==""||Edit18->Text==""||Edit19->Text==""||Edit20->Text=="")
 ShowMessage("Введіть всі значення питомих опорів та температур!");

 else {
 j=ComboBox1->ItemIndex;
 Series1->Clear();
 Series1->AddXY(0,r[j][0],"",clRed);
 Series1->AddXY(400,r[j][1],"",clRed);

 float t1[10]={StrToFloat(Edit1->Text),StrToFloat(Edit2->Text),StrToFloat(Edit3->Text),StrToFloat(Edit4->Text),StrToFloat(Edit5->Text),StrToFloat(Edit6->Text),StrToFloat(Edit7->Text),StrToFloat(Edit8->Text),StrToFloat(Edit9->Text),StrToFloat(Edit10->Text)};
 Series2->Clear();
 float r1[10]={StrToFloat(Edit11->Text),StrToFloat(Edit12->Text),StrToFloat(Edit13->Text),StrToFloat(Edit14->Text),StrToFloat(Edit15->Text),StrToFloat(Edit16->Text),StrToFloat(Edit17->Text),StrToFloat(Edit18->Text),StrToFloat(Edit19->Text),StrToFloat(Edit20->Text)};
 Series2->Clear();
 for (i=0; i<10; i++)
 Series2->AddXY(t1[i],r1[i],"",clBlue); }
}
//---------------------------------------------------------------------------

void __fastcall TForm6::Edit1KeyPress(TObject *Sender, char &Key)
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

























void __fastcall TForm6::Edit2KeyPress(TObject *Sender, char &Key)
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
    if (Key==0) ShowMessage("Ви ввели не вірний символ! Можна вводити лише цифри від 0 до 9, символ ' , ' (якщо це десяткове чисело) та ' - ' (якщо від'ємне)"); } 
}
//---------------------------------------------------------------------------

void __fastcall TForm6::Edit3KeyPress(TObject *Sender, char &Key)
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
    if (Key==0) ShowMessage("Ви ввели не вірний символ! Можна вводити лише цифри від 0 до 9, символ ' , ' (якщо це десяткове чисело) та ' - ' (якщо від'ємне)"); } 
}
//---------------------------------------------------------------------------

void __fastcall TForm6::Edit4KeyPress(TObject *Sender, char &Key)
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
    if (Key==0) ShowMessage("Ви ввели не вірний символ! Можна вводити лише цифри від 0 до 9, символ ' , ' (якщо це десяткове чисело) та ' - ' (якщо від'ємне)"); } 
}
//---------------------------------------------------------------------------

void __fastcall TForm6::Edit5KeyPress(TObject *Sender, char &Key)
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
   if (Key==0) ShowMessage("Ви ввели не вірний символ! Можна вводити лише цифри від 0 до 9, символ ' , ' (якщо це десяткове чисело) та ' - ' (якщо від'ємне)"); } 
}
//---------------------------------------------------------------------------

void __fastcall TForm6::Edit6KeyPress(TObject *Sender, char &Key)
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
    if (Key==0) ShowMessage("Ви ввели не вірний символ! Можна вводити лише цифри від 0 до 9, символ ' , ' (якщо це десяткове чисело) та ' - ' (якщо від'ємне)"); } 
}
//---------------------------------------------------------------------------

void __fastcall TForm6::Edit7KeyPress(TObject *Sender, char &Key)
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
    if (Key==0) ShowMessage("Ви ввели не вірний символ! Можна вводити лише цифри від 0 до 9, символ ' , ' (якщо це десяткове чисело) та ' - ' (якщо від'ємне)"); } 
}
//---------------------------------------------------------------------------

void __fastcall TForm6::Edit8KeyPress(TObject *Sender, char &Key)
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
    if (Key==0) ShowMessage("Ви ввели не вірний символ! Можна вводити лише цифри від 0 до 9, символ ' , ' (якщо це десяткове чисело) та ' - ' (якщо від'ємне)"); } 
}
//---------------------------------------------------------------------------

void __fastcall TForm6::Edit9KeyPress(TObject *Sender, char &Key)
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
    if (Key==0) ShowMessage("Ви ввели не вірний символ! Можна вводити лише цифри від 0 до 9, символ ' , ' (якщо це десяткове чисело) та ' - ' (якщо від'ємне)"); } 
}
//---------------------------------------------------------------------------

void __fastcall TForm6::Edit10KeyPress(TObject *Sender, char &Key)
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
    if (Key==0) ShowMessage("Ви ввели не вірний символ! Можна вводити лише цифри від 0 до 9, символ ' , ' (якщо це десяткове чисело) та ' - ' (якщо від'ємне)"); } 
}
//---------------------------------------------------------------------------

void __fastcall TForm6::Edit11KeyPress(TObject *Sender, char &Key)
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
    if (Key==0) ShowMessage("Ви ввели не вірний символ! Можна вводити лише цифри від 0 до 9, символ ' , ' (якщо це десяткове чисело) та ' - ' (якщо від'ємне)"); } 
}
//---------------------------------------------------------------------------

void __fastcall TForm6::Edit12KeyPress(TObject *Sender, char &Key)
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
   if (Key==0) ShowMessage("Ви ввели не вірний символ! Можна вводити лише цифри від 0 до 9, символ ' , ' (якщо це десяткове чисело) та ' - ' (якщо від'ємне)"); } 
}
//---------------------------------------------------------------------------

void __fastcall TForm6::Edit13KeyPress(TObject *Sender, char &Key)
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
  if (Key==0) ShowMessage("Ви ввели не вірний символ! Можна вводити лише цифри від 0 до 9, символ ' , ' (якщо це десяткове чисело) та ' - ' (якщо від'ємне)"); } 
}
//---------------------------------------------------------------------------

void __fastcall TForm6::Edit14KeyPress(TObject *Sender, char &Key)
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
   if (Key==0) ShowMessage("Ви ввели не вірний символ! Можна вводити лише цифри від 0 до 9, символ ' , ' (якщо це десяткове чисело) та ' - ' (якщо від'ємне)"); } 
}
//---------------------------------------------------------------------------

void __fastcall TForm6::Edit15KeyPress(TObject *Sender, char &Key)
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
   if (Key==0) ShowMessage("Ви ввели не вірний символ! Можна вводити лише цифри від 0 до 9, символ ' , ' (якщо це десяткове чисело) та ' - ' (якщо від'ємне)"); } 
}
//---------------------------------------------------------------------------

void __fastcall TForm6::Edit16KeyPress(TObject *Sender, char &Key)
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
   if (Key==0) ShowMessage("Ви ввели не вірний символ! Можна вводити лише цифри від 0 до 9, символ ' , ' (якщо це десяткове чисело) та ' - ' (якщо від'ємне)"); } 
}
//---------------------------------------------------------------------------

void __fastcall TForm6::Edit17KeyPress(TObject *Sender, char &Key)
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
   if (Key==0) ShowMessage("Ви ввели не вірний символ! Можна вводити лише цифри від 0 до 9, символ ' , ' (якщо це десяткове чисело) та ' - ' (якщо від'ємне)"); } 
}
//---------------------------------------------------------------------------

void __fastcall TForm6::Edit18KeyPress(TObject *Sender, char &Key)
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
   if (Key==0) ShowMessage("Ви ввели не вірний символ! Можна вводити лише цифри від 0 до 9, символ ' , ' (якщо це десяткове чисело) та ' - ' (якщо від'ємне)"); } 
}
//---------------------------------------------------------------------------

void __fastcall TForm6::Edit19KeyPress(TObject *Sender, char &Key)
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
   if (Key==0) ShowMessage("Ви ввели не вірний символ! Можна вводити лише цифри від 0 до 9, символ ' , ' (якщо це десяткове чисело) та ' - ' (якщо від'ємне)"); } 
}
//---------------------------------------------------------------------------

void __fastcall TForm6::Edit20KeyPress(TObject *Sender, char &Key)
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
  if (Key==0) ShowMessage("Ви ввели не вірний символ! Можна вводити лише цифри від 0 до 9, символ ' , ' (якщо це десяткове чисело) та ' - ' (якщо від'ємне)"); } 
}
//---------------------------------------------------------------------------


void __fastcall TForm6::Edit11Change(TObject *Sender)
{
 if (Edit11->Text=="0,00000") Edit11->Text="";
}
//---------------------------------------------------------------------------

void __fastcall TForm6::Edit11Click(TObject *Sender)
{
 if (Edit11->Text=="0,00000") Edit11->Text="";        
}
//---------------------------------------------------------------------------

void __fastcall TForm6::Edit1Click(TObject *Sender)
{
 if (Edit1->Text=="0") Edit1->Text="";         
}
//---------------------------------------------------------------------------

void __fastcall TForm6::Edit2Click(TObject *Sender)
{
 if (Edit2->Text=="0") Edit2->Text="";         
}
//---------------------------------------------------------------------------

void __fastcall TForm6::Edit3Click(TObject *Sender)
{
 if (Edit3->Text=="0") Edit3->Text="";
}
//---------------------------------------------------------------------------

void __fastcall TForm6::Edit4Click(TObject *Sender)
{
 if (Edit4->Text=="0") Edit4->Text="";         
}
//---------------------------------------------------------------------------

void __fastcall TForm6::Edit5Click(TObject *Sender)
{
 if (Edit5->Text=="0") Edit5->Text="";         
}
//---------------------------------------------------------------------------

void __fastcall TForm6::Edit6Click(TObject *Sender)
{
 if (Edit6->Text=="0") Edit6->Text="";         
}
//---------------------------------------------------------------------------

void __fastcall TForm6::Edit7Click(TObject *Sender)
{
 if (Edit7->Text=="0") Edit7->Text="";         
}
//---------------------------------------------------------------------------

void __fastcall TForm6::Edit8Click(TObject *Sender)
{
 if (Edit8->Text=="0") Edit8->Text="";         
}
//---------------------------------------------------------------------------

void __fastcall TForm6::Edit9Click(TObject *Sender)
{
 if (Edit9->Text=="0") Edit9->Text="";         
}
//---------------------------------------------------------------------------

void __fastcall TForm6::Edit10Click(TObject *Sender)
{
 if (Edit10->Text=="0") Edit10->Text="";         
}
//---------------------------------------------------------------------------

void __fastcall TForm6::Edit12Click(TObject *Sender)
{
 if (Edit12->Text=="0,00000") Edit12->Text="";         
}
//---------------------------------------------------------------------------

void __fastcall TForm6::Edit13Click(TObject *Sender)
{
 if (Edit13->Text=="0,00000") Edit13->Text="";         
}
//---------------------------------------------------------------------------

void __fastcall TForm6::Edit14Click(TObject *Sender)
{
 if (Edit14->Text=="0,00000") Edit14->Text="";         
}
//---------------------------------------------------------------------------

void __fastcall TForm6::Edit15Click(TObject *Sender)
{
 if (Edit15->Text=="0,00000") Edit15->Text="";         
}
//---------------------------------------------------------------------------

void __fastcall TForm6::Edit16Click(TObject *Sender)
{
 if (Edit16->Text=="0,00000") Edit16->Text="";         
}
//---------------------------------------------------------------------------

void __fastcall TForm6::Edit17Click(TObject *Sender)
{
 if (Edit17->Text=="0,00000") Edit17->Text="";         
}
//---------------------------------------------------------------------------

void __fastcall TForm6::Edit18Click(TObject *Sender)
{
 if (Edit18->Text=="0,00000") Edit18->Text="";         
}
//---------------------------------------------------------------------------

void __fastcall TForm6::Edit19Click(TObject *Sender)
{
 if (Edit19->Text=="0,00000") Edit19->Text="";         
}
//---------------------------------------------------------------------------

void __fastcall TForm6::Edit20Click(TObject *Sender)
{
 if (Edit20->Text=="0,00000") Edit20->Text="";         
}
//---------------------------------------------------------------------------


