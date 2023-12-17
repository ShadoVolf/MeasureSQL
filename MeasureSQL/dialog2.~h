//---------------------------------------------------------------------------

#ifndef dialog2H
#define dialog2H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "RzCmboBx.hpp"
#include "RzEdit.hpp"
#include "VrButtons.hpp"
#include "VrControls.hpp"
#include <Mask.hpp>
//---------------------------------------------------------------------------
class TD2Form : public TForm
{
__published:	// IDE-managed Components
        TLabel *Label1;
        TLabel *Label2;
        TLabel *Label3;
        TVrShadowButton *btnClose;
        TRzEdit *edtType;
        TRzEdit *edtNominal;
        TRzComboBox *edtName;
        void __fastcall FormShow(TObject *Sender);
        void __fastcall edtNameChange(TObject *Sender);
        void __fastcall btnCloseClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TD2Form(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TD2Form *D2Form;
//---------------------------------------------------------------------------
#endif
