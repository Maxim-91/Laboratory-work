//---------------------------------------------------------------------------

#ifndef Unit3H
#define Unit3H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Mask.hpp>
#include <Buttons.hpp>
#include <DB.hpp>
#include <DBGrids.hpp>
#include <DBTables.hpp>
#include <Grids.hpp>
//---------------------------------------------------------------------------
class TForm3 : public TForm
{
__published:	// IDE-managed Components
        TLabel *Label1;
        TMaskEdit *MaskEdit1;
        TLabel *Label2;
        TEdit *Edit1;
        TLabel *Label3;
        TLabel *Label4;
        TBitBtn *BitBtn1;
        TDataSource *DataSource1;
        TDBGrid *DBGrid1;
        TTable *Table1;
        TLabel *Label5;
        TLabel *Label6;
        TBitBtn *BitBtn2;
        void __fastcall BitBtn1Click(TObject *Sender);
        void __fastcall BitBtn2Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm3(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm3 *Form3;
//---------------------------------------------------------------------------
#endif
 