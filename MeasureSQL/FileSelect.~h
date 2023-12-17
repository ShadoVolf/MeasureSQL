//---------------------------------------------------------------------------

#ifndef FileSelectH
#define FileSelectH
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
#include "RzCmboBx.hpp"

//---------------------------------------------------------------------------
class TFileSelectForm : public TForm
{
__published:	// IDE-managed Components
        TRzPanel *RzPanel1;
        TVrShadowButton *btnClose;
        TRzDBGrid *RzDBGrid1;
        TVrShadowButton *btnSet;
        TVrShadowButton *btnRefresh;
        TRzComboBox *bxSelect;
        void __fastcall btnCloseClick(TObject *Sender);
        void __fastcall FormShow(TObject *Sender);
        void __fastcall btnSetClick(TObject *Sender);
        void __fastcall btnRefreshClick(TObject *Sender);
        void __fastcall bxSelectChange(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TFileSelectForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFileSelectForm *FileSelectForm;
//---------------------------------------------------------------------------
#endif
