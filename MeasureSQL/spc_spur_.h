//---------------------------------------------------------------------------

#ifndef spc_spur_H
#define spc_spur_H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "AdvGlassButton.hpp"
#include "RzButton.hpp"
#include "RzDBChk.hpp"
#include "RzDBEdit.hpp"
#include "RzEdit.hpp"
#include "RzLine.hpp"
#include "RzRadChk.hpp"
#include <Mask.hpp>
#include "RzCmboBx.hpp"
#include "RzDBCmbo.hpp"
//---------------------------------------------------------------------------
class TSpc_Spur_Form : public TForm
{
__published:	// IDE-managed Components
        TAdvGlassButton *btnClose;
        TRzDBCheckBox *RzDBCheckBox32;
        TRzDBCheckBox *RzDBCheckBox23;
        TRzDBCheckBox *RzDBCheckBox24;
        TRzDBCheckBox *RzDBCheckBox25;
        TRzDBEdit *RzDBEdit42;
        TRzDBEdit *RzDBEdit45;
        TRzDBEdit *RzDBEdit46;
        TRzDBEdit *RzDBEdit50;
        TRzDBEdit *RzDBEdit49;
        TRzDBEdit *RzDBEdit47;
        TRzDBEdit *RzDBEdit51;
        TRzDBEdit *RzDBEdit52;
        TRzDBEdit *RzDBEdit53;
        TLabel *Label1;
        TRzLine *RzLine2;
        TRzDBCheckBox *RzDBCheckBox1;
        TLabel *Label2;
        TLabel *Label3;
        TRzDBCheckBox *RzDBCheckBox2;
        TRzDBEdit *RzDBEdit1;
        TRzDBEdit *RzDBEdit2;
        TLabel *Label4;
        TLabel *Label5;
        TLabel *Label6;
        TLabel *Label7;
        TRzDBEdit *RzDBEdit3;
        TLabel *Label8;
        TRzDBComboBox *edtTu;
        TLabel *Label9;
        TLabel *Label10;
        TRzDBCheckBox *RzDBCheckBox4;
        TRzDBEdit *RzDBEdit5;
        TRzDBEdit *RzDBEdit6;
        TRzDBEdit *RzDBEdit9;
        TLabel *Label11;
        TLabel *Label12;
        TRzDBCheckBox *RzDBCheckBox5;
        TRzDBEdit *RzDBEdit4;
        TRzDBEdit *RzDBEdit10;
        TRzDBEdit *RzDBEdit12;
        TLabel *Label13;
        void __fastcall btnCloseClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TSpc_Spur_Form(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TSpc_Spur_Form *Spc_Spur_Form;
//---------------------------------------------------------------------------
#endif
