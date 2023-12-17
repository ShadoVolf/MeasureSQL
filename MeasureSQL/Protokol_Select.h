//---------------------------------------------------------------------------

#ifndef Protokol_SelectH
#define Protokol_SelectH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "AdvGlassButton.hpp"
#include "RzCmboBx.hpp"
//---------------------------------------------------------------------------
class TProtokol_Select_Form : public TForm
{
__published:	// IDE-managed Components
        TAdvGlassButton *btnClose;
        TRzComboBox *edtName;
        TRzComboBox *RzComboBox1;
        TRzComboBox *RzComboBox2;
        TRzComboBox *RzComboBox3;
        TRzComboBox *RzComboBox4;
        TRzComboBox *RzComboBox5;
        TRzComboBox *RzComboBox7;
        TRzComboBox *RzComboBox8;
        TRzComboBox *RzComboBox9;
        TRzComboBox *RzComboBox10;
        TRzComboBox *RzComboBox11;
        TRzComboBox *RzComboBox12;
        TRzComboBox *RzComboBox13;
        TLabel *Label1;
        TLabel *Label2;
        TLabel *Label3;
        TLabel *Label4;
        TLabel *Label5;
        TLabel *Label6;
        TLabel *Label8;
        TLabel *Label9;
        TLabel *Label10;
        TLabel *Label11;
        TLabel *Label12;
        TLabel *Label13;
        TLabel *Label14;
        TRzComboBox *RzComboBox14;
        TLabel *Label15;
        TRzComboBox *RzComboBox15;
        TLabel *Label16;
        TAdvGlassButton *AdvGlassButton1;
        TRzComboBox *RzComboBox6;
        TLabel *Label7;
        void __fastcall btnCloseClick(TObject *Sender);
        void __fastcall FormShow(TObject *Sender);
        void __fastcall edtNameChange(TObject *Sender);
        void __fastcall AdvGlassButton1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TProtokol_Select_Form(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TProtokol_Select_Form *Protokol_Select_Form;
//---------------------------------------------------------------------------
#endif
