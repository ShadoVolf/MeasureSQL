//---------------------------------------------------------------------------

#ifndef DostupH
#define DostupH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "RzCmboBx.hpp"
#include "RzDBCmbo.hpp"
#include "VrButtons.hpp"
#include "VrControls.hpp"
#include "RzButton.hpp"
#include "RzPanel.hpp"
#include <ExtCtrls.hpp>
#include <ImgList.hpp>
#include "RzEdit.hpp"
#include <Mask.hpp>
#include "AdvGlassButton.hpp"
#include <ActnList.hpp>
//---------------------------------------------------------------------------
class TDostupForm : public TForm
{
__published:	// IDE-managed Components
        TLabel *Label1;
        TLabel *Label2;
        TLabel *Label3;
        TLabel *Label4;
        TLabel *Label5;
        TLabel *Label6;
        TRzToolbar *RzToolbar1;
        TRzToolButton *btnClose;
        TImageList *ImageList1;
        TRzComboBox *edtLogin;
        TRzEdit *edtPassword;
        TRzEdit *edtLastname;
        TRzEdit *edtName;
        TRzEdit *edtRod;
        TRzEdit *edtAccess;
        TLabel *Label7;
        TRzEdit *setBarCode;
        TAdvGlassButton *btnEnter;
        TActionList *ActionList1;
        TAction *Action1;
        void __fastcall FormShow(TObject *Sender);
        void __fastcall btnCloseClick(TObject *Sender);
        void __fastcall edtLoginChange(TObject *Sender);
        void __fastcall btnEnterClick(TObject *Sender);
        void __fastcall edtPasswordKeyPress(TObject *Sender, char &Key);
        void __fastcall setBarCodeChange(TObject *Sender);
        void __fastcall Action1Execute(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TDostupForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TDostupForm *DostupForm;
//---------------------------------------------------------------------------
#endif
