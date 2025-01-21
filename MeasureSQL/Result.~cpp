//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Result.h"
#include "Data.h"
#include "NumberM.h"
#include "data1.h"
#include <ComObj.hpp>
#include  <utilcls.h>
#include "AddMskReal.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "VrButtons"
#pragma link "VrControls"
#pragma link "RzGrids"
#pragma link "RzPanel"
#pragma link "TeeChartGrid"
#pragma link "RzEdit"
#pragma link "frxClass"
#pragma link "frxDBSet"
#pragma link "RzButton"
#pragma link "fs_igraphicsrtti"
#pragma link "RzRadChk"
#pragma link "frxBarcode"
#pragma link "AdvGlassButton"
#pragma link "frxExportPDF"
#pragma link "clFtp"
#pragma link "clTcpClient"
#pragma link "frxExportImage"
#pragma link "frxExportRTF"
#pragma link "frxExportXML"
#pragma link "frxExportXLS"
#pragma link "clMailMessage"
#pragma link "clMC"
#pragma link "clSmtp"
#pragma resource "*.dfm"
TResultForm *ResultForm;
Variant  vVarApp,vVarBooks,vVarBook,vVarSheets,
                 vVarSheet,vVarCells,vVarCell;
Variant  vVarApp1,vVarDocs1,vVarDoc1;
bool fStart1;
bool fStart;
//---------------------------------------------------------------------------
__fastcall TResultForm::TResultForm(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TResultForm::btnCloseClick(TObject *Sender)
{
ResultForm->Hide();
}
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------

void __fastcall TResultForm::ResultGridDrawCell(TObject *Sender,
      int ACol, int ARow, TRect &Rect, TGridDrawState State)
{
if (ResultForm->ResultGrid->Cells[ACol][ARow]=="Номер"){
ResultForm->ResultGrid->Canvas->Brush->Color=clRed;
  ResultForm->ResultGrid->Canvas->Font->Color=clWhite;
  ResultForm->ResultGrid->Canvas->FillRect(ResultForm->ResultGrid->CellRect(ACol,ARow));
  ResultForm->ResultGrid->Canvas->TextOut(ResultForm->ResultGrid->CellRect(ACol,ARow).Left+1,ResultForm->ResultGrid->CellRect(ACol,ARow).Top+1,"Номер");
  }
if (ResultForm->ResultGrid->Cells[ACol][ARow]=="Позиция"){
ResultForm->ResultGrid->Canvas->Brush->Color=clRed;
  ResultForm->ResultGrid->Canvas->Font->Color=clWhite;
  ResultForm->ResultGrid->Canvas->FillRect(ResultForm->ResultGrid->CellRect(ACol,ARow));
  ResultForm->ResultGrid->Canvas->TextOut(ResultForm->ResultGrid->CellRect(ACol,ARow).Left+1,ResultForm->ResultGrid->CellRect(ACol,ARow).Top+1,"Позиция");
  }
if (ResultForm->ResultGrid->Cells[ACol][ARow]=="Брак"){
  ResultForm->ResultGrid->Canvas->Brush->Color=clRed;
  ResultForm->ResultGrid->Canvas->Font->Color=clWhite;
  ResultForm->ResultGrid->Canvas->FillRect(ResultForm->ResultGrid->CellRect(ACol,ARow));
  ResultForm->ResultGrid->Canvas->TextOut(ResultForm->ResultGrid->CellRect(ACol,ARow).Left+1,ResultForm->ResultGrid->CellRect(ACol,ARow).Top+1,"Брак");
  for (int i=0;i<ResultForm->ResultGrid->ColCount-1;i++){
            ResultForm->ResultGrid->Canvas->Brush->Color=clRed;
             ResultForm->ResultGrid->Canvas->Font->Color=clWhite;
             ResultForm->ResultGrid->Canvas->FillRect(ResultForm->ResultGrid->CellRect(ACol-(i+1),ARow));
             ResultForm->ResultGrid->Canvas->TextOut(ResultForm->ResultGrid->CellRect(ACol-(i+1),ARow).Left+1,ResultForm->ResultGrid->CellRect(ACol-(i+1),ARow).Top+1,ResultForm->ResultGrid->Cells[ACol-(i+1)][ARow]);
  }

  }
 if (ResultForm->ResultGrid->Cells[ACol][ARow]=="Усл.Годен"){
  ResultForm->ResultGrid->Canvas->Brush->Color=clYellow;
  ResultForm->ResultGrid->Canvas->Font->Color=clBlack;
  ResultForm->ResultGrid->Canvas->FillRect(ResultForm->ResultGrid->CellRect(ACol,ARow));
  ResultForm->ResultGrid->Canvas->TextOut(ResultForm->ResultGrid->CellRect(ACol,ARow).Left+1,ResultForm->ResultGrid->CellRect(ACol,ARow).Top+1,"Брак");
  for (int i=0;i<ResultForm->ResultGrid->ColCount-1;i++){
            ResultForm->ResultGrid->Canvas->Brush->Color=clYellow;
             ResultForm->ResultGrid->Canvas->Font->Color=clBlack;
             ResultForm->ResultGrid->Canvas->FillRect(ResultForm->ResultGrid->CellRect(ACol-(i+1),ARow));
             ResultForm->ResultGrid->Canvas->TextOut(ResultForm->ResultGrid->CellRect(ACol-(i+1),ARow).Left+1,ResultForm->ResultGrid->CellRect(ACol-(i+1),ARow).Top+1,ResultForm->ResultGrid->Cells[ACol-(i+1)][ARow]);
  }

  }
   if (ResultForm->ResultGrid->Cells[ACol][ARow]=="Аномал."){
  ResultForm->ResultGrid->Canvas->Brush->Color=clBlue;
  ResultForm->ResultGrid->Canvas->Font->Color=clWhite;
  ResultForm->ResultGrid->Canvas->FillRect(ResultForm->ResultGrid->CellRect(ACol,ARow));
  ResultForm->ResultGrid->Canvas->TextOut(ResultForm->ResultGrid->CellRect(ACol,ARow).Left+1,ResultForm->ResultGrid->CellRect(ACol,ARow).Top+1,"Брак");
  for (int i=0;i<ResultForm->ResultGrid->ColCount-1;i++){
            ResultForm->ResultGrid->Canvas->Brush->Color=clBlue;
             ResultForm->ResultGrid->Canvas->Font->Color=clWhite;
             ResultForm->ResultGrid->Canvas->FillRect(ResultForm->ResultGrid->CellRect(ACol-(i+1),ARow));
             ResultForm->ResultGrid->Canvas->TextOut(ResultForm->ResultGrid->CellRect(ACol-(i+1),ARow).Left+1,ResultForm->ResultGrid->CellRect(ACol-(i+1),ARow).Top+1,ResultForm->ResultGrid->Cells[ACol-(i+1)][ARow]);
  }

  }

     if (ResultForm->ResultGrid->Cells[ACol][ARow]=="Незамер."){
  ResultForm->ResultGrid->Canvas->Brush->Color=clTeal;
  ResultForm->ResultGrid->Canvas->Font->Color=clWhite;
  ResultForm->ResultGrid->Canvas->FillRect(ResultForm->ResultGrid->CellRect(ACol,ARow));
  ResultForm->ResultGrid->Canvas->TextOut(ResultForm->ResultGrid->CellRect(ACol,ARow).Left+1,ResultForm->ResultGrid->CellRect(ACol,ARow).Top+1,"Брак");
  for (int i=0;i<ResultForm->ResultGrid->ColCount-1;i++){
            ResultForm->ResultGrid->Canvas->Brush->Color=clTeal;
             ResultForm->ResultGrid->Canvas->Font->Color=clWhite;
             ResultForm->ResultGrid->Canvas->FillRect(ResultForm->ResultGrid->CellRect(ACol-i,ARow));
             ResultForm->ResultGrid->Canvas->TextOut(ResultForm->ResultGrid->CellRect(ACol-i,ARow).Left+1,ResultForm->ResultGrid->CellRect(ACol-i,ARow).Top+1,ResultForm->ResultGrid->Cells[ACol-i][ARow]);
  }

  }

}
//---------------------------------------------------------------------------


void __fastcall TResultForm::Print1Click(TObject *Sender)
{
AnsiString printProfile=DataModule1->SqlSpecification->FieldByName("PrintProfile")->AsString;
DataModule1->Print->Active=false;
DataModule1->Print->SQL->Clear();
DataModule1->Print->SQL->Add("Select * from print_data where ID='"+printProfile+"'");
DataModule1->Print->Active=true;
DataModule1->Print->First();
AnsiString PrintFileName=DataModule1->Print->FieldByName("Measure")->AsString;
DataModule1->Print->Active=false;


DataModule2->Print_Files->Active=false;
DataModule2->Print_Files->SQL->Clear();
DataModule2->Print_Files->SQL->Add("Select * from `print_files` where `Name`='"+PrintFileName+"'");
DataModule2->Print_Files->Active=true;
DataModule2->Print_Files->First();
TStream *FStream;
FStream=DataModule2->Print_Files->CreateBlobStream(DataModule2->Print_Files->FieldByName("File"),bmRead);
frxReport1->LoadFromStream(FStream);
DataModule2->Print_Files->Active=false;


DataModule1->SQLPSIDataTemp->Active=false;
AnsiString S,S1,S2;
SYSTEMTIME st;
GetLocalTime(&st);
AnsiString stD,stMn,stY,stH,stM,stS;
stD=st.wDay;
stMn=st.wMonth;
stY=st.wYear;
stH=st.wHour;
stM=st.wMinute;
stS=st.wSecond;
S1=stD+"."+stMn+"."+stY;
if (edtAnomal->Checked){
S="Select * from psidata where Measure_ID='"+Measure_ID->Text+"' and Status2='Good' Order by psidata.N";
}
else {
S="Select * from psidata where Measure_ID='"+Measure_ID->Text+"' Order by psidata.N";
}
DataModule1->SQLPSIDataTemp->SQL->Clear();
DataModule1->SQLPSIDataTemp->SQL->Add(S);
DataModule1->SQLPSIDataTemp->Active=true;
//frxDBDataset1->RangeEndCount=DataModule1->SQLPSIDataTemp->RecordCount;
DataModule1->NumbersTemp->Active=false;
DataModule1->NumbersTemp->SQL->Clear();
S2="Select * from psi where psi.MSK='"+edtMSK->Text+"'";
DataModule1->NumbersTemp->SQL->Add(S2);
DataModule1->NumbersTemp->Active=true;

DataModule1->DropStatTable->SQL->Clear();
DataModule1->DropStatTable->SQL->Add("Drop Table IF EXISTS  `Psi_stat_"+DataModule1->Dostup->FieldByName("ID")->AsString+"`");
DataModule1->DropStatTable->Execute();

DataModule2->Parameters->Active=true;
DataModule2->Parameters->First();
DataModule1->CreateStatTable->SQL->Clear();
DataModule1->CreateStatTable->SQL->Add("CREATE TABLE `Psi_stat_"+DataModule1->Dostup->FieldByName("ID")->AsString+"`");
DataModule1->CreateStatTable->SQL->Add("(`ID` int(11) NOT NULL auto_increment,`Measure_ID` int(11) default NULL,");
                for (int i=0; i<DataModule2->Parameters->RecordCount; i++){
                        if (DataModule1->SqlSpecification->FieldByName(DataModule2->Parameters->FieldByName("Parametr_Spc_Field")->AsString)->AsString=="True"){
                          AnsiString P_Name=DataModule2->Parameters->FieldByName("Parametr_Name")->AsString;
                          DataModule1->CreateStatTable->SQL->Add("`"+P_Name+"_AVG_A` double(15,3) default NULL,");
                          DataModule1->CreateStatTable->SQL->Add("`"+P_Name+"_Max_A` double(15,3) default NULL,");
                          DataModule1->CreateStatTable->SQL->Add("`"+P_Name+"_Min_A` double(15,3) default NULL,");
                           DataModule1->CreateStatTable->SQL->Add("`"+P_Name+"_ST_DEV_A` double(15,3) default NULL,");
                          DataModule1->CreateStatTable->SQL->Add("`"+P_Name+"_CPK` double(15,3) default NULL,");
                           }
                        DataModule2->Parameters->Next();
                     }
DataModule1->CreateStatTable->SQL->Add("   PRIMARY KEY  (`ID`),  UNIQUE KEY `ID` USING BTREE (`ID`)) ENGINE=MEMORY DEFAULT CHARSET=utf8 COLLATE=utf8_unicode_ci;");
DataModule1->CreateStatTable->Execute();

DataModule1->psi_stat_1->Active=false;
DataModule1->psi_stat_1->SQL->Clear();
DataModule1->psi_stat_1->SQL->Add("Select * from `Psi_stat_"+DataModule1->Dostup->FieldByName("ID")->AsString+"`");
DataModule1->psi_stat_1->Active=true;
DataModule1->psi_stat_1->Append();
DataModule1->psi_stat_1->FieldByName("Measure_ID")->AsString=Measure_ID->Text;

        DataModule2->Statistika->Active=false;
        DataModule2->Statistika->SQL->Clear();
        DataModule2->Statistika->SQL->Add("Select * from psi_statistika where Measure_ID='"+Measure_ID->Text+"'");
        DataModule2->Statistika->Active=true;
        DataModule2->Statistika->First();
 for (int i=0; i<DataModule2->Statistika->RecordCount; i++){
            DataModule2->Parameters->First();
          for (int j=0; j<DataModule2->Parameters->RecordCount; j++){
              if (DataModule2->Parameters->FieldByName("ID")->AsString==DataModule2->Statistika->FieldByName("Parametr_ID")->AsString){
               AnsiString PP_name=DataModule2->Parameters->FieldByName("Parametr_Name")->AsString;
               if (DataModule1->SqlSpecification->FieldByName(DataModule2->Parameters->FieldByName("Parametr_Spc_Field")->AsString)->AsString=="True"){
               DataModule1->psi_stat_1->FieldByName(PP_name+"_AVG_A")->AsString=DataModule2->Statistika->FieldByName("AVG_A")->AsString;
               DataModule1->psi_stat_1->FieldByName(PP_name+"_Max_A")->AsString=DataModule2->Statistika->FieldByName("Max_A")->AsString;
               DataModule1->psi_stat_1->FieldByName(PP_name+"_Min_A")->AsString=DataModule2->Statistika->FieldByName("Min_A")->AsString;
               DataModule1->psi_stat_1->FieldByName(PP_name+"_ST_DEV_A")->AsString=DataModule2->Statistika->FieldByName("STDEV_A")->AsString;
               DataModule1->psi_stat_1->FieldByName(PP_name+"_CPK")->AsString=DataModule2->Statistika->FieldByName("CPK")->AsString;
               }
               break;
              }
              DataModule2->Parameters->Next();
          }

       DataModule2->Statistika->Next();
 }
DataModule1->psi_stat_1->Post();
frxReport1->PrepareReport(true);
frxReport1->ShowPreparedReport();

if (DataModule1->Options->FieldByName("Send_data_to_ftp")->AsString=="True"){      //if1
DataModule1->Options->Active=false;
DataModule1->Options->Active=true;
clFtp1->UserName=DataModule1->Options->FieldByName("User")->AsString;
clFtp1->Password=DataModule1->Options->FieldByName("Password")->AsString;
clFtp1->Port=DataModule1->Options->FieldByName("Port")->AsFloat;
clFtp1->Server=DataModule1->Options->FieldByName("Host_IP")->AsString;

clFtp1->TransferType = ttBinary;



AnsiString ftpFileName,FName,FullFileName,ftpDr,exftpFileName;
ftpDr=DataModule1->Options->FieldByName("LocDyr")->AsString;
FName=Measure_ID->Text;
AnsiString sqlex;
sqlex="Insert into ReportExport(`MSK`,`Measure_ID`,`SPC`,`Factory`,`Lot`,`PsiFile`,`ExportPsiFile`) Values('";
sqlex=sqlex+edtMSK->Text+"','"+Measure_ID->Text+"','"+DataModule1->SQLPSIDataTemp->FieldByName("Spc")->AsString+"','";
sqlex=sqlex+DataModule1->SQLPSIDataTemp->FieldByName("Factory")->AsString+"','"+DataModule1->SQLPSIDataTemp->FieldByName("Lot_Date")->AsString+"','";
exftpFileName=DataModule1->SQLPSIDataTemp->FieldByName("Lot_Date")->AsString+"_"+DataModule1->SqlSpecification->FieldByName("Text")->AsString+"_"+DataModule1->SQLPSIDataTemp->FieldByName("Date")->AsString;
          if (DataModule1->SQLPSIDataTemp->FieldByName("type")->AsBoolean==true){
           exftpFileName=exftpFileName+"_Incoming";
          }
          exftpFileName=ftpFileName+".pdf";
sqlex=sqlex+FName+".pdf"+"','"+exftpFileName+"')";
DataModule1->InsertExportReport->SQL->Clear();
DataModule1->InsertExportReport->SQL->Add(sqlex);
DataModule1->InsertExportReport->Execute();

clSmtp1->Open();
 clSmtp1->MailToList->Clear();
 clSmtp1->MailToList->Add("ExportAll@npk2.morion");
  AnsiString HTMLtext1;
              HTMLtext1="<html><body><h2>Измерена МСК&nbsp; &nbsp; <font color=\"#FF0000\">";
              HTMLtext1=HTMLtext1+edtMSK->Text+"</font></h2><p>Спецификация&nbsp; &nbsp; <font color=\"#FF0000\">";
              HTMLtext1=HTMLtext1+DataModule1->SQLPSIDataTemp->FieldByName("Spc")->AsString+"</font></p>";
              HTMLtext1=HTMLtext1+"<p>Идентификатор замера&nbsp; &nbsp;<font color=\"#FF0000\">"+Measure_ID->Text+"</font></p>";
              HTMLtext1=HTMLtext1+"<p>Файл&nbsp; &nbsp; &nbsp; <font color=\"#FF0000\">"+DataModule1->SQLPSIDataTemp->FieldByName("File")->AsString+"</font></p>";
              HTMLtext1=HTMLtext1+"<p>Дата измерения&nbsp; &nbsp; &nbsp; &nbsp; <font color=\"#FF0000\">" +DataModule1->SQLPSIDataTemp->FieldByName("Date")->AsString+"</font></p>";
              HTMLtext1=HTMLtext1+"<p>Изготовитель&nbsp; &nbsp; <font color=\"#FF0000\">" +DataModule1->SQLPSIDataTemp->FieldByName("Factory")->AsString+"</font></p>";
              HTMLtext1=HTMLtext1+"<p>Лот&nbsp; &nbsp; <font color=\"#FF0000\">" +DataModule1->SQLPSIDataTemp->FieldByName("Lot_Date")->AsString+"</font></p>";
              HTMLtext1=HTMLtext1+"<p>Ссылка на протокол измерений&nbsp;</p><p><font color=\"#0000FF\">" ;
              HTMLtext1=HTMLtext1+"http://172.16.20.18/FTPROOT/ReportsPDF/"+FName+".pdf"+"</font></p>";
              HTMLtext1=HTMLtext1+"<p>&nbsp;Ссылка на протокол экспорта</p><p><font color=\"#0000FF\">" ;
               HTMLtext1=HTMLtext1+"http://172.16.20.18/FTPROOT/Export/"+exftpFileName+"</font></p><p>&nbsp;</p>";
               HTMLtext1=HTMLtext1+"<hr><table align=\"center\" border=\"1\" cellpadding=\"1\" cellspacing=\"1\" style=\"width: 500px\"><caption>Статистика</caption><tbody><tr><td>Параметры</td><td>Всего</td><td>Годных</td><td>Брак</td><td>Макс</td><td>Мин</td><td>Среднее</td><td>StDev</td></tr>";
               DataModule2->Statistika->First();
               for (int i=0; i<DataModule2->Statistika->RecordCount;i++){
                 HTMLtext1=HTMLtext1+"<tr>" ;
                     DataModule2->Parameters->First();
                      for (int j=0; j<DataModule2->Parameters->RecordCount; j++){
                             if (DataModule2->Parameters->FieldByName("ID")->AsString==DataModule2->Statistika->FieldByName("Parametr_ID")->AsString){
                               HTMLtext1=HTMLtext1+"<td>"+DataModule2->Parameters->FieldByName("Parametr_Name")->AsString+"</td>";
                               HTMLtext1=HTMLtext1+"<td>"+DataModule2->Statistika->FieldByName("Alln")->AsString+"</td>";
                               HTMLtext1=HTMLtext1+"<td>"+DataModule2->Statistika->FieldByName("Goodn")->AsString+"</td>";
                               HTMLtext1=HTMLtext1+"<td>"+DataModule2->Statistika->FieldByName("Badn")->AsString+"</td>";
                               HTMLtext1=HTMLtext1+"<td>"+DataModule2->Statistika->FieldByName("Max")->AsString+"</td>";
                               HTMLtext1=HTMLtext1+"<td>"+DataModule2->Statistika->FieldByName("Min")->AsString+"</td>";
                               HTMLtext1=HTMLtext1+"<td>"+DataModule2->Statistika->FieldByName("AVG")->AsString+"</td>";
                               HTMLtext1=HTMLtext1+"<td>"+DataModule2->Statistika->FieldByName("STDEV")->AsString+"</td>";

                              break;
                             }

                       DataModule2->Parameters->Next();
                      }


                HTMLtext1=HTMLtext1+"</tr>" ;
                DataModule2->Statistika->Next();
               }

               HTMLtext1=HTMLtext1+"</tbody></table>";
               DataModule2->psi->Active=false;
  DataModule2->psi->SQL->Clear();
  DataModule2->psi->SQL->Add("Select Measure_ID,atall,Good,Bad,Operator,TransatN,Nezamer,Anomal from psi where Measure_ID='"+Measure_ID->Text+"'" );
  DataModule2->psi->Active=true;
  HTMLtext1=HTMLtext1+"<table align=\"center\" border=\"1\" cellpadding=\"1\" cellspacing=\"1\" style=\"width: 500px\"><caption>Итого</caption><tbody> " ;
  HTMLtext1=HTMLtext1+"<tr> <td>Всего</td>  <td>Годных</td> <td>Брак</td> <td>Выход годных</td> <td>Незамер</td> <td>Аномальных</td></tr>";
  HTMLtext1=HTMLtext1+"<tr> <td>"+DataModule2->psi->FieldByName("atall")->AsString+"</td>";
  HTMLtext1=HTMLtext1+"<td>"+DataModule2->psi->FieldByName("Good")->AsString+"</td>";
  HTMLtext1=HTMLtext1+"<td>"+DataModule2->psi->FieldByName("Bad")->AsString+"</td>";
  double all=StrToFloat(DataModule2->psi->FieldByName("atall")->AsString);
  double good=StrToFloat(DataModule2->psi->FieldByName("Good")->AsString);
  double out=(good/all)*100;
  AnsiString outstr=FloatToStr(out);
  HTMLtext1=HTMLtext1+"<td>"+outstr+"</td>";

  HTMLtext1=HTMLtext1+"<td>"+DataModule2->psi->FieldByName("Nezamer")->AsString+"</td>";
  HTMLtext1=HTMLtext1+"<td>"+DataModule2->psi->FieldByName("Anomal")->AsString+"</td>";

  HTMLtext1=HTMLtext1+"</tbody></table>";
  HTMLtext1=HTMLtext1+"<p>Установка&nbsp; &nbsp;<font color=\"#FF0000\">"+DataModule2->psi->FieldByName("TransatN")->AsString+"</font></p>";
  HTMLtext1=HTMLtext1+"<p>Выполнил&nbsp; &nbsp;<font color=\"#FF0000\">"+DataModule2->psi->FieldByName("Operator")->AsString+"</font></p>";
  HTMLtext1=HTMLtext1+"</body></html>";
 clMailMessage1->BuildMessage("ПСИ",HTMLtext1);
clMailMessage1->Subject="ПСИ измерения";
clSmtp1->Send();
clSmtp1->Close();

DataModule1->Specification_Temp->Active=false;
DataModule1->Specification_Temp->SQL->Clear();
DataModule1->Specification_Temp->SQL->Add("Select Name,NameR,ID from specification where Name='"+DataModule1->SQLPSIDataTemp->FieldByName("Spc")->AsString+"'");
DataModule1->Specification_Temp->Active=true;

DataModule1->Oversight->Active=false;
DataModule1->Oversight->SQL->Clear();
DataModule1->Oversight->SQL->Add("Select SQL_NO_CACHE * from Oversight");
DataModule1->Oversight->Active=true;
DataModule1->Oversight->First();
for (int i=0;i<DataModule1->Oversight->RecordCount;i++){
  boolean send=false;
        if (DataModule1->Oversight->FieldByName("MSK")->AsString=="True"){
            if (DataModule1->SQLPSIDataTemp->FieldByName("Msk")->AsString==DataModule1->Oversight->FieldByName("MSK_Value")->AsString){
              send=true;
            }

        }
        else if(DataModule1->Oversight->FieldByName("Spc")->AsString=="True"){
           if (DataModule1->Specification_Temp->FieldByName("ID")->AsString==DataModule1->Oversight->FieldByName("Spc_ID")->AsString){
              send=true;
            }
           }
         else if(DataModule1->Oversight->FieldByName("Type")->AsString=="True" & DataModule1->Oversight->FieldByName("Factory")->AsString=="True"){
            if (DataModule1->Specification_Temp->FieldByName("NameR")->AsString==DataModule1->Oversight->FieldByName("Type_ID")->AsString & DataModule1->SQLPSIDataTemp->FieldByName("Factory")->AsString==DataModule1->Oversight->FieldByName("Factory_ID")->AsString){
              send=true;

             }
            }
           else if(DataModule1->Oversight->FieldByName("Type")->AsString=="True" & DataModule1->Oversight->FieldByName("Factory")->AsString=="False"){
            if (DataModule1->Specification_Temp->FieldByName("NameR")->AsString==DataModule1->Oversight->FieldByName("Type_ID")->AsString){
              send=true;

             }
            }
          if (send){
           DataModule1->Email->Active=false;
           DataModule1->Email->SQL->Clear();
           DataModule1->Email->SQL->Add("Select * from Email where ID='"+DataModule1->Oversight->FieldByName("Email_ID")->AsString+"'");
           DataModule1->Email->Active=true;
           DataModule1->Email->First();
           clSmtp1->Open();
           clSmtp1->MailToList->Clear();
              for (int j=0;j<DataModule1->Email->RecordCount;j++){
                clSmtp1->MailToList->Add(DataModule1->Email->FieldByName("Mail")->AsString);
                DataModule1->Email->Next();
              }
              clMailMessage1->BuildMessage("ПСИ",HTMLtext1);
              clMailMessage1->Subject="ПСИ измерения(Наблюдение)  МСК  "+edtMSK->Text;
            clSmtp1->Send();
            clSmtp1->Close();
          }

    DataModule1->Oversight->Next();
}

if (DataModule1->Options->FieldByName("Filtr")->AsString=="PDF"){
                    ftpFileName=FName+".pdf";
                      if(DataModule1->Options->FieldByName("Export_Type")->AsFloat==1){
                                FullFileName=DataModule1->Options->FieldByName("ReportDir")->AsString+"\\"+FName+".pdf";
                                 frxPDFExport1->FileName=DataModule1->Options->FieldByName("ReportDir")->AsString+"\\"+FName+".pdf";
                                 frxReport1->Export(frxPDFExport1);
                                 }
                                 else if (DataModule1->Options->FieldByName("Export_Type")->AsFloat==2){
                                 AnsiString FF=DataModule1->Options->FieldByName("ReportDir")->AsString+"\\RTF\\"+FName+".rtf";
                                   frxRTFExport1->FileName=FF;
                                   frxReport1->Export(frxRTFExport1);
                                   if(!fStart1)
                                           {
                                                try
                                                {
                                                 vVarApp1=CreateOleObject("Word.Application");
                                                 vVarApp1.OlePropertySet("Visible",false);
                                                fStart1=true;
                                                         }
                                                        catch(...)
                                                                   {
                                                         MessageBox(0, "Ошибка при открытии сервера word",
                                                                         "Ошибка", MB_OK);
                                                                  return;
                                                                 }
                                                         }

                                          if (fStart1){
                                              try{
                                                 vVarDocs1=vVarApp1.OlePropertyGet("Documents");
                                                 vVarDocs1.OleProcedure("Open",FF.c_str());
                                                 vVarApp1.OlePropertySet("DisplayAlerts",false);
                                                 vVarDoc1=vVarDocs1.OleFunction("Item",1);
                                                 AnsiString FF1=DataModule1->Options->FieldByName("ReportDir")->AsString+"\\"+FName+".pdf";
                                                 vVarDoc1.OleProcedure("SaveAs",FF1.c_str(),17,false,"",true,"",false,false,false,false,false);
                                                vVarApp1.OleProcedure("Quit");
                                                 FullFileName=FF1;
                                                 fStart1= false;
                                              }
                                              catch(...){
                                                MessageBox(0, "Ошибка открытия файла","Ошибка",MB_OK);
                                                fStart1= false;
                                                vVarApp1.OleProcedure("Quit");
                                              }


                                          }



                                 }
                      }

    else if (DataModule1->Options->FieldByName("Filtr")->AsString=="XLS"){
                      ftpFileName=FName+".xls";
                      FullFileName=DataModule1->Options->FieldByName("ReportDir")->AsString+"\\XLS\\"+FName+".xls";
                      frxXLSExport1->FileName=DataModule1->Options->FieldByName("ReportDir")->AsString+"\\XLS\\"+FName+".xls";
                       frxReport1->Export(frxXLSExport1);
                       ftpDr=ftpDr+"//XLS";
                      }
                      else if (DataModule1->Options->FieldByName("Filtr")->AsString=="XML"){
                      ftpFileName=FName+".xls";
                       FullFileName=DataModule1->Options->FieldByName("ReportDir")->AsString+"\\XLS\\"+FName+".xls";
                      frxXMLExport1->FileName=DataModule1->Options->FieldByName("ReportDir")->AsString+"\\XLS\\"+FName+".xls";
                       frxReport1->Export(frxXMLExport1);
                       ftpDr=ftpDr+"//XLS";

                      }
                      else if (DataModule1->Options->FieldByName("Filtr")->AsString=="RTF"){
                      ftpFileName=FName+".rtf";
                      FullFileName=DataModule1->Options->FieldByName("ReportDir")->AsString+"\\RTF\\"+FName+".rtf";
                      frxRTFExport1->FileName=DataModule1->Options->FieldByName("ReportDir")->AsString+"\\RTF\\"+FName+".rtf";
                       frxReport1->Export(frxRTFExport1);
                       ftpDr=ftpDr+"//RTF";

                      }
                      else if (DataModule1->Options->FieldByName("Filtr")->AsString=="JPG"){
                      ftpFileName=FName+".jpg";
                      FullFileName=DataModule1->Options->FieldByName("ReportDir")->AsString+"\\JPG\\"+FName+".jpg";
                      frxJPEGExport1->FileName=DataModule1->Options->FieldByName("ReportDir")->AsString+"\\JPG\\"+FName+".jpg";
                      frxJPEGExport1->SeparateFiles=false;
                       frxReport1->Export(frxJPEGExport1);
                       ftpDr=ftpDr+"//JPG";

                      }
 AnsiString FullFileNamePSI= FullFileName;

using namespace std;
  FILE *fp;
  fp = fopen(FullFileName.c_str(), "r+");
  bool ft=false;
while (!ft){
  clFtp1->Open();
  clFtp1->ChangeCurrentDir(ftpDr);
 if(!clFtp1->Active) return;
 if (fp!=NULL) {
    fclose(fp);
      int position = 0;
    TStream *stream = new TFileStream(FullFileName, fmOpenRead |fmShareDenyWrite);
    try
    {
     clFtp1->PutFile(ftpFileName, stream, position, -1);
     ft=true;
    }
    __finally
    {
      delete stream;
      clFtp1->Close();
    }
   }
 }


if (DataModule1->Print->FieldByName("DefaultPrint")->AsString=="Measure,Print,Export" & DataModule1->SQLPSIDataTemp->FieldByName("Factory")->AsString=="Kosho"){
        DataModule1->Print->Active=false;
        DataModule1->Print->SQL->Clear();
        DataModule1->Print->SQL->Add("Select * from print_data where ID='"+printProfile+"'");
        DataModule1->Print->Active=true;
        DataModule1->Print->First();
        AnsiString PrintFileName=DataModule1->Print->FieldByName("ReportOTK")->AsString;
        DataModule1->Print->Active=false;


        DataModule2->Print_Files->Active=false;
        DataModule2->Print_Files->SQL->Clear();
        DataModule2->Print_Files->SQL->Add("Select * from `print_files` where `Name`='"+PrintFileName+"'");
        DataModule2->Print_Files->Active=true;
        DataModule2->Print_Files->First();

 if (DataModule2->Print_Files->RecordCount>0){
          TStream *FStream;
          FStream=DataModule2->Print_Files->CreateBlobStream(DataModule2->Print_Files->FieldByName("File"),bmRead);
          frxReport1->LoadFromStream(FStream);
          DataModule2->Print_Files->Active=false;


        frxReport1->PrepareReport(true);
   if(DataModule1->Options->FieldByName("Export_Type")->AsFloat==1){
                                FullFileName=DataModule1->Options->FieldByName("ExportDir")->AsString+"\\"+FName+".pdf";
                                 frxPDFExport1->FileName=DataModule1->Options->FieldByName("ExportDir")->AsString+"\\"+FName+".pdf";
                                 frxReport1->Export(frxPDFExport1);
                                 }
                                 else if (DataModule1->Options->FieldByName("Export_Type")->AsFloat==2){
                                 AnsiString FF=DataModule1->Options->FieldByName("ExportDir")->AsString+"\\RTF\\"+FName+".rtf";
                                   frxRTFExport1->FileName=FF;
                                   frxReport1->Export(frxRTFExport1);
                                   if(!fStart1)
                                           {
                                                try
                                                {
                                                 vVarApp1=CreateOleObject("Word.Application");
                                                 vVarApp1.OlePropertySet("Visible",false);
                                                fStart1=true;
                                                         }
                                                        catch(...)
                                                                   {
                                                         MessageBox(0, "Ошибка при открытии сервера word",
                                                                         "Ошибка", MB_OK);
                                                                  return;
                                                                 }
                                                         }

                                          if (fStart1){
                                              try{
                                                 vVarDocs1=vVarApp1.OlePropertyGet("Documents");
                                                 vVarDocs1.OleProcedure("Open",FF.c_str());
                                                 vVarApp1.OlePropertySet("DisplayAlerts",false);
                                                 vVarDoc1=vVarDocs1.OleFunction("Item",1);
                                                 AnsiString FF1=DataModule1->Options->FieldByName("ExportDir")->AsString+"\\"+FName+".pdf";
                                                 vVarDoc1.OleProcedure("SaveAs",FF1.c_str(),17,false,"",true,"",false,false,false,false,false);
                                                vVarApp1.OleProcedure("Quit");
                                                fStart1= false;

                                              }
                                              catch(...){
                                                MessageBox(0, "Ошибка открытия файла","Ошибка",MB_OK);
                                                fStart1= false;
                                                vVarApp1.OleProcedure("Quit");
                                              }


                                          }

                                 }

  if (DataModule1->SqlSpecification->FieldByName("NameR")->AsString=="РК548" || DataModule1->SqlSpecification->FieldByName("NameR")->AsString=="РК549"){
         ftpFileName=DataModule1->SQLPSIDataTemp->FieldByName("Lot_Date")->AsString+"_"+DataModule1->SqlSpecification->FieldByName("Text")->AsString+"_"+DataModule1->SQLPSIDataTemp->FieldByName("Date")->AsString;
          if (DataModule1->SQLPSIDataTemp->FieldByName("type")->AsBoolean==true){
           ftpFileName=ftpFileName+"_Incoming";
          }
          ftpFileName=ftpFileName+".pdf";
     }
     else {
          ftpFileName=edtMSK->Text+".pdf";
          }
   bool ft=false;
 while (!ft){
 clFtp1->Open();   
 clFtp1->ChangeCurrentDir(DataModule1->Options->FieldByName("FTPdyr")->AsString);
  fp = fopen(FullFileName.c_str(), "r+");
 if(!clFtp1->Active) return;
 if (fp!=NULL) {

    fclose(fp);
      int position = 0;
    TStream *stream = new TFileStream(FullFileName, fmOpenRead |fmShareDenyWrite);
    __try
    {
     clFtp1->PutFile(ftpFileName, stream, position, -1);
     ft=true;
    }
    __finally
    {
      delete stream;
      clFtp1->Close();
    }
   }

 }

 }
 }     //if1
 }
 DataModule1->NumbersTemp->Active=false;
/*DataModule1->Print->Active=false;
DataModule1->Print->SQL->Clear();
DataModule1->Print->SQL->Add("Select * from print_data");
DataModule1->Print->Active=true;
*/
DataModule2->Parameters->Active=false;
DataModule1->DropStatTable->SQL->Clear();
DataModule1->DropStatTable->SQL->Add("Drop table IF EXISTS `Psi_stat_"+DataModule1->Dostup->FieldByName("ID")->AsString+"`");
DataModule1->DropStatTable->Execute();
}
//---------------------------------------------------------------------------

void __fastcall TResultForm::N1Click(TObject *Sender)
{

DataModule1->Print->Active=false;
DataModule1->Print->SQL->Clear();
DataModule1->Print->SQL->Add("Select * from print_data where ID='"+DataModule1->SqlSpecification->FieldByName("PrintProfile")->AsString+"'");
DataModule1->Print->Active=true;
 AnsiString PrintFileName=DataModule1->Print->FieldByName("Print")->AsString;
 DataModule1->Print->Active=false;


        DataModule2->Print_Files->Active=false;
        DataModule2->Print_Files->SQL->Clear();
        DataModule2->Print_Files->SQL->Add("Select * from `print_files` where `Name`='"+PrintFileName+"'");
        DataModule2->Print_Files->Active=true;
        DataModule2->Print_Files->First();

          TStream *FStream;
          FStream=DataModule2->Print_Files->CreateBlobStream(DataModule2->Print_Files->FieldByName("File"),bmRead);
          frxReport1->LoadFromStream(FStream);
          DataModule2->Print_Files->Active=false;
DataModule1->SQLPSIDataTemp->Active=false;
DataModule1->SQLPSIDataTemp->Active=false;
AnsiString S,S1,S2;
SYSTEMTIME st;
GetLocalTime(&st);
AnsiString stD,stMn,stY,stH,stM,stS;
stD=st.wDay;
stMn=st.wMonth;
stY=st.wYear;
stH=st.wHour;
stM=st.wMinute;
stS=st.wSecond;
S1=stD+"."+stMn+"."+stY;
if (edtAnomal->Checked){
S="Select * from psidata where Measure_ID='"+Measure_ID->Text+"' and Status2='Good' Order by psidata.N";
}
else {
S="Select * from psidata where Measure_ID='"+Measure_ID->Text+"' Order by psidata.N";
}
DataModule1->SQLPSIDataTemp->SQL->Clear();
DataModule1->SQLPSIDataTemp->SQL->Add(S);
DataModule1->SQLPSIDataTemp->Active=true;

DataModule1->SQLPSIDataT->SQL->Clear();
DataModule1->SQLPSIDataT->SQL->Add("Select * from psidatatemp where Measure_ID='"+Measure_ID->Text+"' ORDER BY Temp");
DataModule1->SQLPSIDataT->Active=true;

DataModule1->NumbersTemp->Active=false;
DataModule1->NumbersTemp->SQL->Clear();
S2="Select * from psi where Measure_ID='"+Measure_ID->Text+"'";
DataModule1->NumbersTemp->SQL->Add(S2);
DataModule1->NumbersTemp->Active=true;
frxPDFExport1->FileName=DataModule1->Options->FieldByName("ReportDir")->AsString+"\\"+Measure_ID->Text+"_Print_"+".pdf";
frxReport1->PrepareReport(true);
frxReport1->ShowPreparedReport();
if (DataModule1->Options->FieldByName("Send_data_to_ftp")->AsString=="True"){
frxReport1->Export(frxPDFExport1);
clFtp1->UserName=DataModule1->Options->FieldByName("User")->AsString;
clFtp1->Password=DataModule1->Options->FieldByName("Password")->AsString;
clFtp1->Port=DataModule1->Options->FieldByName("Port")->AsFloat;
clFtp1->Server=DataModule1->Options->FieldByName("Host_IP")->AsString;

clFtp1->TransferType = ttBinary;
clFtp1->Open();
clFtp1->ChangeCurrentDir(DataModule1->Options->FieldByName("LocDyr")->AsString+"/Print");
/*DataModule1->NumbersTemp->Active=false;
DataModule1->Print->Active=false;
DataModule1->Print->SQL->Clear();
DataModule1->Print->SQL->Add("Select * from print_data");
DataModule1->Print->Active=true;
*/
using namespace std;
  FILE *fp;
AnsiString fileName =DataModule1->Options->FieldByName("ReportDir")->AsString+"\\"+Measure_ID->Text+"_Print_"+".pdf";

  fp = fopen(fileName.c_str(), "r+");
 if(!clFtp1->Active) return;
 if (fp!=NULL) {
    fclose(fp);
      int position = 0;
    TStream *stream = new TFileStream(fileName, fmOpenRead |fmShareDenyWrite);
    __try
    {
      /*if(clFtp1->FileExists(fileName))
      {
          position = clFtp1->GetFileSize(fileName);
          if(stream->Size <= position)
            position = 0;
      }
      */
      clFtp1->PutFile(Measure_ID->Text+"_Print_"+".pdf", stream, position, -1);

    }
    __finally
    {
      delete stream;
    }
   }
 clFtp1->Close();
 }


}
//---------------------------------------------------------------------------









void __fastcall TResultForm::Excel1Click(TObject *Sender)
{
AnsiString S;
if (edtAnomal->Checked){
S="Select * from psidata where Measure_ID='"+Measure_ID->Text+"' and Status2='Good' Order by psidata.N";
}
else {
S="Select * from psidata where Measure_ID='"+Measure_ID->Text+"' Order by psidata.N";
}
DataModule1->SQLPSIDataTemp->SQL->Clear();
DataModule1->SQLPSIDataTemp->SQL->Add(S);
DataModule1->SQLPSIDataTemp->Active=true;
 int k=0;
 int N[27];
 DataModule1->SqlSpecification->First();
 for (int i=0;i<DataModule1->SqlSpecification->RecordCount;i++){
            if(DataModule1->SqlSpecification->FieldByName("Name")->AsString==edtSpc->Text){
                 break;
               }
        DataModule1->SqlSpecification->Next();
       }
if(!fStart)
                           {
                          try
                             {
                               vVarApp=CreateOleObject("Excel.Application");
                               fStart=true;
                              }
                           catch(...)
                                    {
                                     MessageBox(0, "Ошибка при открытии сервера Excel",
                                   "Ошибка", MB_OK);
                                    return;
                                     }
                                     }
      vVarBooks=vVarApp.OlePropertyGet("Workbooks");
    vVarApp.OlePropertySet("SheetsInNewWorkbook",1);
    vVarBooks.OleProcedure("Add");
   vVarBook=vVarBooks.OlePropertyGet("Item",1);
    vVarSheets=vVarBook.OlePropertyGet("Worksheets") ;
    vVarSheet=vVarSheets.OlePropertyGet("Item",1);
    vVarSheet.OlePropertySet("Name","Data");

    vVarCell=vVarSheet.OlePropertyGet("Cells").
                   OlePropertyGet("Item",1,1);
   vVarCell.OlePropertySet("HorizontalAlignment",-4108);
   vVarCell.OlePropertySet("VerticalAlignment",-4108);
   vVarCell.OlePropertyGet("Font").OlePropertySet("Size",10);
   vVarCell.OlePropertySet("ColumnWidth",15);
   vVarCell.OlePropertyGet("Font").OlePropertySet("Color",clBlue);
   vVarCell.OlePropertyGet("Font").OlePropertySet("Bold",true);
   vVarCell.OlePropertyGet("Font").OlePropertySet("Name","Arial");
   S="МСК "+edtMSK->Text;
   vVarCell.OlePropertySet("Value",S.c_str());
       vVarCell=vVarSheet.OlePropertyGet("Cells").
                   OlePropertyGet("Item",1,2);
   vVarCell.OlePropertySet("HorizontalAlignment",-4108);
     vVarCell.OlePropertySet("VerticalAlignment",-4108);
   vVarCell.OlePropertySet("ColumnWidth",35);
   vVarCell.OlePropertyGet("Font").OlePropertySet("Size",10);
   vVarCell.OlePropertyGet("Font").OlePropertySet("Color",clBlue);
   vVarCell.OlePropertyGet("Font").OlePropertySet("Bold",true);
   vVarCell.OlePropertyGet("Font").OlePropertySet("Name","Arial");
   S="Спецификация "+edtSpc->Text;
   vVarCell.OlePropertySet("Value",S.c_str());
       vVarCell=vVarSheet.OlePropertyGet("Cells").
                   OlePropertyGet("Item",1,3);
   vVarCell.OlePropertySet("HorizontalAlignment",-4108);
   vVarCell.OlePropertySet("VerticalAlignment",-4108);
   vVarCell.OlePropertyGet("Font").OlePropertySet("Size",10);
   vVarCell.OlePropertySet("ColumnWidth",30);
   vVarCell.OlePropertyGet("Font").OlePropertySet("Color",clBlue);
   vVarCell.OlePropertyGet("Font").OlePropertySet("Bold",true);
   vVarCell.OlePropertyGet("Font").OlePropertySet("Name","Arial");
   S="File  "+edtFile->Text;
   vVarCell.OlePropertySet("Value",S.c_str());
   int Y=DataModule1->SQLPSIDataTemp->RecordCount;
//------------------------------------------------------------------------------------------------
if (DataModule1->SqlSpecification->FieldByName("Position")->AsString=="True"){
      N[0]=k+1;
      k++;
     vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",2,N[0]);
      vVarCell.OlePropertyGet("Font").OlePropertySet("Size",11);
      vVarCell.OlePropertyGet("Font").OlePropertySet("Bold",true);
      S="Позиция";
      vVarCell.OlePropertySet("Value",S.c_str());
      if (DataModule1->SqlSpecification->FieldByName("norm")->AsString=="True"){
              vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",Y+4,N[0]);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Size",11);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Color",clBlue);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Bold",true);
              S="Нормы";
              vVarCell.OlePropertySet("Value",S.c_str());
              }

     }
