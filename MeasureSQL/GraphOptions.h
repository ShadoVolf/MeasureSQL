//---------------------------------------------------------------------------

#ifndef GraphOptionsH
#define GraphOptionsH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "RzButton.hpp"
#include "RzEdit.hpp"
#include "RzPanel.hpp"
#include "RzRadChk.hpp"
#include "RzRadGrp.hpp"
#include "RzSpnEdt.hpp"
#include <ExtCtrls.hpp>
#include <Mask.hpp>
#include "RzCmboBx.hpp"
//---------------------------------------------------------------------------
class TOptionsGraphForm : public TForm
{
__published:	// IDE-managed Components
        TRzButton *btnClose;
        TLabel *Label1;
        TRzSpinEdit *RzSpinEdit1;
        TRzRadioGroup *RzRadioGroup1;
        TRzRadioButton *Polinom;
        TRzRadioButton *Spline;
        TRzCheckBox *RzCheckBox2;
        TRzCheckBox *AllInOne;
        TRzCheckBox *RzCheckBox3;
        TRzGroupBox *RzGroupBox1;
        TLabel *Label2;
        TRzComboBox *edtA;
        TLabel *Label3;
        TRzComboBox *edtB;
        TLabel *Label4;
        TRzComboBox *edtT;
        TRzCheckBox *edtMSK;
        TRzCheckBox *Mono;
        TRzCheckBox *Jump;
        TRzCheckBox *RzCheckBox6;
        TRzCheckBox *edtP;
        TRzRadioButton *LSpline;
        TRzCheckBox *addMono;
        TRzCheckBox *addJump;
        TRzCheckBox *chk_coef;
        TRzCheckBox *ShowApp;
        TRzCheckBox *ShowMeasure;
        TRzCheckBox *OnlyGood;
        TRzCheckBox *TmaxCh;
        TRzCheckBox *TminCh;
        void __fastcall btnCloseClick(TObject *Sender);
        void __fastcall edtAChange(TObject *Sender);
        void __fastcall edtBChange(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TOptionsGraphForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TOptionsGraphForm *OptionsGraphForm;
//---------------------------------------------------------------------------
#endif
