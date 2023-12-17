Dim countRmax As Longint                                                               
Dim count1 As Integer
Dim countR As Integer
Dim countC0 AS Integer
Dim countCq As Integer
Dim countQ As Integer
Dim countFptp As Integer
Dim countTmin As Integer
Dim countS As Integer    
  
Dim temp As Integer
Dim temp1 As Integer
  
Dim countBad As Integer
Dim countBadUsl As Integer
  
Dim Rmaxmax As Extended
Dim Rmaxmin As Extended
Dim Rmax As Extended
Dim Rmin As Extended
Dim C0max As Extended
Dim C0min As Extended    
Dim Cqmax As Extended
Dim Cqmin As Extended
Dim Qmax As Extended
Dim Qmin As Extended
Dim Fptpmax As Extended
Dim Fptpmin As Extended
Dim Tminmax As Extended
Dim Tminmin As Extended
    

  
sub MasterData1OnBeforePrint(Sender)
count1=count1+1
temp=0    
temp1=0                
IF <Spc."Rmaxmax"><>"no" Then  IF <PsiData."Rmax">> StrToFloat(<Spc."Rmaxmax">) Then temp1=1
IF <Spc."Rmaxmin"><>"no" Then  IF <PsiData."Rmax">< StrToFloat(<Spc."Rmaxmin">) Then temp1=1
IF <Spc."Rmax"><>"no" Then IF <PsiData."R">> StrToFloat(<Spc."Rmax">) Then temp1=1
IF <Spc."Rmin"><>"no" Then IF <PsiData."R">< StrToFloat(<Spc."Rmin">) Then temp1=1
IF <Spc."Cqmax"><>"no" Then IF <PsiData."Cq">> StrToFloat(<Spc."Cqmax">) Then temp1=1
IF <Spc."Cqmin"><>"no" Then IF <PsiData."Cq">< StrToFloat(<Spc."Cqmin">) Then temp1=1    
IF <Spc."C0max"><>"no" Then IF <PsiData."C0">> StrToFloat(<Spc."C0max">) Then temp1=1                         
IF <Spc."C0min"><>"no" Then IF <PsiData."C0">< StrToFloat(<Spc."C0min">) Then temp1=1
IF <Spc."Qmax"><>"no" Then IF <PsiData."Q">> StrToFloat(<Spc."Qmax">) Then temp1=1                         
IF <Spc."Qmin"><>"no" Then IF <PsiData."Q">< StrToFloat(<Spc."Qmin">) Then temp1=1
IF <Spc."Tmaxmax"><>"no" Then IF <PsiData."Tmax">> StrToFloat(<Spc."Tmaxmax">) Then temp1=1                         
IF <Spc."Tmaxmin"><>"no" Then IF <PsiData."Tmax">< StrToFloat(<Spc."Tmaxmin">) Then temp1=1
IF <Spc."Tminmax"><>"no" Then IF <PsiData."Tmin">> StrToFloat(<Spc."Tminmax">) Then temp1=1                         
IF <Spc."Tminmin"><>"no" Then IF <PsiData."Tmin">< StrToFloat(<Spc."Tminmin">) Then temp1=1
    


  
IF <Spc."C0max"><>"no" Then C0max=StrToFloat(<Spc."C0max">)-Abs(StrToFloat(<Spc."C0max">))*StrToFloat(<Spc."DopuskC0">)/100
IF <Spc."C0min"><>"no" Then C0min=StrToFloat(<Spc."C0min">)+Abs(StrToFloat(<Spc."C0min">))*StrToFloat(<Spc."DopuskC0">)/100
IF <Spc."Cqmax"><>"no" Then Cqmax=StrToFloat(<Spc."Cqmax">)-Abs(StrToFloat(<Spc."Cqmax">))*StrToFloat(<Spc."DopuskCq">)/100
IF <Spc."Cqmin"><>"no" Then Cqmin=StrToFloat(<Spc."Cqmin">)+Abs(StrToFloat(<Spc."Cqmin">))*StrToFloat(<Spc."DopuskCq">)/100    
IF <Spc."Rmax"><>"no" Then Rmax=StrToFloat(<Spc."Rmax">)-StrToFloat(<Spc."Rmax">)*StrToFloat(<Spc."DopuskR">)/100
IF <Spc."Rmin"><>"no" Then Rmin=StrToFloat(<Spc."Rmin">)+StrToFloat(<Spc."Rmin">)*StrToFloat(<Spc."DopuskR">)/100        
IF <Spc."Qmax"><>"no" Then Qmax=StrToFloat(<Spc."Qmax">)-StrToFloat(<Spc."Qmax">)*StrToFloat(<Spc."DopuskQ">)/100
IF <Spc."Qmin"><>"no" Then Qmin=StrToFloat(<Spc."Qmin">)+StrToFloat(<Spc."Qmin">)*StrToFloat(<Spc."DopuskQ">)/100    
IF <Spc."Fptp_2max"><>"no" Then Tmaxmax=StrToFloat(<Spc."Fptp_2max">)-StrToFloat(<Spc."Fptp_2max">)*StrToFloat(<Spc."DopuskFptp">)/100)                            
IF <Spc."Fptp_2min"><>"no" Then Tmaxmin=StrToFloat(<Spc."Fptp_2min">)+StrToFloat(<Spc."Fptp_2max">)*StrToFloat(<Spc."DopuskFptp">)/100)
IF <Spc."Tminmax"><>"no" Then Tminmax=StrToFloat(<Spc."Tminmax">)-StrToFloat(<Spc."DopuskT">)                            
IF <Spc."Tminmin"><>"no" Then Tminmin=StrToFloat(<Spc."Tminmin">)+StrToFloat(<Spc."DopuskT">)    
IF <Spc."Rmaxmax"><>"no" Then Rmaxmax=StrToFloat(<Spc."Rmaxmax">)-StrToFloat(<Spc."Rmax">)*StrToFloat(<Spc."DopuskR">)/100 
IF <Spc."Rmaxmin"><>"no" Then Rmaxmin=StrToFloat(<Spc."Rmaxmin">)+StrToFloat(<Spc."Rmax">)*StrToFloat(<Spc."DopuskR">)/100
  
    

