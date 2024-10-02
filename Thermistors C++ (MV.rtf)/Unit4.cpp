//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit4.h"
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

void __fastcall TForm4::Edit1KeyPress(TObject *Sender, char &Key)
{
 {
  if ((Key >= '0') && (Key <= '9') || Key == VK_BACK || Key =='-') {}  // цифры и 'Key == '-'' - на всякий случай для отрицательных чисел, по надобности можно убрать.
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
  if (Key==0) ShowMessage("Ви ввели не вірний символ! Можна вводити лише цифри від 0 до 9, символ ' , ' (якщо це дробове чисело) та ' - ' (якщо від'ємне)");
 }         
}
//---------------------------------------------------------------------------

void __fastcall TForm4::BitBtn1Click(TObject *Sender)
{
 int TKO,j;
 if (Edit1->Text=="")
 ShowMessage("Введіть значення температуреого коефіцієнта опору!");
 else
 {
  j=ComboBox1->ItemIndex;
  if (j==0)
  {
   if (StrToFloat(Edit1->Text)>=2.3497&&StrToFloat(Edit1->Text)<=2.3498)
   ShowMessage("Обчислене значення температуреого коефіцієнта опору повинно бути від'ємним. Вірна відповідь: -0.002349816.");
   else if (StrToFloat(Edit1->Text)>=-2.3498&&StrToFloat(Edit1->Text)<=-2.3497)
   ShowMessage("Значення температуреого коефіцієнта опору обчислего вірно!");
   else ShowMessage("Значення температуреого коефіцієнта опору обчислего не вірно!");
  }
  else if (j==1)
  {
   if (StrToFloat(Edit1->Text)>=2.3497&&StrToFloat(Edit1->Text)<=2.3498)
   ShowMessage("Обчислене значення температуреого коефіцієнта опору повинно бути від'ємним. Вірна відповідь: -0.002349758.");
   else if (StrToFloat(Edit1->Text)>=-2.3498&&StrToFloat(Edit1->Text)<=-2.3497)
   ShowMessage("Значення температуреого коефіцієнта опору обчислего вірно!");
   else ShowMessage("Значення температуреого коефіцієнта опору обчислего не вірно!");
  }
  else if (j==2)
  {
   if (StrToFloat(Edit1->Text)>=2.33588&&StrToFloat(Edit1->Text)<=2.3359)
   ShowMessage("Обчислене значення температуреого коефіцієнта опору повинно бути від'ємним. Вірна відповідь: -0.002335881.");
   else if (StrToFloat(Edit1->Text)>=-2.3359&&StrToFloat(Edit1->Text)<=-2.3358)
   ShowMessage("Значення температуреого коефіцієнта опору обчислего вірно!");
   else ShowMessage("Значення температуреого коефіцієнта опору обчислего не вірно!");
  }
  else if (j==3)
  {
   if (StrToFloat(Edit1->Text)>=2.3497&&StrToFloat(Edit1->Text)<=2.3498)
   ShowMessage("Обчислене значення температуреого коефіцієнта опору повинно бути від'ємним. Вірна відповідь: -0.002349758.");
   else if (StrToFloat(Edit1->Text)>=-2.3498&&StrToFloat(Edit1->Text)<=-2.3497)
   ShowMessage("Значення температуреого коефіцієнта опору обчислего вірно!");
   else ShowMessage("Значення температуреого коефіцієнта опору обчислего не вірно!");
  }
  else if (j==4)
  {
   if (StrToFloat(Edit1->Text)>=2.3541&&StrToFloat(Edit1->Text)<=2.3542)
   ShowMessage("Обчислене значення температуреого коефіцієнта опору повинно бути від'ємним. Вірна відповідь: -0.002354174.");
   else if (StrToFloat(Edit1->Text)>=-2.3542&&StrToFloat(Edit1->Text)<=-2.3541)
   ShowMessage("Значення температуреого коефіцієнта опору обчислего вірно!");
   else ShowMessage("Значення температуреого коефіцієнта опору обчислего не вірно!");
  }
  else if (j==5)
  {
   if (StrToFloat(Edit1->Text)>=2.3382&&StrToFloat(Edit1->Text)<=2.3384)
   ShowMessage("Обчислене значення температуреого коефіцієнта опору повинно бути від'ємним. Вірна відповідь: -0.002338299.");
   else if (StrToFloat(Edit1->Text)>=-2.3384&&StrToFloat(Edit1->Text)<=-2.3382)
   ShowMessage("Значення температуреого коефіцієнта опору обчислего вірно!");
   else ShowMessage("Значення температуреого коефіцієнта опору обчислего не вірно!");
  }
  else if (j==6)
  {
   if (StrToFloat(Edit1->Text)>=2.3363&&StrToFloat(Edit1->Text)<=2.3365)
   ShowMessage("Обчислене значення температуреого коефіцієнта опору повинно бути від'ємним. Вірна відповідь: -0.002336399.");
   else if (StrToFloat(Edit1->Text)>=-2.3365&&StrToFloat(Edit1->Text)<=-2.3363)
   ShowMessage("Значення температуреого коефіцієнта опору обчислего вірно!");
   else ShowMessage("Значення температуреого коефіцієнта опору обчислего не вірно!");
  }
  else if (j==7)
  {
   if (StrToFloat(Edit1->Text)>=2.3497&&StrToFloat(Edit1->Text)<=2.3498)
   ShowMessage("Обчислене значення температуреого коефіцієнта опору повинно бути від'ємним. Вірна відповідь: -0.002349758.");
   else if (StrToFloat(Edit1->Text)>=-2.3498&&StrToFloat(Edit1->Text)<=-2.3497)
   ShowMessage("Значення температуреого коефіцієнта опору обчислего вірно!");
   else ShowMessage("Значення температуреого коефіцієнта опору обчислего не вірно!");
  }
  else if (j==8)
  {
   if (StrToFloat(Edit1->Text)>=2.31659&&StrToFloat(Edit1->Text)<=2.3167)
   ShowMessage("Обчислене значення температуреого коефіцієнта опору повинно бути від'ємним. Вірна відповідь: -0.002316638.");
   else if (StrToFloat(Edit1->Text)>=-2.3167&&StrToFloat(Edit1->Text)<=-2.31659)
   ShowMessage("Значення температуреого коефіцієнта опору обчислего вірно!");
   else ShowMessage("Значення температуреого коефіцієнта опору обчислего не вірно!");
  }
  else if (j==9)
  {
   if (StrToFloat(Edit1->Text)>=2.31659&&StrToFloat(Edit1->Text)<=2.3167)
   ShowMessage("Обчислене значення температуреого коефіцієнта опору повинно бути від'ємним. Вірна відповідь: -0.002316638.");
   else if (StrToFloat(Edit1->Text)>=-2.3167&&StrToFloat(Edit1->Text)<=-2.31659)
   ShowMessage("Значення температуреого коефіцієнта опору обчислего вірно!");
   else ShowMessage("Значення температуреого коефіцієнта опору обчислего не вірно!");
  }
 }
}
//---------------------------------------------------------------------------