//-----------------------------------------------------------------------------------------------
if (DataModule1->SqlSpecification->FieldByName("Snumber")->AsString=="True"){
      N[1]=k+1;
      k++;
      vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",2,N[1]);
      vVarCell.OlePropertyGet("Font").OlePropertySet("Size",11);
      vVarCell.OlePropertyGet("Font").OlePropertySet("Bold",true);
      S="Номер";
    vVarCell.OlePropertySet("Value",S.c_str());
        if (DataModule1->SqlSpecification->FieldByName("norm")->AsString=="True"){
              vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",Y+5,N[1]);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Size",11);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Color",clBlue);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Bold",true);
              S="Макс";
              vVarCell.OlePropertySet("Value",S.c_str());
              vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",Y+4,N[1]);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Size",11);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Color",clBlue);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Bold",true);
              S="Мин";
              vVarCell.OlePropertySet("Value",S.c_str());
              }


    }
//-----------------------------------------------------------------------------------------------
if (DataModule1->SqlSpecification->FieldByName("Ft")->AsString=="True"){
      N[2]=k+1;
      k++;
      vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",2,N[2]);
      vVarCell.OlePropertyGet("Font").OlePropertySet("Size",11);
      vVarCell.OlePropertyGet("Font").OlePropertySet("Bold",true);
      S="F,ppm";
    vVarCell.OlePropertySet("Value",S.c_str());
        if (DataModule1->SqlSpecification->FieldByName("norm")->AsString=="True"){
              vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",Y+5,N[2]);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Size",11);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Color",clBlue);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Bold",true);
              S=DataModule1->SqlSpecification->FieldByName("Fmax")->AsString;
              vVarCell.OlePropertySet("Value",S.c_str());
              vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",Y+4,N[2]);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Size",11);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Color",clBlue);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Bold",true);
              S=DataModule1->SqlSpecification->FieldByName("Fmin")->AsString;
              vVarCell.OlePropertySet("Value",S.c_str());
              }
    }
