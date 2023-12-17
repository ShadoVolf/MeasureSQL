//---------------------------------------------------------------------------

#ifndef temperatureH
#define temperatureH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "VrButtons.hpp"
#include "VrControls.hpp"
#include "RzDBGrid.hpp"
#include <DBGrids.hpp>
#include <Grids.hpp>
#include "RzDBEdit.hpp"
#include "RzEdit.hpp"
#include <Mask.hpp>
#include "RzDBNav.hpp"
#include <DBCtrls.hpp>
#include <ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TTemperatureForm : public TForm
{
__published:	// IDE-managed Components
        TVrShadowButton *btnClose;
        TRzDBGrid *RzDBGrid1;
        TRzDBEdit *RzDBEdit1;
        TRzDBNavigator *RzDBNavigator1;
        TVrShadowButton *btnNew;
        TRzMemo *RzMemo1;
        TVrShadowButton *btnClear;
        void __fastcall btnCloseClick(TObject *Sender);
        void __fastcall FormShow(TObject *Sender);
        void __fastcall btnNewClick(TObject *Sender);
        void __fastcall btnClearClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TTemperatureForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TTemperatureForm *TemperatureForm;
//---------------------------------------------------------------------------
#endif
