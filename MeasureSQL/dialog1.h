//---------------------------------------------------------------------------

#ifndef dialog1H
#define dialog1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "RzEdit.hpp"
#include "VrButtons.hpp"
#include "VrControls.hpp"
#include <Mask.hpp>
#include "RzCmboBx.hpp"
#include "AdvGlassButton.hpp"
//---------------------------------------------------------------------------
class TDialog1Form : public TForm
{
__published:	// IDE-managed Components
        TLabel *Label1;
        TRzEdit *edtType;
        TLabel *Label2;
        TRzEdit *edtNominal;
        TLabel *Label3;
        TRzComboBox *edtName;
        TRzComboBox *edtTypeR;
        TLabel *Label4;
        TAdvGlassButton *btnClose;
        TAdvGlassButton *btnSave;
        TEdit *edtNom;
        TRzComboBox *edtSpcV;
        TLabel *Label5;
        TLabel *Label6;
        TRzComboBox *Nomenklatura;
        void __fastcall FormShow(TObject *Sender);
        void __fastcall edtNameChange(TObject *Sender);
        void __fastcall btnCloseClick(TObject *Sender);
        void __fastcall edtTypeRChange(TObject *Sender);
        void __fastcall btnSaveClick(TObject *Sender);
        void __fastcall edtSpcVChange(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TDialog1Form(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TDialog1Form *Dialog1Form;
//---------------------------------------------------------------------------
#endif
