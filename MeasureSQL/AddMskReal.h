//---------------------------------------------------------------------------

#ifndef AddMskRealH
#define AddMskRealH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "RzPanel.hpp"
#include <ExtCtrls.hpp>
#include "AdvGlassButton.hpp"
#include "RzEdit.hpp"
#include <Mask.hpp>
#include <ActnList.hpp>
//---------------------------------------------------------------------------
class TAddMskForm : public TForm
{
__published:	// IDE-managed Components
        TRzPanel *RzPanel1;
        TAdvGlassButton *btnClose;
        TLabel *Label2;
        TLabel *Label1;
        TLabel *Protokol_Spc;
        TRzEdit *edtFile;
        TLabel *Label4;
        TLabel *Protokol_ID;
        TRzEdit *edtSpcN;
        TAdvGlassButton *AdvGlassButton1;
        TAdvGlassButton *SaveButton;
        TAdvGlassButton *ReSaveButton;
        TActionList *ActionList1;
        TAction *NewMSK_RQ;
        TAction *DelMSK_RQ;
        TAction *AddMSK_RQ;
        TAction *TestMSK_RQ;
        TAction *Get_Default_Spc_RQ;
        TAction *BarCode_MSK_RQ;
        TAction *Journal;
        void __fastcall btnCloseClick(TObject *Sender);
        void __fastcall AdvGlassButton1Click(TObject *Sender);
        void __fastcall FormShow(TObject *Sender);
        void __fastcall SaveButtonClick(TObject *Sender);
        void __fastcall NewMSK_RQExecute(TObject *Sender);
        void __fastcall DelMSK_RQExecute(TObject *Sender);
        void __fastcall AddMSK_RQExecute(TObject *Sender);
        void __fastcall ReSaveButtonClick(TObject *Sender);
        void __fastcall TestMSK_RQExecute(TObject *Sender);
        void __fastcall Get_Default_Spc_RQExecute(TObject *Sender);
        void __fastcall BarCode_MSK_RQExecute(TObject *Sender);
        void __fastcall edtFileKeyPress(TObject *Sender, char &Key);
        void __fastcall JournalExecute(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TAddMskForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TAddMskForm *AddMskForm;
//---------------------------------------------------------------------------
#endif