//-------------------------------------------------------------------------------------------------
if (DataModule1->SqlSpecification->FieldByName("R")->AsString=="True"){
      N[3]=k+1;
      k++;
      vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",2,N[3]);
      vVarCell.OlePropertyGet("Font").OlePropertySet("Size",11);
      vVarCell.OlePropertyGet("Font").OlePropertySet("Bold",true);
      S="R,Ohm";
    vVarCell.OlePropertySet("Value",S.c_str());
       if (DataModule1->SqlSpecification->FieldByName("norm")->AsString=="True"){
              vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",Y+5,N[3]);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Size",11);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Color",clBlue);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Bold",true);
              S=DataModule1->SqlSpecification->FieldByName("Rmax")->AsString;
              vVarCell.OlePropertySet("Value",S.c_str());
              vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",Y+4,N[3]);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Size",11);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Color",clBlue);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Bold",true);
              S=DataModule1->SqlSpecification->FieldByName("Rmin")->AsString;
              vVarCell.OlePropertySet("Value",S.c_str());
              }
   }
//--------------------------------------------------------------------------------------------------
if (DataModule1->SqlSpecification->FieldByName("C0")->AsString=="True"){
      N[4]=k+1;
      k++;
     vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",2,N[4]);
      vVarCell.OlePropertyGet("Font").OlePropertySet("Size",11);
      vVarCell.OlePropertyGet("Font").OlePropertySet("Bold",true);
      S="C0,pf";
    vVarCell.OlePropertySet("Value",S.c_str());
     if (DataModule1->SqlSpecification->FieldByName("norm")->AsString=="True"){
              vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",Y+5,N[4]);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Size",11);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Color",clBlue);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Bold",true);
              S=DataModule1->SqlSpecification->FieldByName("C0max")->AsString;
              vVarCell.OlePropertySet("Value",S.c_str());
              vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",Y+4,N[4]);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Size",11);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Color",clBlue);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Bold",true);
              S=DataModule1->SqlSpecification->FieldByName("C0min")->AsString;
              vVarCell.OlePropertySet("Value",S.c_str());
              }
    }
