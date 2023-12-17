object PhazeNoiseForm: TPhazeNoiseForm
  Left = 407
  Top = 97
  Width = 1017
  Height = 735
  Caption = #1048#1079#1084#1077#1088#1077#1085#1080#1077' '#1092#1072#1079#1086#1074#1099#1093' '#1096#1091#1084#1086#1074
  Color = clBlack
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clLime
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  Position = poMainFormCenter
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object Chart1: TChart
    Left = 0
    Top = 33
    Width = 1001
    Height = 518
    BackWall.Color = clWhite
    BackWall.Dark3D = False
    BackWall.Size = 8
    BackWall.Transparent = False
    Border.Visible = True
    BottomWall.Dark3D = False
    BottomWall.Size = 8
    Foot.Alignment = taLeftJustify
    Foot.Font.Color = -1
    LeftWall.Color = clWhite
    LeftWall.Dark3D = False
    LeftWall.Size = 8
    Legend.Font.Height = -13
    Legend.Font.Name = 'Times New Roman'
    Legend.Frame.Visible = False
    Legend.Shadow.HorizSize = 0
    Legend.Shadow.VertSize = 0
    Legend.Symbol.DefaultPen = False
    Legend.Symbol.Pen.Visible = False
    Legend.Transparent = True
    Legend.Visible = False
    PrintProportional = False
    RightWall.Color = clWhite
    RightWall.Dark3D = False
    RightWall.Size = 8
    SubFoot.Font.Color = -1
    SubTitle.Alignment = taRightJustify
    Title.AdjustFrame = False
    Title.Color = clBlack
    Title.Font.Color = clBlack
    Title.Font.Height = -16
    Title.Font.Name = 'Arial Unicode MS'
    Title.Font.Style = [fsBold]
    Title.Font.Shadow.Smooth = False
    Title.Font.Shadow.Visible = False
    Title.Shadow.Smooth = False
    Title.Shadow.Visible = False
    Title.Text.Strings = (
      #1060#1072#1079#1086#1074#1099#1077' '#1096#1091#1084#1099)
    BottomAxis.Axis.Width = 1
    BottomAxis.Grid.Color = clBlack
    BottomAxis.Grid.Style = psSolid
    BottomAxis.LabelsFont.Height = -16
    BottomAxis.LabelsFont.Name = 'Times New Roman'
    BottomAxis.LabelsFont.Style = [fsBold]
    BottomAxis.LabelsFont.Shadow.Visible = False
    BottomAxis.LabelsOnAxis = False
    BottomAxis.MinorTicks.Visible = False
    BottomAxis.Ticks.Color = clBlack
    BottomAxis.TicksInner.Visible = False
    BottomAxis.Title.Caption = 'Frequency,Hz'
    BottomAxis.Title.Font.Height = -15
    BottomAxis.Title.Font.Name = 'Times New Roman'
    BottomAxis.Title.Font.Style = [fsBold]
    BottomAxis.Title.Font.Shadow.Smooth = False
    BottomAxis.Title.Font.Shadow.Visible = False
    DepthAxis.Axis.Width = 1
    DepthAxis.Grid.Color = clBlack
    DepthAxis.Grid.Style = psSolid
    DepthAxis.LabelsFont.Height = -13
    DepthAxis.LabelsFont.Name = 'Times New Roman'
    DepthAxis.MinorTicks.Visible = False
    DepthAxis.Ticks.Color = clBlack
    DepthAxis.TicksInner.Visible = False
    DepthAxis.Title.Font.Name = 'Times New Roman'
    DepthTopAxis.Axis.Width = 1
    DepthTopAxis.Grid.Color = clBlack
    DepthTopAxis.Grid.Style = psSolid
    DepthTopAxis.LabelsFont.Height = -13
    DepthTopAxis.LabelsFont.Name = 'Times New Roman'
    DepthTopAxis.MinorTicks.Visible = False
    DepthTopAxis.Ticks.Color = clBlack
    DepthTopAxis.TicksInner.Visible = False
    DepthTopAxis.Title.Font.Name = 'Times New Roman'
    LeftAxis.Axis.Width = 1
    LeftAxis.Grid.Color = clBlack
    LeftAxis.Grid.Style = psSolid
    LeftAxis.LabelsFont.Height = -16
    LeftAxis.LabelsFont.Name = 'Times New Roman'
    LeftAxis.LabelsFont.Style = [fsBold]
    LeftAxis.LabelsFont.Shadow.Visible = False
    LeftAxis.MinorTicks.Visible = False
    LeftAxis.Ticks.Color = clBlack
    LeftAxis.TicksInner.Visible = False
    LeftAxis.Title.Caption = 'dB/Hz'
    LeftAxis.Title.Font.Height = -16
    LeftAxis.Title.Font.Name = 'Times New Roman'
    LeftAxis.Title.Font.Shadow.Smooth = False
    LeftAxis.Title.Font.Shadow.Visible = False
    RightAxis.Axis.Width = 1
    RightAxis.Grid.Color = clBlack
    RightAxis.Grid.Style = psSolid
    RightAxis.LabelsFont.Height = -13
    RightAxis.LabelsFont.Name = 'Times New Roman'
    RightAxis.MinorTicks.Visible = False
    RightAxis.Ticks.Color = clBlack
    RightAxis.TicksInner.Visible = False
    RightAxis.Title.Font.Name = 'Times New Roman'
    TopAxis.Axis.Width = 1
    TopAxis.Grid.Color = clBlack
    TopAxis.Grid.Style = psSolid
    TopAxis.LabelsFont.Height = -13
    TopAxis.LabelsFont.Name = 'Times New Roman'
    TopAxis.MinorTicks.Visible = False
    TopAxis.Ticks.Color = clBlack
    TopAxis.TicksInner.Visible = False
    TopAxis.Title.Font.Name = 'Times New Roman'
    View3D = False
    View3DOptions.Orthogonal = False
    View3DOptions.ZoomText = False
    Align = alClient
    BevelOuter = bvNone
    Color = clSilver
    TabOrder = 0
    PrintMargins = (
      10
      5
      10
      55)
    ColorPaletteIndex = 13
    object Series1: TLineSeries
      ColorEachLine = False
      Marks.Arrow.Visible = True
      Marks.Callout.Brush.Color = clBlack
      Marks.Callout.Arrow.Visible = True
      Marks.Visible = False
      SeriesColor = clBlack
      Dark3D = False
      Pointer.HorizSize = 2
      Pointer.InflateMargins = True
      Pointer.Style = psCircle
      Pointer.VertSize = 2
      Pointer.Visible = True
      XValues.Name = 'X'
      XValues.Order = loAscending
      YValues.Name = 'Y'
      YValues.Order = loNone
    end
    object Series2: TPointSeries
      Marks.Arrow.Visible = True
      Marks.Callout.Brush.Color = clBlack
      Marks.Callout.Arrow.Visible = True
      Marks.Visible = False
      SeriesColor = clRed
      ClickableLine = False
      Pointer.HorizSize = 1
      Pointer.InflateMargins = True
      Pointer.Style = psCircle
      Pointer.VertSize = 1
      Pointer.Visible = True
      XValues.Name = 'X'
      XValues.Order = loAscending
      YValues.Name = 'Y'
      YValues.Order = loNone
    end
    object Series3: TLineSeries
      Active = False
      Marks.Arrow.Visible = True
      Marks.Callout.Brush.Color = clBlack
      Marks.Callout.Style = psDownTriangle
      Marks.Callout.Visible = True
      Marks.Callout.Arrow.Visible = True
      Marks.Callout.ArrowHead = ahSolid
      Marks.Callout.Length = 36
      Marks.TextAlign = taRightJustify
      Marks.Visible = True
      SeriesColor = clTeal
      ShowInLegend = False
      Pointer.InflateMargins = True
      Pointer.Style = psDownTriangle
      Pointer.Visible = False
      XValues.Name = 'X'
      XValues.Order = loAscending
      YValues.Name = 'Y'
      YValues.Order = loNone
      Data = {
        010200000000000000000000009A99999999B97B400000000000003840CDCCCC
        CCCC047D40}
    end
    object Series4: TLineSeries
      Active = False
      Marks.Arrow.Visible = True
      Marks.Callout.Brush.Color = clBlack
      Marks.Callout.Arrow.Visible = True
      Marks.Callout.ArrowHead = ahSolid
      Marks.Callout.Length = 36
      Marks.Visible = True
      Pointer.InflateMargins = True
      Pointer.Style = psRectangle
      Pointer.Visible = False
      XValues.Name = 'X'
      XValues.Order = loAscending
      YValues.Name = 'Y'
      YValues.Order = loNone
    end
    object Series5: TLineSeries
      Active = False
      Marks.Arrow.Visible = True
      Marks.Callout.Brush.Color = clBlack
      Marks.Callout.Arrow.Visible = True
      Marks.Callout.ArrowHead = ahSolid
      Marks.Callout.Length = 36
      Marks.Visible = True
      Pointer.InflateMargins = True
      Pointer.Style = psRectangle
      Pointer.Visible = False
      XValues.Name = 'X'
      XValues.Order = loAscending
      YValues.Name = 'Y'
      YValues.Order = loNone
    end
    object Series6: TLineSeries
      Active = False
      Marks.Arrow.Visible = True
      Marks.Callout.Brush.Color = clBlack
      Marks.Callout.Arrow.Visible = True
      Marks.Callout.ArrowHead = ahSolid
      Marks.Callout.Length = 36
      Marks.Visible = True
      Pointer.InflateMargins = True
      Pointer.Style = psRectangle
      Pointer.Visible = False
      XValues.Name = 'X'
      XValues.Order = loAscending
      YValues.Name = 'Y'
      YValues.Order = loNone
    end
  end
  object TeeCommander1: TTeeCommander
    Left = 0
    Top = 0
    Width = 1001
    Height = 33
    Panel = Chart1
    Align = alTop
    Color = clBlack
    ParentShowHint = False
    TabOrder = 1
    object VrLed3: TVrLed
      Left = 840
      Top = 5
      Width = 25
      Height = 25
      Hint = #1044#1072#1085#1085#1099#1077' '#1080#1079#1076#1077#1083#1080#1103' '#1079#1072#1075#1088#1091#1078#1077#1085#1099
      Palette.Low = clTeal
      Palette.High = clAqua
      Color = clBlack
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWhite
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentColor = False
      ParentFont = False
    end
    object VrLed2: TVrLed
      Left = 872
      Top = 5
      Width = 25
      Height = 25
      Hint = #1044#1072#1085#1085#1099#1077' '#1052#1057#1050' '#1079#1072#1075#1088#1091#1078#1077#1085#1099
      Palette.Low = clLime
      Palette.High = clRed
      Color = clBlack
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWhite
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentColor = False
      ParentFont = False
    end
    object RzButton7: TRzButton
      Left = 312
      Top = 5
      Width = 153
      FrameColor = clAqua
      Caption = #1040#1074#1090#1086#1084#1072#1090#1080#1095#1077#1089#1082#1072#1103' '#1086#1095#1080#1089#1090#1082#1072
      Color = clBlack
      HotTrack = True
      HotTrackColor = clRed
      TabOrder = 0
      OnClick = RzButton7Click
    end
    object CheckBox3: TCheckBox
      Left = 728
      Top = 8
      Width = 97
      Height = 17
      Caption = #1069#1082#1089#1087#1086#1088#1090
      TabOrder = 1
    end
  end
  object RzPanel1: TRzPanel
    Left = 0
    Top = 551
    Width = 1001
    Height = 145
    Align = alBottom
    Color = clBlack
    TabOrder = 2
    object Label1: TLabel
      Left = 8
      Top = 8
      Width = 81
      Height = 13
      Caption = #1058#1080#1087' '#1088#1077#1079#1086#1085#1072#1090#1086#1088#1072
    end
    object Label2: TLabel
      Left = 112
      Top = 8
      Width = 75
      Height = 13
      Caption = #1057#1087#1077#1094#1080#1092#1080#1082#1072#1094#1080#1103
    end
    object Label3: TLabel
      Left = 8
      Top = 64
      Width = 23
      Height = 13
      Caption = #1052#1057#1050
    end
    object Label5: TLabel
      Left = 240
      Top = 64
      Width = 34
      Height = 13
      Caption = #1053#1086#1084#1077#1088
    end
    object Label4: TLabel
      Left = 376
      Top = 8
      Width = 121
      Height = 13
      Caption = #1048#1076#1077#1085#1090#1080#1092#1080#1082#1072#1090#1086#1088' '#1079#1072#1084#1077#1088#1072
    end
    object Label6: TLabel
      Left = 630
      Top = 120
      Width = 30
      Height = 13
      Caption = #1042#1089#1077#1075#1086
    end
    object Label7: TLabel
      Left = 694
      Top = 120
      Width = 3
      Height = 13
    end
    object Label8: TLabel
      Left = 632
      Top = 8
      Width = 147
      Height = 13
      Caption = #1048#1076#1077#1085#1090#1080#1092#1080#1082#1072#1090#1086#1088' '#1079#1072#1084#1077#1088#1072' '#1055#1057#1048
    end
    object VrLed1: TVrLed
      Left = 608
      Top = 24
      Width = 25
      Height = 25
      Hint = #1044#1072#1085#1085#1099#1077' '#1079#1072#1087#1080#1089#1072#1085#1099'  '#1074' '#1086#1073#1097#1091#1102' '#1041#1044
      Palette.Low = clRed
      Palette.High = clLime
      Color = clBlack
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWhite
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentColor = False
      ParentFont = False
    end
    object RzToolbarButton1: TRzToolbarButton
      Left = 640
      Top = 48
      Width = 41
      Height = 33
      Glyph.Data = {
        36100000424D3610000000000000360000002800000020000000200000000100
        2000000000000010000000000000000000000000000000000000000000000000
        0000000000000000000000000000000000000000000000000000000000000000
        0000000000000000000000000000000000000000000000000000000000000000
        0000000000000000000000000000000000000000000000000000000000000000
        0000000000000000000000000000000000000000000000000000A4A4A402A4A4
        A408A4A4A410A4A4A417A4A4A420A4A4A425A4A4A42FA4A4A437A4A4A437A4A4
        A43AA4A4A449A4A4A44CA4A4A44CA4A4A44CA4A4A44CA4A4A44CA4A4A44CA4A4
        A44CA4A4A44CA4A4A44CA4A4A44CA4A4A441A4A4A437A4A4A437A4A4A434A4A4
        A427A4A4A424A4A4A41BA4A4A414A4A4A40BA4A4A40400000000A4A4A430A4A4
        A486A4A4A4AAA4A4A4BEA4A4A4CEA4A4A4D5A4A4A4DEA4A4A4E5A4A4A4E6A4A4
        A4E7A4A4A4EEA4A4A4F0A4A4A4F1A4A4A4F1A4A4A4F1A4A4A4F1A4A4A4F1A4A4
        A4F1A4A4A4F1A4A4A4F0A4A4A4EFA4A4A4EAA4A4A4E6A4A4A4E5A4A4A4E2A4A4
        A4D7A4A4A4D3A4A4A4C5A4A4A4B5A4A4A498A4A4A45DA4A4A40AA4A4A412A4A4
        A438A4A4A450A4A4A462A4A4A471A4A4A47EA4A4A484A4A4A496A4A4A499A4A4
        A499A4A4A49CA4A4A4ADA4A4A4B2A4A4A4B2A4A4A4B2A4A4A4B2A4A4A4B2A4A4
        A4B2A4A4A4B2A4A4A4B1A4A4A4A5A4A4A499A4A4A499A4A4A499A39679C8A687
        42F9AD8B43FAAD9970C7A4A3A259A4A3A242A4A4A423A4A4A403000000000000
        000000000000A4A4A401A4A4A402A4A4A403A4A4A404A4A4A406A4A4A407A4A4
        A407A4A4A407A4A4A40CA4A4A40DA4A4A40DA4A4A40DA4A4A40DA4A4A40DA4A4
        A40DA4A4A40DA4A4A40DA4A4A40AA3A3A307A39D9107A28E624EA4802FFBAD87
        35FFB58E3DFFBD9544FFC09D589E000000000000000000000000000000000000
        0000000000000000000000000000000000000000000000000000000000000000
        0000000000000000000000000000000000000000000000000000000000000000
        000000000000000000000000000000000000A1803529A37F2EEFAB8634FFB48D
        3CFFBC9443FFC49B4BFFCDA252FED0A555200000000000000000000000000000
        0000000000000000000000000000000000000000000000000000000000000000
        0000000000000000000000000000000000000000000000000000000000000000
        0000000000000000000000000000A07C2A13A27E2CDBAA8533FFB28C3BFFBB93
        42FFC39A4AFFCCA151FFD4A859FFD6AA5A280000000000000000000000000000
        0000000000000000000000000000000000000000000000000000000000000000
        0000000000000000000000000000000000000000000000000000000000000000
        00000000000000000000A07C2A05A27D2CBFA98432FFB18B3AFFB99241FFC299
        49FFCBA050FFDEBA71FFDAAD5FBD000000000000000000000000000000000000
        0000000000000000000000000000000000000000000000000000000000000000
        0000000000000000000000000000000000000000000000000000000000000000
        00000000000000000000A27D2B9BA88331FFB08A39FFB89140FFC09848FFC99F
        4FFFDAB46AFFE5C079DDDEB56814000000000000000000000000000000000000
        0000000000000000000000000000000000000000000000000000000000000000
        0000000000000000000000000000000000000000000000000000000000000000
        000000000000A17D2B71A78230FFAF8938FFB7903FFFBF9747FFC89E4EFFD5AD
        60FFE8C580F0E0B86D2B00000000000000000000000000000000000000000000
        0000000000000000000000000000000000000000000000000000000000000000
        0000000000000000000000000000000000000000000000000000000000000000
        0000A17D2B4AA6812FFCAE8836FFB68F3EFFBE9645FFC79D4DFFD1A758FFE9C9
        85FCE0B76C490000000000000000000000000000000000000000000000000000
        0000000000000000000000000000000000000000000000000000000000000000
        000000000000B2B2B20DB2B2B223B2B2B21CB2B2B2040000000000000000A27E
        2F2BA5802EF1AD8735FFB58E3DFFBD9544FFC69C4CFFCEA354FFE8C884FFE0B8
        6C70000000000000000000000000000000000000000000000000000000000000
        0000000000000000000000000000000000000000000000000000B4B4B42BB4B4
        B492B3B3B3DDB3B3B3FEB3B3B3FFB3B3B3FFB3B3B3F9B4B4B4C2B1ACA06BA583
        37DBAB8634FFB48D3CFFBC9443FFC49B4BFFCDA252FFE4C37DFFE2BA6F990000
        0000000000000000000000000000000000000000000000000000000000000000
        000000000000000000000000000000000000B7B7B70CB7B7B799B6B6B6FCB6B6
        B6FFB6B6B6FFB6B6B6FFB6B6B6FFB6B6B6FFB6B6B6FFB6B6B6FFB6B6B6FFB5B2
        AAFFB49A63FFBB9342FFC39A4AFFCCA151FFDFBB73FFE4BE76BEE1B96E050000
        0000000000000000000000000000000000000000000000000000000000000000
        0000000000000000000000000000BABABA19B9B9B9D1B9B9B9FFB9B9B9FFBCBC
        BCCBCACACAADD4D4D4AFD8D8D8AFD8D8D8AFD1D1D1ADC5C5C5ABBABABAEDB9B9
        B9FFB9B9B9FFBEAA82FFCBA050FFDAB368FFE7C37CDBE2BA6F12000000000000
        0000000000000000000000000000000000000000000000000000000000000000
        00000000000000000000BDBDBD0ABCBCBCCFBCBCBCFFBCBCBCF2CBCBCBA1DDDD
        DDDAE1E1E1F2E9E9E9CEEEEEEEBAEFEFEFB6EEEEEEC1E9E9E9DADBDBDBB1C3C3
        C3B9BCBCBCFFBCBCBCFFCBB58BFFE9C883EFE2BA702800000000000000000000
        0000000000000000000000000000000000000000000000000000000000000000
        00000000000000000000BEBEBE91BEBEBEFFBFBFBFF4D0D0D09BDFDFDFF7EAEA
        EABDF0EFED9CEDECE6ADECEBE4B5EDECE5B3F1F0ECA7F8F8F793F7F7F79CE8E8
        E8B9C8C8C8AFBEBEBEFFC0BFBEFFCFBC995A0000000000000000000000000000
        0000000000000000000000000000000000000000000000000000000000000000
        000000000000C1C1C122C1C1C1FBC1C1C1FFCCCCCC9DDCDBD9FBE0DED3DEE0DC
        CBEEE3DECCFFD9D1B3FFCDC195FFD1C69EFFE1DCC6FFE2DDCBFCE4E1D3E0EFED
        E6B5EAEAEA9AC4C4C4CAC1C1C1FFC1C1C0B50000000000000000000000000000
        0000000000000000000000000000000000000000000000000000000000000000
        000000000000C3C3C386C3C3C3FFC3C3C1DBC9C7BBCFD6D2BEFFE6E1CFFFEBE6
        D4FFC2B171FFBDA045FFCBAC54FFCEB360FFC1AB5BFFD9D0AAFFEBE7D6FFE4DF
        CCFFDFDBC9EFD0CEC5A2C3C3C3FFC3C3C3FDC3C3C31F00000000000000000000
        0000000000000000000000000000000000000000000000000000000000000000
        000000000000C6C6C6CFC6C6C6FFC6C2B4FED0CBB7FFEAE5D2FFF0ECDBFFCBBC
        85FFC2A445FFD2B057FF9B8246FFB49852FFD5B75FFFB89F44FFE8E1C7FFEFEA
        D9FFE8E4D1FFD9D4BDFEC7C6C2FFC7C7C7FFC7C7C76700000000000000000000
        0000000000000000000000000000000000000000000000000000000000000000
        0000C9C9C902C9C9C9FAC9C9C9FFCCC8B4FFE1DCC8FFEFEBD9FFF3EEDDFFB39B
        40FFCFAE4CFF4C4022FF060606FF070706FF9E8540FFC3A640FFCBBE85FFF2EE
        DDFFEFEBDAFFE6E1CDFFCCCABFFFCACACAFFCCCCCC9400000000000000000000
        0000000000000000000000000000000000000000000000000000000000000000
        0000CACACA0FCBCBCBFFCBCBCBFFCCC7B1FFE7E2CEFFF0EBD9FFF3EEDDFFAC93
        2CFFCEAE48FF1A1810FF0C0C0CFF090909FF695928FFC4A73CFFC4B470FFF2EE
        DDFFF0ECDCFFE7E3CFFFCECCBEFFCDCDCDFFD1D1D1A600000000000000000000
        0000000000000000000000000000000000000000000000000000000000000000
        0000CCCCCC09CDCDCDFFCDCDCDFFC1BFA8FFE3DEC8FFEBE6D3FFF1ECDBFFB29D
        3FFFCAAF4BFF9C9379FF232323FF18160DFFAB9138FFBBA02FFFCDC289FFF0EC
        DCFFECE8D7FFDFDAC1FFC7C7BAFFD2D2D2FFD3D3D3A000000000000000000000
        0000000000000000000000000000000000000000000000000000000000000000
        000000000000D2D2D2E6CECECEFF9DBAD1FFC0CECAFFE1DDC4FFE8E3CEFFCEC3
        8FFFB39A2AFFD9C780FFBDA343FFC1A537FFC0A42EFFAD982EFFE7E2CBFFE9E5
        D2FFDBDCC8FFAAC7D4FFB8C6D2FFDADADAFFD2D2D27E00000000000000000000
        0000000000000000000000000000000000000000000000000000000000000000
        000000000000D4D4D4AAD3D3D3FFB7C4CFD89BC2E1F1B5D3E7FFCCD7D0FFDCDA
        C2FFC3B776FFA99321FFB0971DFFAD951BFFAE9C37FFD8D1AAFFDADDCEFFC5D8
        DCFFADD1ECFF9DBFDACBCECFD0FDDEDEDEFFD3D3D34200000000000000000000
        0000000000000000000000000000000000000000000000000000000000000000
        000000000000D3D3D350DBDBDBFFD1D1D1F8CDD6DE73BCD6E9ECBCDAF1FFBCDA
        F1FFC1D9E6FFC5D6D7FFBDC9B9FFC1CEC5FFC8DBE3FFC0DAEDFFBDDBF2FFBCD9
        EFFECBDEECBFCFD4D88FD7D7D7FFDCDCDCE3D4D4D40300000000000000000000
        0000000000000000000000000000000000000000000000000000000000000000
        000000000000D4D4D402DADADAD2D9D9D9FFD3D4D5C3E7E9EA5FDDE7EDC0CFE1
        EFF0C9E0F1FECBE1F3FFCBE2F4FFCBE1F4FFCBE1F3FFCADFEFFCD7E6F0E1EDF2
        F69FE3E5E759D3D3D3F9E4E4E4FFD6D6D66B0000000000000000000000000000
        0000000000000000000000000000000000000000000000000000000000000000
        00000000000000000000D7D7D737E0E0E0F9D7D7D7FFD6D7D7B3EAEAEA54F4F4
        F494F1F3F4AFEBF0F3C6E9EFF3CDEAF0F4CBEFF3F5BEF8F9F9A4F9F9F97DE7E7
        E759D4D4D4ECE3E3E3FFDADADAC5D7D7D7030000000000000000000000000000
        0000000000000000000000000000000000000000000000000000000000000000
        0000000000000000000000000000D8D8D860E3E3E3FDDADADAFFD5D5D5DDE0E0
        E06CEDEDED51F3F3F371F6F6F684F6F6F67FF5F5F564EDEDED51DDDDDD92D5D5
        D5FAE4E4E4FFDDDDDDDCD9D9D918000000000000000000000000000000000000
        0000000000000000000000000000000000000000000000000000000000000000
        000000000000000000000000000000000000D9D9D951E0E0E0EFE3E3E3FFD8D8
        D8FFD6D6D6EDD9D9D9B4DCDCDC99DBDBDBA0D8D8D8C9D5D5D5FCDDDDDDFFE6E6
        E6FFDBDBDBC1D9D9D91700000000000000000000000000000000000000000000
        0000000000000000000000000000000000000000000000000000000000000000
        00000000000000000000000000000000000000000000D9D9D91AD9D9D999E2E2
        E2F5E3E3E3FFE3E3E3FFE1E1E1FFE2E2E2FFE3E3E3FFE4E4E4FFDEDEDEDBD9D9
        D964D9D9D9020000000000000000000000000000000000000000000000000000
        0000000000000000000000000000000000000000000000000000000000000000
        000000000000000000000000000000000000000000000000000000000000D8D8
        D80DD8D8D84FD8D8D87FDADADA94D9D9D98DD9D9D96ED9D9D934D8D8D8010000
        0000000000000000000000000000000000000000000000000000000000000000
        0000000000000000000000000000000000000000000000000000}
      OnClick = RzToolbarButton1Click
      HotNumGlyphs = 0
    end
    object RzToolbarButton2: TRzToolbarButton
      Left = 184
      Top = 80
      Width = 33
      Height = 25
      Glyph.Data = {
        36090000424D3609000000000000360000002800000018000000180000000100
        2000000000000009000000000000000000000000000000000000000000000000
        0000000000000000000075757501757575017F7F7F0285858503858585048585
        8504858585048585850485858504858585048585850485858504858585027B7B
        7B02757575010000000000000000000000000000000000000000A4A4A41EA4A4
        A44DA3A3A365A4A4A479A4A4A484A3A3A394A4A4A495A4A4A49FA3A3A3AAA4A4
        A4AAA4A4A4AAA4A4A4AAA3A3A3AAA4A4A4AAA3A3A3AAA4A4A4A9A4A4A499A3A3
        A395A4A4A48EA4A4A47FA3A3A372A4A4A45DA4A4A43DA3A3A30AA3A3A328A3A3
        A363A3A3A37FA3A3A392A3A3A39CA3A3A3ACA3A3A3B1A3A3A3B2A3A3A3BFA3A3
        A3C4A3A3A3C4A3A3A3C4A3A3A3C4A3A3A3C4A3A3A3C4A3A3A3B8A3A3A3B1A3A3
        A3B1A3977BDCA88E57F8AB9A76D8A4A3A275A4A3A350A3A3A30E000000000000
        0000000000008A8A8A01999999029999990499999905A2A2A205A3A3A308A4A4
        A40AA4A4A40AA4A4A40AA3A3A30AA4A4A40AA3A3A30AA4A4A407A39D9005A28D
        5D54A78231FDB28B3AFFBD9544FEC19E5B8B0000000000000000000000000000
        0000000000000000000000000000000000000000000000000000000000000000
        0000000000000000000000000000000000000000000000000000A07C2B30A681
        2FF2B08A39FFBB9343FFC69D4DFED1A656E20000000000000000000000000000
        0000000000000000000000000000000000000000000000000000000000000000
        000000000000000000000000000000000000000000009D792918A4802EE0AF89
        37FEBA9241FEC59B4BFED7AF64FED9AC5D9F0000000000000000000000000000
        0000000000000000000000000000000000000000000000000000000000000000
        00000000000000000000000000000000000094732708A37F2DC6AD8736FFB891
        40FEC39A4AFFD3AA5DFFE4C078CEDBB1650B0000000000000000000000000000
        0000000000000000000000000000000000000000000000000000000000000000
        0000000000000000000000000000896A2401A27E2CA4AC8635FFB68F3FFFC299
        48FECFA556FFE5C27CE6DFB66A1D000000000000000000000000000000000000
        00000000000000000000000000000000000000000000000000008A8A8A079696
        961A8F8F8F0C0000000000000000A27E2C7BAA8533FEB58E3DFEC09747FECBA1
        51FEE4C27BF6E0B76C3700000000000000000000000000000000000000000000
        0000000000000000000000000000A7A7A707B5B5B56CB4B4B4CBB4B4B4FCB4B4
        B4FFB4B4B4FEB4B4B4DAB0A89599A9873CFDB38D3CFEBE9646FFCA9F50FFE1BD
        76FEE2BA6F590000000000000000000000000000000000000000000000000000
        00000000000000000000B8B8B827B8B8B8D5B8B8B8FFB9B9B9E8C1C1C1C3C6C6
        C6C3C3C3C3C2BABABADCB8B8B8FEB7B4ADFFBC9E63FEC89E4EFFDCB76DFFE3BD
        7482000000000000000000000000000000000000000000000000000000000000
        000000000000BBBBBB1FBCBCBCE7BCBCBCF8CACACAB9DCDCDCD4E6E6E6DEEBEB
        EBCAECECECCBE6E6E6C4D0D0D0B6BDBDBDEABCBBB9FED2B67EFFE5C079ABD4AC
        6401000000000000000000000000000000000000000000000000000000000000
        000000000000BFBFBFBFBFBFBFFBCFCFCFB1E2E2E2E2EAE9E4B7EAE8E0BFEAE8
        DEC7ECE9E1C2F0EFE9AFF5F5F4A5DEDEDEA3C0C0C0ECC2BEB8F7CFBC9A150000
        0000000000000000000000000000000000000000000000000000000000000000
        0000C2C2C240C2C2C2FFC7C7C5BBD5D3C9F9E1DDCBF7E2DCC6FFC8B67CFEC5AE
        65FFCBBA7EFFE0D9BDFFE4DFCDF9E7E5D8D5D2D2CEA6C2C2C2FFC2C2C2710000
        0000000000000000000000000000000000000000000000000000000000000000
        0000C6C6C693C6C6C6FEC5C1AEF3E3DFCBFEEFEAD9FEBFA95CFECEAD52FEAA8F
        4CFECEB15FFEC0A853FEEBE5D0FEEAE5D3FED9D4BFF3C6C5C3FEC6C6C6C40000
        0000000000000000000000000000000000000000000000000000000000000000
        0000C9C9C9C0CAC9C6FFD5D0BAFFEFEAD8FEE1D9B9FFC0A23EFF64542AFE0707
        07FF3B321AFFC7A944FFD4C897FEF0ECDBFFE9E4D1FECCCAC2FFCCCCCCF10000
        0000000000000000000000000000000000000000000000000000000000000000
        0000CCCCCCC9CCCBC5FFD6D1B9FFEDE8D6FEDFD7B4FFBDA135FF706442FE1111
        11FF332C15FFC4A73AFFD2C691FEF0ECDCFFE6E2CEFECCCABEFFD2D2D2F8A7A7
        A703000000000000000000000000000000000000000000000000000000000000
        0000D1D1D1B1CBCDCEFEABC0C6FEE0DDC7FEE9E4CFFEB49F3FFED3C17BFE9783
        3AFEB69B33FEB39B2DFEE5DFC5FEE6E3CFFEBECECCFEBFC8CEFED7D7D7E30000
        0000000000000000000000000000000000000000000000000000000000000000
        0000D3D3D375D4D4D4FFABC2D5CBB1D2E9FEC9D8D6FFCFD0B5FFB5A54CFEB19B
        2CFFB4A242FFCDCBA6FFCFDBD8FEB8D5E8FFA8C6DEC6D2D3D4FEDADADAA60000
        0000000000000000000000000000000000000000000000000000000000000000
        0000D0D0D019DADADAF6D2D3D4CFD6E0E892C7DDEEEFC3DDF2FFC3DDF1FEC5DD
        EFFFC4DEF1FFC4DEF2FFC7DEEFF6DAE7F0ACD5D7D9ABDEDEDEFED5D5D5420000
        0000000000000000000000000000000000000000000000000000000000000000
        000000000000D8D8D87BDCDCDCFED8D8D8AFEDEEEE70EAEFF2B6E5EDF3D2E3ED
        F3D9E5EEF4D4ECF1F5BCF6F7F77DDFE0E090DCDCDCFEDCDCDCAB000000000000
        0000000000000000000000000000000000000000000000000000000000000000
        000000000000C4C4C402DBDBDBA2DFDFDFFED7D7D7D4E3E3E37EEDEDED62F2F2
        F263F1F1F160E8E8E876D9D9D9BFDEDEDEFFDEDEDEC8D6D6D60D000000000000
        0000000000000000000000000000000000000000000000000000000000000000
        00000000000000000000C4C4C401DADADA71E1E1E1F0DFDFDFFFDADADAFCD8D8
        D8F2D9D9D9FBDFDFDFFFE1E1E1F9DCDCDC91D5D5D50A00000000000000000000
        0000000000000000000000000000000000000000000000000000000000000000
        000000000000000000000000000000000000D4D4D410D8D8D861DDDDDD99E0E0
        E0AEDEDEDEA0DADADA6FD8D8D81C000000000000000000000000000000000000
        0000000000000000000000000000000000000000000000000000}
      OnClick = RzToolbarButton2Click
      HotNumGlyphs = 0
    end
    object RzButton1: TRzButton
      Left = 896
      Top = 104
      Width = 91
      FrameColor = clRed
      Caption = #1047#1072#1082#1088#1099#1090#1100
      Color = clBlack
      HotTrack = True
      HotTrackColor = clRed
      TabOrder = 0
      OnClick = btnCloseClick
    end
    object edtType: TComboBox
      Left = 8
      Top = 24
      Width = 97
      Height = 21
      Color = clWhite
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clBlue
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ItemHeight = 13
      ParentFont = False
      TabOrder = 1
      OnChange = edtTypeChange
    end
    object edtSpc: TComboBox
      Left = 112
      Top = 24
      Width = 257
      Height = 21
      Color = clWhite
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clBlue
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ItemHeight = 13
      ParentFont = False
      TabOrder = 2
      OnChange = edtSpcChange
    end
    object edtMsk: TComboBox
      Left = 8
      Top = 80
      Width = 169
      Height = 21
      Color = clWhite
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clBlue
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ItemHeight = 13
      ParentFont = False
      TabOrder = 3
      OnKeyPress = edtMskKeyPress
    end
    object edtNumber: TComboBox
      Left = 240
      Top = 80
      Width = 129
      Height = 21
      Color = clWhite
      Enabled = False
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clBlue
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ItemHeight = 13
      ParentFont = False
      TabOrder = 4
      OnChange = edtNumberChange
    end
    object btnMake: TRzButton
      Left = 800
      Top = 8
      Width = 91
      FrameColor = clLime
      Caption = #1055#1077#1095#1072#1090#1100' '#1074#1089#1077#1093
      Color = clBlack
      HotTrack = True
      HotTrackColor = clRed
      TabOrder = 5
      OnClick = btnMakeClick
    end
    object btnApp: TRzButton
      Left = 688
      Top = 48
      Width = 81
      Height = 33
      FrameColor = clYellow
      Caption = #1044#1086#1073#1072#1074#1080#1090#1100' '#1082' '#1079#1072#1084#1077#1088#1091
      Color = clBlack
      HotTrack = True
      HotTrackColor = clRed
      TabOrder = 6
      OnClick = btnAppClick
    end
    object cmb_ID: TComboBox
      Left = 376
      Top = 24
      Width = 185
      Height = 21
      Color = clWhite
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clBlue
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ItemHeight = 13
      ParentFont = False
      TabOrder = 7
      OnKeyPress = cmb_IDKeyPress
    end
    object edtMeasure_ID: TRzEdit
      Left = 640
      Top = 24
      Width = 129
      Height = 21
      Color = clBlack
      FrameColor = clRed
      FrameVisible = True
      TabOrder = 8
      OnChange = edtMeasure_IDChange
    end
    object RzButton2: TRzButton
      Left = 896
      Top = 8
      Width = 91
      FrameColor = clYellow
      Caption = #1055#1088#1086#1090#1086#1082#1086#1083
      Color = clBlack
      HotTrack = True
      HotTrackColor = clRed
      TabOrder = 9
      OnClick = RzButton2Click
    end
    object RzButton3: TRzButton
      Left = 800
      Top = 32
      Width = 91
      FrameColor = clFuchsia
      Caption = #1069#1082#1089#1087#1086#1088#1090
      Color = clBlack
      HotTrack = True
      HotTrackColor = clRed
      TabOrder = 10
      OnClick = RzButton3Click
    end
    object edt: TCheckBox
      Left = 464
      Top = 73
      Width = 97
      Height = 17
      Caption = #1090#1086#1083#1100#1082#1086' '#1075#1086#1076#1085#1099#1077
      TabOrder = 11
    end
    object CheckBox1: TCheckBox
      Left = 632
      Top = 89
      Width = 145
      Height = 17
      Caption = #1055#1086#1083#1085#1086#1088#1072#1079#1084#1077#1088#1085#1072#1103' '#1087#1077#1095#1072#1090#1100
      TabOrder = 12
    end
    object RzButton4: TRzButton
      Left = 384
      Top = 72
      Width = 73
      Height = 33
      FrameColor = clFuchsia
      Caption = #1042#1099#1073#1088#1072#1090#1100' '#1085#1086#1084#1077#1088#1072
      Color = clBlack
      HotTrack = True
      HotTrackColor = clRed
      TabOrder = 13
      OnClick = RzButton4Click
    end
    object edtSpc2: TComboBox
      Left = 8
      Top = 112
      Width = 225
      Height = 21
      Color = clWhite
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clBlue
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ItemHeight = 13
      ParentFont = False
      TabOrder = 14
    end
    object RzButton5: TRzButton
      Left = 896
      Top = 32
      Width = 91
      FrameColor = clAqua
      Caption = #1055#1077#1095#1072#1090#1100' '#1076#1072#1085#1085#1099#1093
      Color = clBlack
      HotTrack = True
      HotTrackColor = clRed
      TabOrder = 15
      OnClick = RzButton5Click
    end
    object RzButton6: TRzButton
      Left = 240
      Top = 112
      Width = 217
      FrameColor = clFuchsia
      Caption = #1055#1086#1076#1073#1086#1088' '#1087#1086#1076' '#1089#1087#1077#1094#1080#1092#1080#1082#1072#1094#1080#1102
      Color = clBlack
      HotTrack = True
      HotTrackColor = clRed
      TabOrder = 16
      OnClick = RzButton6Click
    end
    object CheckBox2: TCheckBox
      Left = 464
      Top = 89
      Width = 97
      Height = 17
      Caption = #1042#1099#1073#1088#1072#1085#1085#1099#1077
      TabOrder = 17
    end
    object RzButton8: TRzButton
      Left = 896
      Top = 56
      Width = 91
      FrameColor = clYellow
      Caption = #1055#1077#1088#1077#1087#1088#1086#1074#1077#1088#1082#1072
      Color = clBlack
      HotTrack = True
      HotTrackColor = clRed
      TabOrder = 18
      OnClick = RzButton8Click
    end
  end
  object frxReport1: TfrxReport
    Version = '4.9'
    DotMatrixReport = False
    IniFile = '\Software\Fast Reports'
    PreviewOptions.Buttons = [pbPrint, pbLoad, pbSave, pbExport, pbZoom, pbFind, pbOutline, pbPageSetup, pbTools, pbEdit, pbNavigator, pbExportQuick]
    PreviewOptions.Zoom = 1
    PrintOptions.Printer = 'Default'
    PrintOptions.PrintOnSheet = 0
    ReportOptions.CreateDate = 44361.6749089931
    ReportOptions.LastChange = 44361.7032198611
    ScriptLanguage = 'PascalScript'
    ScriptText.Strings = (
      ''
      'begin'
      ''
      'end.')
    Left = 240
    Top = 48
    Datasets = <
      item
        DataSet = ProtokolForm.Dopuski
        DataSetName = 'Dopuski'
      end
      item
        DataSet = Dostup
        DataSetName = 'Dostup'
      end
      item
        DataSet = PhazeNoise
        DataSetName = 'PhazeNoise'
      end
      item
        DataSet = Proverka
        DataSetName = 'Proverka'
      end
      item
        DataSet = Spc
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
      object ReportTitle1: TfrxReportTitle
        Height = 136.06308
        Top = 18.89765
        Width = 718.1107
        object Memo2: TfrxMemoView
          Left = 3.77953
          Top = 3.77953
          Width = 249.44898
          Height = 18.89765
          ShowHint = False
          Memo.UTF8 = (
            
              #1056#1119#1057#1026#1056#1109#1057#8218#1056#1109#1056#1108#1056#1109#1056#187' '#1056#1108#1056#1109#1056#1029#1057#8218#1057#1026#1056#1109#1056#187#1057#1034#1056#1029#1056#1109#1056#1110#1056#1109' '#1056#1105#1056#183#1056#1112#1056#181#1057#1026#1056#181#1056#1029#1056#1105#1057#1039' '#1056#164#1056 +
              #1025'.')
        end
        object BarCode1: TfrxBarCodeView
          Left = 578.26809
          Top = 7.55906
          Width = 129
          Height = 45.35436
          ShowHint = False
          BarType = bcCode39
          Rotation = 0
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
          Left = 11.33859
          Top = 41.57483
          Width = 94.48825
          Height = 18.89765
          ShowHint = False
          Memo.UTF8 = (
            #1056#1114#1056#1038#1056#1113)
        end
        object ProverkaMSK: TfrxMemoView
          Left = 136.06308
          Top = 41.57483
          Width = 158.74026
          Height = 18.89765
          ShowHint = False
          DataField = 'MSK'
          DataSet = Proverka
          DataSetName = 'Proverka'
          Memo.UTF8 = (
            '[Proverka."MSK"]')
        end
        object Memo4: TfrxMemoView
          Left = 11.33859
          Top = 75.5906
          Width = 109.60637
          Height = 18.89765
          ShowHint = False
          Memo.UTF8 = (
            #1056#1038#1056#1111#1056#181#1057#8224#1056#1105#1057#8222#1056#1105#1056#1108#1056#176#1057#8224#1056#1105#1057#1039)
        end
        object ProverkaSpc: TfrxMemoView
          Left = 132.28355
          Top = 75.5906
          Width = 302.3624
          Height = 18.89765
          ShowHint = False
          DataField = 'Spc'
          DataSet = Proverka
          DataSetName = 'Proverka'
          Memo.UTF8 = (
            '[Proverka."Spc"]')
        end
        object Memo5: TfrxMemoView
          Left = 11.33859
          Top = 105.82684
          Width = 109.60637
          Height = 18.89765
          ShowHint = False
          Memo.UTF8 = (
            #1056#8221#1056#176#1057#8218#1056#176' ')
        end
        object ProverkaFirst_Date: TfrxMemoView
          Left = 132.28355
          Top = 105.82684
          Width = 177.63791
          Height = 18.89765
          ShowHint = False
          DataField = 'First_Date'
          DataSet = Proverka
          DataSetName = 'Proverka'
          Memo.UTF8 = (
            '[Proverka."First_Date"]')
        end
      end
      object MasterData1: TfrxMasterData
        Height = 18.89765
        Top = 287.24428
        Width = 718.1107
        DataSet = Proverka
        DataSetName = 'Proverka'
        RowCount = 0
        object Memo13: TfrxMemoView
          Width = 94.48825
          Height = 18.89765
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8 = (
            '[Line#]')
          ParentFont = False
          VAlign = vaCenter
        end
        object ProverkaSerial: TfrxMemoView
          Left = 94.48825
          Width = 94.48825
          Height = 18.89765
          ShowHint = False
          DataField = 'Serial'
          DataSet = Proverka
          DataSetName = 'Proverka'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8 = (
            '[Proverka."Serial"]')
          ParentFont = False
          VAlign = vaCenter
        end
        object ProverkaMain_Shum1: TfrxMemoView
          Left = 188.9765
          Width = 94.48825
          Height = 18.89765
          ShowHint = False
          DataField = 'Main_Shum1'
          DataSet = Proverka
          DataSetName = 'Proverka'
          DisplayFormat.FormatStr = '%2.2f'
          DisplayFormat.Kind = fkNumeric
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8 = (
            '[Proverka."Main_Shum1"]')
          ParentFont = False
          VAlign = vaCenter
        end
        object ProverkaFirst_Shum1: TfrxMemoView
          Left = 283.46475
          Width = 94.48825
          Height = 18.89765
          ShowHint = False
          DataField = 'First_Shum1'
          DataSet = Proverka
          DataSetName = 'Proverka'
          DisplayFormat.FormatStr = '%2.2f'
          DisplayFormat.Kind = fkNumeric
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8 = (
            '[Proverka."First_Shum1"]')
          ParentFont = False
          VAlign = vaCenter
        end
        object ProverkaDev1: TfrxMemoView
          Left = 377.953
          Width = 94.48825
          Height = 18.89765
          ShowHint = False
          DataField = 'Dev1'
          DataSet = Proverka
          DataSetName = 'Proverka'
          DisplayFormat.FormatStr = '%2.2f'
          DisplayFormat.Kind = fkNumeric
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8 = (
            '[Proverka."Dev1"]')
          ParentFont = False
          VAlign = vaCenter
        end
        object ProverkaStatus: TfrxMemoView
          Left = 472.44125
          Width = 94.48825
          Height = 18.89765
          ShowHint = False
          DataField = 'Status'
          DataSet = Proverka
          DataSetName = 'Proverka'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8 = (
            '[Proverka."Status"]')
          ParentFont = False
          VAlign = vaCenter
        end
        object Memo14: TfrxMemoView
          Left = 566.9295
          Width = 151.1812
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
        Height = 22.67718
        Top = 366.61441
        Width = 718.1107
        object Memo1: TfrxMemoView
          Left = 642.5201
          Width = 75.5906
          Height = 18.89765
          ShowHint = False
          HAlign = haRight
          Memo.UTF8 = (
            '[Page#]')
        end
        object Memo15: TfrxMemoView
          Left = 3.77953
          Width = 94.48825
          Height = 18.89765
          ShowHint = False
          Memo.UTF8 = (
            #1056#8217#1057#8249#1056#1111#1056#1109#1056#187#1056#1029#1056#1105#1056#187'('#1056#176')')
        end
        object DostupName: TfrxMemoView
          Left = 124.72449
          Width = 238.11039
          Height = 18.89765
          ShowHint = False
          DataField = 'Name'
          DataSet = Dostup
          DataSetName = 'Dostup'
          Memo.UTF8 = (
            '[Dostup."Name"]')
        end
      end
      object PageHeader1: TfrxPageHeader
        Height = 49.13389
        Top = 177.63791
        Width = 718.1107
        object Memo6: TfrxMemoView
          Left = 94.48825
          Width = 94.48825
          Height = 49.13389
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
        object Memo7: TfrxMemoView
          Width = 94.48825
          Height = 49.13389
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8 = (
            #1074#8222#8211)
          ParentFont = False
          VAlign = vaCenter
        end
        object Memo8: TfrxMemoView
          Left = 188.9765
          Width = 94.48825
          Height = 49.13389
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8 = (
            #1056#164#1056#176#1056#183#1056#1109#1056#1030#1057#8249#1056#181' '#1057#8364#1057#1107#1056#1112#1057#8249' 1, '#1056#1169#1056#8216)
          ParentFont = False
          VAlign = vaCenter
        end
        object Memo9: TfrxMemoView
          Left = 283.46475
          Width = 94.48825
          Height = 49.13389
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8 = (
            #1056#164#1056#176#1056#183#1056#1109#1056#1030#1057#8249#1056#181' '#1057#8364#1057#1107#1056#1112#1057#8249' 2, '#1056#1169#1056#8216)
          ParentFont = False
          VAlign = vaCenter
        end
        object Memo10: TfrxMemoView
          Left = 377.953
          Width = 94.48825
          Height = 49.13389
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8 = (
            #1056#152#1056#183#1056#1112#1056#181#1056#1029#1056#181#1056#1029#1056#1105#1056#181' '#1056#164#1056#1025', '#1056#1169#1056#8216)
          ParentFont = False
          VAlign = vaCenter
        end
        object Memo11: TfrxMemoView
          Left = 472.44125
          Width = 94.48825
          Height = 49.13389
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8 = (
            #1056#1038#1057#8218#1056#176#1057#8218#1057#1107#1057#1027)
          ParentFont = False
          VAlign = vaCenter
        end
        object Memo12: TfrxMemoView
          Left = 566.9295
          Width = 151.1812
          Height = 49.13389
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
    end
  end
  object PhazeNoise: TfrxDBDataset
    UserName = 'PhazeNoise'
    CloseDataSource = False
    FieldAliases.Strings = (
      'ID=ID'
      'MeasureID=MeasureID'
      'N=N'
      'MSK=MSK'
      'Shum1=Shum1'
      'Shum10=Shum10'
      'Shum50=Shum50'
      'Shum100=Shum100'
      'Shum1K=Shum1K'
      'Shum10K=Shum10K'
      'Shum100K=Shum100K'
      'Shum1M=Shum1M'
      '_File_=_File_'
      '_Date_=_Date_'
      '_Time_=_Time_'
      'Operator=Operator'
      'Spc=Spc'
      'PSI_ID=PSI_ID'
      'Delete=Delete'
      'Lot=Lot'
      'Inc=Inc'
      'Shum3=Shum3'
      'Protokol_ID=Protokol_ID'
      'Ucontrl=Ucontrl'
      'Pribor_SN=Pribor_SN'
      'Signal_Frequency=Signal_Frequency'
      'Signal_Level=Signal_Level'
      'Pribor_Type=Pribor_Type'
      'Generator_Type=Generator_Type'
      'Generator_SN=Generator_SN'
      'Generator_Power=Generator_Power'
      'Generator_Current=Generator_Current')
    DataSet = DataModule2.PhazeNoise
    BCDToCurrency = False
    Left = 280
    Top = 48
  end
  object frxXLSExport1: TfrxXLSExport
    UseFileCache = True
    ShowProgress = True
    OverwritePrompt = False
    ExportEMF = True
    AsText = False
    Background = True
    FastExport = True
    PageBreaks = True
    EmptyLines = True
    SuppressPageHeadersFooters = False
    Left = 280
    Top = 104
  end
  object frxPDFExport1: TfrxPDFExport
    ShowDialog = False
    UseFileCache = True
    ShowProgress = False
    OverwritePrompt = False
    PrintOptimized = False
    Outline = False
    Background = True
    HTMLTags = True
    Author = 'FastReport'
    Subject = 'FastReport PDF export'
    ProtectionFlags = [ePrint, eModify, eCopy, eAnnot]
    HideToolbar = False
    HideMenubar = False
    HideWindowUI = False
    FitWindow = False
    CenterWindow = False
    PrintScaling = False
    Left = 240
    Top = 104
  end
  object frxBarCodeObject1: TfrxBarCodeObject
    Left = 320
    Top = 104
  end
  object Spc: TfrxDBDataset
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
      'Sh4OT=Sh4OT')
    DataSet = DataModule2.SqlSpec
    BCDToCurrency = False
    Left = 320
    Top = 48
  end
  object frxJPEGExport1: TfrxJPEGExport
    ShowDialog = False
    UseFileCache = True
    ShowProgress = False
    OverwritePrompt = False
    Left = 360
    Top = 104
  end
  object frxRTFExport1: TfrxRTFExport
    ShowDialog = False
    UseFileCache = True
    ShowProgress = False
    OverwritePrompt = False
    ExportEMF = True
    Wysiwyg = True
    Creator = 'FastReport'
    SuppressPageHeadersFooters = False
    HeaderFooterMode = hfText
    AutoSize = False
    Left = 392
    Top = 104
  end
  object frxXMLExport1: TfrxXMLExport
    ShowDialog = False
    UseFileCache = True
    ShowProgress = False
    OverwritePrompt = False
    Background = True
    Creator = 'FastReport'
    EmptyLines = True
    SuppressPageHeadersFooters = False
    RowsCount = 0
    Split = ssNotSplit
    Left = 432
    Top = 104
  end
  object clFtp1: TclFtp
    PassiveMode = True
    CertificateFlags = [cfIgnoreDateInvalid]
    Left = 360
    Top = 48
  end
  object clMailMessage1: TclMailMessage
    Bodies.Items = (
      'TclMultipartBody'
      ''
      ()
      ''
      'multipart/mixed'
      0
      '')
    Date = 43132.7280675231
    CharSet = 'KOI8-R'
    ContentType = 'text/plain'
    Left = 456
    Top = 72
  end
  object clSmtp1: TclSmtp
    UserName = 'ExportAll'
    MailFrom = 'root@npk2.morion'
    MailToList.Strings = (
      'ExportAll@npk2.morion')
    Server = '172.16.20.20'
    CertificateFlags = [cfIgnoreCommonNameInvalid]
    TLSFlags = []
    UseEHLO = False
    MailAgent = 'Clever Internet Suite v 6.2'
    MailMessage = clMailMessage1
    Left = 424
    Top = 72
  end
  object Proverka: TfrxDBDataset
    UserName = 'Proverka'
    CloseDataSource = False
    FieldAliases.Strings = (
      'Serial=Serial'
      'MSK=MSK'
      'Spc=Spc'
      'SpcID=SpcID'
      'ProtokolID=ProtokolID'
      'Measure_ID=Measure_ID'
      'Main_Shum1=Main_Shum1'
      'Main_Shum2=Main_Shum2'
      '-Main_Shum3=Main_Shum3'
      '-Main_Shum4=Main_Shum4'
      '-Main_Shum5=Main_Shum5'
      'First_Shum1=First_Shum1'
      'First_Shum2=First_Shum2'
      '-First_Shum3=First_Shum3'
      '-First_Shum4=First_Shum4'
      '-First_Shum5=First_Shum5'
      'Dev1=Dev1'
      'Dev2=Dev2'
      '-Dev3=Dev3'
      '-Dev4=Dev4'
      '-Dev5=Dev5'
      'Status=Status'
      'Main_PH_ID=Main_PH_ID'
      'First_PH_ID=First_PH_ID'
      'Main_Date=Main_Date'
      'First_Date=First_Date'
      'ID=ID')
    DataSet = DataModule2.proverka_ph
    BCDToCurrency = False
    Left = 392
    Top = 48
  end
  object Dostup: TfrxDBDataset
    UserName = 'Dostup'
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
      'PH_Login=PH_Login'
      'eKey=eKey')
    DataSet = DataModule1.Dostup
    BCDToCurrency = False
    Left = 424
    Top = 48
  end
end
