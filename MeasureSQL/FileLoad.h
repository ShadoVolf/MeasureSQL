//---------------------------------------------------------------------------

#ifndef FileLoadH
#define FileLoadH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "AdvGlassButton.hpp"
#include "RzCmboBx.hpp"
#include "RzEdit.hpp"
#include "RzShellDialogs.hpp"
#include <Mask.hpp>
#include "AdvEdBtn.hpp"
#include "AdvEdit.hpp"
#include "AdvFileNameEdit.hpp"
//---------------------------------------------------------------------------
class TFileLoadForm : public TForm
{
__published:	// IDE-managed Components
        TAdvGlassButton *btnClose;
        TRzComboBox *edtFile;
        TLabel *Label3;
        TRzOpenDialog *RzOpenDialog1;
        TRzEdit *edtFileName;
        TLabel *Label1;
        TAdvGlassButton *btnOpen;
        TAdvGlassButton *BtnSeve;
        void __fastcall btnCloseClick(TObject *Sender);
        void __fastcall btnOpenClick(TObject *Sender);
        void __fastcall BtnSeveClick(TObject *Sender);
        void __fastcall FormShow(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TFileLoadForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFileLoadForm *FileLoadForm;
//---------------------------------------------------------------------------
#endif