//-------------------------------------------------------------------------------------------------
if (DataModule1->SqlSpecification->FieldByName("Cq")->AsString=="True"){
      N[5]=k+1;
      k++;
       vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",2,N[5]);
      vVarCell.OlePropertyGet("Font").OlePropertySet("Size",11);
      vVarCell.OlePropertyGet("Font").OlePropertySet("Bold",true);
      S="Cq,fF";
    vVarCell.OlePropertySet("Value",S.c_str());
     if (DataModule1->SqlSpecification->FieldByName("norm")->AsString=="True"){
              vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",Y+5,N[5]);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Size",11);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Color",clBlue);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Bold",true);
              S=DataModule1->SqlSpecification->FieldByName("Cqmax")->AsString;
              vVarCell.OlePropertySet("Value",S.c_str());
              vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",Y+4,N[5]);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Size",11);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Color",clBlue);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Bold",true);
              S=DataModule1->SqlSpecification->FieldByName("Cqmin")->AsString;
              vVarCell.OlePropertySet("Value",S.c_str());
              }
    }
//---------------------------------------------------------------------------------------------------
if (DataModule1->SqlSpecification->FieldByName("Q")->AsString=="True"){
     N[6]=k+1;
      k++;
    vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",2,N[6]);
      vVarCell.OlePropertyGet("Font").OlePropertySet("Size",11);
      vVarCell.OlePropertyGet("Font").OlePropertySet("Bold",true);
      S="Qx1000";
    vVarCell.OlePropertySet("Value",S.c_str());
     if (DataModule1->SqlSpecification->FieldByName("norm")->AsString=="True"){
              vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",Y+5,N[6]);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Size",11);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Color",clBlue);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Bold",true);
              S=DataModule1->SqlSpecification->FieldByName("Qmax")->AsString;
              vVarCell.OlePropertySet("Value",S.c_str());
              vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",Y+4,N[6]);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Size",11);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Color",clBlue);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Bold",true);
              S=DataModule1->SqlSpecification->FieldByName("Qmin")->AsString;
              vVarCell.OlePropertySet("Value",S.c_str());
              }
    }
