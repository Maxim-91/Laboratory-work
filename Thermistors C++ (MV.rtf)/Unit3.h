//---------------------------------------------------------------------------

#ifndef Unit3H
#define Unit3H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Chart.hpp>
#include <ExtCtrls.hpp>
#include <Series.hpp>
#include <TeEngine.hpp>
#include <TeeProcs.hpp>
#include <Buttons.hpp>
//---------------------------------------------------------------------------
class TForm3 : public TForm
{
__published:	// IDE-managed Components
        TComboBox *ComboBox1;
        TEdit *Edit1;
        TEdit *Edit2;
        TEdit *Edit3;
        TEdit *Edit4;
        TEdit *Edit5;
        TEdit *Edit6;
        TEdit *Edit7;
        TEdit *Edit8;
        TEdit *Edit9;
        TEdit *Edit10;
        TEdit *Edit11;
        TEdit *Edit12;
        TEdit *Edit13;
        TEdit *Edit14;
        TEdit *Edit15;
        TChart *Chart1;
        TLineSeries *Series1;
        TLineSeries *Series2;
        TBitBtn *BitBtn1;
        TLabel *Label1;
        TLabel *Label2;
        TLabel *Label3;
        TLabel *Label4;
        TLabel *Label5;
        TLabel *Label6;
        TLabel *Label7;
        TLabel *Label8;
        TLabel *Label9;
        TLabel *Label10;
        TLabel *Label11;
        TLabel *Label12;
        TLabel *Label13;
        TLabel *Label14;
        TLabel *Label15;
        TLabel *Label16;
        TLabel *Label17;
        TLabel *Label18;
        TLabel *Label19;
        TLabel *Label20;
        TEdit *Edit16;
        TLabel *Label21;
        TLabel *Label22;
        void __fastcall Edit1KeyPress(TObject *Sender, char &Key);
        void __fastcall Edit2KeyPress(TObject *Sender, char &Key);
        void __fastcall Edit3KeyPress(TObject *Sender, char &Key);
        void __fastcall Edit4KeyPress(TObject *Sender, char &Key);
        void __fastcall Edit5KeyPress(TObject *Sender, char &Key);
        void __fastcall Edit6KeyPress(TObject *Sender, char &Key);
        void __fastcall Edit7KeyPress(TObject *Sender, char &Key);
        void __fastcall Edit8KeyPress(TObject *Sender, char &Key);
        void __fastcall Edit9KeyPress(TObject *Sender, char &Key);
        void __fastcall Edit11KeyPress(TObject *Sender, char &Key);
        void __fastcall Edit10KeyPress(TObject *Sender, char &Key);
        void __fastcall Edit12KeyPress(TObject *Sender, char &Key);
        void __fastcall Edit13KeyPress(TObject *Sender, char &Key);
        void __fastcall Edit14KeyPress(TObject *Sender, char &Key);
        void __fastcall Edit15KeyPress(TObject *Sender, char &Key);
        void __fastcall BitBtn1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm3(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm3 *Form3;
//---------------------------------------------------------------------------
#endif