IF <Spc."C0max"><>"no" Then Memo105.Text=FloatToStr(C0max)
IF <Spc."C0min"><>"no" Then Memo106.Text=FloatToStr(C0min)    
IF <Spc."Cqmin"><>"no" Then    Memo65.Text=FloatToStr(Cqmin)
IF <Spc."Cqmax"><>"no" Then    Memo64.Text=FloatToStr(Cqmax)
IF <Spc."Qmin"><>"no" Then    Memo55.Text=FloatToStr(Qmin)
IF <Spc."Qmax"><>"no" Then    Memo54.Text=FloatToStr(Qmax)
IF <Spc."Fptp_2min"><>"no" Then    Memo102.Text=FloatToStr(Fptpmin)
IF <Spc."Fptp_2max"><>"no" Then    Memo101.Text=FloatToStr(Fptpmax)
IF <Spc."Rmaxmin"><>"no" Then    Memo39.Text=FloatToStr(Rmaxmin)
IF <Spc."Rmaxmax"><>"no" Then    Memo13.Text=FloatToStr(Rmaxmax)
IF <Spc."Rmin"><>"no" Then    Memo40.Text=FloatToStr(Rmin)
IF <Spc."Rmax"><>"no" Then    Memo41.Text=FloatToStr(Rmax)  
IF <Spc."Tminmax"><>"no" Then Memo97.Text=FloatToStr(Tminmax)
IF <Spc."Tminmin"><>"no" Then Memo98.Text=FloatToStr(Tminmin)
    


