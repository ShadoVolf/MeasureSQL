//---------------------------------------------------------------------------

#ifndef SortResultH
#define SortResultH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "VrButtons.hpp"
#include "VrControls.hpp"
#include "RzCmboBx.hpp"
#include <ExtCtrls.hpp>
#include "VrProgressBar.hpp"
#include "AdvGlassButton.hpp"
//---------------------------------------------------------------------------
class TSortResultForm : public TForm
{
__published:	// IDE-managed Components
        TLabel *Label1;
        TLabel *Label2;
        TLabel *Label3;
        TLabel *Label4;
        TLabel *Label6;
        TLabel *Label7;
        TLabel *Label9;
        TLabel *Label10;
        TLabel *Label12;
        TPanel *Panel1;
        TPanel *Panel2;
        TPanel *Panel3;
        TVrProgressBar *VrProgressBar1;
        TRadioGroup *RadioGroup1;
        TRadioButton *edtS1;
        TRadioButton *edtS2;
        TRadioButton *edtS3;
        TCheckBox *chkUse1;
        TCheckBox *chkUse2;
        TLabel *Label13;
        TRzComboBox *cmb_ID;
        TLabel *Label14;
        TRzComboBox *cmb_ID1;
        TLabel *Label15;
        TRzComboBox *cmb_ID2;
        TRzComboBox *edtType;
        TLabel *Label5;
        TRzComboBox *edtSpc;
        TRzComboBox *edtMsk;
        TRzComboBox *edtSpc1;
        TRzComboBox *edtMsk1;
        TRzComboBox *edtMsk2;
        TAdvGlassButton *btnClose;
        TAdvGlassButton *AdvGlassButton1;
        TLabel *Label8;
        TRzComboBox *cmb_id3;
        TCheckBox *chk_add_spur;
        TCheckBox *chk_spur_only;
        void __fastcall btnCloseClick(TObject *Sender);
        void __fastcall FormShow(TObject *Sender);
        void __fastcall edtTypeChange(TObject *Sender);
        void __fastcall edtSpcChange(TObject *Sender);
        void __fastcall edtSpc1Change(TObject *Sender);
        void __fastcall btnSetClick(TObject *Sender);
        void __fastcall edtMsk2Change(TObject *Sender);
        void __fastcall cmb_IDKeyPress(TObject *Sender, char &Key);
        void __fastcall edtMskKeyPress(TObject *Sender, char &Key);
        void __fastcall edtMsk2KeyPress(TObject *Sender, char &Key);
        void __fastcall edtMsk1KeyPress(TObject *Sender, char &Key);
        void __fastcall cmb_ID1KeyPress(TObject *Sender, char &Key);
        void __fastcall cmb_ID2KeyPress(TObject *Sender, char &Key);
        void __fastcall cmb_id3KeyPress(TObject *Sender, char &Key);
        void __fastcall edtMsk1Change(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TSortResultForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TSortResultForm *SortResultForm;
//---------------------------------------------------------------------------
#endif
