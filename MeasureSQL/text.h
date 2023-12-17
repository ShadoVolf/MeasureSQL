//---------------------------------------------------------------------------

#ifndef textH
#define textH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "RzCmboBx.hpp"
#include "RzDBCmbo.hpp"
#include "RzDBEdit.hpp"
#include "RzDBNav.hpp"
#include "VrButtons.hpp"
#include "VrControls.hpp"
#include <DBCtrls.hpp>
#include <ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TTextForm : public TForm
{
__published:	// IDE-managed Components
        TRzDBMemo *edtText;
        TVrShadowButton *btnClose;
        TLabel *Label1;
        TRzDBComboBox *cbName;
        TLabel *Label2;
        TVrShadowButton *btnCreate;
        TRzDBNavigator *RzDBNavigator1;
        void __fastcall btnCloseClick(TObject *Sender);
        void __fastcall btnCreateClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TTextForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TTextForm *TextForm;
//---------------------------------------------------------------------------
#endif