IF <Spc."Rmaxmax"><>"no" Then  Memo45.Text=<Spc."Rmaxmax">
IF <Spc."Rmaxmin"><>"no" Then Memo46.Text=<Spc."Rmaxmin">              
IF <Spc."Rmax"><>"no" Then Memo47.Text=<Spc."Rmax">
IF <Spc."Rmin"><>"no" Then Memo48.Text=<Spc."Rmin">
IF <Spc."Rc_Rbmax"><>"no" Then Memo89.Text=<Spc."Rc_Rbmax">    
IF <Spc."C0max"><>"no" Then Memo50.Text=<Spc."C0max">
IF <Spc."C0min"><>"no" Then Memo51.Text=<Spc."C0min">                  
IF <Spc."Cqmax"><>"no" Then Memo57.Text=<Spc."Cqmax">
IF <Spc."Cqmin"><>"no" Then Memo58.Text=<Spc."Cqmin">                   
IF <Spc."Qmax"><>"no" Then Memo59.Text=<Spc."Qmax">
IF <Spc."Qmin"><>"no" Then Memo84.Text=<Spc."Qmin">                   
IF <Spc."Fptp_2max"><>"no" Then Memo85.Text=<Spc."Fptp_2max">            
IF <Spc."Fptp_2min"><>"no" Then Memo92.Text=<Spc."Fptp_2min">  
IF <Spc."Tminmax"><>"no" Then Memo89.Text=<Spc."Tminmax">            
IF <Spc."Tminmin"><>"no" Then Memo96.Text=<Spc."Tminmin">
    
  
IF <Spc."Rmaxmax"><>"no" Then  IF <PsiData."Rmax">> Rmaxmax Then countRmax=countRmax+1
IF <Spc."Rmaxmin"><>"no" Then IF <PsiData."Rmax"><  Rmaxmin Then countRmax=countRmax+1
IF <Spc."Rmaxmax"><>"no" Then  IF <PsiData."Rmax">> Rmaxmax Then temp=1             
IF <Spc."Rmaxmin"><>"no" Then IF <PsiData."Rmax"><  Rmaxmin Then temp=1              
IF <Spc."Rmax"><>"no" Then IF <PsiData."R">>  Rmax Then countR=countR+1
IF <Spc."Rmin"><>"no" Then IF <PsiData."R"><  Rmin Then countR=countR+1
IF <Spc."Rmax"><>"no" Then IF <PsiData."R">>  Rmax Then temp=1             
IF <Spc."Rmin"><>"no" Then IF <PsiData."R"><  Rmin Then temp=1                 
IF <Spc."C0max"><>"no" Then IF <PsiData."C0">> C0max Then countC0=countC0+1
IF <Spc."C0min"><>"no" Then IF <PsiData."C0">< C0min Then countC0=countC0+1
IF <Spc."C0max"><>"no" Then IF <PsiData."C0">> C0max Then temp=1             
IF <Spc."C0min"><>"no" Then IF <PsiData."C0">< C0min Then temp=1                
IF <Spc."Cqmax"><>"no" Then IF <PsiData."Cq">> Cqmax Then countCq=countCq+1
IF <Spc."Cqmin"><>"no" Then IF <PsiData."Cq">< Cqmin Then countCq=countCq+1
IF <Spc."Cqmax"><>"no" Then IF <PsiData."Cq">> Cqmax Then temp=1             
IF <Spc."Cqmin"><>"no" Then IF <PsiData."Cq">< Cqmin Then temp=1
IF <Spc."Qmax"><>"no" Then IF <PsiData."Q">> Qmax Then countQ=countQ+1
IF <Spc."Qmin"><>"no" Then IF <PsiData."Q">< Qmin Then countQ=countQ+1
IF <Spc."Qmax"><>"no" Then IF <PsiData."Q">> Qmax Then temp=1             
IF <Spc."Qmin"><>"no" Then IF <PsiData."Q">< Qmin Then temp=1    
IF <Spc."Fptp_2max"><>"no" Then IF <PsiData."Fptp_2">> Fptpmax Then countFptp=countFptp+1
IF <Spc."Fptp_2min"><>"no" Then IF <PsiData."Fptp_2">< Fptpmin Then countFptp=countFptp+1
IF <Spc."Fptp_2max"><>"no" Then IF <PsiData."Fptp_2">> Fptpmax Then temp=1             
IF <Spc."Fptp_2min"><>"no" Then IF <PsiData."Fptp_2">< Fptpmin Then temp=1                 
IF <Spc."Tminmax"><>"no" Then IF <PsiData."Tmin">> Tminmax Then countTmin=countTmin+1
IF <Spc."Tminmin"><>"no" Then IF <PsiData."Tmin">< Tminmin Then countTmin=countTmin+1
IF <Spc."Tminmax"><>"no" Then IF <PsiData."Tmin">> Tminmax Then temp=1             
IF <Spc."Tminmin"><>"no" Then IF <PsiData."Tmin">< Tminmin Then temp=1
    
                
  
