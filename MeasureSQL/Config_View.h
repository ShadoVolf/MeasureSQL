//---------------------------------------------------------------------------

#ifndef Config_ViewH
#define Config_ViewH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "AdvGlassButton.hpp"
#include "RzChkLst.hpp"
#include "RzCmboBx.hpp"
#include "RzLstBox.hpp"
//---------------------------------------------------------------------------
class TConfig_View_Form : public TForm
{
__published:	// IDE-managed Components
        TAdvGlassButton *btnClose;
        TRzCheckList *view;
        TAdvGlassButton *AdvGlassButton1;
        TLabel *Label1;
        TLabel *Label2;
        TRzComboBox *edtFirstPosition;
        TRzComboBox *edtLastPosition;
        TLabel *Label3;
        TLabel *Label4;
        TLabel *Label5;
        TRzComboBox *edtNom;
        TLabel *Label6;
        TLabel *Label7;
        TLabel *Label8;
        TLabel *Label9;
        TAdvGlassButton *AdvGlassButton2;
        TAdvGlassButton *AdvGlassButton3;
        TAdvGlassButton *AdvGlassButton4;
        void __fastcall btnCloseClick(TObject *Sender);
        void __fastcall FormShow(TObject *Sender);
        void __fastcall viewChange(TObject *Sender, int Index,
          TCheckBoxState NewState);
        void __fastcall AdvGlassButton1Click(TObject *Sender);
        void __fastcall AdvGlassButton2Click(TObject *Sender);
        void __fastcall AdvGlassButton3Click(TObject *Sender);
        void __fastcall AdvGlassButton4Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TConfig_View_Form(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TConfig_View_Form *Config_View_Form;
//---------------------------------------------------------------------------
#endif
