//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit5.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm5 *Form5;
//---------------------------------------------------------------------------
__fastcall TForm5::TForm5(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------


void __fastcall TForm5::RichEdit1KeyPress(TObject *Sender, char &Key)
{
 Key = 0;        
}
//---------------------------------------------------------------------------
void __fastcall TForm5::RichEdit1KeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
  Key = 0;        
}
//---------------------------------------------------------------------------
void __fastcall TForm5::RichEdit1KeyUp(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
  Key = 0;        
}
//---------------------------------------------------------------------------
