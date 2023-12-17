//---------------------------------------------------------------------------

#ifndef SpcOptionsH
#define SpcOptionsH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "VrButtons.hpp"
#include "VrControls.hpp"
#include "RzButton.hpp"
#include "RzDBChk.hpp"
#include "RzRadChk.hpp"
#include "RzCmboBx.hpp"
#include "RzDBCmbo.hpp"
#include "AdvGlassButton.hpp"
//---------------------------------------------------------------------------
class TSpcOptionsForm : public TForm
{
__published:	// IDE-managed Components
        TRzDBCheckBox *RzDBCheckBox1;
        TRzDBCheckBox *RzDBCheckBox2;
        TRzDBCheckBox *RzDBCheckBox3;
        TRzDBCheckBox *RzDBCheckBox4;
        TRzDBCheckBox *RzDBCheckBox5;
        TRzDBCheckBox *RzDBCheckBox6;
        TRzDBCheckBox *RzDBCheckBox7;
        TRzDBCheckBox *RzDBCheckBox8;
        TRzDBCheckBox *RzDBCheckBox9;
        TRzDBCheckBox *RzDBCheckBox10;
        TRzDBCheckBox *RzDBCheckBox11;
        TRzComboBox *edtPrint;
        TLabel *Label36;
        TRzDBCheckBox *RzDBCheckBox12;
        TLabel *Label18;
        TRzDBComboBox *edtGraph;
        TRzDBCheckBox *RzDBCheckBox13;
        TRzDBCheckBox *RzDBCheckBox14;
        TRzDBCheckBox *RzDBCheckBox15;
        TAdvGlassButton *btnClose;
        TRzDBCheckBox *RzDBCheckBox16;
        TRzDBCheckBox *RzDBCheckBox17;
        void __fastcall btnCloseClick(TObject *Sender);
        void __fastcall FormShow(TObject *Sender);
        void __fastcall edtPrintChange(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TSpcOptionsForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TSpcOptionsForm *SpcOptionsForm;
//---------------------------------------------------------------------------
#endif
