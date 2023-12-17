//---------------------------------------------------------------------------

#ifndef termoH
#define termoH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "RzButton.hpp"
#include <Chart.hpp>
#include <ExtCtrls.hpp>
#include <Series.hpp>
#include <TeEngine.hpp>
#include <TeeProcs.hpp>
#include "TeeComma.hpp"
#include "TeeEdit.hpp"
//---------------------------------------------------------------------------
class TTermoForm : public TForm
{
__published:	// IDE-managed Components
        TRzButton *btnClose;
        TComboBox *edtName;
        TLabel *Label1;
        TRzButton *btnResult;
        TEdit *edtF;
        TLabel *Label2;
        TEdit *edtT;
        TLabel *Label3;
        TEdit *edtP;
        TLabel *Label4;
        TComboBox *edtM;
        TLabel *Label5;
        TChart *Chart1;
        TLineSeries *Series1;
        TPointSeries *Series2;
        TTeeCommander *TeeCommander1;
        TChartEditor *ChartEditor1;
        void __fastcall FormShow(TObject *Sender);
        void __fastcall btnCloseClick(TObject *Sender);
        void __fastcall edtNameChange(TObject *Sender);
        void __fastcall btnResultClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TTermoForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TTermoForm *TermoForm;
//---------------------------------------------------------------------------
#endif
