//---------------------------------------------------------------------------

#ifndef Unit5H
#define Unit5H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ComCtrls.hpp>
#include <Buttons.hpp>
#include <ExtCtrls.hpp>
#include <jpeg.hpp>
#include <Graphics.hpp>
//---------------------------------------------------------------------------
class TForm5 : public TForm
{
__published:	// IDE-managed Components
        TListBox *ListBox1;
        TImage *Image1;
        TLabel *Label1;
        TLabel *Label4;
        TTrackBar *TrackBar1;
        TBitBtn *BitBtn1;
        TBitBtn *BitBtn2;
        TImage *Image2;
        TLabel *Label6;
        TLabel *Label7;
        TLabel *Label8;
        TBitBtn *BitBtn3;
        TLabel *Label9;
        TLabel *Label10;
        TImage *Image4;
        TLabel *Label11;
        TEdit *Edit1;
        TBitBtn *BitBtn4;
        TBitBtn *BitBtn5;
        void __fastcall ListBox1Click(TObject *Sender);
        void __fastcall TrackBar1Change(TObject *Sender);
        void __fastcall BitBtn1Click(TObject *Sender);
        void __fastcall BitBtn2Click(TObject *Sender);
        void __fastcall BitBtn3Click(TObject *Sender);
        void __fastcall BitBtn4Click(TObject *Sender);
        void __fastcall Edit1KeyPress(TObject *Sender, char &Key);
        void __fastcall Edit1Click(TObject *Sender);
        void __fastcall BitBtn5Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm5(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm5 *Form5;
//---------------------------------------------------------------------------
#endif
 