//---------------------------------------------------------------------------------------------------
if (DataModule1->SqlSpecification->FieldByName("Tmax")->AsString=="True"){
     N[7]=k+1;
      k++;
      vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",2,N[7]);
      vVarCell.OlePropertyGet("Font").OlePropertySet("Size",11);
      vVarCell.OlePropertyGet("Font").OlePropertySet("Bold",true);
      S="Tmax,C";
    vVarCell.OlePropertySet("Value",S.c_str());
     if (DataModule1->SqlSpecification->FieldByName("norm")->AsString=="True"){
              vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",Y+5,N[7]);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Size",11);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Color",clBlue);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Bold",true);
              S=DataModule1->SqlSpecification->FieldByName("Tmaxmax")->AsString;
              vVarCell.OlePropertySet("Value",S.c_str());
              vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",Y+4,N[7]);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Size",11);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Color",clBlue);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Bold",true);
              S=DataModule1->SqlSpecification->FieldByName("Tmaxmin")->AsString;
              vVarCell.OlePropertySet("Value",S.c_str());
              }
   }
//--------------------------------------------------------------------------------------------------
if (DataModule1->SqlSpecification->FieldByName("Tmin")->AsString=="True"){
     N[8]=k+1;
      k++;
    vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",2,N[8]);
      vVarCell.OlePropertyGet("Font").OlePropertySet("Size",11);
      vVarCell.OlePropertyGet("Font").OlePropertySet("Bold",true);
      S="Tmin,C";
    vVarCell.OlePropertySet("Value",S.c_str());
     if (DataModule1->SqlSpecification->FieldByName("norm")->AsString=="True"){
              vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",Y+5,N[8]);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Size",11);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Color",clBlue);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Bold",true);
              S=DataModule1->SqlSpecification->FieldByName("Tminmax")->AsString;
              vVarCell.OlePropertySet("Value",S.c_str());
              vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",Y+4,N[8]);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Size",11);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Color",clBlue);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Bold",true);
              S=DataModule1->SqlSpecification->FieldByName("Tminmin")->AsString;
              vVarCell.OlePropertySet("Value",S.c_str());
              }
 }
//--------------------------------------------------------------------------------------------------
if (DataModule1->SqlSpecification->FieldByName("TurnOver")->AsString=="True"){
     N[9]=k+1;
      k++;
    vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",2,N[9]);
      vVarCell.OlePropertyGet("Font").OlePropertySet("Size",11);
      vVarCell.OlePropertyGet("Font").OlePropertySet("Bold",true);
      S="IT,C";
    vVarCell.OlePropertySet("Value",S.c_str());
     if (DataModule1->SqlSpecification->FieldByName("norm")->AsString=="True"){
              vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",Y+5,N[9]);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Size",11);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Color",clBlue);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Bold",true);
              S=DataModule1->SqlSpecification->FieldByName("Tomax")->AsString;
              vVarCell.OlePropertySet("Value",S.c_str());
              vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",Y+4,N[9]);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Size",11);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Color",clBlue);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Bold",true);
              S=DataModule1->SqlSpecification->FieldByName("Tomin")->AsString;
              vVarCell.OlePropertySet("Value",S.c_str());
              }
    }
//-------------------------------------------------------------------------------------------------
if (DataModule1->SqlSpecification->FieldByName("Rc_Rb")->AsString=="True"){
     N[10]=k+1;
      k++;
    vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",2,N[10]);
      vVarCell.OlePropertyGet("Font").OlePropertySet("Size",11);
      vVarCell.OlePropertyGet("Font").OlePropertySet("Bold",true);
      S="Rc/Rb";
    vVarCell.OlePropertySet("Value",S.c_str());
     if (DataModule1->SqlSpecification->FieldByName("norm")->AsString=="True"){
              vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",Y+5,N[10]);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Size",11);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Color",clBlue);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Bold",true);
              S=DataModule1->SqlSpecification->FieldByName("Rc_Rbmax")->AsString;
              vVarCell.OlePropertySet("Value",S.c_str());
              }
     }
//--------------------------------------------------------------------------------------------------
if (DataModule1->SqlSpecification->FieldByName("Fmx")->AsString=="True"){
     N[11]=k+1;
      k++;
    vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",2,N[11]);
      vVarCell.OlePropertyGet("Font").OlePropertySet("Size",11);
      vVarCell.OlePropertyGet("Font").OlePropertySet("Bold",true);
      S="Fmax,ppm";
    vVarCell.OlePropertySet("Value",S.c_str());
     if (DataModule1->SqlSpecification->FieldByName("norm")->AsString=="True"){
              vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",Y+5,N[11]);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Size",11);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Color",clBlue);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Bold",true);
              S=DataModule1->SqlSpecification->FieldByName("Fmaxmax")->AsString;
              vVarCell.OlePropertySet("Value",S.c_str());
              vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",Y+4,N[11]);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Size",11);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Color",clBlue);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Bold",true);
              S=DataModule1->SqlSpecification->FieldByName("Fmaxmin")->AsString;
              vVarCell.OlePropertySet("Value",S.c_str());
              }
    }
//--------------------------------------------------------------------------------------------------
if (DataModule1->SqlSpecification->FieldByName("Fmn")->AsString=="True"){
     N[12]=k+1;
      k++;
    vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",2,N[12]);
      vVarCell.OlePropertyGet("Font").OlePropertySet("Size",11);
      vVarCell.OlePropertyGet("Font").OlePropertySet("Bold",true);
      S="Fmin,ppm";
    vVarCell.OlePropertySet("Value",S.c_str());
     if (DataModule1->SqlSpecification->FieldByName("norm")->AsString=="True"){
              vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",Y+5,N[12]);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Size",11);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Color",clBlue);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Bold",true);
              S=DataModule1->SqlSpecification->FieldByName("Fminmax")->AsString;
              vVarCell.OlePropertySet("Value",S.c_str());
              vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",Y+4,N[12]);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Size",11);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Color",clBlue);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Bold",true);
              S=DataModule1->SqlSpecification->FieldByName("Fminmin")->AsString;
              vVarCell.OlePropertySet("Value",S.c_str());
              }
    }
//---------------------------------------------------------------------------------------------------
if (DataModule1->SqlSpecification->FieldByName("M")->AsString=="True"){
     N[13]=k+1;
      k++;
   vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",2,N[13]);
      vVarCell.OlePropertyGet("Font").OlePropertySet("Size",11);
      vVarCell.OlePropertyGet("Font").OlePropertySet("Bold",true);
      S="Mono,10E-6";
    vVarCell.OlePropertySet("Value",S.c_str());
     if (DataModule1->SqlSpecification->FieldByName("norm")->AsString=="True"){
              vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",Y+5,N[13]);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Size",11);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Color",clBlue);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Bold",true);
              S=DataModule1->SqlSpecification->FieldByName("Mmax")->AsString;
              vVarCell.OlePropertySet("Value",S.c_str());
              vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",Y+4,N[13]);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Size",11);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Color",clBlue);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Bold",true);
              S=DataModule1->SqlSpecification->FieldByName("Mmin")->AsString;
              vVarCell.OlePropertySet("Value",S.c_str());
              }
    }
//------------------------------------------------------------------------------------------------
if (DataModule1->SqlSpecification->FieldByName("Fptp")->AsString=="True"){
     N[14]=k+1;
      k++;
    vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",2,N[14]);
      vVarCell.OlePropertyGet("Font").OlePropertySet("Size",11);
      vVarCell.OlePropertyGet("Font").OlePropertySet("Bold",true);
      S="Fptp,ppm";
    vVarCell.OlePropertySet("Value",S.c_str());
     if (DataModule1->SqlSpecification->FieldByName("norm")->AsString=="True"){
              vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",Y+5,N[14]);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Size",11);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Color",clBlue);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Bold",true);
              S=DataModule1->SqlSpecification->FieldByName("Fptpmax")->AsString;
              vVarCell.OlePropertySet("Value",S.c_str());
              vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",Y+4,N[14]);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Size",11);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Color",clBlue);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Bold",true);
              S=DataModule1->SqlSpecification->FieldByName("Fptpmin")->AsString;
              vVarCell.OlePropertySet("Value",S.c_str());
              }
    }
