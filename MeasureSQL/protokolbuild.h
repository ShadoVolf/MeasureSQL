//---------------------------------------------------------------------------

#ifndef protokolbuildH
#define protokolbuildH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "VrButtons.hpp"
#include "VrControls.hpp"
#include "RzChkLst.hpp"
#include "RzLstBox.hpp"
#include "VrProgressBar.hpp"
#include "AdvGlassButton.hpp"
#include <ExtCtrls.hpp>
#include <ActnList.hpp>
#include <ActnMan.hpp>
//---------------------------------------------------------------------------
class TPrBuildForm : public TForm
{
__published:	// IDE-managed Components
        TRzCheckList *viewNumber;
        TComboBox *edtType;
        TLabel *Label2;
        TComboBox *edtSpc;
        TLabel *Label3;
        TLabel *Label1;
        TComboBox *edtProtokolN;
        TLabel *Label4;
        TLabel *Label5;
        TComboBox *edtMsk;
        TVrProgressBar *VrProgressBar1;
        TCheckBox *edt;
        TLabel *lCount;
        TLabel *Label7;
        TLabel *Label6;
        TAdvGlassButton *ProtokolID;
        TAdvGlassButton *btnClose;
        TAdvGlassButton *btnCreate;
        TLabel *Label8;
        TComboBox *cmb_ID;
        TAdvGlassButton *AdvGlassButton1;
        TAdvGlassButton *AdvGlassButton2;
        TAdvGlassButton *AdvGlassButton3;
        TComboBox *ComboBox1;
        TAdvGlassButton *AdvGlassButton4;
        TLabel *Label9;
        TRzCheckList *edtMskN;
        TLabel *Label10;
        TRzCheckList *viewNumber1;
        TRzCheckList *viewMeasureID;
        TRadioGroup *RadioGroup1;
        TAdvGlassButton *AdvGlassButton5;
        TAdvGlassButton *AdvGlassButton6;
        TAdvGlassButton *AdvGlassButton7;
        TAdvGlassButton *AdvGlassButton8;
        TActionManager *ActionManager1;
        TAction *Action1;
        void __fastcall btnCloseClick(TObject *Sender);
        void __fastcall FormShow(TObject *Sender);
        void __fastcall edtTypeChange(TObject *Sender);
        void __fastcall edtSpcChange(TObject *Sender);
        void __fastcall edtMskChange(TObject *Sender);
        void __fastcall btnCreateClick(TObject *Sender);
        void __fastcall edtProtokolNChange(TObject *Sender);
        void __fastcall viewNumberChange(TObject *Sender, int Index,
          TCheckBoxState NewState);
        void __fastcall ProtokolIDClick(TObject *Sender);
        void __fastcall AdvGlassButton1Click(TObject *Sender);
        void __fastcall AdvGlassButton2Click(TObject *Sender);
        void __fastcall AdvGlassButton8Click(TObject *Sender);
        void __fastcall AdvGlassButton7Click(TObject *Sender);
        void __fastcall cmb_IDKeyPress(TObject *Sender, char &Key);
        void __fastcall Action1Execute(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TPrBuildForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TPrBuildForm *PrBuildForm;
//---------------------------------------------------------------------------
#endif
