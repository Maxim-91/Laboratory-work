//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit7.h"
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


void __fastcall TForm7::RichEdit1KeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
  Key = 0;         
}
//---------------------------------------------------------------------------
void __fastcall TForm7::RichEdit1KeyPress(TObject *Sender, char &Key)
{
 Key = 0;        
}
//---------------------------------------------------------------------------

void __fastcall TForm7::RichEdit1KeyUp(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
  Key = 0;        
}
//---------------------------------------------------------------------------

