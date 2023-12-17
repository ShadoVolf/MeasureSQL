//---------------------------------------------------------------------------

#ifndef oldviewH
#define oldviewH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "RzButton.hpp"
#include "RzDBGrid.hpp"
#include "RzPanel.hpp"
#include <DBGrids.hpp>
#include <ExtCtrls.hpp>
#include <Grids.hpp>
#include "RzGrids.hpp"
#include "frxClass.hpp"
#include "frxDBSet.hpp"
//---------------------------------------------------------------------------
class TOldViewForm : public TForm
{
__published:	// IDE-managed Components
        TRzPanel *RzPanel1;
        TRzButton *btnClose;
        TRzButton *btnPrint;
        TfrxDBDataset *frxDBDataset1;
        TfrxDBDataset *frxDBDataset2;
        TfrxDBDataset *frxDBDataset3;
        TRzStringGrid *RSGrid;
        TfrxReport *frxReport1;
        void __fastcall btnCloseClick(TObject *Sender);
        void __fastcall RSGridDrawCell(TObject *Sender, int ACol, int ARow,
          TRect &Rect, TGridDrawState State);
        void __fastcall btnPrintClick(TObject *Sender);

private:	// User declarations
public:		// User declarations
        __fastcall TOldViewForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TOldViewForm *OldViewForm;
//---------------------------------------------------------------------------
#endif
