//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Par.h"
#include "Main.h"
#include "data1.h"
#include "Dostup.h"
#include "Data.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "AdvGlassButton"
#pragma link "RzChkLst"
#pragma link "RzCmboBx"
#pragma link "RzEdit"
#pragma link "RzLstBox"
#pragma link "VrControls"
#pragma link "VrProgressBar"
#pragma link "frxBarcode"
#pragma link "frxClass"
#pragma link "frxDBSet"
#pragma link "frxExportPDF"
#pragma link "frxExportXLS"
#pragma resource "*.dfm"
TPar_Form *Par_Form;
//---------------------------------------------------------------------------
__fastcall TPar_Form::TPar_Form(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TPar_Form::btnCloseClick(TObject *Sender)
{
this->Hide();
MainForm->Show();
}
//---------------------------------------------------------------------------
void __fastcall TPar_Form::edtTypeChange(TObject *Sender)
{
edtSpc->Enabled=true;
DataModule2->SqlSpec->Active=false;
DataModule2->SqlSpec->SQL->Clear();
DataModule2->SqlSpec->SQL->Add("Select * from  specification where NameR='"+edtType->Text+"'");
DataModule2->SqlSpec->Active=true;
DataModule2->SqlSpec->First();
edtSpc->Items->Clear();
   for (int i=0;i<DataModule2->SqlSpec->RecordCount;i++){
             edtSpc->Items->Add(DataModule2->SqlSpec->FieldByName("Name")->AsString);
             DataModule2->SqlSpec->Next();

   }        
}
//---------------------------------------------------------------------------
void __fastcall TPar_Form::FormShow(TObject *Sender)
{
DataModule2->ResonatorType->Active=true;
DataModule2->ResonatorType->First();
DataModule2->psi->Active=true;
edtType->Items->Clear();
par_id->Text="";
for (int i=0;i<DataModule2->ResonatorType->RecordCount;i++){
                    edtType->Items->Add(DataModule2->ResonatorType->FieldByName("Type")->AsString);
                    DataModule2->ResonatorType->Next();
                    }
                    viewMSK->Items->Clear();
viewNumber->Items->Clear();
viewPar->Items->Clear();
viewPar2->Items->Clear();
viewMeasureID->Items->Clear();
DataModule2->Comand->SQL->Clear();
DataModule2->Comand->SQL->Add("Delete from psi_par_data_temp");
DataModule2->Comand->Execute();
}
//---------------------------------------------------------------------------
void __fastcall TPar_Form::edtSpcChange(TObject *Sender)
{
edtMsk->Items->Clear();
AnsiString S,S2;
VrProgressBar1->Position=0;

DataModule2->psiData->Active=false;
DataModule2->psiData->SQL->Clear();
DataModule2->psiData->SQL->Add("Select * from psidata where Spc='"+edtSpc->Text+"' ORDER BY msk");
DataModule2->psiData->Active=true;
DataModule2->psiData->First();
VrProgressBar1->MaxValue=DataModule2->psiData->RecordCount;
edtMsk->Items->Add(DataModule2->psiData->FieldByName("Msk")->AsString);
  DataModule2->SqlSpec->Active=true;
  DataModule2->SqlSpec->First();
 for (int i=0;i<DataModule2->SqlSpec->RecordCount;i++){

        if (DataModule2->SqlSpec->FieldByName("Name")->AsString==DataModule2->psiData->FieldByName("Spc")->AsString){
          
           break;
            }
        DataModule2->SqlSpec->Next();
      }
for (int i=0;i<DataModule2->psiData->RecordCount;i++){
             S=DataModule2->psiData->FieldByName("Msk")->AsString;

              DataModule2->psiData->Next();
              VrProgressBar1->Position=i+1;
           if (S!=DataModule2->psiData->FieldByName("Msk")->AsString){

                      edtMsk->Items->Add(DataModule2->psiData->FieldByName("Msk")->AsString);
             }
            int p1=1;
         S2=DataModule2->psiData->FieldByName("Measure_ID")->AsString;
         for (int j1=0;j1<cmb_ID->Items->Count; j1++){
               if (S2==cmb_ID->Items->Strings[j1]){
               p1=0;
               break;
               }
             p1=1;
          }
          if (p1==1){
           cmb_ID->Items->Add(S2);

          }
      }

   if(DataModule2->SqlSpec->FieldByName("RadiusF2")->AsFloat>0){
    edtF2->Text=DataModule2->SqlSpec->FieldByName("RadiusF2")->AsString;
   }
   if(DataModule2->SqlSpec->FieldByName("RadiusR2")->AsFloat>0){
    edtR2->Text=DataModule2->SqlSpec->FieldByName("RadiusR2")->AsString;
   }
   if(DataModule2->SqlSpec->FieldByName("RadiusF4")->AsFloat>0){
    edtF4->Text=DataModule2->SqlSpec->FieldByName("RadiusF4")->AsString;
   }
   if(DataModule2->SqlSpec->FieldByName("RadiusR4")->AsFloat>0){
    edtR4->Text=DataModule2->SqlSpec->FieldByName("RadiusR4")->AsString;
   }
}
//---------------------------------------------------------------------------
void __fastcall TPar_Form::FormHide(TObject *Sender)
{
 MainForm->Show();
}
//---------------------------------------------------------------------------
void __fastcall TPar_Form::FormClose(TObject *Sender, TCloseAction &Action)
{
MainForm->Show();
}
//---------------------------------------------------------------------------
void __fastcall TPar_Form::addButtonClick(TObject *Sender)
{

if (edtMsk->Text!=""){
    if (viewMSK->Count>0){
  for (int i=0; i<viewMSK->Count;i++){
        if (viewMSK->Items->Strings[i]==edtMsk->Text){
        break;
        }
        else {
          viewMSK->Add(edtMsk->Text);
       if (cmb_ID->Text!=""){
          viewMeasureID->Add(cmb_ID->Text);


       }
       else {
         viewMeasureID->Add("-100");
       }
        }

     }
     }
     else {
        viewMSK->Add(edtMsk->Text);
       if (cmb_ID->Text!=""){
          viewMeasureID->Add(cmb_ID->Text);


       }
       else {
         viewMeasureID->Add("-100");
       }

     }


}



}
//---------------------------------------------------------------------------
void __fastcall TPar_Form::cmb_IDChange(TObject *Sender)
{

AnsiString MSK,Spc;
  AnsiString Measure_ID=cmb_ID->Text;
 DataModule2->psiData->Active=false;
 DataModule2->psiData->SQL->Clear();
 AnsiString Sql="Select * from psidata where Measure_ID='"+cmb_ID->Text+"'";
 DataModule2->psiData->SQL->Add(Sql);
 DataModule2->psiData->Active=true;
 if (DataModule2->psiData->RecordCount>0){
 DataModule2->psiData->First();
 MSK=DataModule2->psiData->FieldByName("MSK")->AsString;
 Spc=DataModule2->psiData->FieldByName("Spc")->AsString;
 VrProgressBar1->MaxValue=DataModule2->psiData->RecordCount;
 edtMsk->Clear();
 edtMsk->Items->Add(MSK);
 edtMsk->ItemIndex=0;
 edtSpc->Clear();
 edtSpc->Items->Add(Spc);
 edtSpc->ItemIndex=0;
 DataModule2->SqlSpec->Active=false;
DataModule2->SqlSpec->SQL->Clear();
DataModule2->SqlSpec->SQL->Add("Select * from  specification");
DataModule2->SqlSpec->Active=true;
DataModule2->SqlSpec->First();
for (int i=0;i<DataModule2->SqlSpec->RecordCount;i++){

        if (DataModule2->SqlSpec->FieldByName("Name")->AsString==Spc){

           break;
            }
        DataModule2->SqlSpec->Next();
      }

      }
     if(DataModule2->SqlSpec->FieldByName("RadiusF2")->AsFloat>0){
    edtF2->Text=DataModule2->SqlSpec->FieldByName("RadiusF2")->AsString;
   }
   if(DataModule2->SqlSpec->FieldByName("RadiusR2")->AsFloat>0){
    edtR2->Text=DataModule2->SqlSpec->FieldByName("RadiusR2")->AsString;
   }
   if(DataModule2->SqlSpec->FieldByName("RadiusF4")->AsFloat>0){
    edtF4->Text=DataModule2->SqlSpec->FieldByName("RadiusF4")->AsString;
   }
   if(DataModule2->SqlSpec->FieldByName("RadiusR4")->AsFloat>0){
    edtR4->Text=DataModule2->SqlSpec->FieldByName("RadiusR4")->AsString;
   }
      
}
//---------------------------------------------------------------------------
void __fastcall TPar_Form::edtMskChange(TObject *Sender)
{
AnsiString S,S1,S2,S3;
DataModule2->SqlSpec->Active=false;
DataModule2->SqlSpec->SQL->Clear();
DataModule2->SqlSpec->SQL->Add("Select * from  specification");
DataModule2->SqlSpec->Active=true;
DataModule2->SqlSpec->First();
VrProgressBar1->Position=0;
 S3="Select * from psidata where ";
       if (edtMsk->ItemIndex!=-1){
       S3=S3+"msk='"+edtMsk->Text+"' ";

       }
       if (edt->Checked){
       S3=S3+"and Status='Годен' ";

       }

      if (cmb_ID->Text!=""){
        S3="Select * from psidata where Measure_ID='"+cmb_ID->Text+"' ";

       }
       S3=S3+"ORDER BY N";

DataModule2->psiData->Active=false;
DataModule2->psiData->SQL->Clear();
DataModule2->psiData->SQL->Add(S3);
DataModule2->psiData->Active=true;
DataModule2->psiData->First();

VrProgressBar1->MaxValue=DataModule2->psiData->RecordCount;

 cmb_ID->Items->Clear();
for (int i=0;i<DataModule2->psiData->RecordCount;i++){

              DataModule2->psiData->Next();
              VrProgressBar1->Position=i+1;

         int p1=1;
         S2=DataModule2->psiData->FieldByName("Measure_ID")->AsString;
         for (int j1=0;j1<cmb_ID->Items->Count; j1++){
               if (S2==cmb_ID->Items->Strings[j1]){
               p1=0;
               break;
               }
             p1=1;
          }
          if (p1==1){
           cmb_ID->Items->Add(S2);

          }
      }

  DataModule2->SqlSpec->First();
 for (int i=0;i<DataModule2->SqlSpec->RecordCount;i++){

        if (DataModule2->SqlSpec->FieldByName("Name")->AsString==DataModule2->psiData->FieldByName("Spc")->AsString){
           
           break;
            }
        DataModule2->SqlSpec->Next();
      }
  edtSpc->Text=DataModule2->SqlSpec->FieldByName("Name")->AsString;




}
//---------------------------------------------------------------------------
void __fastcall TPar_Form::viewMSKChange(TObject *Sender, int Index,
      TCheckBoxState NewState)
{
int k=0;
for(int i=0;i<viewMSK->Count;i++){
                  if (viewMSK->ItemState[i]!=0){
                                k++;
                      }


   }
  Label15->Caption=FloatToStr(k);
  Label15->Repaint();
  if (viewMSK->ItemState[viewMSK->ItemIndex]!=0){
  DataModule2->psiData->Active=false;
  DataModule2->psiData->SQL->Clear();
  AnsiString sql;
    if (viewMeasureID->Items->Strings[viewMSK->ItemIndex]!="-100"){
    sql="Select * from psidata where Measure_ID='"+viewMeasureID->Items->Strings[viewMSK->ItemIndex]+"' order by N";
    }
    else {
     sql="Select * from psidata where Msk='"+viewMSK->Items->Strings[viewMSK->ItemIndex]+"' order by N";
    }
   DataModule2->psiData->SQL->Add(sql);
   DataModule2->psiData->Active=true;
   DataModule2->psiData->First();
   DataModule2->psi_par_data_temp->Active=true;

   for (int i=0; i<DataModule2->psiData->RecordCount;i++){
   int k=1;
        if (viewNumber->Count>0){
          for (int j=0; j<viewNumber->Count;j++){
               if (viewNumber->Items->Strings[j]==DataModule2->psiData->FieldByName("N")->AsString){
                  k=0;
                  break;
               }

          }
          }
          if (k==1){
          if (edt->Checked){
               if (DataModule2->psiData->FieldByName("Status")->AsString=="Годен"){
                viewNumber->Add(DataModule2->psiData->FieldByName("N")->AsString);
                DataModule2->psi_par_data_temp->Append();
                DataModule2->psi_par_data_temp->FieldByName("N")->AsString=DataModule2->psiData->FieldByName("N")->AsString;
                DataModule2->psi_par_data_temp->FieldByName("F")->AsString=DataModule2->psiData->FieldByName("F")->AsString;
                DataModule2->psi_par_data_temp->FieldByName("R")->AsString=DataModule2->psiData->FieldByName("R")->AsString;
                DataModule2->psi_par_data_temp->FieldByName("Msk")->AsString=DataModule2->psiData->FieldByName("Msk")->AsString;
                DataModule2->psi_par_data_temp->FieldByName("Measure_ID")->AsString=DataModule2->psiData->FieldByName("Measure_ID")->AsString;
                DataModule2->psi_par_data_temp->Post();
               }
             }
             else {
           viewNumber->Add(DataModule2->psiData->FieldByName("N")->AsString);
           DataModule2->psi_par_data_temp->Append();
             DataModule2->psi_par_data_temp->FieldByName("N")->AsString=DataModule2->psiData->FieldByName("N")->AsString;
                DataModule2->psi_par_data_temp->FieldByName("F")->AsString=DataModule2->psiData->FieldByName("F")->AsString;
                DataModule2->psi_par_data_temp->FieldByName("R")->AsString=DataModule2->psiData->FieldByName("R")->AsString;
                DataModule2->psi_par_data_temp->FieldByName("Msk")->AsString=DataModule2->psiData->FieldByName("Msk")->AsString;
                DataModule2->psi_par_data_temp->FieldByName("Measure_ID")->AsString=DataModule2->psiData->FieldByName("Measure_ID")->AsString;
                DataModule2->psi_par_data_temp->Post();
           }
          }
      DataModule2->psiData->Next();
   }
   for (int i=0;i<viewNumber->Count;i++){
 viewNumber->ItemState[i]=1;
}
Label16->Caption=viewNumber->Count;
Label16->Repaint();
   }
   else {
       AnsiString sql;
       DataModule2->psiData->Active=false;
    if (viewMeasureID->Items->Strings[viewMSK->ItemIndex]!="-100"){
    sql="Select * from psidata where Measure_ID='"+viewMeasureID->Items->Strings[viewMSK->ItemIndex]+"' order by N";
    }
    else {
     sql="Select * from psidata where Msk='"+viewMSK->Items->Strings[viewMSK->ItemIndex]+"' order by N";
    }
    DataModule2->psiData->SQL->Clear();
   DataModule2->psiData->SQL->Add(sql);
   DataModule2->psiData->Active=true;
   DataModule2->psiData->First();
     DataModule2->Comand->SQL->Clear();
      DataModule2->Comand->SQL->Add("Delete from psi_par_data_temp where Msk='"+viewMSK->Items->Strings[viewMSK->ItemIndex]+"'");
       DataModule2->Comand->Execute();
   for (int i=0; i<viewNumber->Count; i++){
         DataModule2->psiData->First();
         for (int j=0; j<DataModule2->psiData->RecordCount; j++){
             if (viewNumber->Items->Strings[i]==DataModule2->psiData->FieldByName("N")->AsString){
                viewNumber->Items->Delete(i);
                 i=i-1;
             break;
             }
             DataModule2->psiData->Next();
         }
        }
   }
}
//---------------------------------------------------------------------------
void __fastcall TPar_Form::AdvGlassButton1Click(TObject *Sender)
{
viewMSK->Items->Clear();
viewNumber->Items->Clear();
viewPar->Items->Clear();
viewPar2->Items->Clear();
viewMeasureID->Items->Clear();
Label15->Caption="";
Label15->Repaint();
Label16->Caption="";
Label16->Repaint();
Label17->Caption="";
Label17->Repaint();
Label19->Caption="";
Label19->Repaint();
}
//---------------------------------------------------------------------------
void __fastcall TPar_Form::AdvGlassButton4Click(TObject *Sender)
{
for (int i=0;i<viewNumber->Count;i++){
 viewNumber->ItemState[i]=1;


}
}
//---------------------------------------------------------------------------

void __fastcall TPar_Form::AdvGlassButton5Click(TObject *Sender)
{
for (int i=0;i<viewNumber->Count;i++){
 viewNumber->ItemState[i]=0;


}
}
//---------------------------------------------------------------------------




void __fastcall TPar_Form::AdvGlassButton2Click(TObject *Sender)
{
DataModule2->psi_par_id->Active=true;
DataModule2->psi_par_id->Append();
DataModule2->psi_par_id->FieldByName("Note")->AsString=="1";
 DataModule2->psi_par_id->Post();
DataModule2->psi_par_id->Last();

AnsiString Par_ID=DataModule2->psi_par_id->FieldByName("ID")->AsString;
par_id->Text=Par_ID;
DataModule2->psi_par_id->Active=false;
DataModule2->psi_par_data_temp->Active=false;
DataModule2->psi_par_data_temp->Active=true;
DataModule2->psi_par_data->Active=true;
DataModule2->psi_par_data_temp_1->Active=false;
DataModule2->psi_par_data_temp_1->Active=true;
viewPar->Items->Clear();
viewPar2->Items->Clear();
 double dr2=StrToFloat(edtR2->Text);
 double df2=StrToFloat(edtF2->Text);
 double dr4=StrToFloat(edtR4->Text);
 double df4=StrToFloat(edtF4->Text);
 int count=0;
 int count_temp=0;
 int count_numbers=0;
 int count_par_2=0;
 int active=1;
 int count_local_par=0;
AnsiString *numbers = new AnsiString[DataModule2->psi_par_data_temp->RecordCount];
  while (active>0) { //1
     count_local_par=0;
     count_par_2=0;
     DataModule2->psi_par_data_temp->First();
        for (int i=0; i<DataModule2->psi_par_data_temp->RecordCount;i++){ //2
              DataModule2->psi_par_data_temp_1->First();
              AnsiString *par_names = new AnsiString[DataModule2->psi_par_data_temp->RecordCount];
              count_temp=0;
              int in_par=0;
              for (int k=0;k<count_numbers;k++){ //3
                     if (DataModule2->psi_par_data_temp->FieldByName("N")->AsString==numbers[k]){   //4
                      in_par=1;
                      break;
                     }   //4

              }   //3
              if (in_par==0){     //5
                 for (int j=0;j<DataModule2->psi_par_data_temp_1->RecordCount;j++){  //6
                         int in_par_1=0;
                          for (int k=0;k<count_numbers;k++){  //7
                                  if (DataModule2->psi_par_data_temp_1->FieldByName("N")->AsString==numbers[k]){  //8
                                         in_par_1=1;
                                          break;
                                         } //8

                           }  //7
                      if (in_par_1==0){  //9
                        if (DataModule2->psi_par_data_temp->FieldByName("N")->AsString!=DataModule2->psi_par_data_temp_1->FieldByName("N")->AsString){ //10

                                double R=DataModule2->psi_par_data_temp->FieldByName("R")->AsFloat;
                                double R1=DataModule2->psi_par_data_temp_1->FieldByName("R")->AsFloat;
                                double F=DataModule2->psi_par_data_temp->FieldByName("F")->AsFloat;
                                double F1=DataModule2->psi_par_data_temp_1->FieldByName("F")->AsFloat;
                                 double g=fabs(R-R1);
                                 double ddr=(fabs(R+R1)/2)*(dr2/100);
                                 double  g1=fabs(F-F1);
                                if(g<=ddr & g1<=df2){   //11
                                  par_names[count_temp]=DataModule2->psi_par_data_temp_1->FieldByName("N")->AsString;
                                  count_temp++;

                                }        //11
                           }         //10
                           }       //9
                  DataModule2->psi_par_data_temp_1->Next();
                  }      //6
                }       //5
               if (active==2){  //12
                 if (count_temp>1){   //13
                  count_temp=1;
                  active=1;
                 }   //13

               }     //12
               if (count_temp==1){   //14
                    count_local_par++;
                    count++;
                    DataModule2->psi_par_data->Append();
                    DataModule2->psi_par_data->FieldByName("N1")->AsString=DataModule2->psi_par_data_temp->FieldByName("N")->AsString;
                    DataModule2->psi_par_data->FieldByName("Msk1")->AsString=DataModule2->psi_par_data_temp->FieldByName("Msk")->AsString;
                    DataModule2->psi_par_data->FieldByName("Measure_ID1")->AsString=DataModule2->psi_par_data_temp->FieldByName("Measure_ID")->AsString;
                    DataModule2->psi_par_data_temp_1->First();
                        for (int j=0;j<DataModule2->psi_par_data_temp_1->RecordCount;j++){ //15
                                if (DataModule2->psi_par_data_temp_1->FieldByName("N")->AsString==par_names[0]){ //16
                                DataModule2->psi_par_data->FieldByName("N2")->AsString=DataModule2->psi_par_data_temp_1->FieldByName("N")->AsString;
                                DataModule2->psi_par_data->FieldByName("Msk2")->AsString=DataModule2->psi_par_data_temp_1->FieldByName("Msk")->AsString;
                                DataModule2->psi_par_data->FieldByName("Measure_ID2")->AsString=DataModule2->psi_par_data_temp_1->FieldByName("Measure_ID")->AsString;
                                 break;
                                } //16
                          DataModule2->psi_par_data_temp_1->Next();
                        } //15
                    DataModule2->psi_par_data->FieldByName("Par_ID")->AsString=Par_ID;
                   DataModule2->psi_par_data->Post();

                   numbers[count_numbers]=DataModule2->psi_par_data_temp->FieldByName("N")->AsString;
                   count_numbers++;
                   numbers[count_numbers]=DataModule2->psi_par_data_temp_1->FieldByName("N")->AsString;
                   count_numbers++;
                  viewPar->Items->Add(DataModule2->psi_par_data_temp->FieldByName("N")->AsString+"("+DataModule2->psi_par_data_temp_1->FieldByName("N")->AsString+")");
               }  //14

              if (count_temp>1){  //17
                count_par_2++;
              }   //17

           delete [] par_names;
          DataModule2->psi_par_data_temp->Next();
        } //2


   if (count_par_2>0 & count_local_par==0){
       active=2;
     }
    else if (count_par_2>0 & count_local_par>0){
      active=1;
    }
    else if (count_par_2==0 & count_local_par>0){
      active=1;
    }
    else {
     active=0;
    }

   }  //1
   delete[] numbers;

   Label17->Caption=count;
   Label17->Repaint();
   DataModule2->psi_par_data_1->Active=false;
   DataModule2->psi_par_data_1->SQL->Clear();
   DataModule2->psi_par_data_1->SQL->Add("Select * from psi_par_data where Par_ID='"+Par_ID+"'");
   DataModule2->psi_par_data_1->Active=true;
   DataModule2->psi_par_data_2->Active=false;
   DataModule2->psi_par_data_2->SQL->Clear();
   DataModule2->psi_par_data_2->SQL->Add("Select * from psi_par_data where Par_ID='"+Par_ID+"'");
   DataModule2->psi_par_data_2->Active=true;
   DataModule2->psi_par_data_4->Active=false;
   DataModule2->psi_par_data_4->Active=true;
   active=1;
   int count_par_id=0;
    int count_par_4=0;
     int count_par=0;
 int count_local_par_2=0;
 int par_id_temp_count=0;
 int * par_id = new int[DataModule2->psi_par_data_1->RecordCount];
   while (active>0){   //1
      count_par_4=0;
      count_local_par_2=0;

               DataModule2->psi_par_data_1->First();
               for (int i=0; i<DataModule2->psi_par_data_1->RecordCount; i++){   //2
                         int in_par=0;
                         par_id_temp_count=0;
                         int *par_id_temp= new  int[DataModule2->psi_par_data_2->RecordCount];
                        for (int k=0;k<count_par_id;k++){   //3
                            if (DataModule2->psi_par_data_1->FieldByName("ID")->AsString==par_id[k]){  //4
                            in_par=1;
                            break;
                            }      //4
                        }    //3
                        if (in_par==0){  //5
                            DataModule2->psi_par_data_2->First();
                                for (int j=0;j<DataModule2->psi_par_data_2->RecordCount;j++){ //6
                                  int in_par1=0;


                                   for (int k=0;k<count_par_id;k++){  //7
                                          if (DataModule2->psi_par_data_2->FieldByName("ID")->AsString==par_id[k]){  //8
                                                  in_par1=1;
                                                  break;
                                         }  //8
                                        } //7
                                     if (in_par1==0 & DataModule2->psi_par_data_2->FieldByName("ID")->AsString!=DataModule2->psi_par_data_1->FieldByName("ID")->AsString){ //9
                                          DataModule2->psi_par_data_temp_1->First();
                                          double R1,R2,R3,R4;
                                          double F1,F2,F3,F4;
                                          for (int l=0; l<DataModule2->psi_par_data_temp_1->RecordCount; l++){     //10
                                               if (DataModule2->psi_par_data_1->FieldByName("N1")->AsString==DataModule2->psi_par_data_temp_1->FieldByName("N")->AsString){ //11
                                                   R1=DataModule2->psi_par_data_temp_1->FieldByName("R")->AsFloat;
                                                   F1=DataModule2->psi_par_data_temp_1->FieldByName("F")->AsFloat;

                                               }      //11
                                                 if (DataModule2->psi_par_data_1->FieldByName("N2")->AsString==DataModule2->psi_par_data_temp_1->FieldByName("N")->AsString){ //12
                                                   R2=DataModule2->psi_par_data_temp_1->FieldByName("R")->AsFloat;
                                                   F2=DataModule2->psi_par_data_temp_1->FieldByName("F")->AsFloat;

                                               }    //12
                                                 if (DataModule2->psi_par_data_2->FieldByName("N1")->AsString==DataModule2->psi_par_data_temp_1->FieldByName("N")->AsString){   //13
                                                   R3=DataModule2->psi_par_data_temp_1->FieldByName("R")->AsFloat;
                                                   F3=DataModule2->psi_par_data_temp_1->FieldByName("F")->AsFloat;

                                               }   //13
                                                 if (DataModule2->psi_par_data_2->FieldByName("N2")->AsString==DataModule2->psi_par_data_temp_1->FieldByName("N")->AsString){ //14
                                                   R4=DataModule2->psi_par_data_temp_1->FieldByName("R")->AsFloat;
                                                   F4=DataModule2->psi_par_data_temp_1->FieldByName("F")->AsFloat;

                                               }  //14


                                             DataModule2->psi_par_data_temp_1->Next();
                                          } //10

                                         double g=fabs((R1+R2)/2-(R3+R4)/2);
                                        double ddr=(fabs(R2+R1+R3+R4)/4)*(dr4/100);
                                        double  g1=fabs((F1+F2)/2-(F3+F4)/2);
                                          if (g<=ddr & g1<df4){  //15
                                               par_id_temp[par_id_temp_count]=DataModule2->psi_par_data_2->FieldByName("ID")->AsFloat;
                                               par_id_temp_count++;

                                          } //15

                                     }  //9


                                        DataModule2->psi_par_data_2->Next();
                                }  //6
                            if (active==2){  //16
                                         if (par_id_temp_count>1){   //17
                                          par_id_temp_count=1;
                                          active=1;
                                         }   //17
                                         }    //16

                             if(par_id_temp_count==1){   //18
                             count_local_par_2++;
                             count_par++;
                                     DataModule2->psi_par_data_4->Append();
                                     DataModule2->psi_par_data_4->FieldByName("ID_1")->AsString=DataModule2->psi_par_data_1->FieldByName("ID")->AsString;
                                     DataModule2->psi_par_data_4->FieldByName("N1")->AsString=DataModule2->psi_par_data_1->FieldByName("N1")->AsString;
                                     DataModule2->psi_par_data_4->FieldByName("N2")->AsString=DataModule2->psi_par_data_1->FieldByName("N2")->AsString;
                                     DataModule2->psi_par_data_4->FieldByName("Par_ID")->AsString=Par_ID;
                                     DataModule2->psi_par_data_2->First();
                                       for (int j=0;j<DataModule2->psi_par_data_2->RecordCount;j++){   //19
                                            if (par_id_temp[0]==DataModule2->psi_par_data_2->FieldByName("ID")->AsString){ //20
                                              DataModule2->psi_par_data_4->FieldByName("ID_2")->AsString=DataModule2->psi_par_data_2->FieldByName("ID")->AsString;
                                                 DataModule2->psi_par_data_4->FieldByName("N3")->AsString=DataModule2->psi_par_data_2->FieldByName("N1")->AsString;
                                                 DataModule2->psi_par_data_4->FieldByName("N4")->AsString=DataModule2->psi_par_data_2->FieldByName("N2")->AsString;
                                             break;
                                            }                 //20
                                        DataModule2->psi_par_data_2->Next();
                                       }              //19

                                    DataModule2->psi_par_data_4->Post();

                                         par_id[count_par_id]=DataModule2->psi_par_data_2->FieldByName("ID")->AsFloat;
                                        count_par_id++;
                                        par_id[count_par_id]=DataModule2->psi_par_data_1->FieldByName("ID")->AsFloat;
                                      count_par_id++;
                  viewPar2->Items->Add(DataModule2->psi_par_data_1->FieldByName("N1")->AsString+"("+DataModule2->psi_par_data_1->FieldByName("N2")->AsString+")-->"+DataModule2->psi_par_data_2->FieldByName("N1")->AsString+"("+DataModule2->psi_par_data_2->FieldByName("N2")->AsString+")");
               }  //18

              if (par_id_temp_count>1){  //21
                count_par_4++;
              }   //21
                             }  //5

                    DataModule2->psi_par_data_1->Next();
               } //2
     if (count_par_4>0 & count_local_par_2==0){
       active=2;
     }
    else if (count_par_4>0 & count_local_par_2>0){
      active=1;
    }
    else if (count_par_4==0 & count_local_par_2>0){
      active=1;
    }
    else {
     active=0;
    }

   } //1
   delete[] par_id;
   Label19->Caption=viewPar2->Count;
   Label19->Repaint();

}
//---------------------------------------------------------------------------

void __fastcall TPar_Form::viewNumberChange(TObject *Sender, int Index,
      TCheckBoxState NewState)
{
int k=0;
for(int i=0;i<viewMSK->Count;i++){
                  if (viewNumber->ItemState[i]!=0){
                                k++;
                      }


   }
  Label16->Caption=FloatToStr(k);
  Label16->Repaint();
}
//---------------------------------------------------------------------------


void __fastcall TPar_Form::AdvGlassButton3Click(TObject *Sender)
{
DataModule2->psi_par_data_print->Active=false;
DataModule2->psi_par_data_print->SQL->Clear();
DataModule2->psi_par_data_print->SQL->Add("Select * from psi_par_data where Par_ID='"+par_id->Text+"' Order by N1");
DataModule2->psi_par_data_print->Active=true;

DataModule2->psi_par_data_2_print->Active=false;
DataModule2->psi_par_data_2_print->SQL->Clear();
DataModule2->psi_par_data_2_print->SQL->Add("Select * from psi_par_data_2 where Par_ID='"+par_id->Text+"' Order by N1");
DataModule2->psi_par_data_2_print->Active=true;
DataModule2->SqlSpec->Active=true;
DataModule2->SqlSpec->First();
for (int i=0; i<DataModule2->SqlSpec->RecordCount;i++){
  if(DataModule2->SqlSpec->FieldByName("Name")->AsString==edtSpc->Text){
  break;
  }
 DataModule2->SqlSpec->Next();
}
  DataModule2->Print_Files->Active=true;
           DataModule2->Print_Files->First();
           for (int i=0; i<DataModule2->Print_Files->RecordCount; i++){
               if (DataModule2->Print_Files->FieldByName("Name")->AsString=="PAR_VER_1_0_0") {
                  break;
               }
            DataModule2->Print_Files->Next();
           }

          TStream *FStream;
          FStream=DataModule2->Print_Files->CreateBlobStream(DataModule2->Print_Files->FieldByName("File"),bmRead);
          frxReport1->LoadFromStream(FStream);
          DataModule2->Print_Files->Active=false;
           frxReport1->PrepareReport(true);
          frxReport1->ShowPreparedReport();

}
//---------------------------------------------------------------------------

