//---------------------------------------------------------------------------

#ifndef Machine_ChangeH
#define Machine_ChangeH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "AdvGlassButton.hpp"
#include "RzCmboBx.hpp"
//---------------------------------------------------------------------------
class TMachine_Change_Form : public TForm
{
__published:	// IDE-managed Components
        TAdvGlassButton *btnRec;
        TAdvGlassButton *btnClose;
        TRzComboBox *SN;
        TLabel *Label11;
        TLabel *Label12;
        TRzComboBox *edtOperator;
        TRzComboBox *cmb_ID;
        TLabel *Label9;
        TLabel *Label3;
        TRzComboBox *edtMsk;
        TLabel *Label2;
        TRzComboBox *edtSpc;
        void __fastcall btnCloseClick(TObject *Sender);
        void __fastcall FormShow(TObject *Sender);
        void __fastcall cmb_IDKeyPress(TObject *Sender, char &Key);
        void __fastcall btnRecClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TMachine_Change_Form(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TMachine_Change_Form *Machine_Change_Form;
//---------------------------------------------------------------------------
#endif
