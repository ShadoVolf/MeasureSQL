object SpektrOLDForm: TSpektrOLDForm
  Left = 620
  Top = 322
  Width = 480
  Height = 301
  Caption = #1057#1087#1077#1082#1090#1088' '#1057#1090#1072#1088#1077#1085#1080#1077
  Color = clBackground
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clLime
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 24
    Top = 40
    Width = 69
    Height = 13
    Caption = #1050#1086#1076' '#1079#1072#1084#1077#1088#1072' 1'
  end
  object Label2: TLabel
    Left = 24
    Top = 96
    Width = 69
    Height = 13
    Caption = #1050#1086#1076' '#1079#1072#1084#1077#1088#1072' 2'
  end
  object Label3: TLabel
    Left = 328
    Top = 8
    Width = 36
    Height = 13
    Caption = #1053#1086#1088#1084#1099
  end
  object Label4: TLabel
    Left = 328
    Top = 32
    Width = 56
    Height = 13
    Caption = #1055#1086' '#1095#1072#1089#1090#1086#1090#1077
  end
  object Label7: TLabel
    Left = 312
    Top = 96
    Width = 96
    Height = 13
    Caption = #1055#1086' '#1089#1086#1087#1088#1086#1090#1080#1074#1083#1077#1085#1080#1102
  end
  object WorkProgress: TVrProgressBar
    Left = 22
    Top = 190
    Width = 435
    Height = 16
    Bevel.InnerShadow = clBtnShadow
    Bevel.InnerHighlight = clBtnHighlight
    Bevel.InnerWidth = 1
    Bevel.InnerStyle = bsNone
    Bevel.InnerSpace = 0
    Bevel.InnerColor = clBtnFace
    Bevel.OuterShadow = clBtnShadow
    Bevel.OuterHighlight = clBtnHighlight
    Bevel.OuterStyle = bsLowered
    Bevel.OuterOutline = osNone
    Position = 0
    StartColor = clRed
    Smooth = True
  end
  object Label5: TLabel
    Left = 208
    Top = 136
    Width = 110
    Height = 13
    Caption = #1050#1086#1076' '#1079#1072#1084#1077#1088#1072' '#1089#1090#1072#1088#1077#1085#1080#1103
  end
  object M_ID_1: TEdit
    Left = 24
    Top = 64
    Width = 161
    Height = 21
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clBlack
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 0
  end
  object M_ID_2: TEdit
    Left = 24
    Top = 112
    Width = 161
    Height = 21
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clBlack
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 1
  end
  object btnClose: TAdvGlassButton
    Left = 371
    Top = 222
    Width = 84
    Height = 32
    BackColor = clRed
    Caption = #1047#1072#1082#1088#1099#1090#1100
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWhite
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = []
    ForeColor = clWhite
    GlowColor = 16760205
    InnerBorderColor = clBlack
    OuterBorderColor = clWhite
    ParentFont = False
    ShineColor = clWhite
    TabOrder = 2
    Version = '1.2.3.0'
    OnClick = btnCloseClick
  end
  object AdvGlassButton1: TAdvGlassButton
    Left = 19
    Top = 222
    Width = 84
    Height = 32
    BackColor = clLime
    Caption = #1056#1072#1089#1095#1077#1090
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWhite
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = []
    ForeColor = clWhite
    GlowColor = 16760205
    InnerBorderColor = clBlack
    OuterBorderColor = clWhite
    ParentFont = False
    ShineColor = clWhite
    TabOrder = 3
    Version = '1.2.3.0'
    OnClick = AdvGlassButton1Click
  end
  object AdvGlassButton2: TAdvGlassButton
    Left = 371
    Top = 150
    Width = 84
    Height = 32
    BackColor = clYellow
    Caption = #1055#1077#1095#1072#1090#1100
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWhite
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = []
    ForeColor = clWhite
    GlowColor = 16760205
    InnerBorderColor = clBlack
    OuterBorderColor = clWhite
    ParentFont = False
    ShineColor = clWhite
    TabOrder = 4
    Version = '1.2.3.0'
    OnClick = AdvGlassButton2Click
  end
  object R_Max: TRzDBEdit
    Left = 312
    Top = 112
    Width = 97
    Height = 21
    DataSource = DataSource1
    DataField = 'Old2Max'
    Color = clBackground
    DisabledColor = clBlack
    FocusColor = clNavy
    FrameColor = clYellow
    FrameHotColor = clRed
    FrameHotTrack = True
    FrameVisible = True
    ParentColor = True
    ReadOnlyColor = clSilver
    TabOrder = 5
  end
  object F_Max: TRzDBEdit
    Left = 312
    Top = 64
    Width = 97
    Height = 21
    DataSource = DataSource1
    DataField = 'old1max'
    Color = clBackground
    DisabledColor = clBlack
    FocusColor = clNavy
    FrameColor = clYellow
    FrameHotColor = clRed
    FrameHotTrack = True
    FrameVisible = True
    ParentColor = True
    ReadOnlyColor = clSilver
    TabOrder = 6
  end
  object Old_ID: TEdit
    Left = 192
    Top = 160
    Width = 121
    Height = 21
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clBlack
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 7
  end
  object Measure_1: TMyQuery
    Connection = DataModule1.CoordinatorDB
    Left = 24
    Top = 152
  end
  object Measure_2: TMyQuery
    Connection = DataModule1.CoordinatorDB
    Left = 72
    Top = 152
  end
  object Old: TMyQuery
    Connection = DataModule1.CoordinatorDB
    SQL.Strings = (
      'select * from old where Old_ID='#39'1726'#39)
    Active = True
    Left = 112
    Top = 152
  end
  object Spc: TMyQuery
    Connection = DataModule1.CoordinatorDB
    SQL.Strings = (
      'Select * from specification')
    Active = True
    Left = 160
    Top = 152
  end
  object DataSource1: TDataSource
    DataSet = Spc
    Left = 200
    Top = 152
  end
  object frxDBDataset3: TfrxDBDataset
    UserName = 'Dopusk'
    CloseDataSource = False
    FieldAliases.Strings = (
      'ID=ID'
      'Name=Name'
      'Password=Password'
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
      'BarCodeData=BarCodeData'
      'morion_email=morion_email'
      'Email_pass=Email_pass'
      'PH_Login=PH_Login')
    OpenDataSource = False
    DataSet = DataModule1.Dostup
    BCDToCurrency = False
    Left = 64
    Top = 8
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
    ReportOptions.LastChange = 44307.562840081
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
      
        'IF <SpcSpektr."Old1max"><>"no" Then  IF <OldSpektr."old1">> StrT' +
        'oFloat(<SpcSpektr."old1max">) Then countF1=countF1+1'
      
        'IF <SpcSpektr."Old1max"><>"no" Then  IF <OldSpektr."old1">> StrT' +
        'oFloat(<SpcSpektr."old1max">) Then temp=1'
      
        'IF <SpcSpektr."Old1min"><>"no" Then  IF <OldSpektr."old1">< StrT' +
        'oFloat(<SpcSpektr."old1min">) Then countF1=countF1+1'
      
        'IF <SpcSpektr."Old1min"><>"no" Then  IF <OldSpektr."old1">< StrT' +
        'oFloat(<SpcSpektr."old1min">) Then temp=1'
      ''
      
        'IF <SpcSpektr."Old2max"><>"no" Then  IF <OldSpektr."old2">> StrT' +
        'oFloat(<SpcSpektr."old1max">) Then countF2=countF2+1'
      
        'IF <SpcSpektr."Old2max"><>"no" Then  IF <OldSpektr."old2">> StrT' +
        'oFloat(<SpcSpektr."old1max">) Then temp=1'
      
        'IF <SpcSpektr."Old2min"><>"no" Then  IF <OldSpektr."old2">< StrT' +
        'oFloat(<SpcSpektr."old1min">) Then countF2=countF2+1'
      
        'IF <SpcSpektr."Old2min"><>"no" Then  IF <OldSpektr."old2">< StrT' +
        'oFloat(<SpcSpektr."old1min">) Then temp=1    '
      '  '
      
        'IF temp=1 Then countBad=countBad+1                              ' +
        '               '
      'Memo23.Text=IntToStr(countF1)'
      'Memo24.Text=IntToStr(count1-countF2)'
      'Memo36.Text=IntToStr(countF2)'
      'Memo25.Text=IntToStr(count1-countF2)    '
      'Memo26.Text=IntToStr(count1-countBad)'
      'Memo27.Text=IntToStr(countBad)  '
      '  '
      
        'IF temp=1 Then Memo50.Color=clSilver                            ' +
        '  '
      'IF temp=0 Then Memo50.Color=clNone'
      
        'IF temp=1 Then Memo49.Color=clSilver                            ' +
        '  '
      'IF temp=0 Then Memo49.Color=clNone'
      
        'IF temp=1 Then Memo24.Color=clSilver                            ' +
        '  '
      'IF temp=0 Then Memo24.Color=clNone    '
      
        'IF temp=1 Then OldStatus.Color=clSilver                         ' +
        '     '
      'IF temp=0 Then OldStatus.Color=clNone    '
      ''
      'end sub')
    Left = 24
    Top = 8
    Datasets = <
      item
        DataSet = frxDBDataset3
        DataSetName = 'Dopusk'
      end
      item
        DataSet = Old_Report
        DataSetName = 'OldSpektr'
      end
      item
        DataSet = Spc_Report
        DataSetName = 'SpcSpektr'
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
        DataSet = Old_Report
        DataSetName = 'OldSpektr'
        RowCount = 0
        object OldStatus: TfrxMemoView
          Left = 279.68522
          Width = 90.70872
          Height = 18.89765
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8 = (
            '[OldSpektr."Status"]')
          ParentFont = False
          VAlign = vaCenter
        end
        object Memo49: TfrxMemoView
          Left = 94.48825
          Width = 94.48825
          Height = 18.89765
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8 = (
            '[OldSpektr."old1"]')
          ParentFont = False
          VAlign = vaCenter
        end
        object Memo50: TfrxMemoView
          Width = 94.48825
          Height = 18.89765
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8 = (
            '[OldSpektr."N"]')
          ParentFont = False
          VAlign = vaCenter
        end
        object Memo51: TfrxMemoView
          Left = 370.39394
          Width = 347.71676
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
        object Memo24: TfrxMemoView
          Left = 188.9765
          Width = 90.70872
          Height = 18.89765
          ShowHint = False
          DataField = 'old2'
          DataSet = Old_Report
          DataSetName = 'OldSpektr'
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
            '[OldSpektr."old2"]')
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
          Left = 94.48825
          Top = 37.7953
          Width = 94.48825
          Height = 18.89765
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlue
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          HAlign = haCenter
          Memo.UTF8 = (
            '[SpcSpektr."old1max"]')
          ParentFont = False
          VAlign = vaCenter
        end
        object frxDBDataset2old1min: TfrxMemoView
          Left = 94.48825
          Top = 18.89765
          Width = 94.48825
          Height = 18.89765
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlue
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          HAlign = haCenter
          Memo.UTF8 = (
            '[SpcSpektr."old1min"]')
          ParentFont = False
          VAlign = vaCenter
        end
        object SpcOld2Max: TfrxMemoView
          Left = 188.9765
          Top = 37.7953
          Width = 90.70872
          Height = 18.89765
          ShowHint = False
          DataSet = Spc_Report
          DataSetName = 'SpcSpektr'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlue
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          HAlign = haCenter
          Memo.UTF8 = (
            '[SpcSpektr."Old2Max"]')
          ParentFont = False
          VAlign = vaCenter
        end
        object Spcold2min: TfrxMemoView
          Left = 188.9765
          Top = 18.89765
          Width = 90.70872
          Height = 18.89765
          ShowHint = False
          DataSet = Spc_Report
          DataSetName = 'SpcSpektr'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlue
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          HAlign = haCenter
          Memo.UTF8 = (
            '[SpcSpektr."old2min"]')
          ParentFont = False
          VAlign = vaCenter
        end
        object OldOperator: TfrxMemoView
          Left = 113.3859
          Top = 166.29932
          Width = 249.44898
          Height = 18.89765
          ShowHint = False
          DataField = 'Operator'
          DataSet = Old_Report
          DataSetName = 'OldSpektr'
          Memo.UTF8 = (
            '[OldSpektr."Operator"]')
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
            '     F2-F1, ppm')
          ParentFont = False
          VAlign = vaCenter
        end
        object Memo19: TfrxMemoView
          Left = 279.68522
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
        object Memo18: TfrxMemoView
          Left = 188.9765
          Width = 90.70872
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
            '     R2-R1,'#1056#1115#1056#1112)
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
          Top = 18.89765
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
          Top = 18.89765
          Width = 718.1107
          ShowHint = False
          Frame.Typ = [ftTop]
        end
        object Memo12: TfrxMemoView
          Top = 37.7953
          Width = 86.92919
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
          Top = 56.69295
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
          Top = 75.5906
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
          Top = 37.7953
          Width = 718.1107
          ShowHint = False
          Frame.Typ = [ftTop]
        end
        object Line7: TfrxLineView
          Top = 56.69295
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
          Left = 94.48825
          Top = 37.7953
          Width = 94.48825
          Height = 18.89765
          ShowHint = False
          DisplayFormat.FormatStr = '%2.2f'
          DisplayFormat.Kind = fkNumeric
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlue
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          HAlign = haCenter
          Memo.UTF8 = (
            '[MAX(<OldSpektr."old1">,MasterData1)]')
          ParentFont = False
          VAlign = vaCenter
        end
        object SysMemo3: TfrxSysMemoView
          Left = 94.48825
          Top = 56.69295
          Width = 94.48825
          Height = 18.89765
          ShowHint = False
          DisplayFormat.FormatStr = '%2.2f'
          DisplayFormat.Kind = fkNumeric
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlue
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          HAlign = haCenter
          Memo.UTF8 = (
            '[MIN(<OldSpektr."old1">,MasterData1)]')
          ParentFont = False
          VAlign = vaCenter
        end
        object SysMemo4: TfrxSysMemoView
          Left = 94.48825
          Top = 75.5906
          Width = 94.48825
          Height = 18.89765
          ShowHint = False
          DisplayFormat.FormatStr = '%2.2f'
          DisplayFormat.Kind = fkNumeric
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlue
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          HAlign = haCenter
          Memo.UTF8 = (
            '[AVG(<OldSpektr."old1">,MasterData1)]')
          ParentFont = False
          VAlign = vaCenter
        end
        object Memo22: TfrxMemoView
          Left = 94.48825
          Width = 94.48825
          Height = 18.89765
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlue
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          HAlign = haCenter
          ParentFont = False
          VAlign = vaCenter
        end
        object Memo23: TfrxMemoView
          Left = 94.48825
          Top = 18.89765
          Width = 94.48825
          Height = 18.89765
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlue
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          HAlign = haCenter
          ParentFont = False
          VAlign = vaCenter
        end
        object Memo26: TfrxMemoView
          Left = 279.68522
          Width = 90.70872
          Height = 18.89765
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlue
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          HAlign = haCenter
          ParentFont = False
          VAlign = vaCenter
        end
        object Memo27: TfrxMemoView
          Left = 279.68522
          Top = 18.89765
          Width = 90.70872
          Height = 18.89765
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlue
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          HAlign = haCenter
          ParentFont = False
          VAlign = vaCenter
        end
        object Line1: TfrxLineView
          Left = 370.39394
          Height = 94.48825
          ShowHint = False
          Frame.Typ = [ftLeft]
        end
        object Memo25: TfrxMemoView
          Left = 188.9765
          Width = 90.70872
          Height = 18.89765
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlue
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          HAlign = haCenter
          ParentFont = False
          VAlign = vaCenter
        end
        object Memo36: TfrxMemoView
          Left = 188.9765
          Top = 18.89765
          Width = 90.70872
          Height = 18.89765
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlue
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          HAlign = haCenter
          ParentFont = False
          VAlign = vaCenter
        end
        object SysMemo5: TfrxSysMemoView
          Left = 188.9765
          Top = 37.7953
          Width = 90.70872
          Height = 18.89765
          ShowHint = False
          DisplayFormat.FormatStr = '%2.2f'
          DisplayFormat.Kind = fkNumeric
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlue
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          HAlign = haCenter
          Memo.UTF8 = (
            '[MAX(<OldSpektr."old2">,MasterData1)]')
          ParentFont = False
          VAlign = vaCenter
        end
        object SysMemo6: TfrxSysMemoView
          Left = 188.9765
          Top = 56.69295
          Width = 90.70872
          Height = 18.89765
          ShowHint = False
          DisplayFormat.FormatStr = '%2.2f'
          DisplayFormat.Kind = fkNumeric
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlue
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          HAlign = haCenter
          Memo.UTF8 = (
            '[MIN(<OldSpektr."old2">,MasterData1)]')
          ParentFont = False
          VAlign = vaCenter
        end
        object SysMemo7: TfrxSysMemoView
          Left = 188.9765
          Top = 75.5906
          Width = 90.70872
          Height = 18.89765
          ShowHint = False
          DisplayFormat.FormatStr = '%2.2f'
          DisplayFormat.Kind = fkNumeric
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlue
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          HAlign = haCenter
          Memo.UTF8 = (
            '[AVG(<OldSpektr."old2">,MasterData1)]')
          ParentFont = False
          VAlign = vaCenter
        end
        object Line2: TfrxLineView
          Left = 94.48825
          Height = 94.48825
          ShowHint = False
          Frame.Typ = [ftLeft]
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
          Expression = '<OldSpektr."MeasureID">'
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
          Expression = '<SpcSpektr."ID">'
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
          Expression = '<OldSpektr."Old_ID">'
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
          Left = 170.07885
          Top = 3.77953
          Width = 506.45702
          Height = 18.89765
          ShowHint = False
          DataField = 'Name'
          DataSet = Spc_Report
          DataSetName = 'SpcSpektr'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          HAlign = haCenter
          Memo.UTF8 = (
            '[SpcSpektr."Name"]')
          ParentFont = False
          VAlign = vaCenter
        end
        object Memo7: TfrxMemoView
          Left = 170.07885
          Top = 41.57483
          Width = 355.27582
          Height = 18.89765
          ShowHint = False
          DataField = 'MSK'
          DataSet = Old_Report
          DataSetName = 'OldSpektr'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          HAlign = haCenter
          Memo.UTF8 = (
            '[OldSpektr."MSK"]')
          ParentFont = False
          VAlign = vaCenter
        end
        object OldFile1: TfrxMemoView
          Left = 11.33859
          Top = 207.87415
          Width = 400.63018
          Height = 18.89765
          ShowHint = False
          DataField = 'File1'
          DataSet = Old_Report
          DataSetName = 'OldSpektr'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          Memo.UTF8 = (
            '[OldSpektr."File1"]')
          ParentFont = False
          VAlign = vaCenter
        end
        object OldFile2: TfrxMemoView
          Left = 11.33859
          Top = 234.33086
          Width = 400.63018
          Height = 18.89765
          ShowHint = False
          DataField = 'File2'
          DataSet = Old_Report
          DataSetName = 'OldSpektr'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          Memo.UTF8 = (
            '[OldSpektr."File2"]')
          ParentFont = False
          VAlign = vaCenter
        end
      end
    end
  end
  object Spc_Report: TfrxDBDataset
    UserName = 'SpcSpektr'
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
      'Dead=Dead'
      'Rsphere=Rsphere'
      'RsphereT=RsphereT'
      'RsphereK1=RsphereK1'
      'RsphereK2=RsphereK2'
      'RsphereMax=RsphereMax'
      'RsphereMin=RsphereMin'
      'Rminmin=Rminmin'
      'Rminmax=Rminmax'
      'TCHType=TCHType'
      'TCH_Approx_Type=TCH_Approx_Type'
      'TCH_Interval_Type=TCH_Interval_Type'
      'IT_Temp_A=IT_Temp_A'
      'IT_Temp_B=IT_Temp_B'
      'TCH_Temp_A=TCH_Temp_A'
      'TCH_Temp_B=TCH_Temp_B'
      'TCH_Approx_IST=TCH_Approx_IST'
      'Favg=Favg'
      'Qavg=Qavg'
      'K=K'
      'Ftgk_Measure=Ftgk_Measure'
      'ShOT=ShOT'
      'Shum1=Shum1'
      'Sh1Max=Sh1Max'
      'Sh1Min=Sh1Min'
      'Shum2=Shum2'
      'Sh1OT=Sh1OT'
      'Sh2Max=Sh2Max'
      'Sh2Min=Sh2Min'
      'Sh2OT=Sh2OT'
      'Shum3=Shum3'
      'Sh3Max=Sh3Max'
      'Sh3Min=Sh3Min'
      'Sh3OT=Sh3OT'
      'PhazeNoise_Options=PhazeNoise_Options'
      'DopuskRmax=DopuskRmax'
      'DopuskC1_2C0=DopuskC1_2C0'
      'GraphOnlyAprox=GraphOnlyAprox'
      'GraphOnluMeasure=GraphOnluMeasure'
      'RadiusF2=RadiusF2'
      'RadiusR2=RadiusR2'
      'RadiusF4=RadiusF4'
      'RadiusR4=RadiusR4'
      'TCHTable=TCHTable'
      'FtVP=FtVP'
      'Imax=Imax'
      'Imaxmax=Imaxmax'
      'Imaxmin=Imaxmin'
      'Imax_T=Imax_T'
      'DF_Time_1=DF_Time_1'
      'DF_Time_1_T=DF_Time_1_T'
      'DF_Time_1_max=DF_Time_1_max'
      'DF_Time_1_Min=DF_Time_1_Min'
      'DF_Time_2=DF_Time_2'
      'DF_Time_2_max=DF_Time_2_max'
      'DF_Time_2_min=DF_Time_2_min'
      'DF_Time_2_T=DF_Time_2_T'
      'DF_Time_3=DF_Time_3'
      'DF_Time_3_T=DF_Time_3_T'
      'DF_Time_3_max=DF_Time_3_max'
      'DF_Time_3_min=DF_Time_3_min'
      'view=view'
      'Uust_1=Uust_1'
      'Uust_1_T=Uust_1_T'
      'Uust_1_max=Uust_1_max'
      'Uust_1_min=Uust_1_min'
      'Uust_2=Uust_2'
      'Uust_2_T=Uust_2_T'
      'Uust_2_max=Uust_2_max'
      'Uust_2_min=Uust_2_min'
      'Uust_3=Uust_3'
      'Uust_3_T=Uust_3_T'
      'Uust_3_max=Uust_3_max'
      'Uust_3_min=Uust_3_min'
      'Iust=Iust'
      'Iust_T=Iust_T'
      'Iust_max=Iust_max'
      'Iust_min=Iust_min'
      'DF_Time_1_time=DF_Time_1_time'
      'DF_Time_2_time=DF_Time_2_time'
      'DF_Time_3_time=DF_Time_3_time'
      'Rekv=Rekv'
      'Rekv_max=Rekv_max'
      'Rekv_min=Rekv_min'
      'Shum4=Shum4'
      'Sh4Max=Sh4Max'
      'Sh4Min=Sh4Min'
      'Sh4OT=Sh4OT'
      'Tint=Tint'
      'TintValue=TintValue'
      'AltAppprox=AltAppprox')
    OpenDataSource = False
    DataSet = Spc
    BCDToCurrency = False
    Left = 96
    Top = 8
  end
  object Old_Report: TfrxDBDataset
    UserName = 'OldSpektr'
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
      'Old_ID=Old_ID'
      'Measure1_R=Measure1_R'
      'Measure2_R=Measure2_R'
      'Operator=Operator')
    OpenDataSource = False
    DataSet = Old
    BCDToCurrency = False
    Left = 128
    Top = 8
  end
  object Print_Data: TMyQuery
    Connection = DataModule1.CoordinatorDB
    SQL.Strings = (
      'Select * from print_data')
    Left = 232
    Top = 152
  end
  object Print_Files: TMyQuery
    Connection = DataModule1.CoordinatorDB
    SQL.Strings = (
      'Select * from print_files')
    Left = 264
    Top = 152
  end
  object DataSource2: TDataSource
    DataSet = Old
    Left = 304
    Top = 152
  end
  object DataSource3: TDataSource
    DataSet = Spc
    Left = 344
    Top = 152
  end
end
