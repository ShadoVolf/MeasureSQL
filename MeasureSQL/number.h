//---------------------------------------------------------------------------

#ifndef numberH
#define numberH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "VrButtons.hpp"
#include "VrControls.hpp"
#include "RzDBGrid.hpp"
#include "RzPanel.hpp"
#include <DBGrids.hpp>
#include <ExtCtrls.hpp>
#include <Grids.hpp>
#include "VrProgressBar.hpp"
#include "RzDBNav.hpp"
#include <DBCtrls.hpp>
//---------------------------------------------------------------------------
class TNumberForm : public TForm
{
__published:	// IDE-managed Components
        TRzDBGrid *gridNumbers;
        TRzPanel *RzPanel1;
        TVrShadowButton *btnClose;
        TVrPowerButton *btnF1;
        TVrPowerButton *btnF2;
        TVrPowerButton *btnF3;
        TLabel *Label1;
        TVrShadowButton *btnSet;
        TVrShadowButton *btnNew;
        TVrShadowButton *btnRefresh;
        TVrProgressBar *VrProgressBar1;
        TRzDBNavigator *navigatorNumber;
        void __fastcall btnCloseClick(TObject *Sender);
        void __fastcall FormShow(TObject *Sender);
        void __fastcall btnF1Click(TObject *Sender);
        void __fastcall btnF2Click(TObject *Sender);
        void __fastcall btnF3Click(TObject *Sender);
        void __fastcall btnSetClick(TObject *Sender);
        void __fastcall btnNewClick(TObject *Sender);
        void __fastcall btnRefreshClick(TObject *Sender);
        void __fastcall btnDeleteClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TNumberForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TNumberForm *NumberForm;
//---------------------------------------------------------------------------
#endif