//-----------------------------------------------------------------------------------------------
  if (DataModule1->SqlSpecification->FieldByName("Fptp_2")->AsString=="True"){
     N[21]=k+1;
      k++;
    vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",2,N[21]);
      vVarCell.OlePropertyGet("Font").OlePropertySet("Size",11);
      vVarCell.OlePropertyGet("Font").OlePropertySet("Bold",true);
      S="Fptp/2,ppm";
    vVarCell.OlePropertySet("Value",S.c_str());
     if (DataModule1->SqlSpecification->FieldByName("norm")->AsString=="True"){
              vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",Y+5,N[21]);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Size",11);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Color",clBlue);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Bold",true);
              S=DataModule1->SqlSpecification->FieldByName("Fptp_2max")->AsString;
              vVarCell.OlePropertySet("Value",S.c_str());
              vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",Y+4,N[21]);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Size",11);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Color",clBlue);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Bold",true);
              S=DataModule1->SqlSpecification->FieldByName("Fptp_2min")->AsString;
              vVarCell.OlePropertySet("Value",S.c_str());
              }
    }
//------------------------------------------------------------------------------------------------
if (DataModule1->SqlSpecification->FieldByName("Rmx")->AsString=="True"){
     N[15]=k+1;
      k++;
    vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",2,N[15]);
      vVarCell.OlePropertyGet("Font").OlePropertySet("Size",11);
      vVarCell.OlePropertyGet("Font").OlePropertySet("Bold",true);
      S="Rmax,Ohm";
    vVarCell.OlePropertySet("Value",S.c_str());
     if (DataModule1->SqlSpecification->FieldByName("norm")->AsString=="True"){
              vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",Y+5,N[15]);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Size",11);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Color",clBlue);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Bold",true);
              S=DataModule1->SqlSpecification->FieldByName("Rmaxmax")->AsString;
              vVarCell.OlePropertySet("Value",S.c_str());
              vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",Y+4,N[15]);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Size",11);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Color",clBlue);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Bold",true);
              S=DataModule1->SqlSpecification->FieldByName("Rmaxmin")->AsString;
              vVarCell.OlePropertySet("Value",S.c_str());
              }
    }
//--------------------------------------------------------------------------------------------------
if (DataModule1->SqlSpecification->FieldByName("RR")->AsString=="True"){
     N[16]=k+1;
      k++;
    vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",2,N[16]);
      vVarCell.OlePropertyGet("Font").OlePropertySet("Size",11);
      vVarCell.OlePropertyGet("Font").OlePropertySet("Bold",true);
      S="Rmax/Rmin";
    vVarCell.OlePropertySet("Value",S.c_str());
     if (DataModule1->SqlSpecification->FieldByName("norm")->AsString=="True"){
              vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",Y+5,N[16]);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Size",11);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Color",clBlue);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Bold",true);
              S=DataModule1->SqlSpecification->FieldByName("RRmax")->AsString;
              vVarCell.OlePropertySet("Value",S.c_str());
              vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",Y+4,N[16]);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Size",11);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Color",clBlue);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Bold",true);
              S=DataModule1->SqlSpecification->FieldByName("RRmin")->AsString;
              vVarCell.OlePropertySet("Value",S.c_str());
              }
  }
//--------------------------------------------------------------------------------------------------
if (DataModule1->SqlSpecification->FieldByName("Shum")->AsString=="True"){
     N[17]=k+1;
      k++;
    vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",2,N[17]);
      vVarCell.OlePropertyGet("Font").OlePropertySet("Size",11);
      vVarCell.OlePropertyGet("Font").OlePropertySet("Bold",true);
      S="Phase noise,dB";
    vVarCell.OlePropertySet("Value",S.c_str());
     if (DataModule1->SqlSpecification->FieldByName("norm")->AsString=="True"){
              vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",Y+5,N[17]);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Size",11);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Color",clBlue);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Bold",true);
              S=DataModule1->SqlSpecification->FieldByName("ShMax")->AsString;
              vVarCell.OlePropertySet("Value",S.c_str());
              vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",Y+4,N[17]);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Size",11);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Color",clBlue);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Bold",true);
              S=DataModule1->SqlSpecification->FieldByName("ShMin")->AsString;
              vVarCell.OlePropertySet("Value",S.c_str());
              }
  }



//--------------------------------------------------------------------------------------------------
if (DataModule1->SqlSpecification->FieldByName("Fmaxm")->AsString=="True"){
     N[18]=k+1;
      k++;
    vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",2,N[18]);
      vVarCell.OlePropertyGet("Font").OlePropertySet("Size",11);
      vVarCell.OlePropertyGet("Font").OlePropertySet("Bold",true);
      S="FmaxM";
    vVarCell.OlePropertySet("Value",S.c_str());
     if (DataModule1->SqlSpecification->FieldByName("norm")->AsString=="True"){
              vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",Y+5,N[18]);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Size",11);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Color",clBlue);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Bold",true);
              S=DataModule1->SqlSpecification->FieldByName("Fmaxmax")->AsString;
              vVarCell.OlePropertySet("Value",S.c_str());
              vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",Y+4,N[18]);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Size",11);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Color",clBlue);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Bold",true);
              S=DataModule1->SqlSpecification->FieldByName("Fminmin")->AsString;
              vVarCell.OlePropertySet("Value",S.c_str());
              }
  }

 if (DataModule1->SqlSpecification->FieldByName("RR2")->AsString=="True"){
     N[20]=k+1;
      k++;
    vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",2,N[20]);
      vVarCell.OlePropertyGet("Font").OlePropertySet("Size",11);
      vVarCell.OlePropertyGet("Font").OlePropertySet("Bold",true);
      S="Rmax/R25";
    vVarCell.OlePropertySet("Value",S.c_str());
     if (DataModule1->SqlSpecification->FieldByName("norm")->AsString=="True"){
              vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",Y+5,N[20]);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Size",11);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Color",clBlue);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Bold",true);
              S=DataModule1->SqlSpecification->FieldByName("Fmaxmax")->AsString;
              vVarCell.OlePropertySet("Value",S.c_str());
              vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",Y+4,N[20]);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Size",11);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Color",clBlue);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Bold",true);
              S=DataModule1->SqlSpecification->FieldByName("Fminmin")->AsString;
              vVarCell.OlePropertySet("Value",S.c_str());
              }
  }

   if (DataModule1->SqlSpecification->FieldByName("RR2")->AsString=="True"){
     N[20]=k+1;
      k++;
    vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",2,N[20]);
      vVarCell.OlePropertyGet("Font").OlePropertySet("Size",11);
      vVarCell.OlePropertyGet("Font").OlePropertySet("Bold",true);
      S="Rmax/R25";
    vVarCell.OlePropertySet("Value",S.c_str());
     if (DataModule1->SqlSpecification->FieldByName("norm")->AsString=="True"){
              vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",Y+5,N[20]);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Size",11);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Color",clBlue);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Bold",true);
              S=DataModule1->SqlSpecification->FieldByName("RR2max")->AsString;
              vVarCell.OlePropertySet("Value",S.c_str());
              vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",Y+4,N[20]);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Size",11);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Color",clBlue);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Bold",true);
              S=DataModule1->SqlSpecification->FieldByName("RR2min")->AsString;
              vVarCell.OlePropertySet("Value",S.c_str());
              }
  }

  if (DataModule1->SqlSpecification->FieldByName("Rsp1")->AsString=="True"){
     N[25]=k+1;
      k++;
    vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",2,N[25]);
      vVarCell.OlePropertyGet("Font").OlePropertySet("Size",11);
      vVarCell.OlePropertyGet("Font").OlePropertySet("Bold",true);
      S="Spur,dB";
    vVarCell.OlePropertySet("Value",S.c_str());
     if (DataModule1->SqlSpecification->FieldByName("norm")->AsString=="True"){
              vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",Y+5,N[25]);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Size",11);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Color",clBlue);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Bold",true);
              S=DataModule1->SqlSpecification->FieldByName("Rsp1max")->AsString;
              vVarCell.OlePropertySet("Value",S.c_str());
              vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",Y+4,N[25]);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Size",11);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Color",clBlue);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Bold",true);
              S=DataModule1->SqlSpecification->FieldByName("Rsp1min")->AsString;
              vVarCell.OlePropertySet("Value",S.c_str());
              }
  }

   if (DataModule1->SqlSpecification->FieldByName("C1_2C0")->AsString=="True"){
     N[22]=k+1;
      k++;
    vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",2,N[22]);
      vVarCell.OlePropertyGet("Font").OlePropertySet("Size",11);
      vVarCell.OlePropertyGet("Font").OlePropertySet("Bold",true);
      S="Перестройка";
    vVarCell.OlePropertySet("Value",S.c_str());
     if (DataModule1->SqlSpecification->FieldByName("norm")->AsString=="True"){
              vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",Y+5,N[22]);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Size",11);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Color",clBlue);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Bold",true);
              S=DataModule1->SqlSpecification->FieldByName("C1_2C0max")->AsString;
              vVarCell.OlePropertySet("Value",S.c_str());
              vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",Y+4,N[22]);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Size",11);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Color",clBlue);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Bold",true);
              S=DataModule1->SqlSpecification->FieldByName("C1_2C0min")->AsString;
              vVarCell.OlePropertySet("Value",S.c_str());
              }
  }
     if (DataModule1->SqlSpecification->FieldByName("S")->AsString=="True"){
     N[23]=k+1;
      k++;
    vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",2,N[23]);
      vVarCell.OlePropertyGet("Font").OlePropertySet("Size",11);
      vVarCell.OlePropertyGet("Font").OlePropertySet("Bold",true);
      S="Наклон,ppm";
    vVarCell.OlePropertySet("Value",S.c_str());
     if (DataModule1->SqlSpecification->FieldByName("norm")->AsString=="True"){
              vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",Y+5,N[23]);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Size",11);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Color",clBlue);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Bold",true);
              S=DataModule1->SqlSpecification->FieldByName("Smax")->AsString;
              vVarCell.OlePropertySet("Value",S.c_str());
              vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",Y+4,N[23]);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Size",11);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Color",clBlue);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Bold",true);
              S=DataModule1->SqlSpecification->FieldByName("Smin")->AsString;
              vVarCell.OlePropertySet("Value",S.c_str());
              }
  }
     if (DataModule1->SqlSpecification->FieldByName("L")->AsString=="True"){
     N[24]=k+1;
      k++;
    vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",2,N[24]);
      vVarCell.OlePropertyGet("Font").OlePropertySet("Size",11);
      vVarCell.OlePropertyGet("Font").OlePropertySet("Bold",true);
      S="Индуктивность,mH";
    vVarCell.OlePropertySet("Value",S.c_str());
     if (DataModule1->SqlSpecification->FieldByName("norm")->AsString=="True"){
              vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",Y+5,N[24]);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Size",11);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Color",clBlue);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Bold",true);
              S=DataModule1->SqlSpecification->FieldByName("Lmax")->AsString;
              vVarCell.OlePropertySet("Value",S.c_str());
              vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",Y+4,N[24]);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Size",11);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Color",clBlue);
              vVarCell.OlePropertyGet("Font").OlePropertySet("Bold",true);
              S=DataModule1->SqlSpecification->FieldByName("Lmin")->AsString;
              vVarCell.OlePropertySet("Value",S.c_str());
              }
  }



//--------------------------------------------------------------------------------------------------

if (DataModule1->SqlSpecification->FieldByName("Status")->AsString=="True"){
     N[19]=k+1;
      k++;
       vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",2,N[19]);
      vVarCell.OlePropertyGet("Font").OlePropertySet("Size",11);
      vVarCell.OlePropertyGet("Font").OlePropertySet("Bold",true);
      S="Статус";
    vVarCell.OlePropertySet("Value",S.c_str());
    }
//------------------------------------------------------------------------------------------------


       DataModule1->SQLPSIDataTemp->First();

