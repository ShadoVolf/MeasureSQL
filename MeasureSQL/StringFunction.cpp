 #include "StringFunction.h"
 #pragma package(smart_init)
void cutString(AnsiString nom, AnsiString& osm, AnsiString& type, AnsiString& t, AnsiString& nastr, AnsiString& norm, AnsiString& nominal, AnsiString& Cn, AnsiString& V, AnsiString &cod, AnsiString &C, AnsiString &suf){

AnsiString temp=nom;
AnsiString ty=" ";
AnsiString ty1="-";
int j=0;
int pos=0;
AnsiString spc[10];
int n=0;
 for (int i=0; i<temp.Length(); i++){
        n++;
         if (temp.SubString(i+1,1)==" " || temp.SubString(i+1,1)=="-"){
             spc[j]=temp.SubString(pos+1,n-1);
             pos=i+1;
             n=0;
             j++;
         }
 }
  if (n>0){
   spc[j]=temp.SubString(pos+1,temp.Length());

  }
  for (int k=0; k<10; k++){
        if (spc[k]=="ฮัฬ" || spc[k]=="ฯฬศ"){
         osm=spc[k];
        }
       if (spc[k]=="ฯ"){

        Cn=spc[k];
      }
       if (spc[k]=="ย"){

        V=spc[k];
      }

      if (spc[k].Length()==3){
                if (spc[k].SubString(3,1)=="ภ"||spc[k].SubString(3,1)=="ม" ||spc[k].SubString(3,1)=="ย" || spc[k].SubString(3,1)=="ร"){
                cod=spc[k];
                }
        }
       if (spc[k].Length()==3){
          if (spc[k].SubString(3,1)!="ภ"||spc[k].SubString(3,1)!="ม" ||spc[k].SubString(3,1)!="ย" || spc[k].SubString(3,1)!="ร"){
            if (spc[k].SubString(1,2)!="ะส" & spc[k]!="ฮัฬ" & spc[k]!="ฯฬศ"){

              char *tr=spc[k].SubString(2,1).c_str();
                  if (!isNumber(tr)){
                                t=spc[k].SubString(2,1);
                                 norm=spc[k].SubString(3,1);
                                 nastr=spc[k].SubString(1,1);
                         }
             }
            }
      }
       if(spc[k]=="ั1" || spc[k]=="ั"){

           C=spc[k];
      }
      if (spc[k].Length()>3){
       if (spc[k].SubString(1,2)=="ะส"){

        type=spc[k];
      }
      }
      if (type=="ะส566"){
       if (spc[k].Length()==2){
          if(spc[k].SubString(1,1)=="A" || spc[k].SubString(1,1)=="B" || spc[k].SubString(1,1)=="E" || spc[k].SubString(1,1)=="G"){
           t=spc[k];
           norm=t;
          }
       }
      if (spc[k].Length()>=3){
        if (spc[k].SubString(1,2)=="Cn"){
         Cn=spc[k].SubString(3,spc[k].Length());
        }

      }
      if (spc[k].SubString(1,3)=="SMD"){

       V=spc[k];
      }
      }
      if (spc[k].Length()>=3){
            if (spc[k].SubString(spc[k].Length(),1)=="ส" || spc[k].SubString(spc[k].Length(),1)=="ฬ"){
             if (spc[k].SubString(1,2)!="ะส" & spc[k]!="ฮัฬ" & spc[k]!="ฯฬศ"){
                suf=spc[k].SubString(spc[k].Length(),1);
                nominal=spc[k].SubString(1,spc[k].Length()-1);
                }

            }

      }


  }
}
//*********************************************************************************************************************
void changeDelimeter(AnsiString& a){

      int k=a.Length();
      AnsiString temp="";
        for (int i=0;i<k;i++){

             if (a.SubString(i+1,1)==","){
                temp=temp+".";

             }
            else {
               temp=temp+a.SubString(i+1,1);

            }
         }
         a=temp;

}
//**************************************************************************
bool isNumber(char *Symbol)
{
if (*Symbol >= '0' && *Symbol <= '9')
return true;
return false;
}
