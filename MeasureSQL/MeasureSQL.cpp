//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
//---------------------------------------------------------------------------
USEFORM("Main.cpp", MainForm);
USEFORM("FileSelect.cpp", FileSelectForm);
USEFORM("Data.cpp", DataModule1); /* TDataModule: File Type */
USEFORM("number.cpp", NumberForm);
USEFORM("spc.cpp", SpcForm);
USEFORM("Result.cpp", ResultForm);
USEFORM("NumberM.cpp", NumberMForm);
USEFORM("LoadNumbers.cpp", LoadNumbersForm);
USEFORM("dialog1.cpp", Dialog1Form);
USEFORM("Dostup.cpp", DostupForm);
USEFORM("Spcdetail.cpp", SpcDetailForm);
USEFORM("SpcOptions.cpp", SpcOptionsForm);
USEFORM("DataArchive.cpp", ArchiveForm);
USEFORM("archive.cpp", archivedata); /* TDataModule: File Type */
USEFORM("options.cpp", OptionsForm);
USEFORM("archiveTable.cpp", ArchiveTableForm);
USEFORM("seacrh.cpp", SearchForm);
USEFORM("text.cpp", TextForm);
USEFORM("Zapac.cpp", ZapacForm);
USEFORM("temperature.cpp", TemperatureForm);
USEFORM("dataview.cpp", DataForm);
USEFORM("protokol.cpp", ProtokolForm);
USEFORM("data1.cpp", DataModule2); /* TDataModule: File Type */
USEFORM("SpcMore.cpp", FormMore);
USEFORM("ManualRec.cpp", RecForm);
USEFORM("Rec.cpp", MRecForm);
USEFORM("termo.cpp", TermoForm);
USEFORM("old.cpp", OldForm);
USEFORM("oldview.cpp", OldViewForm);
USEFORM("Graph.cpp", GpForm);
USEFORM("protokolbuild.cpp", PrBuildForm);
USEFORM("WriteBD.cpp", WriteForm);
USEFORM("WriteTable.cpp", WriteTableForm);
USEFORM("Search.cpp", FastSearchForm);
USEFORM("NewSpc.cpp", NewSpcForm);
USEFORM("GraphOptions.cpp", OptionsGraphForm);
USEFORM("PM.cpp", PMForm);
USEFORM("PMN.cpp", PMNameForm);
USEFORM("PMDetail.cpp", PMDetailForm);
USEFORM("PassportNumbers.cpp", PNForm);
USEFORM("SortResult.cpp", SortResultForm);
USEFORM("ProtokolData.cpp", Protokol_Data); /* TDataModule: File Type */
USEFORM("data2.cpp", DataModule3); /* TDataModule: File Type */
USEFORM("Modif.cpp", ModifForm);
USEFORM("Tnumber.cpp", TnumberForm);
USEFORM("Tmain.cpp", TempMainForm);
USEFORM("TempData.cpp", TempDataModule); /* TDataModule: File Type */
USEFORM("BarCodeMsk.cpp", BarCodeMskForm);
USEFORM("SpcSelect.cpp", SpcSelectForm);
USEFORM("FileLoad.cpp", FileLoadForm);
USEFORM("Protokol_Select.cpp", Protokol_Select_Form);
USEFORM("BarCodeEnter.cpp", BarCodeEnterForm);
USEFORM("addNorm.cpp", AddNormForm);
USEFORM("Spc_PhazeNoise.cpp", Spc_PhazeNoise_Form);
USEFORM("PhazeNoise.cpp", PhazeNoiseForm);
USEFORM("Par.cpp", Par_Form);
USEFORM("PHN.cpp", PHNForm);
USEFORM("SpcMore_1.cpp", SpcMore1);
USEFORM("SpektrOLD.cpp", SpektrOLDForm);
USEFORM("Protokol_Proverke_PH.cpp", Proverka_PH_Form);
USEFORM("Protokol_Print.cpp", Protokol_Print_Form);
USEFORM("AddMskReal.cpp", AddMskForm);
USEFORM("SelectSpc.cpp", SelectSpcForm);
USEFORM("Data_RQ.cpp", RQ_Data); /* TDataModule: File Type */
USEFORM("New_Data4.cpp", New_Data); /* TDataModule: File Type */
USEFORM("Data_MeasureModule.cpp", Data_Measure); /* TDataModule: File Type */
USEFORM("Config_View.cpp", Config_View_Form);
USEFORM("Machine_Change.cpp", Machine_Change_Form);
//---------------------------------------------------------------------------
WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
        try
        {
                 Application->Initialize();
                 Application->CreateForm(__classid(TDostupForm), &DostupForm);
                 Application->CreateForm(__classid(TMainForm), &MainForm);
                 Application->CreateForm(__classid(TFileSelectForm), &FileSelectForm);
                 Application->CreateForm(__classid(TDataModule1), &DataModule1);
                 Application->CreateForm(__classid(TNumberForm), &NumberForm);
                 Application->CreateForm(__classid(TSpcForm), &SpcForm);
                 Application->CreateForm(__classid(TResultForm), &ResultForm);
                 Application->CreateForm(__classid(TNumberMForm), &NumberMForm);
                 Application->CreateForm(__classid(TLoadNumbersForm), &LoadNumbersForm);
                 Application->CreateForm(__classid(TDialog1Form), &Dialog1Form);
                 Application->CreateForm(__classid(TSpcDetailForm), &SpcDetailForm);
                 Application->CreateForm(__classid(TSpcOptionsForm), &SpcOptionsForm);
                 Application->CreateForm(__classid(TArchiveForm), &ArchiveForm);
                 Application->CreateForm(__classid(Tarchivedata), &archivedata);
                 Application->CreateForm(__classid(TOptionsForm), &OptionsForm);
                 Application->CreateForm(__classid(TArchiveTableForm), &ArchiveTableForm);
                 Application->CreateForm(__classid(TSearchForm), &SearchForm);
                 Application->CreateForm(__classid(TTextForm), &TextForm);
                 Application->CreateForm(__classid(TZapacForm), &ZapacForm);
                 Application->CreateForm(__classid(TTemperatureForm), &TemperatureForm);
                 Application->CreateForm(__classid(TDataForm), &DataForm);
                 Application->CreateForm(__classid(TProtokolForm), &ProtokolForm);
                 Application->CreateForm(__classid(TDataModule2), &DataModule2);
                 Application->CreateForm(__classid(TFormMore), &FormMore);
                 Application->CreateForm(__classid(TRecForm), &RecForm);
                 Application->CreateForm(__classid(TMRecForm), &MRecForm);
                 Application->CreateForm(__classid(TTermoForm), &TermoForm);
                 Application->CreateForm(__classid(TOldForm), &OldForm);
                 Application->CreateForm(__classid(TOldViewForm), &OldViewForm);
                 Application->CreateForm(__classid(TGpForm), &GpForm);
                 Application->CreateForm(__classid(TPrBuildForm), &PrBuildForm);
                 Application->CreateForm(__classid(TWriteForm), &WriteForm);
                 Application->CreateForm(__classid(TWriteTableForm), &WriteTableForm);
                 Application->CreateForm(__classid(TFastSearchForm), &FastSearchForm);
                 Application->CreateForm(__classid(TNewSpcForm), &NewSpcForm);
                 Application->CreateForm(__classid(TOptionsGraphForm), &OptionsGraphForm);
                 Application->CreateForm(__classid(TPMForm), &PMForm);
                 Application->CreateForm(__classid(TPMNameForm), &PMNameForm);
                 Application->CreateForm(__classid(TPMDetailForm), &PMDetailForm);
                 Application->CreateForm(__classid(TPNForm), &PNForm);
                 Application->CreateForm(__classid(TSortResultForm), &SortResultForm);
                 Application->CreateForm(__classid(TProtokol_Data), &Protokol_Data);
                 Application->CreateForm(__classid(TDataModule3), &DataModule3);
                 Application->CreateForm(__classid(TModifForm), &ModifForm);
                 Application->CreateForm(__classid(TTnumberForm), &TnumberForm);
                 Application->CreateForm(__classid(TTempMainForm), &TempMainForm);
                 Application->CreateForm(__classid(TTempDataModule), &TempDataModule);
                 Application->CreateForm(__classid(TBarCodeMskForm), &BarCodeMskForm);
                 Application->CreateForm(__classid(TSpcSelectForm), &SpcSelectForm);
                 Application->CreateForm(__classid(TFileLoadForm), &FileLoadForm);
                 Application->CreateForm(__classid(TProtokol_Select_Form), &Protokol_Select_Form);
                 Application->CreateForm(__classid(TBarCodeEnterForm), &BarCodeEnterForm);
                 Application->CreateForm(__classid(TAddNormForm), &AddNormForm);
                 Application->CreateForm(__classid(TSpc_PhazeNoise_Form), &Spc_PhazeNoise_Form);
                 Application->CreateForm(__classid(TPhazeNoiseForm), &PhazeNoiseForm);
                 Application->CreateForm(__classid(TPar_Form), &Par_Form);
                 Application->CreateForm(__classid(TPHNForm), &PHNForm);
                 Application->CreateForm(__classid(TSpcMore1), &SpcMore1);
                 Application->CreateForm(__classid(TSpektrOLDForm), &SpektrOLDForm);
                 Application->CreateForm(__classid(TProverka_PH_Form), &Proverka_PH_Form);
                 Application->CreateForm(__classid(TProtokol_Print_Form), &Protokol_Print_Form);
                 Application->CreateForm(__classid(TAddMskForm), &AddMskForm);
                 Application->CreateForm(__classid(TSelectSpcForm), &SelectSpcForm);
                 Application->CreateForm(__classid(TRQ_Data), &RQ_Data);
                 Application->CreateForm(__classid(TNew_Data), &New_Data);
                 Application->CreateForm(__classid(TData_Measure), &Data_Measure);
                 Application->CreateForm(__classid(TConfig_View_Form), &Config_View_Form);
                 Application->CreateForm(__classid(TMachine_Change_Form), &Machine_Change_Form);
                 Application->Run();
        }
        catch (Exception &exception)
        {

                 Application->ShowException(&exception);
        }
        catch (...)
        {
                 try
                 {
                         throw Exception("");
                 }
                 catch (Exception &exception)
                 {
                         Application->ShowException(&exception);
                 }
        }
        return 0;
}
//---------------------------------------------------------------------------
