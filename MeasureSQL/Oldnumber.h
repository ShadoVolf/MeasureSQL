//---------------------------------------------------------------------------

#ifndef OldnumberH
#define OldnumberH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "RzDBGrid.hpp"
#include "RzDBNav.hpp"
#include "RzPanel.hpp"
#include "VrButtons.hpp"
#include "VrControls.hpp"
#include "VrProgressBar.hpp"
#include <DBCtrls.hpp>
#include <DBGrids.hpp>
#include <ExtCtrls.hpp>
#include <Grids.hpp>
//---------------------------------------------------------------------------
class TOldNForm : public TForm
{
__published:	// IDE-managed Components
        TRzDBGrid *gridNumbers;
        TRzPanel *RzPanel1;
        TVrShadowButton *btnClose;
        TLabel *Label1;
        TVrShadowButton *btnSet;
        TVrShadowButton *btnNew;
        TVrShadowButton *btnRefresh;
        TVrProgressBar *VrProgressBar1;
        TVrPowerButton *btnF1;
        TVrPowerButton *btnF2;
        TVrPowerButton *btnF3;
        TRzDBNavigator *navigatorNumber;
        void __fastcall btnCloseClick(TObject *Sender);
        void __fastcall FormShow(TObject *Sender);
        void __fastcall btnRefreshClick(TObject *Sender);
        void __fastcall btnF3Click(TObject *Sender);
        void __fastcall btnF1Click(TObject *Sender);
        void __fastcall btnF2Click(TObject *Sender);
        void __fastcall btnNewClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TOldNForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TOldNForm *OldNForm;
//---------------------------------------------------------------------------
#endif
