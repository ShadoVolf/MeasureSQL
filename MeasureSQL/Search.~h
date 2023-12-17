//---------------------------------------------------------------------------

#ifndef SearchH
#define SearchH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "VrButtons.hpp"
#include "VrControls.hpp"
#include "RzCmboBx.hpp"
//---------------------------------------------------------------------------
class TFastSearchForm : public TForm
{
__published:	// IDE-managed Components
        TVrShadowButton *btnClose;
        TRzComboBox *edtType;
        TLabel *Label1;
        TLabel *Label2;
        TRzComboBox *edtSpc;
        TVrShadowButton *btnSet;
        void __fastcall btnCloseClick(TObject *Sender);
        void __fastcall btnSetClick(TObject *Sender);
        void __fastcall FormShow(TObject *Sender);
        void __fastcall edtTypeSelect(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TFastSearchForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFastSearchForm *FastSearchForm;
//---------------------------------------------------------------------------
#endif
