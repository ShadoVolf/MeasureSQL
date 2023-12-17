//---------------------------------------------------------------------------

#ifndef spcH
#define spcH
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
#include <Menus.hpp>
#include "RzDBNav.hpp"
#include <DBCtrls.hpp>
#include "AdvGlassButton.hpp"
#include "DBAdvNavigator.hpp"
//---------------------------------------------------------------------------
class TSpcForm : public TForm
{
__published:	// IDE-managed Components
        TRzDBGrid *gridSpc;
        TRzPanel *RzPanel1;
        TPopupMenu *PopupMenu1;
        TMenuItem *Set1;
        TAdvGlassButton *btnClose;
        TAdvGlassButton *btnNew;
        TAdvGlassButton *btnSet;
        TAdvGlassButton *btnSearch;
        TAdvGlassButton *btnDetail;
        TAdvGlassButton *btnRefresh;
        TAdvGlassButton *btnTemperature;
        TDBAdvNavigator *navigatorSpc;
        void __fastcall btnCloseClick(TObject *Sender);
        void __fastcall btnSetClick(TObject *Sender);
        void __fastcall btnDetailClick(TObject *Sender);
        void __fastcall btnRefreshClick(TObject *Sender);
        void __fastcall FormShow(TObject *Sender);
        void __fastcall btnTemperatureClick(TObject *Sender);
        void __fastcall btnSearchClick(TObject *Sender);
        void __fastcall btnNewClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TSpcForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TSpcForm *SpcForm;
//---------------------------------------------------------------------------
#endif