IF temp=1 Then countBad=countBad+1
IF temp1=1 Then countBadUsl=countBadUsl+1    
Memo73.Text=IntToStr(countRmax)
Memo72.Text=IntToStr(count1-countRmax)
Memo75.Text=IntToStr(countR)
Memo74.Text=IntToStr(count1-countR)
Memo77.Text=IntToStr(countC0)
Memo76.Text=IntToStr(count1-countC0)
Memo63.Text=IntToStr(countCq)
Memo61.Text=IntToStr(count1-countCq)    
Memo79.Text=IntToStr(countQ)
Memo78.Text=IntToStr(count1-countQ)
Memo87.Text=IntToStr(countFptp)
Memo86.Text=IntToStr(count1-countFptp)
Memo88.Text=IntToStr(countTmin)
Memo56.Text=IntToStr(count1-countTmin)  
  
  
frxDBDataset2Good.Text=IntToStr(count1-countBad)
frxDBDataset2Bad.Text=IntToStr(countBadUsl)  
Memo60.Text=IntToStr(countBad-CountBadUsl)
  
IF temp1=0 Then IF temp=1 THEN PsiDataStatus.Text="Усл.Годен"
IF temp1=1 Then IF temp=1 THEN PsiDataStatus.Text="Брак"
IF temp1=0 Then IF temp=0 THEN PsiDataStatus.Text="Годен"
IF <PsiData."Status2">="Bad" THEN PsiDataStatus.Text="Незамер"
IF <PsiData."Status2">="Bad" THEN temp1=1
IF <PsiData."Status2">="Bad" THEN temp=1    
  
IF temp1=1 Then IF temp=1 Then PsiDataRmax.Color=clSilver                              
IF temp1=0 Then IF temp=0 Then PsiDataRmax.Color=clNone
IF temp1=0 Then IF temp=1 Then PsiDataRmax.Color=clYellow                
IF temp1=1 Then IF temp=1 Then PsiDataPosition.Color=clSilver     
IF temp1=0 Then IF temp=0 Then PsiDataPosition.Color=clNone
IF temp1=0 Then IF temp=1 Then PsiDataPosition.Color=clYellow    
IF temp1=1 Then IF temp=1 Then PsiDataN.Color=clSilver     
IF temp1=0 Then IF temp=0 Then PsiDataN.Color=clNone
IF temp1=0 Then IF temp=1 Then PsiDataN.Color=clYellow    
IF temp1=1 Then IF temp=1 Then PsiDataR.Color=clSilver     
IF temp1=0 Then IF temp=0 Then PsiDataR.Color=clNone
IF temp1=0 Then IF temp=1 Then PsiDataR.Color=clYellow    
IF temp1=1 Then IF temp=1 Then PsiDataC0.Color=clSilver     
IF temp1=0 Then IF temp=0 Then PsiDataC0.Color=clNone
IF temp1=0 Then IF temp=1 Then PsiDataC0.Color=clYellow    
IF temp1=1 Then IF temp=1 Then PsiDataCq.Color=clSilver     
IF temp1=0 Then IF temp=0 Then PsiDataCq.Color=clNone
IF temp1=0 Then IF temp=1 Then PsiDataCq.Color=clYellow    
IF temp1=1 Then IF temp=1 Then PsiDataQ.Color=clSilver     
IF temp1=0 Then IF temp=0 Then PsiDataQ.Color=clNone
IF temp1=0 Then IF temp=1 Then PsiDataQ.Color=clYellow    
IF temp1=1 Then IF temp=1 Then PsiDataStatus.Color=clSilver     
IF temp1=0 Then IF temp=0 Then PsiDataStatus.Color=clNone
IF temp1=0 Then IF temp=1 Then PsiDataStatus.Color=clYellow    
IF temp1=1 Then IF temp=1 Then PsiDataFptp_2.Color=clSilver     
IF temp1=0 Then IF temp=0 Then PsiDataFptp_2.Color=clNone
IF temp1=0 Then IF temp=1 Then PsiDataFptp_2.Color=clYellow
IF temp1=1 Then IF temp=1 Then PsiDataTmin.Color=clSilver     
IF temp1=0 Then IF temp=0 Then PsiDataTmin.Color=clNone
IF temp1=0 Then IF temp=1 Then PsiDataTmin.Color=clYellow


end sub  