for (int i=0;i<DataModule1->SQLPSIDataTemp->RecordCount;i++){
     if (DataModule1->SqlSpecification->FieldByName("Snumber")->AsString=="True"){
        vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",i+3,N[1]);
        S=DataModule1->SQLPSIDataTemp->FieldByName("N")->AsString;
        vVarCell.OlePropertySet("Value",S.c_str());
        }
      if (DataModule1->SqlSpecification->FieldByName("Ft")->AsString=="True"){
        vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",i+3,N[2]);
        S=DataModule1->SQLPSIDataTemp->FieldByName("F")->AsString;
        vVarCell.OlePropertySet("Value",S.c_str());
        }
       if (DataModule1->SqlSpecification->FieldByName("R")->AsString=="True"){
         vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",i+3,N[3]);
        S=DataModule1->SQLPSIDataTemp->FieldByName("R")->AsString;
        vVarCell.OlePropertySet("Value",S.c_str());
        }
       if (DataModule1->SqlSpecification->FieldByName("C0")->AsString=="True"){
        vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",i+3,N[4]);
        S=DataModule1->SQLPSIDataTemp->FieldByName("C0")->AsString;
        vVarCell.OlePropertySet("Value",S.c_str());
        }

        if (DataModule1->SqlSpecification->FieldByName("Cq")->AsString=="True"){
        vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",i+3,N[5]);
        S=DataModule1->SQLPSIDataTemp->FieldByName("Cq")->AsString;
        vVarCell.OlePropertySet("Value",S.c_str());
        }
        if (DataModule1->SqlSpecification->FieldByName("Q")->AsString=="True"){
             vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",i+3,N[6]);
             S=DataModule1->SQLPSIDataTemp->FieldByName("Q")->AsString;
             vVarCell.OlePropertySet("Value",S.c_str());
        }
        if (DataModule1->SqlSpecification->FieldByName("Tmax")->AsString=="True"){
           vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",i+3,N[7]);
           S=DataModule1->SQLPSIDataTemp->FieldByName("Tmax")->AsString;
           vVarCell.OlePropertySet("Value",S.c_str());
        }
        if (DataModule1->SqlSpecification->FieldByName("Tmin")->AsString=="True"){
           vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",i+3,N[8]);
           S=DataModule1->SQLPSIDataTemp->FieldByName("Tmin")->AsString;
           vVarCell.OlePropertySet("Value",S.c_str());
        }
        if (DataModule1->SqlSpecification->FieldByName("TurnOver")->AsString=="True"){
            vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",i+3,N[9]);
            S=DataModule1->SQLPSIDataTemp->FieldByName("TurnOver")->AsString;
            vVarCell.OlePropertySet("Value",S.c_str());
        }
        if (DataModule1->SqlSpecification->FieldByName("Status")->AsString=="True"){
           vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",i+3,N[19]);
           S=DataModule1->SQLPSIDataTemp->FieldByName("Status")->AsString;
           vVarCell.OlePropertySet("Value",S.c_str());
        }
        if (DataModule1->SqlSpecification->FieldByName("Rc_Rb")->AsString=="True"){
           vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",i+3,N[10]);
           S=DataModule1->SQLPSIDataTemp->FieldByName("RcRb")->AsString;
           vVarCell.OlePropertySet("Value",S.c_str());
        }
        if (DataModule1->SqlSpecification->FieldByName("Position")->AsString=="True"){
            vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",i+3,N[0]);
            S=DataModule1->SQLPSIDataTemp->FieldByName("Position")->AsString;
            vVarCell.OlePropertySet("Value",S.c_str());
        }
        if (DataModule1->SqlSpecification->FieldByName("Fmx")->AsString=="True"){
           vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",i+3,N[11]);
           S=DataModule1->SQLPSIDataTemp->FieldByName("Fmax")->AsString;
           vVarCell.OlePropertySet("Value",S.c_str());
        }
        if (DataModule1->SqlSpecification->FieldByName("Fmn")->AsString=="True"){
           vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",i+3,N[12]);
           S=DataModule1->SQLPSIDataTemp->FieldByName("Fmin")->AsString;
           vVarCell.OlePropertySet("Value",S.c_str());
        }
        if (DataModule1->SqlSpecification->FieldByName("M")->AsString=="True"){
            vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",i+3,N[13]);
            S=DataModule1->SQLPSIDataTemp->FieldByName("Mono")->AsString;
            vVarCell.OlePropertySet("Value",S.c_str());
        }
        if (DataModule1->SqlSpecification->FieldByName("Fptp")->AsString=="True"){
          vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",i+3,N[14]);
          S=DataModule1->SQLPSIDataTemp->FieldByName("Fptp")->AsString;
          vVarCell.OlePropertySet("Value",S.c_str());
        }
        if (DataModule1->SqlSpecification->FieldByName("Rmx")->AsString=="True"){
           vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",i+3,N[15]);
           S=DataModule1->SQLPSIDataTemp->FieldByName("Rmax")->AsString;
           vVarCell.OlePropertySet("Value",S.c_str());
        }
        if (DataModule1->SqlSpecification->FieldByName("RR")->AsString=="True"){
        vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",i+3,N[16]);
        S=DataModule1->SQLPSIDataTemp->FieldByName("R1R2")->AsString;
        vVarCell.OlePropertySet("Value",S.c_str());
        }
          if (DataModule1->SqlSpecification->FieldByName("Shum")->AsString=="True"){
        vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",i+3,N[17]);
        S=DataModule1->SQLPSIDataTemp->FieldByName("Shum")->AsString;
        vVarCell.OlePropertySet("Value",S.c_str());
        }
        if (DataModule1->SqlSpecification->FieldByName("Fmaxm")->AsString=="True"){
        vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",i+3,N[18]);
        S=DataModule1->SQLPSIDataTemp->FieldByName("Fmaxm")->AsString;
        vVarCell.OlePropertySet("Value",S.c_str());
        }
         if (DataModule1->SqlSpecification->FieldByName("RR2")->AsString=="True"){
        vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",i+3,N[20]);
        S=DataModule1->SQLPSIDataTemp->FieldByName("RR2")->AsString;
        vVarCell.OlePropertySet("Value",S.c_str());
        }
         if (DataModule1->SqlSpecification->FieldByName("Fptp_2")->AsString=="True"){
        vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",i+3,N[21]);
        S=DataModule1->SQLPSIDataTemp->FieldByName("Fptp_2")->AsString;
        vVarCell.OlePropertySet("Value",S.c_str());
        }

         if (DataModule1->SqlSpecification->FieldByName("Rsp1")->AsString=="True"){
        vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",i+3,N[25]);
        S=DataModule1->SQLPSIDataTemp->FieldByName("Spur")->AsString;
        vVarCell.OlePropertySet("Value",S.c_str());
        }
         if (DataModule1->SqlSpecification->FieldByName("C1_2C0")->AsString=="True"){
        vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",i+3,N[22]);
        S=DataModule1->SQLPSIDataTemp->FieldByName("C1_2C0")->AsString;
        vVarCell.OlePropertySet("Value",S.c_str());
        }
         if (DataModule1->SqlSpecification->FieldByName("S")->AsString=="True"){
        vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",i+3,N[23]);
        S=DataModule1->SQLPSIDataTemp->FieldByName("Slope")->AsString;
        vVarCell.OlePropertySet("Value",S.c_str());
        }
          if (DataModule1->SqlSpecification->FieldByName("L")->AsString=="True"){
        vVarCell=vVarSheet.OlePropertyGet("Cells").OlePropertyGet("Item",i+3,N[24]);
        S=DataModule1->SQLPSIDataTemp->FieldByName("L")->AsString;
        vVarCell.OlePropertySet("Value",S.c_str());
        }
        DataModule1->SQLPSIDataTemp->Next();



    }


    vVarApp.OlePropertySet("Visible",true);
}
//---------------------------------------------------------------------------


