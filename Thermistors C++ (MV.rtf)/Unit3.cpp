//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit3.h"
#include "Unit1.h"
#include "Unit2.h"
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

void __fastcall TForm3::Edit1KeyPress(TObject *Sender, char &Key)
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
void __fastcall TForm3::Edit2KeyPress(TObject *Sender, char &Key)
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
void __fastcall TForm3::Edit3KeyPress(TObject *Sender, char &Key)
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
void __fastcall TForm3::Edit4KeyPress(TObject *Sender, char &Key)
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
void __fastcall TForm3::Edit5KeyPress(TObject *Sender, char &Key)
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
void __fastcall TForm3::Edit6KeyPress(TObject *Sender, char &Key)
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
void __fastcall TForm3::Edit7KeyPress(TObject *Sender, char &Key)
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
void __fastcall TForm3::Edit8KeyPress(TObject *Sender, char &Key)
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
void __fastcall TForm3::Edit9KeyPress(TObject *Sender, char &Key)
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
void __fastcall TForm3::Edit11KeyPress(TObject *Sender, char &Key)
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
void __fastcall TForm3::Edit10KeyPress(TObject *Sender, char &Key)
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
void __fastcall TForm3::Edit12KeyPress(TObject *Sender, char &Key)
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
void __fastcall TForm3::Edit13KeyPress(TObject *Sender, char &Key)
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
void __fastcall TForm3::Edit14KeyPress(TObject *Sender, char &Key)
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
void __fastcall TForm3::Edit15KeyPress(TObject *Sender, char &Key)
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

void __fastcall TForm3::BitBtn1Click(TObject *Sender)
{
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
 int i,j;
 if (Edit1->Text==""||Edit2->Text==""||Edit3->Text==""||Edit4->Text==""||Edit5->Text==""||Edit6->Text==""||Edit7->Text==""||Edit8->Text==""||Edit9->Text==""||Edit10->Text==""||Edit11->Text==""||Edit12->Text==""||Edit13->Text==""||Edit14->Text==""||Edit15->Text==""||Edit16->Text=="")
 ShowMessage("Введіть всі значення опорів!");

 else {
 j=ComboBox1->ItemIndex;
 Series1->Clear();
 for (i=0; i<=150; i+=5)
 Series1->AddXY(i,r[j][i/5],"",clRed);

 float r1[16]={StrToFloat(Edit1->Text),StrToFloat(Edit2->Text),StrToFloat(Edit3->Text),StrToFloat(Edit4->Text),StrToFloat(Edit5->Text),StrToFloat(Edit6->Text),StrToFloat(Edit7->Text),StrToFloat(Edit8->Text),StrToFloat(Edit9->Text),StrToFloat(Edit10->Text),StrToFloat(Edit11->Text),StrToFloat(Edit12->Text),StrToFloat(Edit13->Text),StrToFloat(Edit14->Text),StrToFloat(Edit15->Text),StrToFloat(Edit16->Text)};
 Series2->Clear();
 for (i=0; i<=150; i+=10)
 Series2->AddXY(i,r1[(i/10)],"",clBlue); }
}
//---------------------------------------------------------------------------





