//---------------------------------------------------------------------------

#ifndef PMDetailH
#define PMDetailH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "RzButton.hpp"
#include "RzPanel.hpp"
#include "RzTabs.hpp"
#include <ExtCtrls.hpp>
#include "RzDBGrid.hpp"
#include <DBGrids.hpp>
#include <Grids.hpp>
#include "RzDBNav.hpp"
#include <DBCtrls.hpp>
#include "AdvGlassButton.hpp"
#include "DBAdvNavigator.hpp"
//---------------------------------------------------------------------------
class TPMDetailForm : public TForm
{
__published:	// IDE-managed Components
        TRzPageControl *RzPageControl1;
        TRzPanel *RzPanel1;
        TRzTabSheet *TabSheet1;
        TRzTabSheet *TabSheet2;
        TRzDBGrid *gridPar;
        TRzDBGrid *RzDBGrid2;
        TDBAdvNavigator *DBAdvNavigator1;
        TAdvGlassButton *bbtnClose;
        void __fastcall btnCloseClick(TObject *Sender);
        void __fastcall FormShow(TObject *Sender);
        void __fastcall gridParDblClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TPMDetailForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TPMDetailForm *PMDetailForm;
//---------------------------------------------------------------------------
#endif
