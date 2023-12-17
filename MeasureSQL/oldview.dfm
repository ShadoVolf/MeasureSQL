object OldViewForm: TOldViewForm
  Left = 450
  Top = 199
  BorderStyle = bsNone
  Caption = 'OldViewForm'
  ClientHeight = 620
  ClientWidth = 482
  Color = clBlack
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clYellow
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  Position = poMainFormCenter
  PixelsPerInch = 96
  TextHeight = 13
  object RzPanel1: TRzPanel
    Left = 0
    Top = 579
    Width = 482
    Height = 41
    Align = alBottom
    ParentColor = True
    TabOrder = 0
    object btnClose: TRzButton
      Left = 399
      Top = 8
      FrameColor = clRed
      Caption = #1047#1072#1082#1088#1099#1090#1100
      Color = clDefault
      HotTrack = True
      HotTrackColor = clRed
      TabOrder = 0
      OnClick = btnCloseClick
    end
    object btnPrint: TRzButton
      Left = 15
      Top = 16
      Height = 17
      FrameColor = clLime
      Caption = #1055#1077#1095#1072#1090#1100
      Color = clDefault
      HotTrack = True
      HotTrackColor = clRed
      TabOrder = 1
      OnClick = btnPrintClick
    end
  end
  object RSGrid: TRzStringGrid
    Left = 0
    Top = 0
    Width = 482
    Height = 579
    Align = alClient
    Color = clBlack
    FixedColor = clBlack
    FixedCols = 0
    TabOrder = 1
    OnDrawCell = RSGridDrawCell
    FixedLineColor = clRed
    LineColor = clLime
  end
  object frxDBDataset1: TfrxDBDataset
    UserName = 'Old'
    CloseDataSource = False
    FieldAliases.Strings = (
      'ID=ID'
      'N=N'
      'MSK=MSK'
      'Measure1=Measure1'
      'Measure2=Measure2'
      'Measure3=Measure3'
      'Measure4=Measure4'
      'Measure5=Measure5'
      'old1=old1'
      'old2=old2'
      'old3=old3'
      'File1=File1'
      'File2=File2'
      'File3=File3'
      'File4=File4'
      'File5=File5'
      'Old1B=Old1B'
      'Old2B=Old2B'
      'Old3B=Old3B'
      'M1=M1'
      'M2=M2'
      'M3=M3'
      'M4=M4'
      'M5=M5'
      'Spc=Spc'
      'Old4=Old4'
      'Status=Status'
      'Old4B=Old4B'
      'MeasureID=MeasureID'
      'Old_ID=Old_ID')
    DataSet = DataModule2.old
    BCDToCurrency = False
    Left = 176
    Top = 232
  end
  object frxDBDataset2: TfrxDBDataset
    UserName = 'Spc'
    CloseDataSource = False
    FieldAliases.Strings = (
      'Name=Name'
      'NameR=NameR'
      'C0=C0'
      'Cq=Cq'
      'R=R'
      'Number=Number'
      'F=F'
      'Ft=Ft'
      'Q=Q'
      'L=L'
      'S=S'
      'M=M'
      'Tmax=Tmax'
      'Tmin=Tmin'
      'TurnOver=TurnOver'
      'RR=RR'
      'Tip=Tip'
      'Rmx=Rmx'
      'Rmn=Rmn'
      'Fmx=Fmx'
      'Fmn=Fmn'
      'Fptp=Fptp'
      'Fptp_2=Fptp_2'
      'F0FL=F0FL'
      'Rb=Rb'
      'Rc_Rb=Rc_Rb'
      'Rsp1=Rsp1'
      'Rsp2=Rsp2'
      'Rsp3=Rsp3'
      'Position=Position'
      'Snumber=Snumber'
      'Status=Status'
      'Data=Data'
      'Stat=Stat'
      'norm=norm'
      'BD=BD'
      'Temperature=Temperature'
      'BadOnly=BadOnly'
      'GoodOnly=GoodOnly'
      'OnlyNumbers=OnlyNumbers'
      'PrintGraph=PrintGraph'
      'Temperatureavto=Temperatureavto'
      'PrintProtokol=PrintProtokol'
      'CbFt=CbFt'
      'CbR=CbR'
      'CbQ=CbQ'
      'CbC0=CbC0'
      'CbCq=CbCq'
      'CbL=CbL'
      'CbTmax=CbTmax'
      'CbTmin=CbTmin'
      'CbTo=CbTo'
      'CbS=CbS'
      'CbM=CbM'
      'CbFmax=CbFmax'
      'CbFmin=CbFmin'
      'CbFptp=CbFptp'
      'CbRmax=CbRmax'
      'CbRmin=CbRmin'
      'CbRR=CbRR'
      'CbRb=CbRb'
      'CbRc_Rb=CbRc_Rb'
      'CbF=CbF'
      'CbF0-Fl=CbF0-Fl'
      'CbRsp1=CbRsp1'
      'CbRsp2=CbRsp2'
      'CbRsp3=CbRsp3'
      'Rmax=Rmax'
      'Rmin=Rmin'
      'Fmax=Fmax'
      'Fmin=Fmin'
      'Qmax=Qmax'
      'Qmin=Qmin'
      'C0max=C0max'
      'C0min=C0min'
      'Cqmax=Cqmax'
      'Cqmin=Cqmin'
      'Tmaxmax=Tmaxmax'
      'Tmaxmin=Tmaxmin'
      'Tminmax=Tminmax'
      'Tomax=Tomax'
      'Tomin=Tomin'
      'Smax=Smax'
      'Smin=Smin'
      'Mmax=Mmax'
      'Mmin=Mmin'
      'Rmaxmax=Rmaxmax'
      'Rmaxmin=Rmaxmin'
      'Fmaxmax=Fmaxmax'
      'Fmaxmin=Fmaxmin'
      'Fptpmax=Fptpmax'
      'Fptp_2max=Fptp_2max'
      'Fptp_2min=Fptp_2min'
      'Fptpmin=Fptpmin'
      'F0FLmax=F0FLmax'
      'F0FLmin=F0FLmin'
      'Nominal=Nominal'
      'RRmax=RRmax'
      'RRmin=RRmin'
      'points=points'
      'A=A'
      'B=B'
      'Load=Load'
      'Loadvalue=Loadvalue'
      'Profile=Profile'
      'Tminmin=Tminmin'
      'Tnastr=Tnastr'
      'Tpar=Tpar'
      'Fminmax=Fminmax'
      'Fminmin=Fminmin'
      'Tnakl=Tnakl'
      'Type=Type'
      'HC=HC'
      'Protokol=Protokol'
      'Power=Power'
      'LoadType=LoadType'
      'String=String'
      'TU=TU'
      'Rbmax=Rbmax'
      'Rbmin=Rbmin'
      'RbT=RbT'
      'Rc_Rbmax=Rc_Rbmax'
      'Bmax=Bmax'
      'Tf=Tf'
      'Tft=Tft'
      'Tc0=Tc0'
      'Tcq=Tcq'
      'Tq=Tq'
      'TbBegin=TbBegin'
      'TfmxEnd=TfmxEnd'
      'TfmnBegin=TfmnBegin'
      'TfmnEnd=TfmnEnd'
      'TfptpBegin=TfptpBegin'
      'TfptpEnd=TfptpEnd'
      'TrrBegin=TrrBegin'
      'TrrEnd=TrrEnd'
      'TrmxBegin=TrmxBegin'
      'TrmxEnd=TrmxEnd'
      'TrmnBegin=TrmnBegin'
      'TrmnEnd=TrmnEnd'
      'Lmax=Lmax'
      'Lmin=Lmin'
      'Lt=Lt'
      'Rsp1max=Rsp1max'
      'Rsp1min=Rsp1min'
      'Rsp2max=Rsp2max'
      'Rsp2min=Rsp2min'
      'Rsp3max=Rsp3max'
      'Rsp3min=Rsp3min'
      'Rsp1tBegin=Rsp1tBegin'
      'Rsp1tEnd=Rsp1tEnd'
      'Rsp2tBegin=Rsp2tBegin'
      'Rsp2tEnd=Rsp2tEnd'
      'Rsp3tBegin=Rsp3tBegin'
      'Rsp3tEnd=Rsp3tEnd'
      'ColorF0-Fl=ColorF0-Fl'
      'ColorRsp1=ColorRsp1'
      'ColorRsp2=ColorRsp2'
      'ColorRsp3=ColorRsp3'
      'SPC=SPC'
      'TmBegin=TmBegin'
      'TmEnd=TmEnd'
      'TbEnd=TbEnd'
      'CbFptp_2=CbFptp_2'
      'CbCl=CbCl'
      'ID=ID'
      'Print=Print'
      'FTx=FTx'
      'FTxt=FTxt'
      'FTmax=FTmax'
      'FTmin=FTmin'
      'DopuskCq=DopuskCq'
      'DopuskC0=DopuskC0'
      'DopuskF=DopuskF'
      'DopuskR=DopuskR'
      'DopuskQ=DopuskQ'
      'DopuskFT=DopuskFT'
      'DopuskFptp=DopuskFptp'
      'DopuskSR=DopuskSR'
      'DopuskFi=DopuskFi'
      'DopuskRR=DopuskRR'
      'DopuskSlope=DopuskSlope'
      'Text=Text'
      'Shum=Shum'
      'ShMax=ShMax'
      'ShMin=ShMin'
      'Old1=Old1'
      'old1max=old1max'
      'old1min=old1min'
      'Old2=Old2'
      'Old2Max=Old2Max'
      'old2min=old2min'
      'Old3=Old3'
      'Old3Max=Old3Max'
      'Old3Min=Old3Min'
      'Rmax-Rmin=Rmax-Rmin'
      'RR1max=RR1max'
      'RR1min=RR1min'
      'Told1=Told1'
      'Ft1=Ft1'
      'Ft2=Ft2'
      'Ft3=Ft3'
      'Ft4=Ft4'
      'Ft1max=Ft1max'
      'Ft2max=Ft2max'
      'Ft3max=Ft3max'
      'Ft4max=Ft4max'
      'Ft1min=Ft1min'
      'Ft2min=Ft2min'
      'Ft3min=Ft3min'
      'Ft4min=Ft4min'
      'Ft1t=Ft1t'
      'Ft2t=Ft2t'
      'Ft3t=Ft3t'
      'Ft4t=Ft4t'
      'Fmaxm=Fmaxm'
      'Old2n=Old2n'
      'polinom=polinom'
      'C0_C1=C0_C1'
      'C0_C1max=C0_C1max'
      'C0_C1min=C0_C1min'
      'C0_C1_T=C0_C1_T'
      'RR2=RR2'
      'RR2max=RR2max'
      'RR2min=RR2min'
      'GraphF=GraphF'
      'GraphP=GraphP'
      'Jump=Jump'
      'JumpMax=JumpMax'
      'JumpMin=JumpMin'
      'JumpPTP=JumpPTP'
      'JumpT=JumpT'
      'JumpP=JumpP'
      'MonoT=MonoT'
      'Ftcode=Ftcode'
      'FnastrHZ=FnastrHZ'
      'RR3=RR3'
      'RR3max=RR3max'
      'RR3min=RR3min'
      'TypeF=TypeF'
      'Nom=Nom'
      'C1_2C0=C1_2C0'
      'C1_2C0min=C1_2C0min'
      'C1_2C0max=C1_2C0max'
      'C1_2C0T=C1_2C0T'
      'Spc_ID=Spc_ID'
      'DopuskFi_Real=DopuskFi_Real'
      'Ftgk=Ftgk'
      'Rtgk=Rtgk'
      'DopuskF_P=DopuskF_P'
      'RR4=RR4'
      'RR4max=RR4max'
      'RR4min=RR4min'
      'RR5=RR5'
      'RR5max=RR5max'
      'RR5min=RR5min'
      'DopuskT=DopuskT'
      'PrintProfile=PrintProfile'
      'TGK=TGK'
      'DopuskFtgk=DopuskFtgk'
      'DopuskRtgk=DopuskRtgk'
      'MetalAu=MetalAu'
      'MetalAg=MetalAg'
      'MetalNi=MetalNi'
      'MinNar=MinNar'
      'Hran=Hran'
      'Dopusk_L=Dopusk_L'
      'Garmonica=Garmonica'
      'DopuskRcRb=DopuskRcRb'
      'IntervalName=IntervalName'
      'Rc_Rbmin=Rc_Rbmin'
      'Anomal=Anomal'
      'AnomalR=AnomalR'
      'Dead=Dead')
    OpenDataSource = False
    DataSet = DataModule2.SqlSpec
    BCDToCurrency = False
    Left = 216
    Top = 232
  end
  object frxDBDataset3: TfrxDBDataset
    UserName = 'Dopusk'
    CloseDataSource = False
    FieldAliases.Strings = (
      'ID=ID'
      'Name=Name'
      'Password=Password'
      #1060#1072#1084#1080#1083#1080#1103'='#1060#1072#1084#1080#1083#1080#1103
      #1048#1084#1103'='#1048#1084#1103
      #1054#1090#1095#1077#1089#1090#1074#1086'='#1054#1090#1095#1077#1089#1090#1074#1086
      #1044#1086#1087#1091#1089#1082'='#1044#1086#1087#1091#1089#1082
      'SaundersID=SaundersID'
      'MarkerID=MarkerID'
      'DataBaseID=DataBaseID'
      'AccessLevel=AccessLevel'
      'Email=Email'
      'Morion Login=Morion Login'
      'Morion password=Morion password'
      'Phone=Phone'
      #1050#1086#1084#1087#1083#1077#1082#1089'='#1050#1086#1084#1087#1083#1077#1082#1089
      #1054#1090#1076#1077#1083'='#1054#1090#1076#1077#1083
      'Access=Access'
      'Printer=Printer'
      'Fname=Fname'
      'PName=PName'
      'NName=NName'
      'BarCodeData=BarCodeData')
    OpenDataSource = False
    DataSet = DataModule1.Dostup
    BCDToCurrency = False
    Left = 248
    Top = 232
  end
  object frxReport1: TfrxReport
    Version = '4.9'
    DotMatrixReport = False
    IniFile = '\Software\Fast Reports'
    PreviewOptions.Buttons = [pbPrint, pbLoad, pbSave, pbExport, pbZoom, pbFind, pbOutline, pbPageSetup, pbTools, pbEdit, pbNavigator, pbExportQuick]
    PreviewOptions.Zoom = 1
    PrintOptions.Printer = 'Default'
    PrintOptions.PrintOnSheet = 0
    ReportOptions.CreateDate = 40623.4751934954
    ReportOptions.LastChange = 41717.6016073958
    ScriptLanguage = 'BasicScript'
    ScriptText.Strings = (
      'Dim count1 As Integer'
      'Dim countF1 As Integer'
      'Dim countF2 As Integer    '
      'Dim temp As Integer'
      'Dim countBad As Integer    '
      ''
      'sub MasterData1OnBeforePrint(Sender)'
      'count1=count1+1'
      'temp=0    '
      
        'IF <Spc."Old1max"><>"no" Then  IF <Old."old1">> StrToFloat(<Spc.' +
        '"old1max">) Then countF1=countF1+1'
      
        'IF <Spc."Old1max"><>"no" Then  IF <Old."old1">> StrToFloat(<Spc.' +
        '"old1max">) Then temp=1'
      
        'IF <Spc."Old1min"><>"no" Then  IF <Old."old1">< StrToFloat(<Spc.' +
        '"old1min">) Then countF1=countF1+1'
      
        'IF <Spc."Old1min"><>"no" Then  IF <Old."old1">< StrToFloat(<Spc.' +
        '"old1min">) Then temp=1    '
      '  '
      
        'IF temp=1 Then countBad=countBad+1                              ' +
        '               '
      'Memo23.Text=IntToStr(countF1)'
      'Memo24.Text=IntToStr(count1-countF2)    '
      'Memo26.Text=IntToStr(count1-countBad)'
      'Memo27.Text=IntToStr(countBad)  '
      '  '
      
        'IF <Old."Status">="'#1041#1088#1072#1082'" Then Memo50.Color=clSilver             ' +
        '                 '
      'IF <Old."Status">="'#1043#1086#1076#1077#1085'" Then Memo50.Color=clNone'
      
        'IF <Old."Status">="'#1041#1088#1072#1082'" Then Memo49.Color=clSilver             ' +
        '                 '
      'IF <Old."Status">="'#1043#1086#1076#1077#1085'" Then Memo49.Color=clNone'
      
        'IF <Old."Status">="'#1041#1088#1072#1082'" Then OldStatus.Color=clSilver          ' +
        '                    '
      'IF <Old."Status">="'#1043#1086#1076#1077#1085'" Then OldStatus.Color=clNone    '
      ''
      'end sub')
    Left = 144
    Top = 232
    Datasets = <
      item
        DataSet = frxDBDataset3
        DataSetName = 'Dopusk'
      end
      item
        DataSet = frxDBDataset1
        DataSetName = 'Old'
      end
      item
        DataSet = frxDBDataset2
        DataSetName = 'Spc'
      end>
    Variables = <>
    Style = <>
    object Data: TfrxDataPage
      Height = 1000
      Width = 1000
    end
    object Page1: TfrxReportPage
      PaperWidth = 210
      PaperHeight = 297
      PaperSize = 9
      LeftMargin = 10
      RightMargin = 10
      TopMargin = 10
      BottomMargin = 10
      object MasterData1: TfrxMasterData
        Height = 18.89765
        Top = 411.96877
        Width = 718.1107
        OnBeforePrint = 'MasterData1OnBeforePrint'
        DataSet = frxDBDataset1
        DataSetName = 'Old'
        RowCount = 0
        object OldStatus: TfrxMemoView
          Left = 188.9765
          Width = 90.70872
          Height = 18.89765
          ShowHint = False
          DataField = 'Status'
          DataSet = frxDBDataset1
          DataSetName = 'Old'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8 = (
            '[Old."Status"]')
          ParentFont = False
          VAlign = vaCenter
        end
        object Memo49: TfrxMemoView
          Left = 94.48825
          Width = 94.48825
          Height = 18.89765
          ShowHint = False
          DataField = 'old1'
          DataSet = frxDBDataset1
          DataSetName = 'Old'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8 = (
            '[Old."old1"]')
          ParentFont = False
          VAlign = vaCenter
        end
        object Memo50: TfrxMemoView
          Width = 94.48825
          Height = 18.89765
          ShowHint = False
          DataField = 'N'
          DataSet = frxDBDataset1
          DataSetName = 'Old'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8 = (
            '[Old."N"]')
          ParentFont = False
          VAlign = vaCenter
        end
        object Memo51: TfrxMemoView
          Left = 279.68522
          Width = 438.42548
          Height = 18.89765
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          ParentFont = False
          VAlign = vaCenter
        end
      end
      object PageFooter1: TfrxPageFooter
        Height = 185.19697
        Top = 608.50433
        Width = 718.1107
        object Shape4: TfrxShapeView
          Width = 718.1107
          Height = 56.69295
          ShowHint = False
        end
        object Memo1: TfrxMemoView
          Left = 638.74057
          Top = 166.29932
          Width = 75.5906
          Height = 18.89765
          ShowHint = False
          HAlign = haRight
          Memo.UTF8 = (
            '[Page#]')
        end
        object Memo2: TfrxMemoView
          Left = 7.55906
          Top = 166.29932
          Width = 94.48825
          Height = 18.89765
          ShowHint = False
          Memo.UTF8 = (
            #1056#8217#1057#8249#1056#1111#1056#1109#1056#187#1056#1029#1056#1105#1056#187)
        end
        object Date: TfrxMemoView
          Left = 374.17347
          Top = 166.29932
          Width = 79.37013
          Height = 18.89765
          ShowHint = False
          Memo.UTF8 = (
            '[Date]')
        end
        object Memo4: TfrxMemoView
          Left = 514.01608
          Top = 166.29932
          Width = 94.48825
          Height = 18.89765
          ShowHint = False
          Memo.UTF8 = (
            #1056#1038#1057#8218#1057#1026#1056#176#1056#1029#1056#1105#1057#8224#1056#176)
        end
        object Memo5: TfrxMemoView
          Width = 83.14966
          Height = 18.89765
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          Memo.UTF8 = (
            #1056#1116#1056#1109#1057#1026#1056#1112#1057#8249)
          ParentFont = False
        end
        object Memo20: TfrxMemoView
          Top = 18.8976499999999
          Width = 83.14966
          Height = 18.89765
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          Memo.UTF8 = (
            #1056#1114#1056#1105#1056#1029)
          ParentFont = False
        end
        object Memo21: TfrxMemoView
          Top = 37.7952999999999
          Width = 83.14966
          Height = 18.89765
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          Memo.UTF8 = (
            #1056#1114#1056#176#1056#1108#1057#1027)
          ParentFont = False
        end
        object Line17: TfrxLineView
          Top = 18.8976499999999
          Width = 718.1107
          ShowHint = False
          Frame.Typ = [ftTop]
        end
        object Line18: TfrxLineView
          Top = 37.7952999999999
          Width = 718.1107
          ShowHint = False
          Frame.Typ = [ftTop]
        end
        object Line19: TfrxLineView
          Left = 94.48825
          Height = 56.69295
          ShowHint = False
          Frame.Typ = [ftLeft]
        end
        object Line20: TfrxLineView
          Left = 188.9765
          Height = 56.69295
          ShowHint = False
          Frame.Typ = [ftLeft]
        end
        object Line21: TfrxLineView
          Left = 279.68522
          Height = 56.69295
          ShowHint = False
          Frame.Typ = [ftLeft]
        end
        object frxDBDataset2old1max: TfrxMemoView
          Left = 117.16543
          Top = 37.7952999999999
          Width = 60.47248
          Height = 18.89765
          ShowHint = False
          DataField = 'old1max'
          DataSet = frxDBDataset2
          DataSetName = 'Spc'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlue
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          Memo.UTF8 = (
            '[Spc."old1max"]')
          ParentFont = False
        end
        object frxDBDataset2old1min: TfrxMemoView
          Left = 113.3859
          Top = 18.8976499999999
          Width = 64.25201
          Height = 18.89765
          ShowHint = False
          DataField = 'old1min'
          DataSet = frxDBDataset2
          DataSetName = 'Spc'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlue
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          Memo.UTF8 = (
            '[Spc."old1min"]')
          ParentFont = False
        end
        object DostupName: TfrxMemoView
          Left = 113.3859
          Top = 166.29932
          Width = 238.11039
          Height = 18.89765
          ShowHint = False
          DataField = 'Name'
          DataSet = frxDBDataset3
          DataSetName = 'Dopusk'
          Memo.UTF8 = (
            '[Dopusk."Name"]')
        end
      end
      object PageHeader1: TfrxPageHeader
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clBlack
        Font.Height = -13
        Font.Name = 'Arial'
        Font.Style = []
        Height = 41.57483
        ParentFont = False
        Top = 309.92146
        Width = 718.1107
        object Shape3: TfrxShapeView
          Width = 718.1107
          Height = 41.57483
          ShowHint = False
        end
        object Memo16: TfrxMemoView
          Width = 94.48825
          Height = 41.57483
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8 = (
            #1056#1116#1056#1109#1056#1112#1056#181#1057#1026)
          ParentFont = False
          VAlign = vaCenter
        end
        object Memo17: TfrxMemoView
          Left = 94.48825
          Width = 94.48825
          Height = 41.57483
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8 = (
            '     F2-F1,1E-6'
            '      (7 '#1057#1027#1057#1107#1057#8218#1056#1109#1056#1108')')
          ParentFont = False
          VAlign = vaCenter
        end
        object Memo19: TfrxMemoView
          Left = 188.9765
          Width = 90.70872
          Height = 41.57483
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8 = (
            #1056#1038#1057#8218#1056#176#1057#8218#1057#1107#1057#1027)
          ParentFont = False
          VAlign = vaCenter
        end
      end
      object Footer1: TfrxFooter
        Height = 94.48825
        Top = 453.5436
        Width = 718.1107
        object Shape2: TfrxShapeView
          Width = 718.1107
          Height = 94.48825
          ShowHint = False
        end
        object Memo10: TfrxMemoView
          Width = 94.48825
          Height = 18.89765
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clRed
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          Memo.UTF8 = (
            #1056#8220#1056#1109#1056#1169#1056#1029#1057#8249#1057#8230)
          ParentFont = False
        end
        object Memo11: TfrxMemoView
          Top = 18.8976499999999
          Width = 94.48825
          Height = 18.89765
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clRed
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          Memo.UTF8 = (
            #1056#8216#1057#1026#1056#176#1056#1108)
          ParentFont = False
        end
        object Line5: TfrxLineView
          Top = 18.8976499999999
          Width = 718.1107
          ShowHint = False
          Frame.Typ = [ftTop]
        end
        object Memo12: TfrxMemoView
          Top = 37.7953000000001
          Width = 94.48825
          Height = 18.89765
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlue
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          Memo.UTF8 = (
            #1056#1114#1056#176#1056#1108#1057#1027)
          ParentFont = False
        end
        object Memo13: TfrxMemoView
          Top = 56.6929500000001
          Width = 94.48825
          Height = 18.89765
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlue
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          Memo.UTF8 = (
            #1056#1114#1056#1105#1056#1029)
          ParentFont = False
        end
        object Memo14: TfrxMemoView
          Top = 75.5906000000002
          Width = 94.48825
          Height = 18.89765
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlue
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          Memo.UTF8 = (
            #1056#1038#1057#1026#1056#181#1056#1169#1056#1029#1056#181#1056#181)
          ParentFont = False
        end
        object Line6: TfrxLineView
          Top = 37.7953000000001
          Width = 718.1107
          ShowHint = False
          Frame.Typ = [ftTop]
        end
        object Line7: TfrxLineView
          Top = 56.6929500000001
          Width = 718.1107
          ShowHint = False
          Frame.Typ = [ftTop]
        end
        object Line8: TfrxLineView
          Top = 75.5905999999999
          Width = 718.1107
          ShowHint = False
          Frame.Typ = [ftTop]
        end
        object Line9: TfrxLineView
          Left = 94.48825
          Height = 94.48825
          ShowHint = False
          Frame.Typ = [ftLeft]
        end
        object Line10: TfrxLineView
          Left = 188.9765
          Height = 94.48825
          ShowHint = False
          Frame.Typ = [ftLeft]
        end
        object Line11: TfrxLineView
          Left = 279.68522
          Height = 94.48825
          ShowHint = False
          Frame.Typ = [ftLeft]
        end
        object Memo15: TfrxMemoView
          Left = 415.7483
          Width = 94.48825
          Height = 18.89765
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlue
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          Memo.UTF8 = (
            #1056#8217#1057#1027#1056#181#1056#1110#1056#1109)
          ParentFont = False
        end
        object SysMemo1: TfrxSysMemoView
          Left = 540.47279
          Width = 94.48825
          Height = 18.89765
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlue
          Font.Height = -12
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          Memo.UTF8 = (
            '[COUNT(MasterData1)]')
          ParentFont = False
        end
        object SysMemo2: TfrxSysMemoView
          Left = 109.60637
          Top = 37.7953000000001
          Width = 64.25201
          Height = 18.89765
          ShowHint = False
          DisplayFormat.FormatStr = '%2.2f'
          DisplayFormat.Kind = fkNumeric
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlue
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          Memo.UTF8 = (
            '[MAX(<Old."old1">,MasterData1)]')
          ParentFont = False
        end
        object SysMemo3: TfrxSysMemoView
          Left = 109.60637
          Top = 56.6929500000001
          Width = 64.25201
          Height = 18.89765
          ShowHint = False
          DisplayFormat.FormatStr = '%2.2f'
          DisplayFormat.Kind = fkNumeric
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlue
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          Memo.UTF8 = (
            '[MIN(<Old."old1">,MasterData1)]')
          ParentFont = False
        end
        object SysMemo4: TfrxSysMemoView
          Left = 109.60637
          Top = 75.5906000000002
          Width = 64.25201
          Height = 18.89765
          ShowHint = False
          DisplayFormat.FormatStr = '%2.2f'
          DisplayFormat.Kind = fkNumeric
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlue
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          Memo.UTF8 = (
            '[AVG(<Old."old1">,MasterData1)]')
          ParentFont = False
        end
        object Memo22: TfrxMemoView
          Left = 117.16543
          Width = 56.69295
          Height = 18.89765
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlue
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          ParentFont = False
        end
        object Memo23: TfrxMemoView
          Left = 117.16543
          Top = 18.89765
          Width = 60.47248
          Height = 18.89765
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlue
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          ParentFont = False
        end
        object Memo26: TfrxMemoView
          Left = 215.43321
          Width = 49.13389
          Height = 18.89765
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlue
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          ParentFont = False
        end
        object Memo27: TfrxMemoView
          Left = 215.43321
          Top = 18.89765
          Width = 45.35436
          Height = 18.89765
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlue
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          ParentFont = False
        end
      end
      object ReportTitle2: TfrxReportTitle
        Height = 268.34663
        Top = 18.89765
        Width = 718.1107
        object Memo6: TfrxMemoView
          Left = 7.55906
          Top = 3.77953000000002
          Width = 143.62214
          Height = 18.89765
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -16
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          Memo.UTF8 = (
            #1056#1032#1057#8230#1056#1109#1056#1169' '#1057#8225#1056#176#1057#1027#1057#8218#1056#1109#1057#8218#1057#8249)
          ParentFont = False
        end
        object Memo9: TfrxMemoView
          Left = 11.33859
          Top = 181.41744
          Width = 94.48825
          Height = 18.89765
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -16
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          Memo.UTF8 = (
            #1056#164#1056#176#1056#8470#1056#187#1057#8249)
          ParentFont = False
        end
        object frxDBDataset1File1: TfrxMemoView
          Left = 11.33859
          Top = 207.87415
          Width = 192.75603
          Height = 18.89765
          ShowHint = False
          DataField = 'File1'
          DataSet = frxDBDataset1
          DataSetName = 'Old'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = []
          Memo.UTF8 = (
            '[Old."File1"]')
          ParentFont = False
        end
        object frxDBDataset1File2: TfrxMemoView
          Left = 11.33859
          Top = 238.11039
          Width = 188.9765
          Height = 18.89765
          ShowHint = False
          DataField = 'File2'
          DataSet = frxDBDataset1
          DataSetName = 'Old'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = []
          Memo.UTF8 = (
            '[Old."File2"]')
          ParentFont = False
        end
        object Memo39: TfrxMemoView
          Left = 7.55906
          Top = 37.7953
          Width = 64.25201
          Height = 18.89765
          ShowHint = False
          Memo.UTF8 = (
            #1056#1114#1056#1038#1056#1113)
        end
        object Memo52: TfrxMemoView
          Left = 7.55906
          Top = 75.5906
          Width = 143.62214
          Height = 18.89765
          ShowHint = False
          Memo.UTF8 = (
            #1056#1116#1056#1109#1056#1112#1056#181#1057#1026' '#1056#1111#1057#1026#1056#1109#1057#8218#1056#1109#1056#1108#1056#1109#1056#187#1056#176)
        end
        object BarCode2: TfrxBarCodeView
          Left = 204.09462
          Top = 79.37013
          Width = 129
          Height = 18.89765
          ShowHint = False
          BarType = bcCode39Extended
          Expression = '<Old."MeasureID">'
          Rotation = 0
          ShowText = False
          Text = '12345678'
          WideBarRatio = 2
          Zoom = 1
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -12
          Font.Name = 'Arial'
          Font.Style = []
        end
        object Memo53: TfrxMemoView
          Left = 7.55906
          Top = 158.74026
          Width = 143.62214
          Height = 18.89765
          ShowHint = False
          Memo.UTF8 = (
            #1056#1038#1056#1111#1056#181#1057#8224#1056#1105#1057#8222#1056#1105#1056#1108#1056#176#1057#8224#1056#1105#1057#1039)
        end
        object BarCode3: TfrxBarCodeView
          Left = 204.09462
          Top = 154.96073
          Width = 129
          Height = 18.89765
          ShowHint = False
          BarType = bcCode39Extended
          Expression = '<Spc."ID">'
          Rotation = 0
          ShowText = False
          Text = '12345678'
          WideBarRatio = 2
          Zoom = 1
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -12
          Font.Name = 'Arial'
          Font.Style = []
        end
        object Memo3: TfrxMemoView
          Left = 113.3859
          Top = 37.7953
          Width = 158.74026
          Height = 18.89765
          ShowHint = False
          DataField = 'MSK'
          DataSet = frxDBDataset1
          DataSetName = 'Old'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = [fsBold, fsItalic]
          Memo.UTF8 = (
            '[Old."MSK"]')
          ParentFont = False
        end
        object Memo7: TfrxMemoView
          Left = 177.63791
          Top = 3.77953
          Width = 340.1577
          Height = 18.89765
          ShowHint = False
          DataField = 'Name'
          DataSet = frxDBDataset2
          DataSetName = 'Spc'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = [fsBold, fsUnderline]
          Memo.UTF8 = (
            '[Spc."Name"]')
          ParentFont = False
        end
        object Memo8: TfrxMemoView
          Left = 7.55906
          Top = 113.3859
          Width = 143.62214
          Height = 18.89765
          ShowHint = False
          Memo.UTF8 = (
            #1056#1038#1057#8218#1056#176#1057#1026#1056#181#1056#1029#1056#1105#1056#181)
        end
        object BarCode1: TfrxBarCodeView
          Left = 204.09462
          Top = 117.16543
          Width = 129
          Height = 18.89765
          ShowHint = False
          BarType = bcCode39Extended
          Expression = '<Old."Old_ID">'
          Rotation = 0
          ShowText = False
          Text = '12345678'
          WideBarRatio = 2
          Zoom = 1
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -12
          Font.Name = 'Arial'
          Font.Style = []
        end
      end
    end
    object Page2: TfrxReportPage
      PaperWidth = 210
      PaperHeight = 297
      PaperSize = 9
      LeftMargin = 10
      RightMargin = 10
      TopMargin = 10
      BottomMargin = 10
      object ReportTitle1: TfrxReportTitle
        Height = 143.62214
        Top = 18.89765
        Width = 718.1107
        object Memo28: TfrxMemoView
          Left = 7.55906
          Top = 3.77953
          Width = 200.31509
          Height = 18.89765
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -16
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          Memo.UTF8 = (
            #1056#1032#1057#8230#1056#1109#1056#1169' '#1057#8225#1056#176#1057#1027#1057#8218#1056#1109#1057#8218#1057#8249' ('#1056#8212#1056#176#1056#1112#1056#181#1057#1026#1057#8249')')
          ParentFont = False
        end
        object Memo29: TfrxMemoView
          Left = 7.55906
          Top = 41.57483
          Width = 143.62214
          Height = 18.89765
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -16
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          Memo.UTF8 = (
            #1056#160#1056#181#1056#183#1056#1109#1056#1029#1056#176#1057#8218#1056#1109#1057#1026#1057#8249)
          ParentFont = False
        end
        object Memo30: TfrxMemoView
          Left = 177.63791
          Top = 41.57483
          Width = 200.31509
          Height = 18.89765
          ShowHint = False
          DataField = 'Spc'
          DataSet = frxDBDataset1
          DataSetName = 'Old'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -16
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          Memo.UTF8 = (
            '[Old."Spc"]')
          ParentFont = False
        end
        object Memo31: TfrxMemoView
          Left = 11.33859
          Top = 86.92919
          Width = 94.48825
          Height = 18.89765
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -16
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          Memo.UTF8 = (
            #1056#1114#1056#1038#1056#1113)
          ParentFont = False
        end
        object Memo32: TfrxMemoView
          Left = 177.63791
          Top = 90.70872
          Width = 158.74026
          Height = 18.89765
          ShowHint = False
          DataField = 'MSK'
          DataSet = frxDBDataset1
          DataSetName = 'Old'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -16
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          Memo.UTF8 = (
            '[Old."MSK"]')
          ParentFont = False
        end
        object Memo33: TfrxMemoView
          Left = 506.45702
          Top = 37.7953
          Width = 94.48825
          Height = 18.89765
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -16
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          Memo.UTF8 = (
            #1056#164#1056#176#1056#8470#1056#187#1057#8249)
          ParentFont = False
        end
        object Memo34: TfrxMemoView
          Left = 506.45702
          Top = 68.03154
          Width = 192.75603
          Height = 18.89765
          ShowHint = False
          DataField = 'File1'
          DataSet = frxDBDataset1
          DataSetName = 'Old'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = []
          Memo.UTF8 = (
            '[Old."File1"]')
          ParentFont = False
        end
        object Memo35: TfrxMemoView
          Left = 506.45702
          Top = 94.48825
          Width = 188.9765
          Height = 18.89765
          ShowHint = False
          DataField = 'File2'
          DataSet = frxDBDataset1
          DataSetName = 'Old'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = []
          Memo.UTF8 = (
            '[Old."File2"]')
          ParentFont = False
        end
      end
      object PageHeader2: TfrxPageHeader
        Height = 68.03154
        Top = 185.19697
        Width = 718.1107
        object Shape6: TfrxShapeView
          Top = 34.01577
          Width = 718.1107
          Height = 34.01577
          ShowHint = False
        end
        object Memo42: TfrxMemoView
          Top = 34.01577
          Width = 94.48825
          Height = 34.01577
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8 = (
            #1056#1116#1056#1109#1056#1112#1056#181#1057#1026)
          ParentFont = False
          VAlign = vaCenter
        end
        object Memo43: TfrxMemoView
          Left = 94.48825
          Top = 34.01577
          Width = 102.04731
          Height = 34.01577
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8 = (
            'F1,1E-6')
          ParentFont = False
          VAlign = vaCenter
        end
        object Memo44: TfrxMemoView
          Left = 196.53556
          Top = 34.01577
          Width = 105.82684
          Height = 34.01577
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8 = (
            'F2,1E-6')
          ParentFont = False
          VAlign = vaCenter
        end
        object Memo46: TfrxMemoView
          Left = 302.3624
          Top = 34.01577
          Width = 94.48825
          Height = 34.01577
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8 = (
            'F2-F1,1E-6')
          ParentFont = False
          VAlign = vaCenter
        end
      end
      object MasterData2: TfrxMasterData
        Height = 18.89765
        Top = 313.70099
        Width = 718.1107
        DataSet = frxDBDataset1
        DataSetName = 'Old'
        RowCount = 0
        object frxDBDataset1N1: TfrxMemoView
          Width = 94.48825
          Height = 18.89765
          ShowHint = False
          DataField = 'N'
          DataSet = frxDBDataset1
          DataSetName = 'Old'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8 = (
            '[Old."N"]')
          ParentFont = False
          VAlign = vaCenter
        end
        object frxDBDataset1Measure1: TfrxMemoView
          Left = 94.48825
          Width = 102.04731
          Height = 18.89765
          ShowHint = False
          DataField = 'Measure1'
          DataSet = frxDBDataset1
          DataSetName = 'Old'
          DisplayFormat.FormatStr = '%2.2f'
          DisplayFormat.Kind = fkNumeric
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8 = (
            '[Old."Measure1"]')
          ParentFont = False
          VAlign = vaCenter
        end
        object frxDBDataset1Measure2: TfrxMemoView
          Left = 196.53556
          Width = 105.82684
          Height = 18.89765
          ShowHint = False
          DataField = 'Measure2'
          DataSet = frxDBDataset1
          DataSetName = 'Old'
          DisplayFormat.FormatStr = '%2.2f'
          DisplayFormat.Kind = fkNumeric
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8 = (
            '[Old."Measure2"]')
          ParentFont = False
          VAlign = vaCenter
        end
        object frxDBDataset1old11: TfrxMemoView
          Left = 302.3624
          Width = 94.48825
          Height = 18.89765
          ShowHint = False
          DataField = 'old1'
          DataSet = frxDBDataset1
          DataSetName = 'Old'
          DisplayFormat.FormatStr = '%2.2f'
          DisplayFormat.Kind = fkNumeric
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8 = (
            '[Old."old1"]')
          ParentFont = False
          VAlign = vaCenter
        end
      end
      object PageFooter2: TfrxPageFooter
        Height = 18.89765
        Top = 393.07112
        Width = 718.1107
        object Memo37: TfrxMemoView
          Left = 631.18151
          Width = 75.5906
          Height = 18.89765
          ShowHint = False
          HAlign = haRight
          Memo.UTF8 = (
            '[Page#]')
        end
        object Memo38: TfrxMemoView
          Width = 94.48825
          Height = 18.89765
          ShowHint = False
          Memo.UTF8 = (
            #1056#8217#1057#8249#1056#1111#1056#1109#1056#187#1056#1029#1056#1105#1056#187)
        end
        object Memo40: TfrxMemoView
          Left = 366.61441
          Width = 79.37013
          Height = 18.89765
          ShowHint = False
          Memo.UTF8 = (
            '[Date]')
        end
        object Memo41: TfrxMemoView
          Left = 506.45702
          Width = 94.48825
          Height = 18.89765
          ShowHint = False
          Memo.UTF8 = (
            #1056#1038#1057#8218#1057#1026#1056#176#1056#1029#1056#1105#1057#8224#1056#176)
        end
        object DostupName1: TfrxMemoView
          Left = 109.60637
          Width = 238.11039
          Height = 18.89765
          ShowHint = False
          DataField = 'Name'
          DataSet = frxDBDataset3
          DataSetName = 'Dopusk'
          Memo.UTF8 = (
            '[Dopusk."Name"]')
        end
      end
    end
  end
end