void __fastcall TResultForm::btnJournalClick(TObject *Sender)
{
AddMskForm->Visible=true;

/*btnJournal->Enabled=false;
       AnsiString Measure_ID=this->Measure_ID->Text;

        SYSTEMTIME st;
          GetLocalTime(&st);
          AnsiString stD,stMn,stY,stH,stM,stS;
          stD=st.wDay;
          stMn=st.wMonth;
          stY=st.wYear;
          stH=st.wHour;
          stM=st.wMinute;
          stS=st.wSecond;

        DataModule2->Statistika->Active=false;
        DataModule2->Statistika->SQL->Clear();
        DataModule2->Statistika->SQL->Add("Select * from psi_statistika where Measure_ID='"+Measure_ID+"'");
        DataModule2->Statistika->Active=true;

        DataModule1->SQLPSI->Active=false;
        DataModule1->SQLPSI->SQL->Clear();
        DataModule1->SQLPSI->SQL->Add("Select * from psi where Measure_ID='"+Measure_ID+"'");
        DataModule1->SQLPSI->Active=true;

        DataModule2->Journal->Active=false;
        DataModule2->Journal->SQL->Clear();
        DataModule2->Journal->SQL->Add("Select * from psi_journal where Measure_ID='"+Measure_ID+"'");
        DataModule2->Journal->Active=true;

         DataModule2->Ugol->Active=false;
        DataModule2->Ugol->SQL->Clear();
        DataModule2->Ugol->SQL->Add("Select * from psi_ugol where Measure_ID='"+Measure_ID+"'");
        DataModule2->Ugol->Active=true;
        DataModule2->Coddificator->Active=true;
        DataModule2->Machine->Active=true;

        DataModule2->Journal->Append();
        DataModule2->Ugol->Append();

        DataModule2->Journal->FieldByName("Measure_ID")->AsString=Measure_ID;
        DataModule2->Ugol->FieldByName("Measure_ID")->AsString=Measure_ID;


         if (edtMskReal->Text.IsEmpty() || edtMskReal->Text==""){
        DataModule2->MSK->Active=false;
        DataModule2->MSK->SQL->Clear();
       DataModule2->MSK->SQL->Add("Select * from msk_rk where мскРеал='"+DataModule1->SQLPSI->FieldByName("MSK")->AsString+"'");
       DataModule2->MSK->Active=true;
       }
       else {
        DataModule2->MSK->Active=false;
        DataModule2->MSK->SQL->Clear();
       DataModule2->MSK->SQL->Add("Select * from msk_rk where мскРеал='"+edtMskReal->Text+"'");
       DataModule2->MSK->Active=true;

       }

       DataModule2->Nomenklatura_RK_PSI->Active=false;
               DataModule2->Spc_Temp->Active=false;
               DataModule2->Spc_Temp->SQL->Clear();
               DataModule2->Spc_Temp->SQL->Add("Select * from specification where Name='"+DataModule1->SQLPSI->FieldByName("Name")->AsString+"'");
               DataModule2->Spc_Temp->Active=true;
              DataModule2->Nomenklatura_RK_PSI->SQL->Clear();
              DataModule2->Nomenklatura_RK_PSI->SQL->Add("Select * from nomeklatura_rk_psi where SpcID='"+DataModule2->Spc_Temp->FieldByName("ID")->AsString+"'");
              DataModule2->Nomenklatura_RK_PSI->Active=true;
               DataModule2->Spc_Temp->Active=false;
                if (DataModule2->Nomenklatura_RK_PSI->RecordCount>0){
                   DataModule2->Journal->FieldByName("Spc")->AsString=DataModule2->Nomenklatura_RK_PSI->FieldByName("NomenklaturaID")->AsString;
                   DataModule2->Ugol->FieldByName("Spc")->AsString=DataModule2->Nomenklatura_RK_PSI->FieldByName("NomenklaturaID")->AsString;

                }
                else {
                   DataModule2->Journal->FieldByName("Spc")->AsString="0";
                   DataModule2->Ugol->FieldByName("Spc")->AsString="0";

                }
        if (DataModule2->MSK->RecordCount>0){

        DataModule2->Journal->FieldByName("MSK")->AsString=DataModule2->MSK->FieldByName("мск")->AsString;
        DataModule2->Ugol->FieldByName("MSK")->AsString=DataModule2->MSK->FieldByName("мск")->AsString;
        }
        else {
               if (edtMskReal->Text.IsEmpty() || edtMskReal->Text==""){
              DataModule2->Journal->FieldByName("MSK")->AsString=DataModule1->SQLPSI->FieldByName("MSK")->AsString;
              DataModule2->Ugol->FieldByName("MSK")->AsString=DataModule1->SQLPSI->FieldByName("MSK")->AsString;
              }
              else {
                DataModule2->Journal->FieldByName("MSK")->AsString=edtMskReal->Text;
              DataModule2->Ugol->FieldByName("MSK")->AsString=edtMskReal->Text;
              }


        }
         DataModule2->Machine->First();
         for (int i=0; i<DataModule2->Machine->RecordCount; i++){
                if (DataModule2->Machine->FieldByName("IP")->AsString==DataModule1->SQLPSI->FieldByName("transatN")->AsString){
                   DataModule2->Journal->FieldByName("Machine")->AsString=DataModule2->Machine->FieldByName("ID")->AsString;
                   DataModule2->Ugol->FieldByName("Machine")->AsString=DataModule2->Machine->FieldByName("ID")->AsString;
                   break;
                }
              DataModule2->Machine->Next();
         }

        DataModule2->Journal->FieldByName("yearrr")->AsString=stY;
        DataModule2->Ugol->FieldByName("yearrr")->AsString=stY;
        DataModule2->Journal->FieldByName("mounth")->AsString=stMn;
        DataModule2->Ugol->FieldByName("mounth")->AsString=stMn;
        DataModule2->Journal->FieldByName("Dater")->AsString=DataModule1->SQLPSI->FieldByName("DateEnd")->AsString;
        DataModule2->Ugol->FieldByName("Daterr")->AsString=DataModule1->SQLPSI->FieldByName("DateEnd")->AsString;

        DataModule2->Journal->FieldByName("alln")->AsString=DataModule1->SQLPSI->FieldByName("Number")->AsString;
        DataModule2->Journal->FieldByName("Bad")->AsString=DataModule1->SQLPSI->FieldByName("Bad")->AsString;
        DataModule2->Journal->FieldByName("Anomal")->AsString=DataModule1->SQLPSI->FieldByName("Anomal")->AsString;
        DataModule2->Journal->FieldByName("Nezamer")->AsString=DataModule1->SQLPSI->FieldByName("Nezamer")->AsString;
         DataModule2->Journal->FieldByName("Good")->AsString=DataModule1->SQLPSI->FieldByName("Good")->AsString;
         DataModule2->Journal->FieldByName("Operator")->AsString=DataModule1->Dostup->FieldByName("ID")->AsString;
         DataModule2->Journal->FieldByName("Per")->AsFloat=int((DataModule1->SQLPSI->FieldByName("Good")->AsFloat/DataModule1->SQLPSI->FieldByName("Number")->AsFloat)*100);
         AnsiString tempn="N";
         AnsiString tempc="Count";
         DataModule2->Statistika->First();
        for (int i=0; i<DataModule2->Statistika->RecordCount; i++){
           if (DataModule2->Machine->FieldByName("Type")->AsString=="Saunders"){
                    if (DataModule2->Statistika->FieldByName("Parametr_ID")->AsString!="33"){
                        DataModule2->Journal->FieldByName(tempn+FloatToStr(i+1))->AsString=DataModule2->Statistika->FieldByName("Parametr_ID")->AsString;
                        DataModule2->Journal->FieldByName(tempc+FloatToStr(i+1))->AsString=DataModule2->Statistika->FieldByName("Badn")->AsString;
                        }
              }
              else {
                    if (DataModule2->Statistika->FieldByName("Parametr_ID")->AsString!="33"){
                       if (DataModule2->Statistika->FieldByName("Parametr_ID")->AsFloat<19 ||  DataModule2->Statistika->FieldByName("Parametr_ID")->AsFloat>23){

                        DataModule2->Journal->FieldByName(tempn+FloatToStr(i+1))->AsString=DataModule2->Statistika->FieldByName("Parametr_ID")->AsString;
                        DataModule2->Journal->FieldByName(tempc+FloatToStr(i+1))->AsString=DataModule2->Statistika->FieldByName("Badn")->AsString;
                        }
                       }
              }
              if (DataModule2->Statistika->FieldByName("Parametr_ID")->AsFloat==9){
                                 DataModule2->Ugol->FieldByName("Tmax")->AsString=DataModule2->Statistika->FieldByName("AVG")->AsString;

                             }
                              if (DataModule2->Statistika->FieldByName("Parametr_ID")->AsFloat==10){
                                 DataModule2->Ugol->FieldByName("Tmin")->AsString=DataModule2->Statistika->FieldByName("AVG")->AsString;

                             }
                              if (DataModule2->Statistika->FieldByName("Parametr_ID")->AsFloat==45){
                                 DataModule2->Ugol->FieldByName("TurnOver")->AsString=DataModule2->Statistika->FieldByName("AVG")->AsString;

                             }
                if (DataModule2->Statistika->FieldByName("Parametr_ID")->AsFloat>=14 & DataModule2->Statistika->FieldByName("Parametr_ID")->AsFloat<=17){
                             if (DataModule2->Statistika->FieldByName("Parametr_ID")->AsFloat==14){
                                 DataModule2->Ugol->FieldByName("Fmax")->AsString=DataModule2->Statistika->FieldByName("AVG")->AsString;

                             }
                            if (DataModule2->Statistika->FieldByName("Parametr_ID")->AsFloat==15){
                                 DataModule2->Ugol->FieldByName("Fmin")->AsString=DataModule2->Statistika->FieldByName("AVG")->AsString;

                             }
                             if (DataModule2->Statistika->FieldByName("Parametr_ID")->AsFloat==16 || DataModule2->Statistika->FieldByName("Parametr_ID")->AsFloat==17){
                                 DataModule2->Ugol->FieldByName("Fptp")->AsString=DataModule2->Statistika->FieldByName("AVG")->AsString;

                             }



                    }
                DataModule2->Statistika->Next();
        }




     if (DataModule2->MSK->RecordCount>0){
          DataModule2->Ugol->FieldByName("Ugol1")->AsString=DataModule2->MSK->FieldByName("Ugol1")->AsString;

          DataModule2->Ugol->FieldByName("Osnovanie")->AsFloat=DataModule2->MSK->FieldByName("Komplektatcia")->AsFloat;
          DataModule2->Ugol->FieldByName("Klei")->AsFloat=DataModule2->MSK->FieldByName("Клей")->AsFloat;
          DataModule2->Ugol->FieldByName("Ugol2")->AsString=DataModule2->MSK->FieldByName("Ugol2")->AsString;
          DataModule2->Ugol->FieldByName("Zaiavka")->AsString=DataModule2->MSK->FieldByName("Zaiavka")->AsString;
          DataModule2->Ugol->FieldByName("MskNPK3")->AsString=DataModule2->MSK->FieldByName("MSKNPK3")->AsString;
          DataModule2->Ugol->FieldByName("DopuskUgol1")->AsString=DataModule2->MSK->FieldByName("DopuskUgol1")->AsString;
          DataModule2->Ugol->FieldByName("DopuskUgol2")->AsString=DataModule2->MSK->FieldByName("DopuskUgol2")->AsString;
          DataModule2->Ugol->FieldByName("Konvert")->AsString=DataModule2->MSK->FieldByName("Конверт")->AsString;
          DataModule2->Ugol->FieldByName("CrystalData")->AsString=DataModule2->MSK->FieldByName("CrystalData")->AsString;
          DataModule2->Ugol->FieldByName("ElectrodW")->AsString=DataModule2->MSK->FieldByName("ТолщинаЭлектрода")->AsString;
          DataModule2->Ugol->FieldByName("Electrod")->AsString=DataModule2->MSK->FieldByName("РазмерЭлектрода")->AsString;
          DataModule2->Ugol->FieldByName("Per")->AsFloat=(DataModule1->SQLPSI->FieldByName("Good")->AsFloat/DataModule1->SQLPSI->FieldByName("Number")->AsFloat)*100;
               DataModule2->Nomenklatura_RK->Active=false;
               DataModule2->Nomenklatura_RK->SQL->Clear();
               DataModule2->Nomenklatura_RK->SQL->Add("Select * from nomeklatura_rk where номенклатура='"+DataModule2->MSK->FieldByName("КодНоменклатуры")->AsString+"'");
               DataModule2->Nomenklatura_RK->Active=true;
          DataModule2->Ugol->FieldByName("Korpus")->AsString=DataModule2->Nomenklatura_RK->FieldByName("Корпус")->AsString;
          DataModule2->Ugol->FieldByName("Type")->AsString=DataModule2->Nomenklatura_RK->FieldByName("РКНомер")->AsString;
          DataModule2->Journal->FieldByName("Type")->AsString=DataModule2->Nomenklatura_RK->FieldByName("РКНомер")->AsString;
           DataModule2->Nomenklatura_RK->Active=false;
     }
    DataModule2->MSK->Active=false;
    DataModule2->Coddificator->Active=false;
    DataModule2->Ugol->Post();
     DataModule2->Journal->Post();
    
  */
}
//---------------------------------------------------------------------------




void __fastcall TResultForm::N3Click(TObject *Sender)
{
DataModule1->Print->Active=false;
DataModule1->Print->SQL->Clear();
DataModule1->Print->SQL->Add("Select * from print_data where ID='"+DataModule1->SqlSpecification->FieldByName("PrintProfile")->AsString+"'");
DataModule1->Print->Active=true;
  DataModule2->Print_Files->Active=true;
           DataModule2->Print_Files->First();
           for (int i=0; i<DataModule2->Print_Files->RecordCount; i++){
               if (DataModule1->Print->FieldByName("Rsp")->AsString==DataModule2->Print_Files->FieldByName("Name")->AsString) {
                  break;
               }
            DataModule2->Print_Files->Next();
           }

          TStream *FStream;
          FStream=DataModule2->Print_Files->CreateBlobStream(DataModule2->Print_Files->FieldByName("File"),bmRead);
          frxReport1->LoadFromStream(FStream);
          DataModule2->Print_Files->Active=false;
DataModule1->SQLPSIDataTemp->Active=false;
AnsiString S,S1,S2;
SYSTEMTIME st;
GetLocalTime(&st);
AnsiString stD,stMn,stY,stH,stM,stS;
stD=st.wDay;
stMn=st.wMonth;
stY=st.wYear;
stH=st.wHour;
stM=st.wMinute;
stS=st.wSecond;
S1=stD+"."+stMn+"."+stY;
if (edtAnomal->Checked){
S="Select * from psidata where Measure_ID='"+Measure_ID->Text+"' and Status2='Good' Order by psidata.N";
}
else {
S="Select * from psidata where Measure_ID='"+Measure_ID->Text+"' Order by psidata.N";
}
DataModule1->SQLPSIDataTemp->SQL->Clear();
DataModule1->SQLPSIDataTemp->SQL->Add(S);
DataModule1->SQLPSIDataTemp->Active=true;
DataModule1->NumbersTemp->Active=false;
DataModule1->NumbersTemp->SQL->Clear();
S2="Select * from psi where psi.MSK='"+edtMSK->Text+"'";
DataModule1->NumbersTemp->SQL->Add(S2);
DataModule1->NumbersTemp->Active=true;
frxReport1->PrepareReport(true);
frxPDFExport1->FileName=DataModule1->Options->FieldByName("ReportDir")->AsString+"\\"+Measure_ID->Text+"Rsphere.pdf";
frxReport1->ShowPreparedReport();
if (DataModule1->Options->FieldByName("Send_data_to_ftp")->AsString=="True"){
frxReport1->Export(frxPDFExport1);
clFtp1->UserName="root";
clFtp1->Password="arcanum";
clFtp1->Port=21;
clFtp1->Server="10.0.7.12";

clFtp1->TransferType = ttBinary;
clFtp1->Open();
clFtp1->ChangeCurrentDir("/BitNamiJBossStack/jboss/welcome-content/ReportsPDF");
DataModule1->NumbersTemp->Active=false;
DataModule1->Print->Active=false;
DataModule1->Print->SQL->Clear();
DataModule1->Print->SQL->Add("Select * from print_data");
DataModule1->Print->Active=true;
using namespace std;
  FILE *fp;
AnsiString fileName =DataModule1->Options->FieldByName("ReportDir")->AsString+"\\"+Measure_ID->Text+"Rsphere.pdf";

  fp = fopen(fileName.c_str(), "r+");
 if(!clFtp1->Active) return;
 if (fp!=NULL) {
    fclose(fp);
      int position = 0;
    TStream *stream = new TFileStream(fileName, fmOpenRead |fmShareDenyWrite);
    __try
    {
      if(clFtp1->FileExists(fileName))
      {
          position = clFtp1->GetFileSize(fileName);
          if(stream->Size <= position)
            position = 0;
      }
      clFtp1->PutFile(Measure_ID->Text+"RSphere.pdf", stream, position, -1);

    }
    __finally
    {
      delete stream;
    }
   }
 clFtp1->Close();
 }
}
//---------------------------------------------------------------------------




