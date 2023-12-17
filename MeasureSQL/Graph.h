//---------------------------------------------------------------------------

#ifndef GraphH
#define GraphH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "RzButton.hpp"
#include <Chart.hpp>
#include <ExtCtrls.hpp>
#include <TeEngine.hpp>
#include <TeeProcs.hpp>
#include "RzPanel.hpp"
#include "TeeComma.hpp"
#include <Series.hpp>
#include "RzRadChk.hpp"
#include "RzCmboBx.hpp"
#include <ActnList.hpp>
//---------------------------------------------------------------------------
class TGpForm : public TForm
{
__published:	// IDE-managed Components
        TChart *Chart1;
        TTeeCommander *TeeCommander1;
        TRzPanel *RzPanel1;
        TRzButton *btnClose;
        TPointSeries *Series2;
        TComboBox *edtType;
        TLabel *Label1;
        TLabel *Label2;
        TComboBox *edtSpc;
        TLabel *Label3;
        TComboBox *edtMsk;
        TComboBox *edtNumber;
        TLabel *Label5;
        TComboBox *edtTypeF;
        TLabel *Label6;
        TRzButton *btnMake;
        TLabel *Label7;
        TRzComboBox *edtM;
        TRzButton *btnApp;
        TRzButton *btnOptions;
        TLineSeries *Series3;
        TActionList *ActionList1;
        TAction *Action1;
        TAction *Action2;
        TAction *Action3;
        TLabel *Label8;
        TComboBox *cmb_ID;
        TLabel *Label4;
        TRzButton *RzButton1;
        TLineSeries *Series1;
        TAction *SetBorder;
        void __fastcall btnCloseClick(TObject *Sender);
        void __fastcall FormShow(TObject *Sender);
        void __fastcall edtTypeChange(TObject *Sender);
        void __fastcall edtSpcChange(TObject *Sender);
        void __fastcall edtMskChange(TObject *Sender);
        void __fastcall btnOptionsClick(TObject *Sender);
        void __fastcall btnMakeClick(TObject *Sender);
        void __fastcall edtNumberChange(TObject *Sender);
        void __fastcall btnAppClick(TObject *Sender);
        void __fastcall Action1Execute(TObject *Sender);
        void __fastcall Action2Execute(TObject *Sender);
        void __fastcall RzButton1Click(TObject *Sender);
        void __fastcall cmb_IDKeyPress(TObject *Sender, char &Key);
        void __fastcall RzButton2Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TGpForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TGpForm *GpForm;
//---------------------------------------------------------------------------
#endif
