object ProtokolForm: TProtokolForm
  Left = 609
  Top = 165
  BorderStyle = bsDialog
  Caption = #1055#1077#1095#1072#1090#1100' '#1087#1088#1086#1090#1086#1082#1086#1083#1086#1074
  ClientHeight = 631
  ClientWidth = 425
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
  object Label1: TLabel
    Left = 24
    Top = 24
    Width = 81
    Height = 13
    Caption = #1058#1080#1087' '#1088#1077#1079#1086#1085#1072#1090#1086#1088#1072
  end
  object Label2: TLabel
    Left = 216
    Top = 24
    Width = 75
    Height = 13
    Caption = #1057#1087#1077#1094#1080#1092#1080#1082#1072#1094#1080#1103
  end
  object Label3: TLabel
    Left = 24
    Top = 96
    Width = 23
    Height = 13
    Caption = #1052#1057#1050
  end
  object Label4: TLabel
    Left = 216
    Top = 96
    Width = 75
    Height = 13
    Caption = #1058#1080#1087' '#1087#1088#1086#1090#1086#1082#1086#1083#1072
  end
  object VrProgressBar1: TVrProgressBar
    Left = 24
    Top = 552
    Width = 377
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
  end
  object Label5: TLabel
    Left = 216
    Top = 184
    Width = 33
    Height = 13
    Caption = #1047#1072#1084#1077#1088
  end
  object Label6: TLabel
    Left = 24
    Top = 184
    Width = 90
    Height = 13
    Caption = #1053#1086#1084#1077#1088' '#1087#1088#1086#1090#1086#1082#1086#1083#1072
  end
  object Label7: TLabel
    Left = 24
    Top = 320
    Width = 99
    Height = 13
    Caption = #1044#1072#1090#1072' '#1080#1079#1075#1086#1090#1086#1074#1083#1077#1085#1080#1103
    Visible = False
  end
  object setDate: TVrShadowButton
    Left = 128
    Top = 344
    Width = 33
    Height = 27
    ShadowColor = clBlack
    ShadowOutline = clNone
    Caption = '>>>'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWhite
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    Visible = False
    OnClick = setDateClick
  end
  object setDate1: TVrShadowButton
    Left = 280
    Top = 344
    Width = 33
    Height = 27
    ShadowColor = clBlack
    ShadowOutline = clNone
    Caption = '>>>'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWhite
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    Visible = False
    OnClick = setDate1Click
  end
  object Label8: TLabel
    Left = 176
    Top = 320
    Width = 101
    Height = 13
    Caption = #1044#1072#1090#1072' '#1087#1077#1088#1077#1087#1088#1086#1074#1077#1088#1082#1080
    Visible = False
  end
  object Label9: TLabel
    Left = 24
    Top = 240
    Width = 121
    Height = 13
    Caption = #1048#1076#1077#1085#1090#1080#1092#1080#1082#1072#1090#1086#1088' '#1079#1072#1084#1077#1088#1072
  end
  object Label10: TLabel
    Left = 232
    Top = 240
    Width = 136
    Height = 13
    Caption = #1048#1076#1077#1085#1090#1080#1092#1080#1082#1072#1090#1086#1088' '#1087#1088#1086#1090#1086#1082#1086#1083#1072
  end
  object Label11: TLabel
    Left = 24
    Top = 384
    Width = 117
    Height = 20
    Caption = #1042#1099#1073#1086#1088' '#1079#1072#1082#1072#1079#1072
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clLime
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label12: TLabel
    Left = 24
    Top = 424
    Width = 73
    Height = 13
    Caption = #1053#1086#1084#1077#1088' '#1079#1072#1082#1072#1079#1072
  end
  object Label13: TLabel
    Left = 136
    Top = 424
    Width = 74
    Height = 13
    Caption = #1053#1086#1084#1077#1085#1082#1083#1072#1090#1091#1088#1072
  end
  object Label14: TLabel
    Left = 24
    Top = 488
    Width = 83
    Height = 13
    Caption = #1044#1086#1089#1090#1091#1087#1085#1099#1077' '#1052#1057#1050
  end
  object edtAn: TCheckBox
    Left = 168
    Top = 296
    Width = 113
    Height = 17
    Caption = #1041#1077#1079' '#1072#1085#1086#1084#1072#1083#1100#1085#1099#1093
    Checked = True
    State = cbChecked
    TabOrder = 0
  end
  object edtM: TRzComboBox
    Left = 216
    Top = 208
    Width = 57
    Height = 21
    Color = clBlack
    Ctl3D = False
    DisabledColor = clBlack
    FlatButtonColor = clLime
    FlatButtons = True
    FrameColor = clYellow
    FrameHotColor = clFuchsia
    FrameHotTrack = True
    FrameVisible = True
    ItemHeight = 13
    ParentColor = True
    ParentCtl3D = False
    TabOrder = 1
  end
  object edt: TCheckBox
    Left = 24
    Top = 296
    Width = 113
    Height = 17
    Caption = #1090#1086#1083#1100#1082#1086' '#1075#1086#1076#1085#1099#1077
    TabOrder = 2
    OnClick = edtClick
  end
  object edtDate: TRzEdit
    Left = 24
    Top = 344
    Width = 97
    Height = 21
    Color = clBlack
    FrameColor = clYellow
    FrameHotColor = clYellow
    FrameHotTrack = True
    FrameVisible = True
    TabOrder = 3
    Visible = False
  end
  object edtDate1: TRzEdit
    Left = 176
    Top = 344
    Width = 97
    Height = 21
    Color = clBlack
    FrameColor = clYellow
    FrameHotColor = clYellow
    FrameHotTrack = True
    FrameVisible = True
    TabOrder = 4
    Visible = False
  end
  object RzButton1: TAdvGlassButton
    Left = 200
    Top = 584
    Width = 97
    Height = 32
    BackColor = clBlack
    Caption = #1057#1086#1074#1084#1077#1097#1077#1085#1080#1077
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clRed
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = []
    ForeColor = clWhite
    GlowColor = 16760205
    InnerBorderColor = clBlack
    OuterBorderColor = clWhite
    ParentFont = False
    ShineColor = clWhite
    TabOrder = 5
    Version = '1.2.3.0'
    OnClick = RzButton1Click
  end
  object btnClose: TAdvGlassButton
    Left = 312
    Top = 584
    Width = 100
    Height = 32
    BackColor = clRed
    Caption = #1047#1072#1082#1088#1099#1090#1100
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = []
    ForeColor = clWhite
    GlowColor = 16760205
    InnerBorderColor = clBlack
    OuterBorderColor = clWhite
    ParentFont = False
    ShineColor = clWhite
    TabOrder = 6
    Version = '1.2.3.0'
    OnClick = btnCloseClick
  end
  object btnPrint: TAdvGlassButton
    Left = 16
    Top = 584
    Width = 89
    Height = 32
    BackColor = clBlack
    Caption = #1055#1077#1095#1072#1090#1100
    Enabled = False
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clLime
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = []
    ForeColor = clWhite
    GlowColor = 16760205
    InnerBorderColor = clBlack
    OuterBorderColor = clWhite
    ParentFont = False
    ShineColor = clWhite
    TabOrder = 7
    Version = '1.2.3.0'
    OnClick = btnPrintClick
  end
  object AdvGlassButton1: TAdvGlassButton
    Left = 112
    Top = 584
    Width = 81
    Height = 32
    BackColor = clBlack
    Caption = #1053#1086#1074#1099#1081
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clLime
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = []
    ForeColor = clWhite
    GlowColor = 16760205
    InnerBorderColor = clBlack
    OuterBorderColor = clWhite
    ParentFont = False
    ShineColor = clWhite
    TabOrder = 8
    Version = '1.2.3.0'
    OnClick = VrShadowButton1Click
  end
  object cmb_ID: TRzComboBox
    Left = 24
    Top = 256
    Width = 97
    Height = 21
    Color = clBlack
    Ctl3D = False
    DisabledColor = clBlack
    FlatButtonColor = clLime
    FlatButtons = True
    FrameColor = clRed
    FrameHotColor = clFuchsia
    FrameHotTrack = True
    FrameVisible = True
    ItemHeight = 13
    ParentColor = True
    ParentCtl3D = False
    Sorted = True
    TabOrder = 9
    OnKeyPress = cmb_IDKeyPress
  end
  object cmb_Protokol_ID: TRzComboBox
    Left = 224
    Top = 256
    Width = 169
    Height = 21
    Color = clBlack
    Ctl3D = False
    DisabledColor = clBlack
    FlatButtonColor = clLime
    FlatButtons = True
    FrameColor = clRed
    FrameHotColor = clFuchsia
    FrameHotTrack = True
    FrameVisible = True
    ItemHeight = 13
    ParentColor = True
    ParentCtl3D = False
    Sorted = True
    TabOrder = 10
    OnChange = cmb_Protokol_IDChange
  end
  object btnNum: TAdvGlassButton
    Left = 304
    Top = 200
    Width = 100
    Height = 32
    BackColor = clBlack
    Caption = #1053#1086#1084#1077#1088#1072
    Enabled = False
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clSilver
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = []
    ForeColor = clWhite
    GlowColor = 16760205
    InnerBorderColor = clBlack
    OuterBorderColor = clWhite
    ParentFont = False
    ShineColor = clWhite
    TabOrder = 11
    Version = '1.2.3.0'
    OnClick = btnNumClick
  end
  object edtProtokolN: TRzComboBox
    Left = 24
    Top = 208
    Width = 169
    Height = 21
    Color = clBlack
    Ctl3D = False
    DisabledColor = clBlack
    FlatButtonColor = clLime
    FlatButtons = True
    FrameColor = clYellow
    FrameHotColor = clFuchsia
    FrameHotTrack = True
    FrameVisible = True
    ItemHeight = 13
    ParentColor = True
    ParentCtl3D = False
    Sorted = True
    TabOrder = 12
    OnChange = edtProtokolNChange
  end
  object edtProtokol: TRzComboBox
    Left = 216
    Top = 120
    Width = 185
    Height = 21
    Color = clBlack
    Ctl3D = False
    DisabledColor = clBlack
    FlatButtonColor = clLime
    FlatButtons = True
    FrameColor = clYellow
    FrameHotColor = clFuchsia
    FrameHotTrack = True
    FrameVisible = True
    ItemHeight = 13
    ParentColor = True
    ParentCtl3D = False
    Sorted = True
    TabOrder = 13
    OnChange = edtProtokolChange
  end
  object edtMsk: TRzComboBox
    Left = 24
    Top = 120
    Width = 169
    Height = 21
    Color = clBlack
    Ctl3D = False
    DisabledColor = clBlack
    FlatButtonColor = clLime
    FlatButtons = True
    FrameColor = clYellow
    FrameHotColor = clFuchsia
    FrameHotTrack = True
    FrameVisible = True
    ItemHeight = 13
    ParentColor = True
    ParentCtl3D = False
    Sorted = True
    TabOrder = 14
    OnChange = edtMskChange
    OnKeyPress = edtMskKeyPress
  end
  object edtSpc: TRzComboBox
    Left = 136
    Top = 48
    Width = 265
    Height = 21
    Color = clBlack
    Ctl3D = False
    DisabledColor = clBlack
    FlatButtonColor = clLime
    FlatButtons = True
    FrameColor = clYellow
    FrameHotColor = clFuchsia
    FrameHotTrack = True
    FrameVisible = True
    ItemHeight = 13
    ParentColor = True
    ParentCtl3D = False
    Sorted = True
    TabOrder = 15
    OnChange = edtSpcChange
  end
  object edtType: TRzComboBox
    Left = 24
    Top = 48
    Width = 105
    Height = 21
    Color = clBlack
    Ctl3D = False
    DisabledColor = clBlack
    FlatButtonColor = clLime
    FlatButtons = True
    FrameColor = clYellow
    FrameHotColor = clFuchsia
    FrameHotTrack = True
    FrameVisible = True
    ItemHeight = 13
    ParentColor = True
    ParentCtl3D = False
    Sorted = True
    TabOrder = 16
    OnChange = edtTypeChange
  end
  object AdvGlassButton3: TAdvGlassButton
    Left = 24
    Top = 152
    Width = 65
    Height = 25
    BackColor = clTeal
    Caption = #1053#1072#1081#1090#1080
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = []
    ForeColor = clWhite
    GlowColor = 16760205
    InnerBorderColor = clBlack
    OuterBorderColor = clWhite
    ParentFont = False
    ShineColor = clWhite
    TabOrder = 17
    Version = '1.2.3.0'
    OnClick = RzButton2Click
  end
  object CheckBox1: TCheckBox
    Left = 320
    Top = 296
    Width = 73
    Height = 17
    Caption = #1069#1082#1089#1087#1086#1088#1090
    TabOrder = 18
    Visible = False
  end
  object AdvGlassButton2: TAdvGlassButton
    Left = 304
    Top = 152
    Width = 100
    Height = 40
    BackColor = clBlack
    Caption = #1055#1086#1076#1075#1086#1090#1086#1074#1082#1072' '#1075#1088#1072#1092#1080#1082#1086#1074
    Enabled = False
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clSilver
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = []
    ForeColor = clWhite
    GlowColor = 16760205
    InnerBorderColor = clBlack
    OuterBorderColor = clWhite
    ParentFont = False
    ShineColor = clWhite
    TabOrder = 19
    Version = '1.2.3.0'
    OnClick = AdvGlassButton2Click
  end
  object Chart1: TChart
    Left = 472
    Top = 24
    Width = 480
    Height = 409
    BackWall.Color = clWhite
    BackWall.Dark3D = False
    BackWall.Size = 8
    BackWall.Transparent = False
    Border.Visible = True
    BottomWall.Dark3D = False
    BottomWall.Size = 8
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
      'TChart')
    BottomAxis.Axis.Width = 1
    BottomAxis.Grid.Color = clBlack
    BottomAxis.Grid.Style = psSolid
    BottomAxis.GridCentered = True
    BottomAxis.LabelsFont.Height = -16
    BottomAxis.LabelsFont.Name = 'Times New Roman'
    BottomAxis.LabelsFont.Style = [fsBold]
    BottomAxis.LabelsFont.Shadow.Visible = False
    BottomAxis.LabelsOnAxis = False
    BottomAxis.MinorTicks.Visible = False
    BottomAxis.Ticks.Color = clBlack
    BottomAxis.TicksInner.Visible = False
    BottomAxis.Title.Caption = 'Temperature,C'
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
    LeftAxis.Title.Caption = 'F,ppm'
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
    Align = alCustom
    BevelOuter = bvNone
    Color = clWhite
    TabOrder = 20
    Visible = False
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
    object Series2: TPointSeries
      Marks.Arrow.Visible = True
      Marks.Callout.Brush.Color = clBlack
      Marks.Callout.Arrow.Visible = True
      Marks.Visible = False
      SeriesColor = clRed
      ClickableLine = False
      Pointer.InflateMargins = True
      Pointer.Style = psCircle
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
      Marks.Callout.Arrow.Visible = True
      Marks.Visible = False
      SeriesColor = clTeal
      Pointer.InflateMargins = True
      Pointer.Style = psRectangle
      Pointer.Visible = False
      XValues.Name = 'X'
      XValues.Order = loAscending
      YValues.Name = 'Y'
      YValues.Order = loNone
    end
  end
  object Chart2: TChart
    Left = 472
    Top = 448
    Width = 480
    Height = 409
    BackWall.Color = clWhite
    BackWall.Dark3D = False
    BackWall.Size = 8
    BackWall.Transparent = False
    Border.Visible = True
    BottomWall.Dark3D = False
    BottomWall.Size = 8
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
      'TChart')
    BottomAxis.Axis.Width = 1
    BottomAxis.Grid.Color = clBlack
    BottomAxis.Grid.Style = psSolid
    BottomAxis.GridCentered = True
    BottomAxis.LabelsFont.Height = -16
    BottomAxis.LabelsFont.Name = 'Times New Roman'
    BottomAxis.LabelsFont.Style = [fsBold]
    BottomAxis.LabelsFont.Shadow.Visible = False
    BottomAxis.LabelsOnAxis = False
    BottomAxis.MinorTicks.Visible = False
    BottomAxis.Ticks.Color = clBlack
    BottomAxis.TicksInner.Visible = False
    BottomAxis.Title.Caption = #1042#1088#1077#1084#1103', '#1076#1085#1080
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
    LeftAxis.Title.Caption = 'dF,ppb'
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
    Align = alCustom
    BevelOuter = bvNone
    Color = clWhite
    TabOrder = 21
    Visible = False
    PrintMargins = (
      10
      5
      10
      55)
    ColorPaletteIndex = 13
    object LineSeries1: TLineSeries
      ColorEachLine = False
      Marks.Arrow.Visible = True
      Marks.Callout.Brush.Color = clBlack
      Marks.Callout.Arrow.Visible = True
      Marks.Visible = False
      SeriesColor = clBlack
      Dark3D = False
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
    object PointSeries1: TPointSeries
      Marks.Arrow.Visible = True
      Marks.Callout.Brush.Color = clBlack
      Marks.Callout.Arrow.Visible = True
      Marks.Visible = False
      SeriesColor = clRed
      ClickableLine = False
      Pointer.InflateMargins = True
      Pointer.Style = psCircle
      Pointer.Visible = True
      XValues.Name = 'X'
      XValues.Order = loAscending
      YValues.Name = 'Y'
      YValues.Order = loNone
    end
  end
  object Protokol_Count: TRzComboBox
    Left = 216
    Top = 152
    Width = 57
    Height = 21
    AutoComplete = False
    Color = clBlack
    Ctl3D = False
    DisabledColor = clBlack
    FlatButtonColor = clLime
    FlatButtons = True
    FrameColor = clRed
    FrameHotColor = clFuchsia
    FrameHotTrack = True
    FrameVisible = True
    ItemHeight = 13
    ParentColor = True
    ParentCtl3D = False
    Sorted = True
    TabOrder = 22
    Text = '15'
    OnKeyPress = cmb_IDKeyPress
  end
  object LotNumber: TRzComboBox
    Left = 24
    Top = 448
    Width = 97
    Height = 21
    Color = clBlack
    Ctl3D = False
    DisabledColor = clBlack
    FlatButtonColor = clLime
    FlatButtons = True
    FrameColor = clRed
    FrameHotColor = clFuchsia
    FrameHotTrack = True
    FrameVisible = True
    ItemHeight = 13
    ParentColor = True
    ParentCtl3D = False
    Sorted = True
    TabOrder = 23
    OnChange = LotNumberChange
  end
  object LotSpc: TRzComboBox
    Left = 136
    Top = 448
    Width = 273
    Height = 21
    Color = clBlack
    Ctl3D = False
    DisabledColor = clBlack
    FlatButtonColor = clLime
    FlatButtons = True
    FrameColor = clRed
    FrameHotColor = clFuchsia
    FrameHotTrack = True
    FrameVisible = True
    ItemHeight = 13
    ParentColor = True
    ParentCtl3D = False
    Sorted = True
    TabOrder = 24
    OnChange = LotSpcChange
  end
  object LotMSK: TRzComboBox
    Left = 24
    Top = 512
    Width = 161
    Height = 21
    Color = clBlack
    Ctl3D = False
    DisabledColor = clBlack
    FlatButtonColor = clLime
    FlatButtons = True
    FrameColor = clRed
    FrameHotColor = clFuchsia
    FrameHotTrack = True
    FrameVisible = True
    ItemHeight = 13
    ParentColor = True
    ParentCtl3D = False
    Sorted = True
    TabOrder = 25
    OnChange = LotMSKChange
    OnKeyPress = cmb_IDKeyPress
  end
  object Lot: TCheckBox
    Left = 176
    Top = 384
    Width = 201
    Height = 17
    Caption = #1060#1086#1088#1084#1080#1088#1086#1074#1072#1090#1100' '#1087#1086' '#1079#1072#1082#1072#1079#1072#1084
    TabOrder = 26
    OnClick = edtClick
  end
  object frxReport1: TfrxReport
    Version = '4.9'
    DotMatrixReport = False
    EngineOptions.DoublePass = True
    IniFile = '\Software\Fast Reports'
    PreviewOptions.Buttons = [pbPrint, pbLoad, pbSave, pbExport, pbZoom, pbFind, pbOutline, pbPageSetup, pbTools, pbEdit, pbNavigator, pbExportQuick]
    PreviewOptions.Zoom = 1
    PrintOptions.Printer = 'Default'
    PrintOptions.PrintOnSheet = 0
    ReportOptions.CreateDate = 40814.6468722801
    ReportOptions.LastChange = 44441.54573
    ScriptLanguage = 'BasicScript'
    ScriptText.Strings = (
      'Dim i As Integer'
      'i=0        '
      'sub PageHeader1OnBeforePrint(Sender)'
      
        '  Memo10.Text=FloatToStr(i)                                     ' +
        '                                                       '
      '  IF <Lianoz."PMI">="True" THEN Memo83.Text="'#1055#1052#1048'"  '
      'end sub'
      ''
      ''
      'sub MasterData1OnBeforePrint(Sender)'
      '    '
      ' IF <Lianoz."Ftgk"><0 THEN Memo60.Text=<Lianoz."Ftgk">'
      
        ' IF <Lianoz."Ftgk">>0 THEN Memo60.Text="+"+FloatToStr(<Lianoz."F' +
        'tgk">)'
      '     '
      
        'IF <Spc."Rtgk">="True" THEN IF <Lianoz."Rtgk"><>0 Then IF <Liano' +
        'z."Rtgk"><10000  THEN Memo27.Text=<Lianoz."Rtgk">'
      
        'IF <Spc."Rtgk">="False" THEN Memo27.Text=FormatFloat("0.0",StrTo' +
        'Float(<Lianoz."R">))    '
      
        'IF StrToFloat(Edit3.Text)<>0 THEN Memo1.Text="'#1057#1085'="+Edit3.Text+"'#1087 +
        #1060'"    '
      'IF <Spc."PrintProfile">=6 Then  Memo80.Text="1"    '
      
        'IF <Spc."PrintProfile">=6 Then IF StrToFloat(<Spc."Nominal">)<45' +
        ' THEN  IF StrToFloat(<Spc."Garmonica">)=1 THEN Memo80.Text="2"'
      '  '
      'IF <Spc."PrintProfile">=41 Then  Memo80.Text="1"    '
      
        'IF <Spc."PrintProfile">=41 Then IF StrToFloat(<Spc."Nominal">)<4' +
        '5 THEN  IF StrToFloat(<Spc."Garmonica">)=1 THEN Memo80.Text="2"'
      ''
      'IF <Spc."PrintProfile">=146 Then  Memo80.Text="1"    '
      
        'IF <Spc."PrintProfile">=146 Then IF StrToFloat(<Spc."Nominal">)<' +
        '45 THEN  IF StrToFloat(<Spc."Garmonica">)=1 THEN Memo80.Text="2"'
      '  '
      
        'IF <Spc."PrintProfile">=10 Then  Memo24.Text=<Spc."IntervalName"' +
        '>  '
      
        'IF <Spc."PrintProfile"><>10 Then    Memo24.Text=<Lianoz."Interva' +
        'lfg">'
      
        'IF <Spc."PrintProfile">=10 Then  Memo18.Text=<Spc."IntervalName"' +
        '>'
      
        'IF <Spc."PrintProfile"><>10 Then  Memo18.Text=<Lianoz."Intervalf' +
        'g">'
      '  '
      
        'IF <Spc."PrintProfile">=40 Then  Memo24.Text=<Spc."IntervalName"' +
        '>'
      
        'IF <Spc."PrintProfile"><>40 Then IF <Spc."PrintProfile"><>10 The' +
        'n   Memo24.Text=<Lianoz."Intervalfg">'
      
        'IF <Spc."PrintProfile">=40 Then  Memo18.Text=<Spc."IntervalName"' +
        '>'
      
        'IF <Spc."PrintProfile"><>40 Then IF <Spc."PrintProfile"><>10 The' +
        'n  Memo18.Text=<Lianoz."Intervalfg">'
      '  '
      'IF <Spc."PrintProfile">=41 Then Memo55.Text="+ '#1055#1054' 070.052"'
      'IF <Spc."PrintProfile">=41 Then Memo85.Text="+ '#1055#1054' 070.052"'
      '  '
      'IF <Spc."PrintProfile">=146 Then Memo55.Text="+ '#1055#1054' 070.052"'
      'IF <Spc."PrintProfile">=146 Then Memo85.Text="+ '#1055#1054' 070.052"'
      '  '
      'IF <Spc."MetalNi">=0 Then Memo40.Text="-"'
      
        'IF <Spc."MetalNi"><>0 Then Memo40.Text=FloatToStr(<Spc."MetalNi"' +
        '>)        '
      'IF <Lianoz."PMI">="True" THEN Memo82.Text="'#1054#1057#1052' '#1055#1052#1048'"'
      'IF <Lianoz."PMI">="True" THEN Memo83.Text="'#1054#1057#1052' '#1055#1052#1048'"    '
      'IF <Lianoz."PMI">="True" THEN Memo95.Text="'#1054#1057#1052' '#1055#1052#1048'"    '
      
        'IF <Spc."Garmonica">>1 Then frxDBDataset2Ftcode.Text=<Spc."Nomin' +
        'al">'
      'IF <Spc."Garmonica">>1 Then Memo84.Text="'#1052#1043#1094'"        '
      
        'IF <Spc."Garmonica">=1 Then frxDBDataset2Ftcode.Text=FloatToStr(' +
        'StrToFloat(<Spc."Nominal">)*1000)            '
      'IF <Spc."Garmonica">=1 Then Memo84.Text="'#1082#1043#1094'"'
      
        'IF Abs(StrToFloat(<Lianoz."Fmax">))>=Abs(StrToFloat(<Lianoz."Fmi' +
        'n">)) THEN Memo25.Text=FormatFloat("0.0",StrToFloat(<Lianoz."Fma' +
        'x">))  '
      
        'IF Abs(StrToFloat(<Lianoz."Fmax">))<Abs(StrToFloat(<Lianoz."Fmin' +
        '">)) THEN Memo25.Text=FormatFloat("0.0",StrToFloat(<Lianoz."Fmin' +
        '">))    '
      'end sub'
      ''
      'sub MasterData2OnBeforePrint(Sender)'
      ''
      ' i=i+1  '
      'end sub'
      ''
      '          ')
    Left = 152
    Top = 16
    Datasets = <
      item
        DataSet = Lianoz
        DataSetName = 'Lianoz'
      end
      item
        DataSet = Psi
        DataSetName = 'Psi'
      end
      item
        DataSet = PsiData
        DataSetName = 'PsiData'
      end
      item
        DataSet = psiDataTemp
        DataSetName = 'psiDataTemp'
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
      Orientation = poLandscape
      PaperWidth = 297
      PaperHeight = 210
      PaperSize = 9
      LeftMargin = 7
      RightMargin = 2.5
      TopMargin = 10
      BottomMargin = 10
      Columns = 2
      ColumnWidth = 143.8
      ColumnPositions.Strings = (
        '0'
        '143.80')
      object MasterData1: TfrxMasterData
        Height = 1383.30798
        Top = 18.89765
        Width = 543.496414
        OnBeforePrint = 'MasterData1OnBeforePrint'
        DataSet = Lianoz
        DataSetName = 'Lianoz'
        RowCount = 0
        object Memo15: TfrxMemoView
          Left = 7.55906
          Top = 173.85838
          Width = 385.51206
          Height = 15.11812
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          Memo.UTF8 = (
            
              #1056#1116#1056#176#1056#1105#1056#1112#1056#181#1056#1029#1056#1109#1056#1030#1056#176#1056#1029#1056#1105#1056#181' '#1056#1111#1056#176#1057#1026#1056#176#1056#1112#1056#181#1057#8218#1057#1026#1056#176', '#1056#181#1056#1169#1056#1105#1056#1029#1056#1105#1057#8224#1056#176' '#1056#1105#1056#183 +
              #1056#1112#1056#181#1057#1026#1056#181#1056#1029#1056#1105#1057#1039)
          ParentFont = False
        end
        object Memo16: TfrxMemoView
          Left = 393.07112
          Top = 173.85838
          Width = 120.94496
          Height = 15.11812
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          Memo.UTF8 = (
            #1056#8221#1056#176#1056#1029#1056#1029#1057#8249#1056#181' '#1056#1105#1056#183#1056#1112#1056#181#1057#1026#1056#181#1056#1029#1056#1105#1057#1039)
          ParentFont = False
        end
        object Memo17: TfrxMemoView
          Left = 7.55906
          Top = 188.9765
          Width = 162.51979
          Height = 15.11812
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftLeft, ftTop, ftBottom]
          Memo.UTF8 = (
            #1056#1116#1056#1109#1056#1112#1056#1105#1056#1029#1056#176#1056#187#1057#1034#1056#1029#1056#176#1057#1039' '#1057#8225#1056#176#1057#1027#1057#8218#1056#1109#1057#8218#1056#176' ('#1057#8364#1056#1105#1057#8222#1057#1026'),  ')
          ParentFont = False
        end
        object Memo19: TfrxMemoView
          Left = 7.55906
          Top = 204.09462
          Width = 385.51206
          Height = 15.11812
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          Memo.UTF8 = (
            #1056#1119#1056#1109#1057#1026#1057#1039#1056#1169#1056#1109#1056#1108' '#1056#1108#1056#1109#1056#187#1056#181#1056#177#1056#176#1056#1029#1056#1105#1056#8470)
          ParentFont = False
        end
        object Memo20: TfrxMemoView
          Left = 393.07112
          Top = 204.09462
          Width = 120.94496
          Height = 15.11812
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8 = (
            '[Spc."Garmonica"]')
          ParentFont = False
          VAlign = vaCenter
        end
        object Memo21: TfrxMemoView
          Left = 7.55906
          Top = 219.21274
          Width = 313.70099
          Height = 18.89765
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftLeft, ftTop]
          Memo.UTF8 = (
            
              #1056#1118#1056#1109#1057#8225#1056#1029#1056#1109#1057#1027#1057#8218#1057#1034' '#1056#1029#1056#176#1057#1027#1057#8218#1057#1026#1056#1109#1056#8470#1056#1108#1056#1105',  '#1056#8220#1057#8224'    '#1056#1111#1057#1026#1056#1105' '#1057#8218#1056#181#1056#1112#1056#1111#1056#181#1057 +
              #1026#1056#176#1057#8218#1057#1107#1057#1026#1056#181' '#1056#1029#1056#176#1057#1027#1057#8218#1057#1026#1056#1109#1056#8470#1056#1108#1056#1105', +25    '
            ''
            '          ')
          ParentFont = False
        end
        object Memo22: TfrxMemoView
          Left = 393.07112
          Top = 238.11039
          Width = 120.94496
          Height = 15.11812
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -9
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8 = (
            '[Spc."TGK"] ')
          ParentFont = False
          VAlign = vaCenter
        end
        object Memo23: TfrxMemoView
          Left = 7.55906
          Top = 253.22851
          Width = 385.51206
          Height = 30.23624
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          Memo.UTF8 = (
            
              #1056#1114#1056#176#1056#1108#1057#1027#1056#1105#1056#1112#1056#176#1056#187#1057#1034#1056#1029#1056#1109#1056#181' '#1056#1109#1057#8218#1056#1029#1056#1109#1057#1027#1056#1105#1057#8218#1056#181#1056#187#1057#1034#1056#1029#1056#1109#1056#181' '#1056#1105#1056#183#1056#1112#1056#181#1056#1029#1056#181 +
              #1056#1029#1056#1105#1056#181' '#1057#1026#1056#176#1056#177#1056#1109#1057#8225#1056#181#1056#8470' '#1057#8225#1056#176#1057#1027#1057#8218#1056#1109#1057#8218#1057#8249', *10      '
            
              #1056#1030' '#1056#1105#1056#1029#1057#8218#1056#181#1057#1026#1056#1030#1056#176#1056#187#1056#181' '#1057#1026#1056#176#1056#177#1056#1109#1057#8225#1056#1105#1057#8230' '#1057#8218#1056#181#1056#1112#1056#1111#1056#181#1057#1026#1056#176#1057#8218#1057#1107#1057#1026',      ' +
              '                                                         ')
          ParentFont = False
        end
        object Memo24: TfrxMemoView
          Left = 393.07112
          Top = 268.34663
          Width = 120.94496
          Height = 15.11812
          ShowHint = False
          DataSetName = 'frxDBDataset1'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          ParentFont = False
        end
        object Memo25: TfrxMemoView
          Left = 393.07112
          Top = 253.22851
          Width = 120.94496
          Height = 15.11812
          ShowHint = False
          DataSetName = 'frxDBDataset1'
          DisplayFormat.FormatStr = '%2.1f'
          DisplayFormat.Kind = fkNumeric
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          ParentFont = False
        end
        object Memo26: TfrxMemoView
          Left = 7.55906
          Top = 283.46475
          Width = 287.24428
          Height = 15.11812
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftLeft, ftTop, ftBottom]
          Memo.UTF8 = (
            
              #1056#8221#1056#1105#1056#1029#1056#176#1056#1112#1056#1105#1057#8225#1056#181#1057#1027#1056#1108#1056#1109#1056#181'  '#1057#1027#1056#1109#1056#1111#1057#1026#1056#1109#1057#8218#1056#1105#1056#1030#1056#187#1056#181#1056#1029#1056#1105#1056#181'  ( '#1056#1169#1056#1109#1056#177#1057#1026 +
              #1056#1109#1057#8218#1056#1029#1056#1109#1057#1027#1057#8218#1057#1034' )  '#1056#1111#1057#1026#1056#1105' +25      ')
          ParentFont = False
        end
        object Memo27: TfrxMemoView
          Left = 393.07112
          Top = 283.46475
          Width = 120.94496
          Height = 15.11812
          ShowHint = False
          DataSetName = 'frxDBDataset1'
          DisplayFormat.FormatStr = '%2.1f'
          DisplayFormat.Kind = fkNumeric
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8 = (
            '2.48')
          ParentFont = False
        end
        object Memo28: TfrxMemoView
          Left = 7.55906
          Top = 298.58287
          Width = 151.1812
          Height = 15.11812
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftLeft, ftTop, ftBottom]
          Memo.UTF8 = (
            #1056#1030' '#1056#1105#1056#1029#1057#8218#1056#181#1057#1026#1056#1030#1056#176#1056#187#1056#181' '#1057#8218#1056#181#1056#1112#1056#1111#1056#181#1057#1026#1056#176#1057#8218#1057#1107#1057#1026)
          ParentFont = False
        end
        object Memo29: TfrxMemoView
          Left = 393.07112
          Top = 298.58287
          Width = 120.94496
          Height = 15.11812
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          Memo.UTF8 = (
            '        '#1056#8217' '#1056#1116#1056#1115#1056#160#1056#1114#1056#8226' '#1056#1118#1056#1032)
          ParentFont = False
        end
        object Memo31: TfrxMemoView
          Left = 7.55906
          Top = 313.70099
          Width = 385.51206
          Height = 15.11812
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftLeft, ftTop, ftBottom]
          Memo.UTF8 = (
            #1056#8221#1056#1109#1056#1111#1056#1109#1056#187#1056#1029#1056#1105#1057#8218#1056#181#1056#187#1057#1034#1056#1029#1057#8249#1056#181'    '#1056#1169#1056#176#1056#1029#1056#1029#1057#8249#1056#181':   ')
          ParentFont = False
        end
        object Memo33: TfrxMemoView
          Left = 393.07112
          Top = 298.58287
          Width = 120.94496
          Height = 15.11812
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          ParentFont = False
        end
        object Memo35: TfrxMemoView
          Left = 393.07112
          Top = 313.70099
          Width = 120.94496
          Height = 15.11812
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          ParentFont = False
        end
        object Memo36: TfrxMemoView
          Left = 7.55906
          Top = 328.81911
          Width = 385.51206
          Height = 37.7953
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          Memo.UTF8 = (
            
              #1056#1038#1056#1109#1056#1169#1056#181#1057#1026#1056#182#1056#176#1056#1029#1056#1105#1056#181' '#1056#1169#1057#1026#1056#176#1056#1110#1056#1109#1057#8224#1056#181#1056#1029#1056#1029#1057#8249#1057#8230' '#1056#1112#1056#181#1057#8218#1056#176#1056#187#1056#187#1056#1109#1056#1030', '#1056#1112 +
              #1056#1110':  '#1057#1027#1056#181#1057#1026#1056#181#1056#177#1057#1026#1056#1109
            #1056#183#1056#1109#1056#187#1056#1109#1057#8218#1056#1109)
          ParentFont = False
        end
        object Memo37: TfrxMemoView
          Left = 393.07112
          Top = 328.81911
          Width = 120.94496
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
            '[Spc."MetalAg"]')
          ParentFont = False
          VAlign = vaCenter
        end
        object Memo38: TfrxMemoView
          Left = 393.07112
          Top = 347.71676
          Width = 120.94496
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
            '[Spc."MetalAu"]')
          ParentFont = False
          VAlign = vaCenter
        end
        object Memo39: TfrxMemoView
          Left = 7.55906
          Top = 366.61441
          Width = 385.51206
          Height = 30.23624
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          Memo.UTF8 = (
            
              #1056#1038#1056#1109#1056#1169#1056#181#1057#1026#1056#182#1056#176#1056#1029#1056#1105#1056#181' '#1057#8224#1056#1030#1056#181#1057#8218#1056#1029#1057#8249#1057#8230' '#1056#1112#1056#181#1057#8218#1056#176#1056#187#1056#187#1056#1109#1056#1030', '#1056#1112#1056#1110':  '#1056#1029#1056 +
              #1105#1056#1108#1056#181#1056#187#1057#1034
            #1056#177#1057#1026#1056#1109#1056#1029#1056#183#1056#176)
          ParentFont = False
        end
        object Memo40: TfrxMemoView
          Left = 393.07112
          Top = 366.61441
          Width = 120.94496
          Height = 15.11812
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          ParentFont = False
          VAlign = vaCenter
        end
        object Memo41: TfrxMemoView
          Left = 393.07112
          Top = 381.73253
          Width = 120.94496
          Height = 15.11812
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8 = (
            '-')
          ParentFont = False
        end
        object Memo42: TfrxMemoView
          Left = 7.55906
          Top = 396.85065
          Width = 385.51206
          Height = 15.11812
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          Memo.UTF8 = (
            #1056#1114#1056#1105#1056#1029#1056#1105#1056#1112#1056#176#1056#187#1057#1034#1056#1029#1056#176#1057#1039' '#1056#1029#1056#176#1057#1026#1056#176#1056#177#1056#1109#1057#8218#1056#1108#1056#176', '#1057#8225)
          ParentFont = False
        end
        object Memo43: TfrxMemoView
          Left = 393.07112
          Top = 396.85065
          Width = 120.94496
          Height = 15.11812
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8 = (
            '[Spc."MinNar"]')
          ParentFont = False
          VAlign = vaCenter
        end
        object Memo44: TfrxMemoView
          Left = 7.55906
          Top = 411.96877
          Width = 385.51206
          Height = 15.11812
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          Memo.UTF8 = (
            #1056#1038#1057#1026#1056#1109#1056#1108' '#1057#1027#1056#1109#1057#8230#1057#1026#1056#176#1056#1029#1057#1039#1056#181#1056#1112#1056#1109#1057#1027#1057#8218#1056#1105', '#1056#187#1056#181#1057#8218)
          ParentFont = False
        end
        object Memo45: TfrxMemoView
          Left = 393.07112
          Top = 411.96877
          Width = 120.94496
          Height = 15.11812
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8 = (
            '[Spc."Hran"]')
          ParentFont = False
          VAlign = vaCenter
        end
        object frxDBDataset2Ftcode: TfrxMemoView
          Left = 393.07112
          Top = 188.9765
          Width = 120.94496
          Height = 15.11812
          ShowHint = False
          DataSetName = 'frxDBDataset2'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          ParentFont = False
        end
        object Memo18: TfrxMemoView
          Left = 158.74026
          Top = 298.58287
          Width = 71.81107
          Height = 15.11812
          ShowHint = False
          DataSetName = 'frxDBDataset1'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = []
          ParentFont = False
          VAlign = vaCenter
        end
        object Memo60: TfrxMemoView
          Left = 393.07112
          Top = 219.21274
          Width = 120.94496
          Height = 18.89765
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          ParentFont = False
        end
        object Memo61: TfrxMemoView
          Left = 204.09462
          Top = 427.08689
          Width = 113.3859
          Height = 18.89765
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = []
          Memo.UTF8 = (
            #1056#1038#1056#1030#1056#181#1056#1169#1056#181#1056#1029#1056#1105#1057#1039' '#1056#1109' '#1056#1111#1057#1026#1056#1105#1056#181#1056#1112#1056#1108#1056#181)
          ParentFont = False
        end
        object Memo62: TfrxMemoView
          Left = 7.55906
          Top = 442.20501
          Width = 49.13389
          Height = 15.11812
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -9
          Font.Name = 'Arial'
          Font.Style = []
          Memo.UTF8 = (
            #1056#160#1056#181#1056#183#1056#1109#1056#1029#1056#176#1057#8218#1056#1109#1057#1026)
          ParentFont = False
        end
        object Memo63: TfrxMemoView
          Left = 143.62214
          Top = 442.20501
          Width = 173.85838
          Height = 15.11812
          ShowHint = False
          DataSetName = 'frxDBDataset2'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -9
          Font.Name = 'Arial'
          Font.Style = []
          Memo.UTF8 = (
            '[Spc."Text"]')
          ParentFont = False
        end
        object Memo64: TfrxMemoView
          Left = 321.26005
          Top = 442.20501
          Width = 117.16543
          Height = 15.11812
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -9
          Font.Name = 'Arial'
          Font.Style = []
          Memo.UTF8 = (
            #1056#1105#1056#1029#1056#1169#1056#1105#1056#1030#1056#1105#1056#1169#1057#1107#1056#176#1056#187#1057#1034#1056#1029#1057#8249#1056#8470' '#1056#1029#1056#1109#1056#1112#1056#181#1057#1026' '#1074#8222#8211)
          ParentFont = False
        end
        object Memo65: TfrxMemoView
          Left = 449.76407
          Top = 442.20501
          Width = 52.91342
          Height = 15.11812
          ShowHint = False
          DataSetName = 'frxDBDataset1'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -9
          Font.Name = 'Arial'
          Font.Style = []
          Memo.UTF8 = (
            '[Lianoz."N"]')
          ParentFont = False
        end
        object Memo66: TfrxMemoView
          Left = 7.55906
          Top = 457.32313
          Width = 147.40167
          Height = 15.11812
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -8
          Font.Name = 'Arial'
          Font.Style = []
          Memo.UTF8 = (
            
              #1057#1027#1056#1109#1056#1109#1057#8218#1056#1030#1056#181#1057#8218#1057#1027#1057#8218#1056#1030#1057#1107#1056#181#1057#8218' '#1057#8218#1056#181#1057#8230#1056#1029#1056#1105#1057#8225#1056#181#1057#1027#1056#1108#1056#1105#1056#1112' '#1057#1107#1057#1027#1056#187#1056#1109#1056#1030#1056#1105#1057#1039 +
              #1056#1112)
          ParentFont = False
        end
        object Memo67: TfrxMemoView
          Left = 158.74026
          Top = 457.32313
          Width = 136.06308
          Height = 15.11812
          ShowHint = False
          DataSetName = 'frxDBDataset2'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -8
          Font.Name = 'Arial'
          Font.Style = []
          Memo.UTF8 = (
            '[Spc."TU"]')
          ParentFont = False
          VAlign = vaCenter
        end
        object Memo68: TfrxMemoView
          Left = 370.39394
          Top = 457.32313
          Width = 143.62214
          Height = 15.11812
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -8
          Font.Name = 'Arial'
          Font.Style = []
          HAlign = haCenter
          Memo.UTF8 = (
            #1056#1105' '#1056#1111#1057#1026#1056#1105#1056#183#1056#1029#1056#176#1056#1029' '#1056#1110#1056#1109#1056#1169#1056#1029#1057#8249#1056#1112'  '#1056#1169#1056#187#1057#1039' '#1057#1036#1056#1108#1057#1027#1056#1111#1056#187#1057#1107#1056#176#1057#8218#1056#176#1057#8224#1056#1105#1056#1105'.')
          ParentFont = False
        end
        object Gradient3: TfrxGradientView
          Left = 7.55906
          Top = 480.00031
          Width = 506.45702
          Height = 64.25201
          ShowHint = False
          BeginColor = clSilver
          EndColor = clSilver
          Style = gsHorizontal
        end
        object Memo69: TfrxMemoView
          Left = 7.55906
          Top = 487.55937
          Width = 94.48825
          Height = 18.89765
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = []
          Memo.UTF8 = (
            
              #1056#1025#1057#8218#1056#176#1056#1112#1056#1111'  '#1056#1115#1056#1118#1056#1113'                                              ' +
              '             ')
          ParentFont = False
        end
        object Memo70: TfrxMemoView
          Left = 7.55906
          Top = 525.35467
          Width = 94.48825
          Height = 18.89765
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = []
          Memo.UTF8 = (
            
              #1056#1025#1057#8218#1056#176#1056#1112#1056#1111'  '#1056#1115#1056#1118#1056#1113'                                              ' +
              '             ')
          ParentFont = False
        end
        object Memo71: TfrxMemoView
          Left = 298.58287
          Top = 483.77984
          Width = 94.48825
          Height = 18.89765
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = []
          Memo.UTF8 = (
            #1056#1025#1057#8218#1056#176#1056#1112#1056#1111' '#1056#1119#1056#8212)
          ParentFont = False
        end
        object Memo72: TfrxMemoView
          Left = 294.80334
          Top = 521.57514
          Width = 94.48825
          Height = 18.89765
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = []
          Memo.UTF8 = (
            #1056#1025#1057#8218#1056#176#1056#1112#1056#1111' '#1056#1119#1056#8212)
          ParentFont = False
        end
        object Memo73: TfrxMemoView
          Left = 7.55906
          Top = 506.45702
          Width = 177.63791
          Height = 18.89765
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          Memo.UTF8 = (
            
              #1056#1119#1056#181#1057#1026#1056#181#1056#1111#1057#1026#1056#1109#1056#1030#1056#181#1057#1026#1056#1108#1056#176'        '#1056#1111#1057#1026#1056#1109#1056#1105#1056#183#1056#1030#1056#181#1056#1169#1056#181#1056#1029#1056#176'          ' +
              '         ')
          ParentFont = False
        end
        object Memo74: TfrxMemoView
          Align = baCenter
          Left = 188.598547
          Top = 544.25232
          Width = 166.29932
          Height = 15.11812
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          Memo.UTF8 = (
            '2.'#1056#1032#1056#1108#1056#176#1056#183#1056#176#1056#1029#1056#1105#1057#1039' '#1056#1111#1056#1109' '#1057#1036#1056#1108#1057#1027#1056#1111#1056#187#1057#1107#1056#176#1057#8218#1056#176#1057#8224#1056#1105#1056#1105':')
          ParentFont = False
        end
        object Memo75: TfrxMemoView
          Left = 7.55906
          Top = 570.70903
          Width = 506.45702
          Height = 139.84261
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -8
          Font.Name = 'Arial'
          Font.Style = []
          Memo.UTF8 = (
            
              '2.2. '#1056#1119#1056#176#1056#8470#1056#1108#1057#1107' '#1056#1030#1057#8249#1056#1030#1056#1109#1056#1169#1056#1109#1056#1030' '#1056#1111#1057#1026#1056#1109#1056#1105#1056#183#1056#1030#1056#1109#1056#1169#1056#1105#1057#8218#1057#1034' '#1056#1029#1056#176' '#1057#1026#1056#176#1057 +
              #1027#1057#1027#1057#8218#1056#1109#1057#1039#1056#1029#1056#1105#1056#1105' '#1056#1029#1056#181' '#1056#1112#1056#181#1056#1029#1056#181#1056#181'  3 '#1056#1112#1056#1112'   '#1056#1109#1057#8218' '#1056#1108#1056#1109#1057#1026#1056#1111#1057#1107#1057#1027#1056#176' '#1057#1026 +
              #1056#181#1056#183#1056#1109#1056#1029#1056#176#1057#8218#1056#1109#1057#1026#1056#176' . '#1056#8217#1057#1026#1056#181#1056#1112#1057#1039' '#1056#1111#1057#1026#1056#1105#1056#1111#1056#176#1056#1105#1056#1030#1056#176#1056#1029#1056#1105#1057#1039' '#1056#1029#1056#181' '#1056#1169#1056#1109 +
              #1056#187#1056#182#1056#1029#1056#1109' '#1056#1111#1057#1026#1056#181#1056#1030#1057#8249#1057#8364#1056#176#1057#8218#1057#1034'  4 '#1057#1027', '#1056#1111#1057#1026#1056#1105' '#1057#8218#1056#181#1056#1112#1056#1111#1056#181#1057#1026#1056#176#1057#8218#1057#1107#1057#1026#1056#181 +
              ' '#1056#1029#1056#181' '#1056#1030#1057#8249#1057#8364#1056#181' 260  '#1056#1038'. '#1056#8212#1056#176#1056#1111#1057#1026#1056#181#1057#8240#1056#181#1056#1029#1056#176' '#1056#1111#1056#176#1056#8470#1056#1108#1056#176' '#1056#1108' '#1056#1108#1056#1109#1057#1026#1056 +
              #1111#1057#1107#1057#1027#1057#1107' '#1057#1026#1056#181#1056#183#1056#1109#1056#1029#1056#176#1057#8218#1056#1109#1057#1026#1056#176
            
              #1056#152#1056#183#1056#1110#1056#1109#1057#8218#1056#1109#1056#1030#1056#1105#1057#8218#1056#181#1056#187#1057#1034' '#1056#1110#1056#176#1057#1026#1056#176#1056#1029#1057#8218#1056#1105#1057#1026#1057#1107#1056#181#1057#8218' '#1057#1027#1056#1109#1056#1109#1057#8218#1056#1030#1056#181#1057#8218#1057#1027 +
              #1057#8218#1056#1030#1056#1105#1056#181' '#1056#1108#1056#176#1057#8225#1056#181#1057#1027#1057#8218#1056#1030#1056#176' '#1056#1169#1056#176#1056#1029#1056#1029#1057#8249#1057#8230' '#1057#1026#1056#181#1056#183#1056#1109#1056#1029#1056#176#1057#8218#1056#1109#1057#1026#1056#1109#1056#1030' '#1056#1111 +
              #1057#1026#1056#1105' '#1057#1027#1056#1109#1056#177#1056#187#1057#1035#1056#1169#1056#181#1056#1029#1056#1105#1056#1105' '#1056#1111#1056#1109#1057#8218#1057#1026#1056#181#1056#177#1056#1105#1057#8218#1056#181#1056#187#1056#181#1056#1112' '#1057#1107#1057#1027#1056#187#1056#1109#1056#1030#1056#1105#1056 +
              #8470' '#1056#1105' '#1056#1111#1057#1026#1056#176#1056#1030#1056#1105#1056#187' '#1057#8230#1057#1026#1056#176#1056#1029#1056#181#1056#1029#1056#1105#1057#1039', '#1056#1112#1056#1109#1056#1029#1057#8218#1056#176#1056#182#1056#176' '#1056#1105' '#1057#1036#1056#1108#1057#1027#1056#1111#1056#187 +
              #1057#1107#1056#176#1057#8218#1056#176#1057#8224#1056#1105#1056#1105', '#1056#1111#1057#1026#1056#1105#1056#1030#1056#181#1056#1169#1056#181#1056#1029#1056#1029#1057#8249#1057#8230' '#1056#1030' '#1056#1111#1056#176#1057#1027#1056#1111#1056#1109#1057#1026#1057#8218#1056#181' '#1056#1105' '#1056#1118 +
              #1056#1032' '#1056#1029#1056#176' '#1057#1026#1056#181#1056#183#1056#1109#1056#1029#1056#176#1057#8218#1056#1109#1057#1026#1057#8249'.'
            
              '          '#1056#8217' '#1057#1027#1056#187#1057#1107#1057#8225#1056#176#1056#181' '#1056#1030#1057#8249#1057#8230#1056#1109#1056#1169#1056#176' '#1057#1026#1056#181#1056#183#1056#1109#1056#1029#1056#176#1057#8218#1056#1109#1057#1026#1056#176' '#1056#1105#1056#183 +
              ' '#1057#1027#1057#8218#1057#1026#1056#1109#1057#1039' '#1056#181#1056#1110#1056#1109' '#1057#1027#1056#187#1056#181#1056#1169#1057#1107#1056#181#1057#8218' '#1056#1030#1056#1109#1056#183#1056#1030#1057#1026#1056#176#1057#8218#1056#1105#1057#8218#1057#1034' '#1056#1030#1056#1112#1056#181#1057#1027#1057 +
              #8218#1056#181' '#1057#1027' '#1056#1111#1056#176#1057#1027#1056#1111#1056#1109#1057#1026#1057#8218#1056#1109#1056#1112' '#1057#1027' '#1057#1107#1056#1108#1056#176#1056#183#1056#176#1056#1029#1056#1105#1056#181#1056#1112' '#1057#1027#1056#187#1056#181#1056#1169#1057#1107#1057#1035#1057#8240#1056#1105 +
              #1057#8230' '#1057#1027#1056#1030#1056#181#1056#1169#1056#181#1056#1029#1056#1105#1056#8470':'
            
              #1056#8217#1057#1026#1056#181#1056#1112#1057#1039' '#1057#8230#1057#1026#1056#176#1056#1029#1056#181#1056#1029#1056#1105#1057#1039' '#1056#1105' '#1057#1107#1057#1027#1056#187#1056#1109#1056#1030#1056#1105#1057#1039' __________________' +
              '___________________________________________________'
            
              '                                                                ' +
              '          ('#1056#183#1056#176#1056#1111#1056#1109#1056#187#1056#1029#1057#1039#1056#181#1057#8218#1057#1027#1057#1039', '#1056#181#1057#1027#1056#187#1056#1105' '#1057#1026#1056#181#1056#183#1056#1109#1056#1029#1056#176#1057#8218#1056#1109#1057#1026' '#1056 +
              #1029#1056#181' '#1057#1036#1056#1108#1057#1027#1056#1111#1056#187#1057#1107#1056#176#1057#8218#1056#1105#1057#1026#1056#1109#1056#1030#1056#176#1056#187#1056#1105')                   '
            
              ' '#1056#8221#1056#176#1057#8218#1056#176' '#1056#1029#1056#176#1057#8225#1056#176#1056#187#1056#176' '#1057#1036#1056#1108#1057#1027#1056#1111#1056#187#1057#1107#1056#176#1057#8218#1056#176#1057#8224#1056#1105#1056#1105'              '#1042#171' ' +
              '       '#1042#187'                      20       '#1056#1110'.  '
            
              ' '#1056#8221#1056#176#1057#8218#1056#176' '#1056#1030#1057#8249#1057#8230#1056#1109#1056#1169#1056#176' '#1056#1105#1056#183' '#1057#1027#1057#8218#1057#1026#1056#1109#1057#1039'                      '#1042#171'  ' +
              '      '#1042#187'                      20       '#1056#1110'.    '
            
              #1056#1115#1057#1027#1056#1029#1056#1109#1056#1030#1056#1029#1057#8249#1056#181' '#1056#1169#1056#176#1056#1029#1056#1029#1057#8249#1056#181' '#1057#1026#1056#181#1056#182#1056#1105#1056#1112#1056#176' '#1056#1105' '#1057#1107#1057#1027#1056#187#1056#1109#1056#1030#1056#1105#1056#8470' '#1057#1036#1056 +
              #1108#1057#1027#1056#1111#1056#187#1057#1107#1056#176#1057#8218#1056#176#1057#8224#1056#1105#1056#1105' __________________________________________' +
              '_____'
            
              #1056#1119#1057#1026#1056#1105#1057#8225#1056#1105#1056#1029#1056#176' '#1057#1027#1056#1029#1057#1039#1057#8218#1056#1105#1057#1039' '#1057#1026#1056#181#1056#183#1056#1109#1056#1029#1056#176#1057#8218#1056#1109#1057#1026#1056#176' '#1057#1027' '#1057#1036#1056#1108#1057#1027#1056#1111#1056#187#1057#1107 +
              #1056#176#1057#8218#1056#176#1057#8224#1056#1105#1056#1105' '#1056#1105#1056#187#1056#1105' '#1057#8230#1057#1026#1056#176#1056#1029#1056#181#1056#1029#1056#1105#1057#1039' ___________________________' +
              '_______________'
            ' '#1056#1038#1056#1030#1056#181#1056#1169#1056#181#1056#1029#1056#1105#1057#1039' '#1056#183#1056#176#1056#1111#1056#1109#1056#187#1056#1029#1056#181#1056#1029#1057#8249' ___________________'
            
              '                                                    '#1056#1169#1056#176#1057#8218#1056#176'    ' +
              '                                                                ' +
              '                                                                ' +
              '                                                 ')
          ParentFont = False
        end
        object Gradient2: TfrxGradientView
          Left = 7.55906
          Width = 506.45702
          Height = 147.40167
          ShowHint = False
          BeginColor = clSilver
          EndColor = clSilver
          Style = gsHorizontal
        end
        object Memo46: TfrxMemoView
          Left = 154.96073
          Width = 192.75603
          Height = 18.89765
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = []
          Memo.UTF8 = (
            '199155, '#1056#1038#1056#176#1056#1029#1056#1108#1057#8218'-'#1056#1119#1056#181#1057#8218#1056#181#1057#1026#1056#177#1057#1107#1057#1026#1056#1110', '#1056#1113#1056#1105#1056#1112#1056#176' 13'#1056#1106' ')
          ParentFont = False
        end
        object Memo47: TfrxMemoView
          Left = 204.09462
          Top = 15.11812
          Width = 79.37013
          Height = 18.89765
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = []
          Memo.UTF8 = (
            #1056#1119' '#1056#1106' '#1056#1038' '#1056#1119' '#1056#1115' '#1056#160' '#1056#1118)
          ParentFont = False
        end
        object Memo48: TfrxMemoView
          Left = 154.96073
          Top = 30.23624
          Width = 207.87415
          Height = 15.11812
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = []
          Memo.UTF8 = (
            #1056#160#1056#8226#1056#8212#1056#1115#1056#1116#1056#1106#1056#1118#1056#1115#1056#160' '#1056#1119#1056#172#1056#8226#1056#8212#1056#1115#1056#173#1056#8250#1056#8226#1056#1113#1056#1118#1056#160#1056#152#1056#167#1056#8226#1056#1038#1056#1113#1056#152#1056#8482)
          ParentFont = False
        end
        object Memo49: TfrxMemoView
          Left = 11.33859
          Width = 94.48825
          Height = 30.23624
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = []
          Memo.UTF8 = (
            #1056#1106#1056#1115'  '#1056#1114#1056#1109#1057#1026#1056#1105#1056#1109#1056#1029
            '('#1056#1038#1056#176#1056#1029#1056#1108#1057#8218'-'#1056#1119#1056#181#1057#8218#1056#181#1057#1026#1056#177#1057#1107#1057#1026#1056#1110')')
          ParentFont = False
        end
        object Memo50: TfrxMemoView
          Left = 196.53556
          Top = 45.35436
          Width = 241.88992
          Height = 15.11812
          ShowHint = False
          DataSetName = 'frxDBDataset2'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = []
          Memo.UTF8 = (
            '[Spc."Text"]')
          ParentFont = False
        end
        object Memo51: TfrxMemoView
          Left = 86.92919
          Top = 79.37013
          Width = 98.26778
          Height = 18.89765
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -9
          Font.Name = 'Arial'
          Font.Style = []
          HAlign = haCenter
          Memo.UTF8 = (
            #1056#1118#1056#181#1057#8230#1056#1029#1056#1105#1057#8225#1056#181#1057#1027#1056#1108#1056#1105#1056#181' '#1057#1107#1057#1027#1056#187#1056#1109#1056#1030#1056#1105#1057#1039' ')
          ParentFont = False
        end
        object Picture5: TfrxPictureView
          Left = 11.33859
          Top = 30.23624
          Width = 94.48825
          Height = 83.14966
          ShowHint = False
          Picture.Data = {
            0A544A504547496D616765C42E0000FFD8FFE000104A46494600010101006000
            600000FFDB004300080606070605080707070909080A0C140D0C0B0B0C191213
            0F141D1A1F1E1D1A1C1C20242E2720222C231C1C2837292C30313434341F2739
            3D38323C2E333432FFDB0043010909090C0B0C180D0D1832211C213232323232
            3232323232323232323232323232323232323232323232323232323232323232
            32323232323232323232323232FFC0001108015E014003012200021101031101
            FFC4001F0000010501010101010100000000000000000102030405060708090A
            0BFFC400B5100002010303020403050504040000017D01020300041105122131
            410613516107227114328191A1082342B1C11552D1F02433627282090A161718
            191A25262728292A3435363738393A434445464748494A535455565758595A63
            6465666768696A737475767778797A838485868788898A92939495969798999A
            A2A3A4A5A6A7A8A9AAB2B3B4B5B6B7B8B9BAC2C3C4C5C6C7C8C9CAD2D3D4D5D6
            D7D8D9DAE1E2E3E4E5E6E7E8E9EAF1F2F3F4F5F6F7F8F9FAFFC4001F01000301
            01010101010101010000000000000102030405060708090A0BFFC400B5110002
            0102040403040705040400010277000102031104052131061241510761711322
            328108144291A1B1C109233352F0156272D10A162434E125F11718191A262728
            292A35363738393A434445464748494A535455565758595A636465666768696A
            737475767778797A82838485868788898A92939495969798999AA2A3A4A5A6A7
            A8A9AAB2B3B4B5B6B7B8B9BAC2C3C4C5C6C7C8C9CAD2D3D4D5D6D7D8D9DAE2E3
            E4E5E6E7E8E9EAF2F3F4F5F6F7F8F9FAFFDA000C03010002110311003F00F7FA
            28AC3F1A4F35AF817C43716F2C90CF169972F1C91B1564611310411C820F39A0
            0DCA2B0FC1BAAB6B9E0AD135396E63B99EE2CA279E54DB869768F33EEF0086DC
            081D08238C56E5001451450014514500145145001451450014514500145795FC
            7DD5B52D1BC0B6371A5EA177633B6A71A3496B3344C57CA94E09520E3201C7B0
            AF9D3FE13BF187FD0D7AE7FE0C66FF00E2A803EDFA2BE20FF84EFC61FF00435E
            B9FF008319BFF8AA3FE13BF187FD0D7AE7FE0C66FF00E2A803EDFA2BC3FF0067
            8D7758D6FF00E124FED6D56FAFFC9FB3797F6BB8797667CDCE37138CE074F415
            EE1400514561F8D279AD7C0BE21B8B79648678B4CB978E48D8AB2308988208E4
            1079CD006E515F107FC277E30FFA1AF5CFFC18CDFF00C551FF0009DF8C3FE86B
            D73FF06337FF0015401F6FD15F107FC277E30FFA1AF5CFFC18CDFF00C557AA7C
            02F12EBDACF8EAFADF54D6F52BE8174C91D63BABA7954379B10C80C48CE0919F
            73401F45D14514005145140051451400514514005145140051451400515C3F85
            75CB8D57E2678E2D0DFF00DA6C74FF00B0C36D1A382911D921900C7F16FDC0E7
            9F9707EE803B8A002B9FF1DFFC93CF12FF00D82AEBFF00453574158FE2CB1B8D
            4FC1BAE5859C7E65D5D69F710C29B80DCED1B05193C0C923AD0079DFECF5AFAE
            A5E039747668FCFD2AE19422AB03E5484BAB313C125BCD1C765191DCFAE57CB9
            FB3D6BEDA6F8F25D1D9A4F2355B76508AAA479B182EACC4F2005F3471DD86477
            1F51D00145145001451450014514500145145001451450078FFED1DFF24F34FF
            00FB0AC7FF00A2A5AF982BE9FF00DA3BFE49E69FFF006158FF00F454B5F30500
            145145007BFF00ECCBFF00334FFDBA7FED6AFA02BE7FFD997FE669FF00B74FFD
            AD5F4050015CFF008EFF00E49E7897FEC1575FFA29ABA0AE7FC77FF24F3C4BFF
            0060ABAFFD14D401F105145140057B07ECE3FF00250F50FF00B0549FFA362AF1
            FAF60FD9C7FE4A1EA1FF0060A93FF46C5401F4FD145140051451400514514005
            145140051451400557BFBEB7D334EB9BFBC93CBB5B589E699F693B51412C7039
            3800F4AB15E47F1F7C5D3685E138B44821937EB49221B949CA1896368CB0C01F
            307562A464704F5CE28030FF00674BEB8D4F51F195FDE49E65D5D4B6F34CFB40
            DCEC662C70381924F4AF78AF9FFF00665FF99A7FEDD3FF006B57D01400514514
            01F0A786F5B9BC39E25D375983CC2F67709294490C664507E64DC3A065CA9E0F
            04F06BEE782786EADE2B8B79639A09503C7246C195D48C8208E08239CD7C095F
            61FC1CD7D7C41F0CB4A6DD1F9F629F619951594298C00839EA4C7E592471927A
            74001DE5145140051451400514514005145140051451401E3FFB477FC93CD3FF
            00EC2B1FFE8A96BE60AFA7FF0068EFF9279A7FFD8563FF00D152D7CC14005145
            1401EFFF00B32FFCCD3FF6E9FF00B5ABE80AF9FF00F665FF0099A7FEDD3FF6B5
            7D01400573FE3BFF009279E25FFB055D7FE8A6AE82B9FF001DFF00C93CF12FFD
            82AEBFF4535007C41451450015EC1FB38FFC943D43FEC1527FE8D8ABC7EBD83F
            671FF9287A87FD82A4FF00D1B15007D3F4514500145145001451450014514500
            1451450015F227C6DD7D75EF89B7CB1346D069C8B628CAACA49424B86CF52246
            719181803AF53F53F8935B87C39E1AD4B599FCB29676EF2847904624603E54DC
            7A166C28E0F24706BE1CBFBEB8D4F51B9BFBC93CCBABA95E699F681B9D892C70
            381924F4A00FA5FF00671FF9279A87FD8564FF00D15157B0578FFECE3FF24F35
            0FFB0AC9FF00A2A2AF60A0028A28A00F853C4BA6C3A378AB57D2EDDA4682CAF6
            6B78DA420B15472A09C003381E82BD73F670F117D9B5CD4FC3D34B88EF221736
            E1E6C012270CAA87AB32B6491CE22EE071E67F10609ADBE237891278A489CEA7
            70E15D4A92AD21653CF62A4107B820D67F86F5B9BC39E25D375983CC2F677092
            94490C664507E64DC3A065CA9E0F04F06803EEBA2A382786EADE2B8B79639A09
            503C7246C195D48C8208E08239CD494005145140051451400514514005145140
            1E3FFB477FC93CD3FF00EC2B1FFE8A96BE60AFA7FF0068EFF9279A7FFD8563FF
            00D152D7CC140051451401EFFF00B32FFCCD3FF6E9FF00B5ABE80AF9FF00F665
            FF0099A7FEDD3FF6B57D01400573FE3BFF009279E25FFB055D7FE8A6AE82B9FF
            001DFF00C93CF12FFD82AEBFF4535007C41451450015EC1FB38FFC943D43FEC1
            527FE8D8ABC7EBD83F671FF9287A87FD82A4FF00D1B15007D3F4514500145145
            0014514500145145001451450078BFED13E274B1F0BDA787209F175A84A259E3
            5DA7F70872376795CBED2081CEC619E083F345769F157C50DE2CF883A8DDAC91
            BDA5B39B3B431BABA98A324060C00DC198B3F7FBD8C9005717401F55FECFBA6C
            D63F0C85C4AD194BFBD96E220A4E4280B161B8EBBA363C67823E83D52BCFFE09
            7FC921D0BFEDE3FF004A24AF40A0028A28A00F903E36FF00C95ED77FEDDFFF00
            49E3AF3FAF5CFDA2A0861F88D6AF1451A3CDA644F2B2A805DBCC9172DEA76AA8
            C9EC00ED5E47401F59FC0AF10C3ACFC37B5B237324B79A5BB5BCEB2B8660A58B
            464724ECDA428CE3EE103815E995F287C0CF1827867C68F657B7305BE99A9445
            279679563489D033239661FEF2E3233BFBE00AFABE800A28A2800A28A2800A28
            A2800A28A2803C7FF68EFF009279A7FF00D8563FFD152D7CC15F4FFED1DFF24F
            34FF00FB0AC7FF00A2A5AF982800A28A2803DFFF00665FF99A7FEDD3FF006B57
            D015F3FF00ECCBFF00334FFDBA7FED6AFA02800AE7FC77FF0024F3C4BFF60ABA
            FF00D14D5D0573FE3BFF009279E25FFB055D7FE8A6A00F8828A28A002BD83F67
            1FF9287A87FD82A4FF00D1B1578FD7B07ECE3FF250F50FFB0549FF00A362A00F
            A7E8A28A0028A28A0028A28A0028A28A002B93F897E2187C35F0FB58BD7B9920
            9E4B77B7B5689C2C9E7382A853907209DC71C80A48E95D657CE1FB44F8BBED9A
            C5A7852D9BF73638B9BBE3ACCCBF22F2BFC28D9C8241F330795A00F0FA28A280
            3EDBF87D0436DF0E7C3690451C4874CB772A8A141668C331E3B962493DC926BA
            4ACFD0B4CFEC4F0F699A4F9DE77D86D22B6F376EDDFB102EEC64E338CE326B42
            800A28A2803E78FDA5EC6DE3D47C3B7EB1E2EA68A78647DC7E644285463A7064
            7FCFD85783D7D37FB48410B78174CB868A333A6A6A892151B955A290B007A804
            AA923BED1E95F3250015F61FC20F15CDE2DF87D697176646BCB273657123E4F9
            AC81487C924925590927196DDC6315F1E57AA7C05F143687E3C1A54B246B67AC
            2792FBDD502CAA0B467246492772050464C83A9005007D574514500145145001
            45145001451450078FFED1DFF24F34FF00FB0AC7FF00A2A5AF982BE9FF00DA3B
            FE49E69FFF006158FF00F454B5F30500145145007BFF00ECCBFF00334FFDBA7F
            ED6AFA02BE7FFD997FE669FF00B74FFDAD5F4050015CFF008EFF00E49E7897FE
            C1575FFA29ABA0AE7FC77FF24F3C4BFF0060ABAFFD14D401F105145140057B07
            ECE3FF00250F50FF00B0549FFA362AF1FAF60FD9C7FE4A1EA1FF0060A93FF46C
            5401F4FD14514005145140051451400514514019FAE6B367E1ED0EF757BF7D96
            B69134AF82016C7455C900B13800679240AF8835CD66F3C43AE5EEAF7EFBEEAE
            E5695F0490B9E8AB9248503000CF00015EEFFB4678A3669DA77872CAFA06F365
            696FE18A5CC89B0218D5D41E14EF2D861C95523A57CF1400568685A67F6DF887
            4CD27CEF27EDD7715B79BB776CDEE177632338CE719159F5DA7C25D361D57E2A
            787EDE7691512E0DC028403BA246954720F1B9003ED9E9D6803ECBA28A2800A2
            8A280387F8C16371A87C28D7E1B58FCC91624988DC06123912473CFA2AB1F7C7
            1CD7C715F77EBBA67F6DF87B53D27CEF27EDD692DB79BB776CDE8577632338CE
            71915F08500152413CD6B7115C5BCB2433C4E1E392362AC8C0E410472083CE6A
            3A2803EDFF0003F893FE12EF05E97AE18FCB92EA2FDEA05C0122928FB464FCBB
            95B1939C633CD7415F367ECF9E36874AD52EBC2FA85C4715BDFB896CD9C851F6
            8E14A74E4BA85C648194000CB57D27400514514005145140051451401E3FFB47
            7FC93CD3FF00EC2B1FFE8A96BE60AFA7FF0068EFF9279A7FFD8563FF00D152D7
            CC140051451401A1A66BBAC689E6FF0064EAB7D61E763CCFB25C3C5BF19C6769
            19C64F5F535A1FF09DF8C3FE86BD73FF0006337FF155CFD1401D07FC277E30FF
            00A1AF5CFF00C18CDFFC55473F8D3C55756F2DBDC7897599A0950A491C97F2B2
            BA9182082D8208E3158745001451450015EC1FB38FFC943D43FEC1527FE8D8AB
            C7EBD83F671FF9287A87FD82A4FF00D1B15007D3F45145001451450014514500
            159FAE6B367E1ED0EF757BF7D96B69134AF82016C7455C900B13800679240AD0
            AF9FFF00689F197FC7A7842CA6F4BABFD8DFF7EE3386FAB9561FF3CC8A00F10D
            7359BCF10EB97BABDFBEFBABB95A57C1242E7A2AE492140C0033C000567D1450
            015ED1FB3B786ECF53F11DFEB93493ADD691E5FD9D118046F352546DC08C9C01
            C608FC6BC5EBE9FF00D9CEC3ECFE01BDBC7B4F2E4BAD41F6CC63C1963544030D
            FC4A1BCC03B03BBBE6803D828A28A0028A28A002BE24F881A5368BF1075FB06B
            68ED512F6478A18F685589CEF8F017803632F1DBA71D2BEDBAF943E3F699F60F
            8A13DCF9DE67F685A4373B76E3CBC0316DCE79FF00559CF1F7B1DB2403CBE8A2
            8A009209E6B5B88AE2DE59219E270F1C91B1564607208239041E735F6BF80FC5
            70F8CFC1D61ACA18C4EE9B2EA34C7EEE65E1C6324819F980273B5949EB5F1257
            B47C01F1D268FAC49E15BE38B5D4E5F32D642CAAB1CFB7041CE09DE1554727E6
            55007CC4800FA5E8A28A0028A28A0028A28A00F1FF00DA3BFE49E69FFF006158
            FF00F454B5F3057D3FFB477FC93CD3FF00EC2B1FFE8A96BE60A0028A28A0028A
            28A0028A28A0028A28A002BD83F671FF009287A87FD82A4FFD1B1578FD7B07EC
            E3FF00250F50FF00B0549FFA362A00FA7E8A28A0028A28A0028A28A00C7F1578
            86DFC29E17D475CBA5DF1DA445C2648F31C9C2264038DCC54671C67278AF8935
            5D56FB5CD52E353D4EE64B9BCB87DF2CAFD58FF2000C000700000600AF73FDA2
            7C65FF001E9E10B29BD2EAFF00637FDFB8CE1BEAE5587FCF322BC02800A28A28
            00AFB3FE15E99FD91F0BFC3D6DE779BBED05CEEDBB71E7132EDC64F4DF8CF7C6
            78E95F1A4104D757115BDBC524D3CAE1238E352CCEC4E000072493C62BEF3B0B
            1B7D334EB6B0B38FCBB5B58921853713B51400A3279380075A00B14514500145
            1450015E1FFB4A699E6F87B43D5BCEC7D9AEDEDBCADBF7BCD4DDBB39E31E4E31
            8E7776C73EE15C7FC54D33FB5FE17F886DBCEF2B65A1B9DDB7767C9225DB8C8E
            BB319ED9CF3D2803E30A28A2800A9209E6B5B88AE2DE59219E270F1C91B15646
            07208239041E7351D1401F5FFC27F888FF0010343BA92F61820D4ECA5093C700
            60851B251C6ECE338618DC7EE678C815E815F147C3FF0018DC781FC5B6DAB45F
            35BB621BC8C206324058170B9230DC02391C819E320FDA704F0DD5BC5716F2C7
            3412A078E48D832BA9190411C104739A00928A28A0028A28A0028A28A0028A28
            A00F983F68EFF9287A7FFD82A3FF00D1B2D78FD7B07ED1DFF250F4FF00FB0547
            FF00A365AF1FA0028A28A00FBFE8A28A0028A28A0028A28A0028A28A002B0FC5
            DE28B1F07786AEF58BF9230224221899F699E5C1DB1AF04E491D7070324F00D6
            E57CA1F197E2445E35D620D3F499B7E8963F3C722EF5FB448CA32CCAC0636F2A
            3233F78E70D8001E6F7F7D71A9EA3737F79279975752BCD33ED0373B1258E070
            3249E955E8A2800A28A2803B8F843A37F6DFC50D162649CC36D29BC91E11F73C
            A05D4B1C1C29708A7FDEC64122BEC7AF9E3F66BD1B7EA3AE6B8E93AF951259C4
            F8C46FBCEF719C72C3647D0F01B91C8AFA1E800A28A2800A28A2800A28A2803E
            10D774CFEC4F10EA7A4F9DE77D86EE5B6F376EDDFB1CAEEC64E338CE326B3EBD
            63F683D1BFB3FE22AEA2893F97A95A472B48E3E43227EECAA9C76558C91C91BB
            D08AF27A0028A28A002BE8BFD9EBC6D0CDA5CBE10BEB88D2E2DDDA5B05620192
            36CB3A2F1C956CB724921CE0612BE74AD0D0F59BCF0F6B965ABD83ECBAB49565
            4C920363AAB6082548C8233C8245007DDF4561F847C5163E31F0D5A6B1612464
            4A804D12BEE304B81BA36E01C827AE064608E08ADCA0028A28A0028A28A0028A
            28A00F983F68EFF9287A7FFD82A3FF00D1B2D78FD7B07ED1DFF250F4FF00FB05
            47FF00A365AF1FA0028A28A00FBFE8A28A0028A28A0028A28A0028A2B3F5CD66
            CFC3DA1DEEAF7EFB2D6D22695F0402D8E8AB9201627000CF2481401E6FF1E7C6
            16FA2F82E5D0A1B9C6A7AA6D4F2E394ABC7003977381F75B6ECC12376E6EBB48
            AF962B73C5DE28BEF18F896EF58BF9242657221899F70822C9DB1AF006003D70
            32724F24D61D00145145001451524104D757115BDBC524D3CAE1238E352CCEC4
            E000072493C62803EABF803A67D83E17C173E7799FDA17735CEDDB8F2F0445B7
            39E7FD5673C7DEC76C9F50AA7A4E9B0E8DA358E976ED2341656F1DBC6D21058A
            A28504E0019C0F41572800A28A2800A28A2800A28A2803C8FF00685D01752F01
            C5AC2AC7E7E9570AC5D9981F2A42119540E092DE51E7B29C1EC7E5CAFBFEBE18
            F15E8DFF0008F78B756D2024E91DA5DC9145E78C3B4618EC63C0CE5769C81839
            C8E28031E8A28A0028A28A00F40F849E3FFF008417C51FE9926DD1AFF6C77B88
            B7B2E036C718E7E52C738CE54B704E31F5FD7C015EF9F04BE2AB23D8F8335932
            481DDA3B1BD9665C46368D90104038C860A724E59540C63001F41D1451400514
            5140051451401F307ED1DFF250F4FF00FB0547FF00A365AF1FAF60FDA3BFE4A1
            E9FF00F60A8FFF0046CB5E3F40051451401F7FD1451400514514005145140057
            CD1F1D3E247F6D6A2FE15D2669D2C6C6564BF6FBAB71329036E3192A841EA705
            B9C7CAAC7D4FE32F8D26F07F829858BC6350D45CDAC27CE28F12953BE5403925
            78008C60B293E87E44A0028A28A0028A28A002BD13E09680BAF7C4DB16956368
            34E46BE75666524A1010AE3A912321C1C0C03D7A1F3BAFA5FF00670D1BEC9E12
            D4F57749D24BFBB112EF18478E25E1978E7E679013923E5C7041A00F68A28A28
            00A28A2800A28A2800A28A2800AF9C3F68FF000EFD9B5CD33C430C588EF2236D
            70521C012272ACCE3AB32B6003CE22EE071F47D727F127C2EDE2FF0001EA5A54
            11C6D79B04D69B9149F350EE01492029600A6EC8C073DB22803E2CA28A2800A2
            8A2800A9209E6B5B88AE2DE59219E270F1C91B1564607208239041E7351D1401
            F5DFC26F88D0F8E3C3E96F7B7319F105A27FA5C7B02798B9C095467041180D8C
            61BB00573E895F0A78735FBEF0B7882CF5AD35A31776AE593CC5DCAC082ACA47
            A15247183CF041E6BEC7F0378CEC7C75E1A8F58B18E4848730DC40FC98650012
            B9C6186181047504640390003A4A28A2800A28A2803E60FDA3BFE4A1E9FF00F6
            0A8FFF0046CB5E3F5EC1FB477FC943D3FF00EC151FFE8D96BC7E800A28A2803E
            FF00A28A2800A28A2800ACBF10F8874DF0C68D3EA9AA5CC70C11231556755695
            8296D89B880CE429C0CF356355D56C743D2EE353D4EE63B6B3B74DF2CAFD147F
            3249C000724900649AF903E2678FA6F1FF008945E2C525BE9F6C862B3B777248
            5CE4BB0CE03B719C760A3276E48065F8D3C5979E35F145D6B5789E579B848600
            E5D618D4615413F8938C02C58E06715CFD1450014514500145145004904135D5
            C456F6F14934F2B848E38D4B33B1380001C924F18AFB7FC1DA02F85BC1DA568A
            AB187B5B75597CB6665694FCD2302DCE0B963DBAF41D2BE68F819E175F10FC41
            86EEE2390DA6929F6C24236D3282044A5811B4EEF9C75CF964608CE3EB3A0028
            A28A0028A28A0028A28A0028A28A0028A28A00F8F3E2FF008521F097C41BBB7B
            411AD9DEA0BDB78D303CA572C0A6000000CAE0019C2EDE739AE0EBEA3FDA03C2
            936B9E0E8359B5123CFA3BB3BC6B93BA17DA1CE00272A551B390028727B57CB9
            40051451400514514005751E05F1D6A9E03D705FD81F36DE4C2DD5A3B612E107
            63E8C3270DDB3DC120F2F45007DCFE18F13E97E2ED0E1D5F489FCDB7938656E1
            E271D51C766191F982090413B15F187C3FF889AA7C3ED4679AC6182E6D6EF60B
            AB798637852482AC3956C1600F23E6E41C0AFADFC31E27D2FC5DA1C3ABE913F9
            B6F270CADC3C4E3AA38ECC323F30412082403628A28A00F983F68EFF009287A7
            FF00D82A3FFD1B2D78FD7B07ED1DFF00250F4FFF00B0547FFA365AF1FA0028A2
            8A00FBFE8A28A002A39E786D6DE5B8B8963860890BC9248C155140C9249E0003
            9CD495F3FF00C56F8D76775A75F786BC307CFF003B7DBDDDF900C6D1918658BA
            EECE4A962318076E721800729F167E2CCDE32B87D1F477921F0FC4FC9C156BC6
            078661D4203CAA9FF78F380BE5745140051451400514514005145761F0C7C23F
            F09A78E6CB4D957758C5FE937BCE3F7284657EF03F312A990723767B5007D3FF
            000D3C1E9E0EF05D8594B6D047A9BC41EF6548955D9C966D8CCA4EFD9BCA8393
            D38C6715D85145001451450014514500145145001451450014514500473C10DD
            5BCB6F711473412A1492391432BA9182083C104718AF873C55E1EB8F0A78A351
            D0EE9B7C9692940F803CC42328F804E3729538CF19C1E6BEE7AF13FDA0FC1336
            ABA5DAF8A34FB7925B8B04315E2A02C7ECFCB07EBC0462D9C0270E49385A00F9
            B28A28A0028A28A0028A28A002B63C31E27D53C23AE43ABE913F95711F0CADCA
            4A87AA38EEA703F2041040231E8A00FA4F4AFDA43416D2EDCEB1A56A49A86CC4
            E2D23468B77AA9670707AE0F4CE32719373FE1A3BC1FFF0040DD73FEFC43FF00
            C76BE60A2803BCF8B3E35D37C79E2AB5D534B82EE1822B24B765BA45562C1DDB
            236B30C61C77F5AE0E8A2800A28A2803E9FF00F868EF07FF00D0375CFF00BF10
            FF00F1DA3FE1A3BC1FFF0040DD73FEFC43FF00C76BE60A2803D23C69F1A7C4BE
            2CFB55A5B49FD97A45C44227B384ABB30FE2DD2ED0C73D08181B7820F24F9BD1
            450014514500145145001451450015F55FC05F0BAE87E031AACB1C8B79AC3F9C
            FBD190AC4A4AC6304E082373860064483A800D7807C39F06378EBC636FA43492
            4568A8D3DDCB1EDDC912E338C9EA58AAF438DD9C100D7D9F0410DADBC56F6F14
            70C112048E38D42AA28180001C000718A00928A28A0028A28A0028A28A0028A2
            8A0028A28A0028A28A002A39E086EADE5B7B88A39A0950A491C8A195D48C1041
            E08238C54945007C61F133C1C9E07F1A4FA4DB79ED62D14735AC93BAB3C88460
            93B40C7CE1C741D3F13C7D7D7FF187C1BFF097F81AE3ECD0F99A9E9F9BAB4DAB
            977C0F9E31852C772F4518CB2A67A57C81400514514005145140051451400514
            514005145140051451400514514005145140051451400514514005145769F0C3
            C13378DBC636B6AF6F23E976EE25BF9003B56319210904105C8DA30723248076
            9A00F73F803E187D17C0D26A973079775AB4BE6A93B831814623CA9E06497604
            75575393C63D62A382086D6DE2B7B78A38608902471C6A155140C0000E00038C
            5494005145140051451400514514005145140051451400514514005145140057
            CB1F1D3C0AFE1DF143EBF6A33A6EAF2B4842AB1F267C02E198E47CE4B38E47F1
            00005E7EA7ACBF11E8163E29F0FDE68BA92C86D2E902BF96DB5948219581F50C
            01E7238E411C5007C2945686B9A35E787B5CBDD22FD365D5A4AD13E0101B1D19
            72012A460838E4106B3E800A28A2800A28A2800A28AEA3C0BE27B0F0CEB825D5
            F43B1D5F4C9B09710DCDB472BA0FEFC65870C3278C80DD0E386500E5E8AFB3F4
            3F0EF80FC43A1D96AF61E17D0DED6EE25953361012B9EAAD8040607208CF0411
            5A1FF082783FFE854D0FFF0005D0FF00F13401F10515F6FF00FC209E0FFF00A1
            5343FF00C1743FFC4D1FF082783FFE854D0FFF0005D0FF00F13401F10515EB9F
            19FC41E1E83549BC2DE1CF0F68D6A2D9C0BCBEB7B3843B38C1F2D19465429E18
            F049057800EEF23A0028A28A0028A28A0028A28A00B9A56957DAE6A96FA66996
            D25CDE5C3EC8A24EAC7F9000649278001270057D87F0EFE1FD9FC3ED0E5B186E
            3ED975712996E2ECC2232FD9540192140E8093CB31E338AF3FFD9FBC0B6F6BA3
            FF00C26378209EEAEF74765F292D6C8ACC8E7278DCC411C0E1475F988AF70A00
            28A28A0028A28A0028A28A0028A28A0028A28A0028A28A0028A28A0028A28A00
            28A28A00F17F8E9F0DFF00B6B4E7F156930C097D63133DFAFDD6B885403BB39C
            16400F5192BC67E5553F3457DFF5F327C61F84D3681717FE29D192D1343678DA
            4B58C946B6663B4E14F050B63A1E37E02855CD0078DD14514005145140051451
            401DE7C33F8997DE00D50A3892E745B8706EAD01E41E9E6479E0381DBA30183D
            015FADF4AD56C75CD2EDF53D32E63B9B3B84DF14A9D187F3041C820F20820E08
            AF832BBCF867F132FBC01AA147125CE8B70E0DD5A03C83D3CC8F3C0703B74603
            07A02A01F61D783FC53F8DD6F1D9C9A2783AF7CDB893725CEA51640880241588
            F7638FBE380082A493953E297C6EB75D39748F06DEF9935D44AF3EA31E47928C
            321133C89083C9FE0E9F7B3B3E78A0028A28A0028A28A0028A28A002BB4F867E
            019BC7FE25366D2C96FA7DB2096F2E11092173808A7180EDCE33D831C1DB83CD
            E87A35E78875CB2D22C137DD5DCAB126412173D59B0090A064938E0026BECFF0
            5F84ECFC15E17B5D16CDFCDF2B2F34E50234D231CB3103F0033921428C9C6680
            3720821B5B78ADEDE28E18224091C71A8554503000038000E3144F3C36B6F2DC
            5C4B1C304485E492460AA8A064924F0001CE6B87F899F132C7C01A584411DCEB
            57084DADA13C01D3CC931C8407B7562303A12BF3478ABC73E26F887AA4497D2C
            9207744B7D3AD037941F951B63C925C963C9C9F9B038C0001F43EB7F1DFC11A3
            DC7910DCDDEA6E1DD24361086542A71F79CA86079C152C0E3E99E2FF00E1A6BF
            EA51FF00CA97FF006AACCF0BFECEBABDF225C7893508F4C4DEA4DAC004D2950C
            7702C0EC42400411BFEF7206315E87A67C01F035879BF69B7BED4B7E36FDAEE8
            AF978CE71E504EB9EF9E8318E7201C7FFC34D7FD4A3FF952FF00ED55DA689F1D
            FC11AC5C79135CDDE98E5D12337F085572C71F790B05038C962A067EB88F53F8
            03E06BFF002BECD6F7DA6ECCEEFB25D16F3338C67CD0FD31DB1D4E73C63CF3C5
            1FB3AEAF628F71E1BD423D4D37B116B3810CA14B0DA0313B1C804924ECFBBC03
            9C5007D1F04F0DD5BC5716F2C73412A078E48D832BA9190411C104739A92BE2C
            F0AF8E7C4DF0F354952C6592308EE971A75D86F28BF0A7747904382A39183F2E
            0F1907EABF02F8EB4BF1E6862FEC0F95711E16EAD1DB2F6EE7B1F5538386EF8E
            C410003A8A28A2800A28A2800A28A2800A28A2800A28A2800A28A2800A8E7821
            BAB796DEE228E6825429247228657523041078208E315251401F227C59F87337
            81FC40F71656D20F0FDDBFFA249BCBF96D8C9898E3208392B9CE57B921B1E775
            F75F88F40B1F14F87EF345D496436974815FCB6DACA410CAC0FA8600F391C720
            8E2BE2CF13F86354F08EB93691ABC1E55C47CAB2F292A1E8E87BA9C1FC882010
            4000C7A28A2800A28A2800A28A2800A28A2800A28A2800A28A2800A920826BAB
            88ADEDE29269E57091C71A9667627000039249E3144104D757115BDBC524D3CA
            E1238E352CCEC4E000072493C62BEABF843F0B7FE107B37D57536DFAEDDC5E5C
            888F94B68C90DE58C70CD90096E9C6178C9600B9F09BE1CC3E07F0FA5C5EDB46
            3C41769FE9726F0FE5AE7222538C00060B63396EE405C749E34F1659F82BC2F7
            5AD5E279BE561218038469A46385504FE24E3242863838C57415F3A7ED1BE286
            9F54D3FC2F0491982D905E5CED7563E6B655158632A55727AF2251C700D00797
            E9BA6F88FE2578C5A38DA4BED52F5CC93DC4A70B1AF00BB9030A8A300003D154
            7415F51FC3BF865A5FC3EB394C527DB7539F226BE78F61299C8455C9DABC0279
            393C93C281C9FC02F032E8FE1F3E28BC8A45D43524290062C365B6411F290396
            65DD9E415D8463273EC9401E3FFF000D1DE0FF00FA06EB9FF7E21FFE3B47FC34
            7783FF00E81BAE7FDF887FF8ED7807827C31FF00098F8BEC740FB67D8FED5E67
            EFFCAF336ED8D9FEEE4673B71D7BD7AFFF00C332FF00D4DDFF0094DFFEDB401D
            669BFB417822FAE1A2B83A969E810B096EAD8329391F28F2D9CE79CF4C7079E9
            9EF3C3DE2AD0BC57666EB43D4E0BD8D7EF84243C79240DC870CB9DA7190338C8
            E2BC2359FD9BB54B4D39E6D235D8350BA4C9FB3CD6FF0067DE00270ADB986E27
            000381CF2462BCFF00E1FF0089AF3C05E3EB6B998FD923128B3D492784929097
            1E602B8DC1976E78E72B8C1190403E93F899F0CEC7C7FA587431DB6B56E845AD
            D91C11D7CB931C9427BF552723A90DF2C4126B5E02F18C52BC3259EADA5DC066
            8A424723F84ED2372329C7070CADC1C1AFB8EBC0FE3E7C3C5749BC6D60F1C651
            1175149246CC8772471B22E08CE0E1B9030A30339C807AE782FC5967E35F0BDA
            EB5669E579B949A02E1DA1914E19491F8119C12A54E06715D057CE9FB3978A1A
            0D5350F0BCF24620B943796DB9D54F9AB8575518CB165C1EBC088F1C935F45D0
            014514500145145001451450014514500145145001451450015CBF8EBC0BA5F8
            F3433617E3CAB88F2D6B768B97B773DC7AA9C0CAF7C762011D451401F0C789FC
            31AA78475C9B48D5E0F2AE23E559794950F4743DD4E0FE4410082063D7DBFE2C
            F05E85E35D396CF5AB4F37CADC609918A490B30C12AC3F038395240C83815F2A
            78FBE19EB5E00B88DAF0C775A7CEECB05EC20ED241385707EE39519C723AE09C
            1C0071745145001451450014514500145145001524104D757115BDBC524D3CAE
            1238E352CCEC4E000072493C62AC695A55F6B9AA5BE99A65B49737970FB22893
            AB1FE40019249E00049C015F51FC2DF8436FE07DDA9EAAF05EEBADB95248F263
            B643C6132012C47562070768E3258032FE187C1287C37716BAF7889A3B9D5110
            3C3661418ED24C9392D921DC0C60F4539C6EC2B0F64A28A002BE2CF89DA94DAA
            FC4DF115C4EB1ABA5EBDB808081B623E529E49E76A027DF3D3A57DA75F1A6ADA
            943A37C6CBED52E164682CBC4725C48B18058AA5C962064819C0F51401F61D85
            8DBE99A75B5859C7E5DADAC490C29B89DA8A005193C9C003AD58A28A00F903E0
            97FC95ED0BFEDE3FF49E4AFAFEBE10D1344D47C47AC41A4E936FF68BE9F77971
            6F54DDB54B1E58803804F26BB0FF008525F10FFE85EFFC9DB7FF00E39401F59E
            ABAAD8E87A5DC6A7A9DCC76D676E9BE595FA28FE64938000E49200C935F1A1B6
            FF0084F3E274D1582CF1C7ACEAAEE84C5BDE28E490B166507F854963CE383CE3
            9AB1ACFC2CF1B681A73DFEA3A04E96A992EF0C91CDB000496611B3155001CB1E
            07AD771FB3E6A1E1A8BC46D637BA77FC5432F98D637C4B3829B32F185E88C02B
            10D8E4165C8E03007D2F54F56D361D6746BED2EE1A4582F6DE4B791A32030575
            2A48C823383E86AE51401F187C2BD4FF00B23E28787AE7C9F377DD8B6DBBB6E3
            CE062DD9C1E9BF38EF8C71D6BECFAF8A3C2775F6EF8A7A1DE7D9E0B7F3F5BB79
            7C9B74D91C7BA753B517B28CE00EC2BED7A0028A28A0028A28A0028A28A0028A
            28A0028A28A0028A28A0028A28A002ABDF5859EA767259DFDA41776B2637C33C
            62446C104654F070403F8558A2803C8E7FD9D7C1B35C4B2A5DEB3023B9658A3B
            88CAA027EE8DD19381D3924FA9351FFC338F83FF00E825AE7FDFF87FF8D57B05
            1401E3FF00F0CE3E0FFF00A096B9FF007FE1FF00E3547FC338F83FFE825AE7FD
            FF0087FF008D57B051401E3FFF000CE3E0FF00FA096B9FF7FE1FFE3547FC338F
            83FF00E825AE7FDFF87FF8D57B051401E3FF00F0CE3E0FFF00A096B9FF007FE1
            FF00E3547FC338F83FFE825AE7FDFF0087FF008D57B051401CFF00863C13E1FF
            0008D9C30E91A6C114D1C5E535DB46A67941393BE4C64E48071D381800000741
            4514005145140057C89F1BF4A6D33E2A6A6FF668E082F522BA8766D01C140AEF
            81D099164CE792727BE4FD775E2FFB42783EE357D0ECBC43616DE6CDA6EF4BA1
            1C40B981B9DE5B392A841E3071E6337001A00F48F036B7FF00091F81B45D59AE
            3ED134F689E7CBB366E9946D938C0C7CE187031E9C62BA0AF9A3E00F8E9347D6
            24F0ADF1C5AEA72F996B2165558E7DB820E704EF0AAA393F32A803E6247D2F40
            1F207C12FF0092BDA17FDBC7FE93C95F5FD7CB1F083C27E24D33E2968D797FE1
            FD56D2D63F3F7CD3D9491A2E60900CB11819240FC6BEA7A008E7821BAB796DEE
            228E6825429247228657523041078208E315F147C3E9E6B6F88DE1B782592273
            A9DBA16462A4AB4815871D8A9208EE0915F6DD7C8161E0AF12785BE21DB4FF00
            F08EEB97D63A56AA8FE7DBE9B21F3E38A507720E9F305C8E71CF5EF401F5FD73
            FE39D6FF00E11CF036B5AB2DC7D9E682D1FC89766FDB330DB1F1839F9CA8E463
            D78CD7415F247C66F1D278CBC5A2DEC8E74CD2F7C103065612B96F9E552BFC2D
            B540E4F0A0F1B88A008FE08694DA9FC54D31FECD1CF05924B7536FDA42008551
            F07A9123478C720E0F6C8FAEEBC7FE00F837FB17C2F27886F21DB7DAAFFA9DEB
            868EDC1F97195046F396E090CA2335EC14005145140051451400514514005145
            1400514514005145140051451400514514005145140051451400514514005145
            140051451400514514005473C10DD5BCB6F711473412A1492391432BA9182083
            C104718A928A00F913E2CFC399BC0FE207B8B2B690787EEDFF00D124DE5FCB6C
            64C4C719041C95CE72BDC90D8E93E1BFC74BCD17CAD27C54F3DFD8BCBF2EA0F2
            179ADD4E73BB209917383D77019C6EF9547D273C10DD5BCB6F711473412A1492
            391432BA9182083C104718AF13F177ECEDA75E6EB9F0A5E7F67CDC7FA1DDB33C
            27EE8E1F975E031E77E4903E51401EC1A36B9A5F8874E4BFD22FE0BDB56C0DF0
            BE769201DAC3AAB608CA9C119E456857C39731788FC07E20B9B26B8BBD275489
            024DF65B9DAC1582B805A36C1046D38CFA7A574107C67F8836D6F1409E2290A4
            68114C96D0BB100639664258FB9249EF401F61D67EB3AE697E1ED39EFF0057BF
            82CAD57237CCF8DC40276A8EACD8070A324E3815F264FF0019FE20DCDBCB03F8
            8A4092214631DB428C0118E1950153EE0823B573F6D1788FC79E20B6B25B8BBD
            5B54950A43F6AB9DCC55433901A46C0006E38CFAFAD007A47C4FF8DB37892DEE
            B41F0EAC96DA5BB949AF0B1125DC780301700A2139C8EAC319DB96535FE157C1
            D9BC54E356F10C57769A4C4F1B450B4450DF2952DF2B64154FB9F30077062010
            46476FE09FD9F2C74AB88350F145DC7A8DC44E1D6CA15FF47C82DF7CB0CC83EE
            9C614641077035ED94011C10436B6F15BDBC51C304481238E350AA8A06000070
            001C62A4A28A0028A28A0028A28A0028A28A0028A28A0028A28A0028A28A0028
            A28A0028A28A0028A28A0028A28A0028A28A0028A28A0028A28A0028A28A0028
            A28A0028A28A00A7A9693A6EB36EB6FAA69F697D02B8758EEA159543608C80C0
            8CE0919F735CBEA5F097C07AADC2CF71E1AB447540805AB3DBAE324F2B1B2827
            9EB8CF4F415DA51401C5E9BF097C07A55C34F6FE1AB477642845D33DC2E320F0
            B2330078EB8CF5F535D658D859E99671D9D85A41696B1E76430462345C924E14
            7032493F8D58A2800A28A2800A28A2803FFFD9}
          HightQuality = False
          Transparent = False
          TransparentColor = clWhite
        end
        object Memo52: TfrxMemoView
          Left = 11.33859
          Top = 117.16543
          Width = 94.48825
          Height = 26.45671
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -8
          Font.Name = 'Arial'
          Font.Style = []
          Memo.UTF8 = (
            'Morion, Inc.'
            '(St.Petersburg)')
          ParentFont = False
        end
        object Memo53: TfrxMemoView
          Left = 158.74026
          Top = 60.47248
          Width = 211.65368
          Height = 15.11812
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -8
          Font.Name = 'Arial'
          Font.Style = []
          Memo.UTF8 = (
            
              '( '#1057#8218#1056#1105#1056#1111' '#1057#1026#1056#181#1056#183#1056#1109#1056#1029#1056#176#1057#8218#1056#1109#1057#1026#1056#176', '#1057#1107#1057#1027#1056#187#1056#1109#1056#1030#1056#1029#1056#1109#1056#181' '#1056#1109#1056#177#1056#1109#1056#183#1056#1029#1056#176#1057#8225#1056#181 +
              #1056#1029#1056#1105#1056#181')')
          ParentFont = False
        end
        object Line3: TfrxLineView
          Left = 109.60637
          Top = 60.47248
          Width = 332.59864
          ShowHint = False
          Frame.Typ = [ftTop]
        end
        object Memo54: TfrxMemoView
          Left = 438.42548
          Width = 75.5906
          Height = 15.11812
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -8
          Font.Name = 'Arial'
          Font.Style = []
          Memo.UTF8 = (
            #1056#1038#1056#1169#1056#181#1056#187#1056#176#1056#1029#1056#1109' '#1056#1030' '#1056#160#1056#164)
          ParentFont = False
        end
        object Picture6: TfrxPictureView
          Left = 457.32313
          Top = 18.89765
          Width = 45.35436
          Height = 41.57483
          ShowHint = False
          Picture.Data = {
            0A544A504547496D616765F2630000FFD8FFE000104A46494600010101006000
            600000FFDB004300080606070605080707070909080A0C140D0C0B0B0C191213
            0F141D1A1F1E1D1A1C1C20242E2720222C231C1C2837292C30313434341F2739
            3D38323C2E333432FFDB0043010909090C0B0C180D0D1832211C213232323232
            3232323232323232323232323232323232323232323232323232323232323232
            32323232323232323232323232FFC000110800FA019203012200021101031101
            FFC4001F0000010501010101010100000000000000000102030405060708090A
            0BFFC400B5100002010303020403050504040000017D01020300041105122131
            410613516107227114328191A1082342B1C11552D1F02433627282090A161718
            191A25262728292A3435363738393A434445464748494A535455565758595A63
            6465666768696A737475767778797A838485868788898A92939495969798999A
            A2A3A4A5A6A7A8A9AAB2B3B4B5B6B7B8B9BAC2C3C4C5C6C7C8C9CAD2D3D4D5D6
            D7D8D9DAE1E2E3E4E5E6E7E8E9EAF1F2F3F4F5F6F7F8F9FAFFC4001F01000301
            01010101010101010000000000000102030405060708090A0BFFC400B5110002
            0102040403040705040400010277000102031104052131061241510761711322
            328108144291A1B1C109233352F0156272D10A162434E125F11718191A262728
            292A35363738393A434445464748494A535455565758595A636465666768696A
            737475767778797A82838485868788898A92939495969798999AA2A3A4A5A6A7
            A8A9AAB2B3B4B5B6B7B8B9BAC2C3C4C5C6C7C8C9CAD2D3D4D5D6D7D8D9DAE2E3
            E4E5E6E7E8E9EAF2F3F4F5F6F7F8F9FAFFDA000C03010002110311003F00F7AB
            AB986CED26BAB87D90C31B4923609C281927039E82B9AFF8591E13FF00A0B7FE
            4BCBFF00C4D741A9D97F696937963E6797F6981E1DF8CEDDCA4671DFAD79AFFC
            299FFA8FFF00E49FFF006754ADD4CAA3A89FB88EABFE164784FF00E82DFF0092
            F2FF00F1347FC2C8F09FFD05BFF25E5FFE26B898FE17E9D2EA72E991F8BAD5F5
            08537CB6AB0A995178E4A799903E65E48EE3D6AE7FC299FF00A8FF00FE49FF00
            F674ED1EE67CD5FF00957F5F33AAFF008591E13FFA0B7FE4BCBFFC4D1FF0B23C
            27FF00416FFC9797FF0089AE57FE14CFFD47FF00F24FFF00B3A3FE14CFFD47FF
            00F24FFF00B3A2D1EE1CD5FF00957F5F33AAFF008591E13FFA0B7FE4BCBFFC4D
            1FF0B23C27FF00416FFC9797FF0089AE57FE14CFFD47FF00F24FFF00B3A3FE14
            CFFD47FF00F24FFF00B3A2D1EE1CD5FF00957F5F33AAFF008591E13FFA0B7FE4
            BCBFFC4D1FF0B23C27FF00416FFC9797FF0089AE57FE14CFFD47FF00F24FFF00
            B3A3FE14CFFD47FF00F24FFF00B3A2D1EE1CD5FF00957F5F33AAFF008591E13F
            FA0B7FE4BCBFFC4D1FF0B23C27FF00416FFC9797FF0089AE57FE14CFFD47FF00
            F24FFF00B3A3FE14CFFD47FF00F24FFF00B3A2D1EE1CD5FF00957F5F33AAFF00
            8591E13FFA0B7FE4BCBFFC4D1FF0B23C27FF00416FFC9797FF0089AE57FE14CF
            FD47FF00F24FFF00B3A3FE14CFFD47FF00F24FFF00B3A2D1EE1CD5FF00957F5F
            33AAFF008591E13FFA0B7FE4BCBFFC4D1FF0B23C27FF00416FFC9797FF0089AE
            57FE14CFFD47FF00F24FFF00B3A3FE14CFFD47FF00F24FFF00B3A2D1EE1CD5FF
            00957F5F33AAFF008591E13FFA0B7FE4BCBFFC4D1FF0B23C27FF00416FFC9797
            FF0089AE57FE14CFFD47FF00F24FFF00B3A3FE14CFFD47FF00F24FFF00B3A2D1
            EE1CD5FF00957F5F33AAFF008591E13FFA0B7FE4BCBFFC4D1FF0B23C27FF0041
            6FFC9797FF0089AE57FE14CFFD47FF00F24FFF00B3A3FE14CFFD47FF00F24FFF
            00B3A2D1EE1CD5FF00957F5F33AAFF008591E13FFA0B7FE4BCBFFC4D1FF0B23C
            27FF00416FFC9797FF0089AE57FE14CFFD47FF00F24FFF00B3A3FE14CFFD47FF
            00F24FFF00B3A2D1EE1CD5FF00957F5F33AAFF008591E13FFA0B7FE4BCBFFC4D
            1FF0B23C27FF00416FFC9797FF0089AE57FE14CFFD47FF00F24FFF00B3A3FE14
            CFFD47FF00F24FFF00B3A2D1EE1CD5FF00957F5F33AAFF008591E13FFA0B7FE4
            BCBFFC4D1FF0B23C27FF00416FFC9797FF0089AE57FE14CFFD47FF00F24FFF00
            B3A3FE14CFFD47FF00F24FFF00B3A2D1EE1CD5FF00957F5F33AAFF008591E13F
            FA0B7FE4BCBFFC4D1FF0B23C27FF00416FFC9797FF0089AE57FE14CFFD47FF00
            F24FFF00B3A3FE14CFFD47FF00F24FFF00B3A2D1EE1CD5FF00957F5F33AAFF00
            8591E13FFA0B7FE4BCBFFC4D1FF0B23C27FF00416FFC9797FF0089AE57FE14CF
            FD47FF00F24FFF00B3A3FE14CFFD47FF00F24FFF00B3A2D1EE1CD5FF00957F5F
            33AAFF008591E13FFA0B7FE4BCBFFC4D1FF0B23C27FF00416FFC9797FF0089AE
            57FE14CFFD47FF00F24FFF00B3A3FE14CFFD47FF00F24FFF00B3A2D1EE1CD5FF
            00957F5F33AAFF008591E13FFA0B7FE4BCBFFC4D1FF0B23C27FF00416FFC9797
            FF0089AE57FE14CFFD47FF00F24FFF00B3A3FE14CFFD47FF00F24FFF00B3A2D1
            EE1CD5FF00957F5F33AAFF008591E13FFA0B7FE4BCBFFC4D1FF0B23C27FF0041
            6FFC9797FF0089AE57FE14CFFD47FF00F24FFF00B3A3FE14CFFD47FF00F24FFF
            00B3A2D1EE1CD5FF00957F5F33AAFF008591E13FFA0B7FE4BCBFFC4D1FF0B23C
            27FF00416FFC9797FF0089AE57FE14CFFD47FF00F24FFF00B3A3FE14CFFD47FF
            00F24FFF00B3A2D1EE1CD5FF00957F5F33AAFF008591E13FFA0B7FE4BCBFFC4D
            1FF0B23C27FF00416FFC9797FF0089AE57FE14CFFD47FF00F24FFF00B3A3FE14
            CFFD47FF00F24FFF00B3A2D1EE1CD5FF00957F5F33AAFF008591E13FFA0B7FE4
            BCBFFC4D1FF0B23C27FF00416FFC9797FF0089AE57FE14CFFD47FF00F24FFF00
            B3A3FE14CFFD47FF00F24FFF00B3A2D1EE1CD5FF00957F5F33AAFF008591E13F
            FA0B7FE4BCBFFC4D1FF0B23C27FF00416FFC9797FF0089AE57FE14CFFD47FF00
            F24FFF00B3A3FE14CFFD47FF00F24FFF00B3A2D1EE1CD5FF00957F5F33AAFF00
            8591E13FFA0B7FE4BCBFFC4D1FF0B23C27FF00416FFC9797FF0089AE57FE14CF
            FD47FF00F24FFF00B3A3FE14CFFD47FF00F24FFF00B3A2D1EE1CD5FF00957F5F
            33AAFF008591E13FFA0B7FE4BCBFFC4D1FF0B23C27FF00416FFC9797FF0089AE
            57FE14CFFD47FF00F24FFF00B3A3FE14CFFD47FF00F24FFF00B3A2D1EE1CD5FF
            00957F5F33AAFF008591E13FFA0B7FE4BCBFFC4D74B6B730DE5A43756EFBE19A
            359236C11952320E0F3D0D7987FC299FFA8FFF00E49FFF00675E95A6597F66E9
            36763E6799F668121DF8C6EDAA0671DBA5276E8694DD46FDF45AA28A2A4D4CCF
            126A3368FE17D5F53B75479ECECA6B88D6404A96442C01C107191EB5F335978C
            3C41F123576B0D7FC790787EC24F3018F0D146C8EA494F970ACA3685FDEBF46E
            371241FA8356D4A1D1F46BED52E15DA0B3B792E2458C02C5514B103240CE07A8
            AF3E3A27C30F899A1CBAD2DBD8C6444F3DCCF13ADBCF6ACF92CF36D38DC0AB1C
            BEE5E091904920195F023C17A6D97876CFC5F1CD74DA8DFDBCD6F2C6CEA620A2
            7232A36E73FBB5EA4F535EC55E1DF0AF49F08E91F15753B7F0BEBF77A9A2E9AE
            08780796989630DFBE046F39191B53690C3E638E7DC6800A28A2800A28A2800A
            2B9FF1378D740F08C05F56BF4498AEE8ED63F9E693838C20E402548DC70B9E09
            15E2BE26F8EDAE5FCE63F0FC49A5DAAB6565911659A4009EBB81550415380090
            47DE22803E8AAC3FF84D3C2BFF0043368DFF0081F17FF155F236A3AD6ABAC795
            FDA7A9DEDEF959F2FED33B49B338CE37138CE07E42A8D007D8FF00F09A7857FE
            866D1BFF0003E2FF00E2AAD69FE21D17569DA0D3758D3EF2655DED1DB5CA48C1
            720670A49C648E7DEBE2EA2803EE3A2BE3CD0FC71E26F0E208F4AD66E608554A
            2C0C4491282771C2382A0E79C819E4FA9AF60F0B7C7AB0BBDB6FE26B4FB0CBCF
            FA55B2B3C27EF1E53965FE11C6EC924FCA2803D8E8AA3A4EB3A6EBD60B7DA55E
            C3776CD8F9E26CED38076B0EAAD8232A704679157A800A28A2800A28A2802ADE
            6A761A76CFB75F5B5AF999D9E7CAA9BB1D7193CF51F9D54FF849B40FFA0E69BF
            F8171FF8D705F193FE60BFF6DFFF0069D79657453A2A51BDCF1F1599CE85674D
            46F6FF0023E90FF849B40FFA0E69BFF8171FF8D1FF00093681FF0041CD37FF00
            02E3FF001AF9BE8ABFAB2EE73FF6CCFF00951F487FC24DA07FD0734DFF00C0B8
            FF00C68FF849B40FFA0E69BFF8171FF8D7CDF451F565DC3FB667FCA8FA43FE12
            6D03FE839A6FFE05C7FE347FC24DA07FD0734DFF00C0B8FF00C6BE6FA28FAB2E
            E1FDB33FE547D21FF093681FF41CD37FF02E3FF1A3FE126D03FE839A6FFE05C7
            FE35F37D7AEDFD8F86FE1FE896297BA4C3A9DE5C361DA5456248C6F237038032
            3007B64F53512A2A3647450CC6A5552934925BBD4ECFFE126D03FE839A6FFE05
            C7FE347FC24DA07FD0734DFF00C0B8FF00C6BCC7E2178774BB7D32C3C43A4462
            0B7BC2AA6155C29DCA59580FE1E01C8FA7BE794F0BE929AE7896C74E91888A59
            097C752AA0B11F880450A8C5C79AE15330AD0ABECB9536F6F99EF3FF00093681
            FF0041CD37FF0002E3FF001A3FE126D03FE839A6FF00E05C7FE35C76A1A8F827
            43D75B41BBD0ED1218611BEE5A0DE5588042F42C720FDECF5FC6BCBB595D3975
            7B91A4BBBD86ECC25C10402338E79E0E47E14468A9772B11984E8AFB2DDECD5C
            FA0BFE126D03FE839A6FFE05C7FE347FC24DA07FD0734DFF00C0B8FF00C6BCCB
            E1EF87F4A9F48D475FD5E05B886D0B058DC12AA1537312BFC5C11807D29BAB6B
            5E0AD6BC33315D3E2D33545DC618EDE0C1C8FBB96550083EFD3F0CD2F64AF657
            2963AA7B353972ABABA4D9E9FF00F093681FF41CD37FF02E3FF1A3FE126D03FE
            839A6FFE05C7FE35F37D7B2F8FBC39A4B786EECE9D61696F796412E585BC488C
            632594E703A6031FF80D39528C5A4DEE450CC2AD684A518AF77FE0FF0091D5FF
            00C24DA07FD0734DFF00C0B8FF00C68FF849B40FFA0E69BFF8171FF8D7290F87
            349B0F87D7504F6168FA9C3A5BDC492491234A8CEAE41DD8CF04100FFB35E354
            4294657B30C466156872F3456A8FA43FE126D03FE839A6FF00E05C7FE347FC24
            DA07FD0734DFFC0B8FFC6BE6FA2AFEACBB9CDFDB33FE547D21FF00093681FF00
            41CD37FF0002E3FF001A3FE126D03FE839A6FF00E05C7FE35F37D147D59770FE
            D99FF2A3E90FF849B40FFA0E69BFF8171FF8D1FF00093681FF0041CD37FF0002
            E3FF001AF9BE8A3EACBB87F6CCFF00951F487FC24DA07FD0734DFF00C0B8FF00
            C6B4A29639E2496275923750C8E872181E4107B8AF976BE90F0CFF00C8A9A3FF
            00D78C3FFA00ACAAD2504776071D2C4C9A6AD63568A28AC4F48CFD765F23C3DA
            94BFD9FF00DA3B2D656FB16DDDF69C213E5E3073BBEEE307AF435F2DF88F419F
            59D423BBD3BE16788F48DD286B886DCCAD1C89925822983F76C7200232A00FB9
            5F526BBFDA1FF08F6A5FD91FF213FB2CBF64FBBFEBB61D9F7BE5FBD8EBC7AD7C
            CF3FC4EF899A778824D1B59F1247A4DC42C5266BBB188AC640C8CF9713120F18
            2A083907A73401E95F087CAB4D425D3A2F8717DE1EDB6A5DB53BD2EF24EC0C6A
            50BBC6B8CFDEDA085CA9216BD7ABCF3E1EC3E3B96F5B50F10F8A747D6F4596DD
            9603A76C60650EA376E5894100070793CF6F4F43A0028A28A002BC57E207C6C4
            B7F334CF094BBAE525DB2EA2515E300638881C86C9C8DC46300E3390C337E2EF
            C5096EA7BBF0B688EF15BC4CD0DFDC60AB4AC0E1A25EE101C827F8BA7DDFBDE3
            140124F3CB733C93CF2BCB34AC5E492462CCEC4E4924F2493DEA3A28A0028AD2
            D1FC3FABEBF3F93A4E9B7378E19518C3192A858E177374507079240E0FA5771A
            7FC0BF18DE40D24E34FB070DB4457371962303E6FDD8618E71D73C74A00F35A2
            BD57FE14078ABFE821A37FDFE97FF8DD66EA1F04FC6B673AC7059DB5FA15DC65
            B6B940A0E4FCBFBCDA73C67A639EB401E79454F796577A75DBDADF5ACD6B731E
            37C33C651D7232320F23820FE3505006CF86FC53ABF853524BDD26EDE2218349
            096262980CFCAEB9C30C13EE339041E6BE9CF047C44D23C71048B681EDAFE150
            D35A4C46E008196523EF202719E0F4C81919F92AADE99A9DEE8DA941A8E9D70F
            6F77036F8E54EA0FF2208C820F04120F1401F6C515C57C3BF88965E38D34A384
            B7D5E0506E6D41E08E9E62679284FE2A4E0F627B5A0028A28A00F2DF8C9FF305
            FF00B6FF00FB4EBCB2BE86F12F846C3C55F65FB74D731FD9B7ECF21946776339
            CA9FEE8AC0FF008547A07FCFDEA5FF007F23FF00E22BAA9D58C62933C2C6E5F5
            AB5794E3B3B7E478C515ECFF00F0A8F40FF9FBD4BFEFE47FFC451FF0A8F40FF9
            FBD4BFEFE47FFC455FB781CBFD9588ECBEF3C628AF67FF008547A07FCFDEA5FF
            007F23FF00E228FF008547A07FCFDEA5FF007F23FF00E228F6F00FECAC4765F7
            9E31457B3FFC2A3D03FE7EF52FFBF91FFF001147FC2A3D03FE7EF52FFBF91FFF
            001147B7807F65623B2FBCF18AF5CBFBCF0D7C41D1AC64BDD5E2D32F2DCFCE92
            C8AA4671BC00C4020E0608E9F98AB7FF000A8F40FF009FBD4BFEFE47FF00C451
            FF000A8F40FF009FBD4BFEFE47FF00C454CAAC256773A2860B13494A2E29A7BA
            B9CDFC44F1169773A658683A4CAB3C368CACD221CA8DABB5541E87827915C9F8
            5F564D0FC4B63A8C8BBA389C87F6560549FC0126BD43FE151E81FF003F7A97FD
            FC8FFF0088A3FE151E81FF003F7A97FDFC8FFF0088A154A6A3CA157078BA957D
            AD926AD6F90D9ADBC17A9788DBC4773ACE9F3472C001B599D796DBB7715639FB
            B81B71C119EB5E55AE4D6171ADDDCBA5C1E458B49FB94E7A7AF3D327271DB38A
            F57FF8547A07FCFDEA5FF7F23FFE228FF8547A07FCFDEA5FF7F23FFE22942A42
            3D4AC461311595B912D6FF00339BF87BE20D2A0D2351D03579D2DE1BB2C56472
            406DC9B5813D17803927BD4DAAD9783B42F05CD6897365AAEA4F9F2E7858170E
            7A1CA93B5463A138FCEB7BFE151E81FF003F7A97FDFC8FFF0088A3FE151E81FF
            003F7A97FDFC8FFF0088A4E70BDEE5470D8954D41C22DA564FC99E315ECF77E2
            3D25BE20F9126A1692E997BA5F91330994C5B83B9019B381C123AFF151FF000A
            8F40FF009FBD4BFEFE47FF00C451FF000A8F40FF009FBD4BFEFE47FF00C4554A
            A5396E461F078AA37B25AB5D7B5FFCCA2FE26B0BF9BC6E5EFAD9236B316D681A
            551E6854947C9CFCD963DBD4579357B3FF00C2A3D03FE7EF52FF00BF91FF00F1
            147FC2A3D03FE7EF52FF00BF91FF00F11446AC23B0ABE0B155ADCC9697EBDDDC
            F18A2BD9FF00E151E81FF3F7A97FDFC8FF00F88A3FE151E81FF3F7A97FDFC8FF
            00F88AAF6F039FFB2B11D97DE78C515ECFFF000A8F40FF009FBD4BFEFE47FF00
            C451FF000A8F40FF009FBD4BFEFE47FF00C451EDE01FD9588ECBEF3C628AF67F
            F8547A07FCFDEA5FF7F23FFE228FF8547A07FCFDEA5FF7F23FFE228F6F00FECA
            C4765F79E315F487867FE454D1FF00EBC61FFD00572DFF000A8F40FF009FBD4B
            FEFE47FF00C4576D63671E9FA7DB594459A3B7896242E72485000CFBF15956A9
            19A563D1CBB07570F2939F52C514515CE7AC53D5A3BE9B46BE8B4B9920D41EDE
            45B5964195494A9D8C783C06C1E87E86BC5BC41F0D7E2AF8AACC5AEB7AFF0087
            2F235FB85E050F1E48276B8B70CB9DA3382338C1E2BDB6FEF6DF4CD3EE6FEEE4
            F2EDADA269A67DA4ED4504B1C0E4E003D2BE67D67C7377E2AF126B17ADF11A4D
            02C227922D36DEDA3BB512A29FDDB308D70030249624B03C6DC60000F46F851F
            0DBC53E04D62E5F54D5AD66D2E5B770B696D712B2898B27CFB195573B548CF5E
            82BD6ABCB7E0D78F4F88B4B9B43D4F554BFD62C5E4F2E558E4067B65D81652CC
            A3272D8E70C40048CE49F52A002BCF3E30F8C25F0BF8516DAC6778752D458C50
            C91921A345C191C1C119C10BD411BF20FCB5DE5EDE41A7585C5F5D49E5DB5B44
            D34AF8276A28249C0E4F00F4AF91BC73E2C9FC65E28B8D4E5F9605FDCDA46502
            9484312A0E09F9B924F279271C60000E728A2A482096E678E082279669582471
            C6A599D89C0000E4927B5004FA66997BACEA5069DA75BBDC5DCEDB23893A93FC
            80032493C00093C57B7785BE07E9B6160BA9F8C6EB79588CB2DA2C9E5C300C36
            7CC901CB6060E4150083CB0E6BA0F87DE12B2F869E14BAD67C42F6D05FBAF997
            57079F223E31103CE4E7AED1F331006EC29AF1FF00881F126FFC697F2451AFD9
            F474F960B6755663C83E631E70E718C83F28254120B1600F47D47E37F86F40F2
            B4FF000CE89F6BB38B3CC78B4857386F917693D4B672ABC8EF9CD729FF000BFF
            00C55FF40FD1BFEFCCBFFC72BCAA8A00F40B3F8D1E38B5BB49A6D4A1BB8D7398
            27B58C23718E4A056E3AF0474ADCB3FDA07C409768D7DA4E9935B0CEF8E01244
            E78E30C5980E71FC27FAD791D1401F47693E35F067C538574BD7747F2AF171B5
            26059577380364EA014C911839D992CAA3766B8DF1A7C0EBFD263379E1A926D4
            AD864BDB4817CF8D42E7208C093241E000795003726BC9E19E5B772F0CAF1B95
            642C8C412AC0AB0E3B104823B82457B37C35F8BFE45DC7A2F888C30D93ED5B6B
            941B1206C01B58745427918C04CE000980801E2B457B57C62F86B3A5DDD78B34
            78FCC824FDE5F5B22006220732A8039538CB77072DC8276F8AD005ED1B56BBD0
            759B3D56C5F6DCDACA244C920363AA9C104A91904679048AFB1F46D5AD35ED1A
            CF55B17DD6D75109132412B9EAA70480C0E4119E0822BE2AAF72F80BE2DFF8FA
            F0ADDCDEB7365BDBFEFE46327E8E1547FCF426803DC68A28A00C3F1178C341F0
            9FD9BFB6EFFECBF69DDE4FEE5DF76DC6EFBAA71F7875F5AC2FF85C3E03FF00A0
            EFFE4A4FFF00C4573DF1B6CADEF3FB0BCF8F7ECFB46DF988C67CBF4FA5617C4B
            F00F867C3FFD97FD97A6791E7F9BE67EFE47DDB7663EF31F535A2A6DDBCCE4A9
            8C853E7BA7EEDAFF0033BEFF0085C3E03FFA0EFF00E4A4FF00FC451FF0B87C07
            FF0041DFFC949FFF0088AE07C51E01F0CE9DF10745D2ED34CF2ECEE7C8F363F3
            E43BB74ACA792D91C0038354358F05787AD7E2747A3C3A7EDB03756D198BCE90
            FCAE1370C96CF393DE8549B14F1B4E0DA69E8EDF33D37FE170F80FFE83BFF929
            3FFF001147FC2E1F01FF00D077FF002527FF00E228FF00853DE03FFA017FE4DC
            FF00FC5D1FF0A7BC07FF00402FFC9B9FFF008BACCEC377C3BE30D07C59F69FEC
            4BFF00B57D9B6F9DFB974DBBB3B7EF28CFDD3D3D2B72BC3BF676FF009993FEDD
            7FF6AD7B8D0070DFF0B87C07FF0041DFFC949FFF0088A3FE170F80FF00E83BFF
            009293FF00F1147FC29EF01FFD00BFF26E7FFE2EB03C6BF0C3C1DA47846FAFAC
            747F2AE62F2F63FDA666C66450782E474269A577622A4D420E6FA6A6FF00FC2E
            1F01FF00D077FF002527FF00E228FF0085C3E03FFA0EFF00E4A4FF00FC45703F
            F080F867FE1527F6E7F667FC4CBFE7B79F27FCF7D9F77763EEF1D28F147807C3
            3A77C3ED1754B4D33CBBCB9F23CD93CF90EEDD1331E0B607201E055FB377B7C8
            E778C828F359ECA5F2677DFF000B87C07FF41DFF00C949FF00F88A3FE170F80F
            FE83BFF9293FFF00115E65E2EF05787B4BF0FF00866EACF4FF002A6BDB5F32E1
            BCE91B7B6C8CE705881CB1E98EB5DF685F09FC1379E1FD36EAE344DF34D6B149
            237DAA61962809380F8EA693834AE5D3C4C2A5474D6EACFEF35AD3E2AF82EFA6
            686DB5ADF22C524C47D9661F2221773CA765527F0A83FE170F80FF00E83BFF00
            9293FF00F115475CF86DE12D03C33ADEA7A6693E45E41A65DF9727DA656DBBA1
            753C3311D09ED5E01A2E9D6B7766F24F16F6121507711C607A1A508393B21E22
            BC68439E5B1F46FF00C2E1F01FFD077FF2527FFE228FF85C3E03FF00A0EFFE4A
            4FFF00C45781FF0062E9FF00F3EFFF008FB7F8D1FD8BA7FF00CFBFFE3EDFE35A
            FD5E470FF6C50ECFF0FF0033E92D0BC7DE16F12DD9B5D2758866B91D2175689D
            F827E50E016C0524E338EF5D1D7C8CFA34714A971612CB6B73110F13A391B5C1
            C839EA0FB83C57A3FC28F899A80D5E3F0B78927927699C8B5BBB8972E8E727CB
            7663F306FE13C9C9039046DCE74E50DCEBC362E96217B9BF63DCA8A2B9DBCF13
            5B5C69FE214D3276377A5DB485DCC7809200F80377520A7A6391D79A949B379D
            48C3737E59638227965758E3452CEEE70140E4927B0AC8B0F16689AA5A5EDD59
            DEF9B0D9279970DE53AEC5C139C1009E14F4CF4AF3AF07DF5CEA5A0F8E2F2F26
            69AE25B3DCEEDD49F2E5FC87603A0155FC03FF0022A78CFF00EBC47FE812D6DE
            C924EFD2C79CB1F29CA1CAB49293FBAFFE47AD697AB586B5642F34EB959E02C5
            7700410475041E41FAF620F7ABB5E31A4FFC917D77FEBF97F9C35D9F86F5F6B0
            F86D65ABEA334B3ED7DB34B2BB336D6B829B89E49C039C7B62A654EDB77B1B50
            C6F3D94D5BDDE6BFCEC769453229639E2496275923750C8E872181E4107B8A7D
            64770514514011CF043756F2DBDC4493412A1492391432BA9182083C104718AF
            02D67E1BF8C341F126B03C39E1BF0FEB1A4DFBC935B9B9B3B5CDA190FDD51210
            414C600C94C73B72481EE3AEFF00687FC23DA97F647FC84FECB2FD93EEFF00AE
            D8767DEF97EF63AF1EB5F33CFF0013BE2669DE209346D67C491E93710B1499AE
            EC622B1903233E5C4C483C60A820E41E9CD007B57C2CF02CBE11D0E4B9D56DEC
            7FB72F6579E7782045302BEDFDC86518DA0AE70B8504E064004F7D5E79F0F61F
            1DCB7ADA87887C53A3EB7A2CB6ECB01D3B630328751BB72C4A0800383C9E7B7A
            7A1D00796FC79D4DAD3C0B059477088F7B788924471BA48D41638079C0711E48
            F503BF3F3757B1FED09A8F9BAF68DA67958FB3DB3DC799BBEF798DB718C718F2
            BAE79DDEDCF8E50015EC7F017C2DF6BD56EBC4D70BFBAB3CDBDB73D6565F9CF0
            7B236304107CCE395AF23B2B39F51BFB7B1B58FCCB9B99561893206E76200193
            C0E48EB5F4578DEE6CBE1C7C218FC3F6CC925C5CC06C620DFF002D0B82669769
            6C81F331E090ACEA3A5007957C50F1F4BE31D71E0B3B873A1DAB7FA2C7B0A798
            D8C191875249CE338C2F604B6783A28A002BABD27E1AF8C35CB05BEB0D0E66B6
            7C6C795D21DE08043287604A904618707D6BD8FE1D7C20B4F0FF00D9359D747D
            A3584FDE25BE43436CDC6DFF0079D79E73804F00901ABD56803E55FF00853DE3
            CFFA017FE4DC1FFC5D636B9E07F1378710C9AAE8D73042AA1DA7502489413B46
            5D095073C609CF23D457D8751CF0457304904F124B0CAA5248E450CAEA460820
            F0411DA803E20A2BD57E29FC2C83C296ABAD68AF33E9CD2EC9E0932E6DCB1254
            8603EE745F9B9076F2DBB8F2AA00FA03E1078F535FB01E0ED6A2864921B631DB
            3385DB710A8DA62653F7982FA0395073D096F31F88BE029FC0BACA4425F3F4EB
            BDCD693311BF0B8CAB8FEF0DC391C1C8231C81CDE8DAB5DE83ACD9EAB62FB6E6
            D6512264901B1D54E082548C8233C82457D01F172CBFE12CF85F65AEE9F6BBBC
            9F2AFC6F8F332C0E9F3018CE3EF233738C2139E05007CE357B46D5AEF41D66CF
            55B17DB736B289132480D8EAA70412A464119E4122A8D1401F6AE8DAB5A6BDA3
            59EAB62FBADAEA21226482573D54E090181C8233C10455EAF26F803A9ADCF83E
            FB4E6B87926B4BC2E226C911C6EA36E33C005964381DF27BF3EB3401E5BF193F
            E60BFF006DFF00F69D1F193FE60BFF006DFF00F69D1F193FE60BFF006DFF00F6
            9D1F193FE60BFF006DFF00F69D7553FB1F33C3C5FF00CC47FDB81E36FF0092AD
            E1DFFB76FF00D1ED595E20FF0092D10FFD7F5A7F28EB57C6DFF255BC3BFF006E
            DFFA3DAB2BC41FF25A21FF00AFEB4FE51D386CBD0CF11BCBFC6BF267B3D14515
            C87D01E1DFB3B7FCCC9FF6EBFF00B56BDC6BC3BF676FF9993FEDD7FF006AD7B8
            D0015CB7C47FF910B53FFB65FF00A352BA9AE5BE23FF00C885A9FF00DB2FFD1A
            9550F891862BF813F47F91CB7FCD05FF003FF3F5478DBFE494F877FEDDBFF443
            51FF003417FCFF00CFD51E36FF009253E1DFFB76FF00D10D5D0BE2F9B3CA9FF0
            9FFD7B8995E3EFF9153C19FF005E27FF00408ABD4BC33FF22A68FF00F5E30FFE
            802BCB7C7DFF0022A7833FEBC4FF00E81157A97867FE454D1FFEBC61FF00D005
            454F817CCDF07FEF53F48FE4883C69FF002227887FEC1973FF00A29ABE5FF0E7
            FC83E4FF00AEA7F90AFA83C69FF2227887FEC1973FFA29ABE5FF000E7FC83E4F
            FAEA7F90A543E32F35FF00777EA8D7A28A2BB8F980AC4D711ED66B6D46D9CC33
            C720C4B1B1570C39560474231D7AF4ADBAC4D544DAA6A767A3D92992E6595635
            8F801A462020C9FAFD39AC6B5B91DCEFCB54DE263CBF3F43EAEF0F6A12EADE1A
            D2B529D5166BBB3867916304286740C40C927193EB5E55E01FF9153C67FF005E
            23FF004096BB1F015CDC09EF747967491347B3B2B1FDD16D9E62232C846EC7F1
            82338190AB5C77807FE454F19FFD788FFD025AC20AD16BD0F5713353AB4E4BFB
            FF0082B07807FE454F19FF00D788FF00D025A3C03FF22A78CFFEBC47FE812D1E
            01FF009153C67FF5E23FF40968F00FFC8A9E33FF00AF11FF00A04B5ACBED7C8E
            0A1FF2E7D25FA8693FF245F5DFFAFE5FE70D6AFF00CD05FF003FF3F5595A4FFC
            917D77FEBF97F9C35ABFF3417FCFFCFD527BFF00DBC694F6FF00B86FF36743E0
            2BEB6B2F0268AB7332C46E259218B77019CC9210B9F53838F7E3A915D8D78EDE
            5CCB67F08BC39756EFB2687513246D8070C1A620E0F1D457AD58DE47A869F6D7
            B10658EE22595038C10180233EFCD63523677F367A783AB78AA7DA31FC51628A
            28AC8ED33F5D7B88FC3DA9496977059DCADACA61BAB820470B843B5DC9040507
            04E41E074AF16D67E1E7C4FF001A6970AEA7E25F0CEA568E81E09844A4856C36
            63916DF201C2F2A791EA2BD6BC75FF0024F7C4BFF60ABAFF00D14D5E59E1BD77
            E31C3E16D222D2FC27A3CFA7A5942B6B2C92A8678820D8C7F7E392B83D07D050
            06C7C28F86DE29F026B172FAA6AD6B36972DBB85B4B6B895944C593E7D8CAAB9
            DAA467AF415EB55C2782B55F88F7DACCD178BF40D3B4FD3C5BB3472DAC8198CB
            B970A712BF1B4B1E9D8735DDD007C87F113509754F881ACDE4AA803CF889A307
            6BC2AA16271C9C8640AD91C1CE47045731451401DCFC22D1FF00B63E2469BBE0
            F3A0B3DD772FCFB766C1F237504E2431F03F118CD747FB40DE4EFE2CD32C5A4C
            DB4363E7226070EF230639EBC88D3F2F73507C00FF0091EEFBFEC1927FE8D8A8
            F8FF00FF0023DD8FFD8323FF00D1B2D0079557A77C0EF0E26B1E339352B887CC
            B6D2E2F3549DA544CC711E41E4F01D811D0A039F5F31AFA0FF0067CD3E28FC35
            AB6A419FCE9EF040CA48DA16340CA4719CE656CF3D87E201EC14514500145145
            00417B6706A3617163751F996D7313432A648DC8C08232391C13D2BE35F1068F
            2E81E21D43499B797B49DA20EF1942EA0FCAFB4F40C30C3AF04726BED1AF957E
            30FF00C954D6BFED87FE888E80386AFA47E0CC8BAEFC2C9F4ABF851ED229E7B2
            2AA4A978DD43B64839CE6561918E31DF9AF9BABDF3F67AD4259349D734D2A9E4
            C13C53AB007716914AB03CE3188971C773F800781D1451401ECFFB3D6A1147AB
            6B9A6957F3A78229D5801B42C6C5581E739CCAB8E3B1FC7DF2BE71F801FF0023
            DDF7FD8324FF00D1B157D1D401E5BF193FE60BFF006DFF00F69D1F193FE60BFF
            006DFF00F69D1F193FE60BFF006DFF00F69D1F193FE60BFF006DFF00F69D7553
            FB1F33C3C5FF00CC47FDB81E36FF0092ADE1DFFB76FF00D1ED595E20FF0092D1
            0FFD7F5A7F28EB57C6DFF255BC3BFF006EDFFA3DAB2BC41FF25A21FF00AFEB4F
            E51D386CBD0CF11BCBFC6BF267B3D14515C87D01E1DFB3B7FCCC9FF6EBFF00B5
            68FF008689FF00A95BFF002A1FFDAA8FD9DBFE664FFB75FF00DAB585F003FE47
            BBEFFB0649FF00A362A00DDFF8689FFA95BFF2A1FF00DAAA96ADF19FFE12CD32
            6D13FB03ECBF69DBFBEFB66FDBB583FDDD833F771D7BD7BF572DF11FFE442D4F
            FED97FE8D4AA87C48C315FC09FA3FC8F1DFF00858BFF0014CFFC213FD95FF6F9
            F68FF6FCDFB9B7F0FBDEFED46A3F117FE122D12D3C33FD95F67FECED9FE93F68
            DFE6796A63FBBB46339CF538AEE7FE682FF9FF009FAA3C6DFF0024A7C3BFF6ED
            FF00A21ABA17C5F367953FE13FFAF713CFF53F19FF00C24D65A7E99F60FB37F6
            347F67F33CEDFE770AB9C6D1B7FD5F4C9EBED5B567F1E3FB1ECADF4CFF00846F
            CEFB1C6B6FE67DBB6EFD836E71E59C671D335A3E3EFF009153C19FF5E27FF408
            ABD4BC33FF0022A68FFF005E30FF00E802A2A7C0BE66F83FF7A9FA47F2478A6B
            5F1E3FB6341D474CFF00846FC9FB65B496FE67DBB76CDEA5738F2C6719E99AF2
            FD3B57FECFB768BC8F332E5B3BF1D80F4F6AFAD3C69FF2227887FEC1973FFA29
            AB86F801FF002225F7FD84E4FF00D1515651938BBA3D1AB4615A3CB35747887F
            C24BFF004E9FF913FF00AD47FC24BFF4E9FF00913FFAD5F625157EDA7DCE5FEC
            DC2FF2FE2FFCCF8F06BB7376EB6D6764CD733308E25425D8B13800281C9F415E
            9FF097E185F26A91789BC436F25B981CB5AD9DC47FBC77E4798E1865403CAF72
            406E001BBDD28A894E52DCDE8E1A950BFB356B9C0F807FE46BF19FFD7F0FFD0E
            5AE5BC03FF0022A78CFF00EBC47FE812D767E12B3FB078D3C610F99BF74F0CD9
            C63FD6077C7E1BB1F85719E01FF9153C67FF005E23FF004096B7FE6F91E559A7
            493FFA79FA87807FE454F19FFD788FFD025A3C03FF0022A78CFF00EBC47FE812
            D1E01FF9153C67FF005E23FF0040968F00FF00C8A9E33FFAF11FFA04B572FB5F
            239E87FCB9F497EA1A4FFC917D77FEBF97F9C35ABFF3417FCFFCFD565693FF00
            245F5DFF00AFE5FE70D6AFFCD05FF3FF003F549EFF00F6F1A53DBFEE1BFCD995
            AB7FC917D0BFEBF9BF9CD5EA5E19FF00915347FF00AF187FF4015E5BAB7FC917
            D0BFEBF9BF9CD5EB5A3D9C9A7E896165295692DEDA389CA1C82554038F6E2B3A
            BB7CD9D7814FDA5FFBB1FC8BB45145607AA6678924B187C2DABC9AA42F369E96
            5335D4519C33C410EF51C8E4AE4751F515E2BA57ED036DA669FA75B8F064F6BA
            445B6D62912F8C9B5230A0AAEE8C6F6552BC16EE3246735ECBE2CB2B8D4FC1DA
            E585A47E65CDCE9F3C30A6E0373B46C1464F03248EB5E2DA9697F18355F02278
            427F0A69CBA7A5BC16E244B88C4BB622A54E4CC467E419E3D7A5007D0345709E
            0AD57E23DF6B3345E2FD034ED3F4F16ECD1CB6B206632EE5C29C4AFC6D2C7A76
            1CD777401F0E51451401EABF003FE47BBEFF00B0649FFA362A3E3FFF00C8F763
            FF0060C8FF00F46CB47C00FF0091EEFBFEC1927FE8D8A8F8FF00FF0023DD8FFD
            8323FF00D1B2D0079557D1DF003FE444BEFF00B09C9FFA2A2AF9C6BE8EF801FF
            002225F7FD84E4FF00D1515007AAD145140051451400578AF8F7E107883C53E3
            4D4359B1BCD323B6B9F2F62CF2C81C6D8D54E40423AA9EF5ED55E4DF11BE30C5
            E1F9EE344D0552E35255292DD16063B57CF403187703391D14E339F99400715F
            F0A03C55FF00410D1BFEFF004BFF00C6EBD1FE14F80355F037F6BFF69DC594DF
            6CF27CBFB33B36366FCE7728FEF0FD6BC47C33F11FC45E1CD706A2750B9BF8A4
            6CDD5B5D4ECEB38C0524939C3E15406EA3681C8C83F49782FC69A6F8DB4617D6
            27CB9E3C2DCDAB365E073D8FAA9C1C377F6208001F1FD1451401EABF003FE47B
            BEFF00B0649FFA362AFA3ABE71F801FF0023DDF7FD8324FF00D1B157D1D401E5
            BF193FE60BFF006DFF00F69D1F193FE60BFF006DFF00F69D1F193FE60BFF006D
            FF00F69D1F193FE60BFF006DFF00F69D7553FB1F33C3C5FF00CC47FDB81E36FF
            0092ADE1DFFB76FF00D1ED595E20FF0092D10FFD7F5A7F28EB57C6DFF255BC3B
            FF006EDFFA3DAB2BC41FF25A21FF00AFEB4FE51D386CBD0CF11BCBFC6BF267B3
            D14515C87D01E1DFB3B7FCCC9FF6EBFF00B56B0BE007FC8F77DFF60C93FF0046
            C55BBFB3B7FCCC9FF6EBFF00B56B82F861E30D3FC15E25B9D4B5286E65865B36
            8156D9559B71746CFCCC0630A7BD007D5D5F2DFC57B67BBF8BBABC11950CDE4E
            0B74E20435E9FF00F0BFFC2BFF0040FD67FEFCC5FF00C72BC93C45E20B4F14FC
            4BB9D66C639A3B6B9DBB167501C6D8429C8048EAA7BD5455E4919579B8529496
            E931FF00F0ABB5BFF8447FE124FB569FF63FEE798FE67FACF2FA6CC75F7E946A
            9F0BB5BD23C3F65AD5C5D69ED6D77B3CB58E472E37A16190500E83D6BD6FFE68
            2FF9FF009FAA3C6DFF0024A7C3BFF6EDFF00A21AB554D5EDE6704B1751439BFB
            89FCD9E39ABFC3AD5F45D3F4CBDB9B9B178F518BCD8446EE4A8C29F9B2A307E6
            1D33DEBD9BE0DF82F51F0B69F7B7B7D35AC91EA915BCB0081D8950039F9B2A30
            7E71D33DEB1FC7DFF22A7833FEBC4FFE81157A97867FE454D1FF00EBC61FFD00
            54CE0945346B87C44E75E5096C92FC5220F1A7FC889E21FF00B065CFFE8A6AE1
            BE007FC8897DFF0061393FF45455DCF8D3FE444F10FF00D832E7FF00453570DF
            003FE444BEFF00B09C9FFA2A2AC8EF3D568A28A0028A28A00896DA25BB92E953
            13488B1BB64F2AA58A8C74EAEDF9D78EF807FE454F19FF00D788FF00D025AF67
            AE061F09B786346F18BA491359DDDABB5B2296DC8A1243B5B3E9B80072738CF1
            5AD392B34FC8E0C552939C2715A2E6BFCD1CB7807FE454F19FFD788FFD025A3C
            03FF0022A78CFF00EBC47FE812D1E01FF9153C67FF005E23FF0040968F00FF00
            C8A9E33FFAF11FFA04B5BCBED7C8F2A87FCB9F497EA1A4FF00C917D77FEBF97F
            9C35ABFF003417FCFF00CFD565693FF245F5DFFAFE5FE70D743A4E9773AD7C1A
            B7D3ACC299E76C2EF6C0005CE4927D0004FAF1C66949DBEF35A3172D16FECDFE
            63FC37A17F6F7C3FF0DC2CD1086DEF8DCCCB22EE0E8AF2FCB8E872481CF627AF
            43E8754345D22DF41D220D36D5E57861DDB5A520B1CB1639C003A9F4ABF5CD39
            5D9EC61E97B3824F7B2BFC9051451526E6278CE79AD7C0DE20B8B795E19E2D36
            E5E392362AC8C226208239041E735C46ABAB6A51F81BE18DC26A174B3DE6A5A5
            25D48B33069D5E225C39CE5831E4839CF7AF46D5B4D8758D1AFB4BB867582F2D
            E4B791A320305752A48C823383E86BC5BC39F06BE1C78B34F92FF44D775CBAB5
            8E530B3EE44C38009186841E8C3F3A00EFBEDF79FF000BCFFB3FED73FD8BFE11
            AF3FECDE61F2FCCFB4EDDFB7A6EC719EB8AEDEBCB7E19F83FC13A178A75997C3
            3ABEA37BA858A1B1BD8AE71B6225F381FBB5C9DD1119048E0FB57A95007C3945
            145007AAFC00FF0091EEFBFEC1927FE8D8A8F8FF00FF0023DD8FFD8323FF00D1
            B2D1F003FE47BBEFFB0649FF00A362A3E3FF00FC8F763FF60C8FFF0046CB401E
            555F477C00FF009112FBFEC2727FE8A8ABE71AFA3BE007FC8897DFF61393FF00
            4545401EAB4514500145145007957C76D5B5AD37C2F69069EFE569F7B2BC17B2
            A901CFCB958C739DAC03E7039DB8270483F38D7D5DF163435D73E1D6A6BB53CE
            B25FB6C4CEC40531E4B74EA4A6F001E32474EA3E51A002BA0F04EA7ABE99E30D
            35F43B8486F679D2D97CDCF952076036C8072509C67B8C647201AE7EBD03E0C6
            93FDA9F122CE46485E2B18A4BA759467381B54A8C1F983BA30E98C67A81401E7
            F45145007AAFC00FF91EEFBFEC1927FE8D8ABE8EAF9C7E007FC8F77DFF0060C9
            3FF46C55F4750072DE32F06FFC25BF62FF004FFB27D97CCFF963E66EDDB7FDA1
            8C6DFD68F197837FE12DFB17FA7FD93ECBE67FCB1F3376EDBFED0C636FEB5D4D
            154A7256B74309E1A94F9B997C56BFCB6396D6FC1BFDB1E2BD3B5CFB7F93F63F
            2BF73E4EEDFB1CBFDEDC319CE3A1AA9A87807EDFE344F117F69ECDB3C337D9FC
            8CFF00AB0A31BB777DBE9DEBACBCBEB3D3E212DEDD416D196DA1E6902027AE32
            7BF07F2AE3AE7E2BF8760B868E34BEB8418C4B14402B71DB7303EDC8AB8BA8FE
            130AD0C2C3F8B65777DFA9DCD15C0FFC2DCD03FE7D352FFBF71FFF0017505C7C
            68F0C5A8FDF43A821C670638F38FA6FCD4BA725BA358E32849DA32BB2E7C3AF8
            75FF00080FF697FC4D7EDFF6DF2BFE5DFCAD9B37FF00B4D9CEFF006E95F34E83
            14735F3ACB1A3A8889C328233915EF5FF0BFFC2BFF0040FD67FEFCC5FF00C72B
            C674E93C2BA7DC34BFDABACC9942B8FECA887707FE7E3DA8834A49B2B1519CE8
            CA30DCBDF61B3FF9F583FEFD8A8FC31A126B7F126D7488E55B559B7E1D63DC17
            1096FBB91E9FAD59FEDBF0AFFCFF006B3FF82D8BFF00922AB7873C4DA5787FE2
            55B6BDFE9B3E9D06EFF962A9336E84A7DDDE47DE3FDEE9F956D56A45A5CBB9E6
            607095E3392AEBDD69ADFD3CCFA23FE10DFF008A0BFE118FB7FF00DBCF93FF00
            4D7CCFBBBBF0EB46B7E0DFED8F0A69DA1FDBFC9FB1F95FBEF2776FD8853EEEE1
            8CE73D4D727FF0BFFC2BFF0040FD67FEFCC5FF00C728FF0085FF00E15FFA07EB
            3FF7E62FFE395873CB73D3786A4D59AE96F923A1D7FC03FDB9A4E8D63FDA7E47
            F66C1E4EFF00237799F2A0CE370C7DCF7EB5D569967FD9DA4D9D8F99E67D9A04
            877E31BB6A819C76E95E7FA5FC6FF0D6ADAB5969B058EACB35DCE9046D245185
            0CEC14138909C64FA57A550E4DAB32A1429C24E715ABFD0A3AD69DFDB1A0EA3A
            679BE4FDB2DA4B7F336EED9BD4AE71919C67A66B0BC01E0CFF00841B419F4CFB
            7FDB7CDB96B8F33C9F2F19555C6371FEEF5CF7ADDD6B51FEC7D0751D4FCAF3BE
            C76D25C797BB6EFD8A5B19C1C671D715E39FF0D13FF52B7FE543FF00B5549A9E
            E3457877FC344FFD4ADFF950FF00ED547FC344FF00D4ADFF00950FFED5401EE3
            45795597C7CF0C4FF674BAB2D4ED64936895BCB478E22719390DB99473C85C90
            3A76AF4AD3353B2D674D8351D3AE12E2D275DF1CA9D08FE60839041E41041E68
            02DD3258A39E278A545923752AE8E32181E0823B8AF1FD6BE3C7F63EBDA8E99F
            F08DF9DF63B992DFCCFB76DDFB18AE71E59C671D33547FE1A27FEA56FF00CA87
            FF006AA00F5A5F0C6930DB6A50DADA2DA2EA3179571E47CA31B4A8DABF754E18
            F41D7AE6B2349F01DBE8D63AE59DADF4AD0EA700857CD405A2F9581248C06E5F
            3D074FC6BCF3FE1A27FEA56FFCA87FF6AA3FE1A27FEA56FF00CA87FF006AAAE7
            97731787A4DA7CBB5FF1DCF4FD3BC17A4E9FA05C68844F7365712F9B22CD2609
            3F2F750BC7C82B76DAD6DECEDD6DED608A08533B638902A8C9C9C01C7535E27F
            F0D13FF52B7FE543FF00B551FF000D13FF0052B7FE543FFB552726F72E14E10F
            8558F71A2BC3BFE1A27FEA56FF00CA87FF006AAF63D1751FED8D074ED4FCAF27
            ED96D1DC797BB76CDEA1B19C0CE33D7148B2F5145140191E2BB2B8D4BC1DADD8
            59C7E65D5CE9F3C30A6E0373B46C1464F03923AD78EFC28F899E04F0C783D34A
            BA92EB4CBB56F36E5A68DE659E56E0B21407030ABC1031C0F98E58FB6EADA943
            A3E8D7DAA5C2BB41676F25C48B18058AA2962064819C0F515E2B7DF187E16EA7
            78F777FE0E9EEEE64C6F9A7D32DA476C0C0CB17C9E001F850059F865A85878A7
            E32788FC4FA169D3DAE98FA7AC73F9C51499DD90E762F4DDE5B93CB7209246E0
            07B6D79E7C3DF893E16F145EB681E1DD2AEF4F4B6B76B811B5BC5144ABBD410A
            118E092F9E9EB5E87401F0E51451401EABF003FE47BBEFFB0649FF00A362A3E3
            FF00FC8F763FF60C8FFF0046CB47C00FF91EEFBFEC1927FE8D8A8F8FFF00F23D
            D8FF00D8323FFD1B2D0079557D1DF003FE444BEFFB09C9FF00A2A2AF9C6BE8EF
            801FF2225F7FD84E4FFD1515007AAD14514005145140057CF17BF003C41F6FB8
            FB06A1A67D8FCD6F23CF9A4F33CBC9DBBB11E376319C719AFA1EBE7FF893F127
            C5BA078FF53D334CD5BC8B383CAF2E3FB344DB77448C796527A93DE8028FFC28
            0F157FD04346FF00BFD2FF00F1BAF4EF859E00BBF03586A3FDA1710CD79792A6
            7ECEE5A311A03B7AA83BB2CF9ED8C7BD78AFFC2E1F1E7FD077FF002520FF00E2
            2BD57E0C78C35EF167F6DFF6DDFF00DABECDE4793FB944DBBBCCDDF75467EE8E
            BE9401F38D1451401EABF003FE47BBEFFB0649FF00A362AFA3ABE71F801FF23D
            DF7FD8324FFD1B157D1D4005737E32F1645E15D355C47E6DE5C6E5B78C83B723
            19663E83238EA738F5235759D66CB41D364BFBF976449C0039676ECAA3B93FFD
            738009AF248AF63F13EB171E2BF10B2DBE9560C891DBAA6E33104B2C2B91873D
            4B67B1EC0E575A70BEAF63871989F66BD9C1FBCFF05D5B39BD7EFB5CBF96DAE3
            5B9A7769E2134024C01B0FCBB95470A0ECF419C03CE7355E7D3FEC3611CD78B2
            A4F74824B68B18FDDE7FD636474382140E4F5C8006EEB2CD5AEEDB51F1E6BEB0
            4A4B34569692420A4F295D8BF2B7DE45F624FC8C7395E68EA77D71E1AF0BC9E3
            0D4674B8F106ACDB34E8EE22573172099F6B63A051B4A8206E4E086C0E975145
            1E2C30B2AD3DEEDEBAF6EEFD7A2384D79F51D3B545D1A3B5957526318316CDCE
            0B80CAA17BB10C38EA338EBD3D03C2BF029AFAC24BAF175D5DDBDE48D88EDED6
            642C8A38CBB10C093C600E8075C9C0D3F835E089614FF84D35791E6BFBE5736E
            93292CAAC7995998677BF3823F8589C9DDC7B05724E6E6F53E830F85A7878DA0
            BE7D4E2B4CF84BE0AD31E0953454B89A15DBBEEA4794487182CC84EC24F5FBB8
            07A01C57CCBA0C51CD7CEB2C68EA22270CA08CE457D9F5F16E8B750DA5E3C93B
            EC531950704F391E9453B732B8B16A4E849477B1D2FD86CFFE7D60FF00BF62AC
            F8074EB2BCF8BBA7D95D59DBCF68FE66E825895A3388188CA918EA33F5ACEFED
            AD3FFE7E3FF1C6FF000ABFF0FB54B0B7F8B7A76A171790DBD9AF9BBA79DC468B
            FB875E4B631CF15BD77171D0F2F2C8578D66EA276B75BF747D15FF00085F857F
            E859D1BFF0022FFE268FF842FC2BFF0042CE8DFF0080117FF1347FC269E15FFA
            19B46FFC0F8BFF008AAD1D3F54D3F5681A7D36FADAF2156D8D25B4CB2286C038
            CA92338238F7AE53DD28C1E11F0D5B4F1CF0787B498A68983C7247651AB23039
            0410B9041EF5B345140187E34FF9113C43FF0060CB9FFD14D5F2D6836D04D62E
            D2C11BB0948CB20271815F52F8D3FE444F10FF00D832E7FF0045357CBFE1CFF9
            07C9FF005D4FF215B505799E766926B0EDAEE8BFF61B3FF9F583FEFD8A3EC367
            FF003EB07FDFB15628AECE55D8F9BF6B3FE67F794E7D32D2681E310448586032
            A0041F5E2B5BE1AF8A755F0878CADB4456F3F4ED4AE6386485890A19C8512A7A
            30C8CF62060F40455AC4F12459B7825CFDD72B8C75C8CFF4AC6B534E3747A396
            62A71AAA9C9DD3FCCFA9E7F08F86AE679279FC3DA4CB34AC5E4924B28D99D89C
            92495C924F7A67FC217E15FF00A16746FF00C008BFF89A7F846796E7C17A14F3
            CAF2CD2E9D6EF249231667631A92493C924F7AD9AE33E90F08F04E85A45DF867
            C592DCE9563349059EE85E4B746319D929CA92383C0E9E828F04E85A45DF867C
            592DCE9563349059EE85E4B746319D929CA92383C0E9E82B43C03FF22A78CFFE
            BC47FE812D1E01FF009153C67FF5E23FF4096BAE497BDF23E7A8CE5FBAD7A4BF
            51DE10F0F68973F0D35EBBB8D1F4F96E62FB47973496C8CE988548C3119183CD
            697C2EF0CE81A87866E65BDD0F4DB9905E32879AD237206C438C91D393F9D2F8
            27FE494F88BFEDE7FF00442D6A7C23FF009152EBFEBF9FFF00408EA2695A5EA7
            56165273A577F659D17FC217E15FFA16746FFC008BFF0089AD88208ADA08E082
            248A18942471C6A155140C0000E0003B54945739EB8514514014F56D4A1D1F46
            BED52E15DA0B3B792E2458C02C5514B103240CE07A8AF06F19FC69F0E788BFE1
            1EFB2596AA9FD9DAD5B6A1379D14637471EEDC170E72DC8C6703DEBDF6FAF6DF
            4DD3EE6FEEE4F2EDADA269A67C13B51412C70393800F4AF1AD37E257C50F1679
            B7DE18F0658FF6671E5B5DB37CDD41C48D246AFF0032B7DD1C700FB80765E0AF
            8B1A178EF599B4BD2ED3518678ADDAE19AEA34552A1957036BB1CE5C76F5AEEE
            BCE7E1BFC47BFF00156A17DA1788349FECAD72CA2599A2D92279884F27630CA6
            0347D58EEDD91C57A35007C3945741E38D31B46F1B6ADA71B74B78E09CA41126
            3021C0F2BA752536924FCC4925B9CD73F401EABF003FE47BBEFF00B0649FFA36
            2A3E3FFF00C8F763FF0060C8FF00F46CB595F06356FECBF891671B3C2915F452
            5ABB4A718C8DCA14E47CC5D11475CE71D48AD9FDA020957C69A74E62710BE9CA
            8B2153B5996490B007A12032E476C8F5A00F26AFA1FF0067EBC81FC27A9D8AC9
            9B986FBCE74C1E11E350A73D3931BFE5EE2BE78AF59F809AE2D8F8AEF3489191
            53528034795259A48B24282380363484E7FBA39EC403E8AA28A2800A28A2800A
            F957E30FFC954D6BFED87FE888EBEA69E78ADA09279E548A1894BC9248C15514
            0C9249E0003BD7C73E2CD71BC49E2BD4F572CE52E67668BCC50ACB18E2352071
            9081477E9D4F5A00C6AF79FD9E2CE74B0D7EF9A3C5B4D2C30A3E472E81CB0C75
            E0489F9FB1AF06AFA47E0742DA67C36B8BDBD2905ACB7935CACB2380BE5AAAAB
            3139F94028FD71D33D2803E6EA28A2803D57E007FC8F77DFF60C93FF0046C55F
            4757CFFF00B3DE9DE6EBDACEA7E6E3ECF6C96FE5EDFBDE636ECE73C63CAE98E7
            77B73F4050079E7C5EB9897C3F636ACF89A4BAF311707955460C73D3ABAFE754
            BC6962D6FE07F0CF87D2158F519658956DD700170855F91F2E77B8C9CF24E7D6
            8F8BE2332E84256648CB4DBD9177103F779206464FB647D6B43C7A64FF0084C7
            C1E0AA88FED836B06E49F323C8231C0E9CE79C9E0639E986D1F99E36235A95AF
            FDD5F798FE3E87EC9A6F877C1D60229661B58854D859FEE2B75DA3731909E4F3
            C93EB95E3D963D7FE307853C2B696B6D3DB69AF1B4D6FE5ED0012AF2210DF295
            1146A700772393C0DBF17FCDF16F41171FBB8C7D9FCB68FE72DFBD6C641C63E6
            E3A9C0E79E95871888FED4B2991DD5C2E630A80866FB18E09C8C0C6E39E79006
            39C8CEA7C313AB0897B5A8FB34BE491EDD451456477857957FC280F0AFFD0435
            9FFBFD17FF001BAF55A2803CABFE1407857FE821ACFF00DFE8BFF8DD79C7FC20
            1A57FC2E9FF8437ED17BFD9DFF003D77AF9DFF001EFE6F5DB8FBDC74E9F9D7D3
            95E1DE30F07F8F3FE16A5EF89BC3361FDCFB3DCF9D07FCF058DBE576FF007872
            280373FE1407857FE821ACFF00DFE8BFF8DD76BE0FF07E9FE0AD265D374D9AE6
            58659CCECD72CACDB8AAAE3E55031851DABCBBFE2FC7F9FB0D1FF17E3FCFD868
            03DC68AF0EFF008BF1FE7EC347FC5F8FF3F61A00F55F1A7FC889E21FFB065CFF
            00E8A6AF97FC39FF0020F93FEBA9FE42BBCD6BFE174FF60EA3FDABFF0020EFB3
            49F6AFF8F3FF0055B4EFFBBCFDDCF4E7D2BCDF47D3FC4B7768F268DA66A1756E
            242ACF6D68D2A87C0C8C853CE31C7BD694A6A32BB3931B4255E9724773A3A2B3
            7FB17C77FF00401D67FF0005AFFF00C451FD8BE3BFFA00EB3FF82D7FFE22BA3E
            B113C6FEC7AFDD7E3FE4695657D89BC4DE2BD3742B6DE1E59C42D222799B0311
            B9B68EA14024F23A1E98CD5FB1F05FC41D6639E38B44BD555015C5CC696F90D9
            E9E66DCF43D3A71EA2BD87E17FC2F8BC25026ABAAA24BAE4ABC0C865B4523955
            3D0B91C161F41C64B6756B292B23B70396CA854F6951EAB6B1DFE97A7C5A4E93
            65A6C0CED0DA409046D21058AA28504E0019C0F4AB74515CE7AE78C7807FE454
            F19FFD788FFD025A3C03FF0022A78CFF00EBC47FE812D1E01FF9153C67FF005E
            23FF0040968F00FF00C8A9E33FFAF11FFA04B5D92FB5F23E6E87FCB9F497EA6A
            F827FE494F88BFEDE7FF00442D6A7C23FF009152EBFEBF9FFF00408EB2FC13FF
            0024A7C45FF6F3FF00A216B53E11FF00C8A975FF005FCFFF00A0475153697A9D
            785F8E8FF859DF514515CC7B21451450067EBBA67F6D787B52D2BCEF27EDB6B2
            DB79BB776CDE8577632338CE71915E35E1EF1B7C47F06E9F1E81AB7802FB545B
            18A386DE6B44718403805E35747C2ED1C631B4E72735EC5E24D4A6D1FC2DABEA
            96EA8D359D94D711AC80952C885803820E323D6BC1A6F147C66D23C316BE2EBD
            BC825D20F9731478ADB9898A6C2C1406DAFBC0F94EE1839DBC1201DB7C37B3F1
            86B9E31BEF1A78B6CBFB399F4F5B0B4B5F27CBF93CCDCDF2962EB864CFCE39F3
            320E0015EAD451401F3C7C7FD27ECBE28D3B55448563BDB631B6C18769236E59
            B8E7E57400E49F971D85791D7D15F1FB4C5B9F07D8EA2B6EF24D697810CAB922
            38DD4EECE3800B2C6327BE077E7E75A00B7A5EA12E93AB596A502A34D693A4F1
            AC80952C8C1803820E323D6BE83F89DA65A78F7E19DB78974B3BE4B388DE4596
            19F2881E6A1C36D0CB8C9EA418CA8EB5F38D7B77C0CF13457305F783B53292C3
            2AB4D6B1CD865752312C58638208F98281FF003D09A00F11A9209E5B69E39E09
            5E29A260F1C91B1564607208239041EF5D3FC40F05CFE0AF12496589A4D3E5F9
            ECEE6451FBD4E323238DCA4E0F4EC70030AE52803EA3F037C56D17C556B6F6D7
            D710D86B4DF23DB484AA4AD90018D8F077123099DDD472064FA057C395DAF867
            E2AF8A7C2F00B682ED2F2D1576C76F7C0C8B1F000DA410C000B80B9DA3278CD0
            07D5D457CE3FF0BFFC55FF0040FD1BFEFCCBFF00C72B95F14FC45F1278BF745A
            85EF956671FE876C0C70FF000F51925B9507E6270738C5007A1FC5AF8A5657FA
            6B787FC377AF28918ADEDD42708C8320C4A48CB02792CA7040032C18E3C468A2
            8027B2B39F51BFB7B1B58FCCB9B99561893206E76200193C0E48EB5F43FC46BC
            4F017C24B4F0FD8C90F9F7112D86E50B1964DBFBE902739DDC83E865CE738CE1
            FC13F87F7705DC7E2DD4E2F2A3F2985844D90EDB860CA79E17696001CE77678C
            293C37C51F1C7FC267E24FF457DDA4D9652CF31EC66CE37B9CF3C9518CE38038
            073401C351454F65673EA37F6F636B1F9973732AC312640DCEC40032781C91D6
            803DF3F67CD3E28FC35AB6A419FCE9EF040CA48DA16340CA4719CE656CF3D87E
            3EC1595E1AD0A0F0CF86EC346B66DD1DAC414BE08DEE7976C12719624E33C671
            5AB401E73F17ECE37D134FBD25BCC8AE4C4A01E087524E7DFE41FAD53F1ADDBD
            CF833C2FE234BADF7F0BC64489B4AF98537312318C878C71D072315E87ACE8D6
            5AF69B2585FC5BE27E411C32376653D88FFEB1C8245793D9436FA25C6A7E0CF1
            18F2ED2E5FCCB3BC910058A4C1559B839C1007F1606083C16C745369A5E47918
            CA728D493E93495FB35B5CB5E3E99EEADFC3BE31B03B1DD1549575758A4077AA
            F4E483E603C63E5C103BE478E223E1EF8D5E1CF13DB5D2C765AA3C25EE9E4431
            E0622971E8BE5321DC7FBC483C717F430D73A26A7E05D52D675D4D59E6B15620
            E2455DC1013C28382720E0876E4679CAD5634F15FC3A6F0FBDADC37897466325
            A44D8324C81BF791AEE19F9533FBB1C9F2D719C601523EEFA7E43C2565ED5B7F
            6FFF004A5A35FA9EF5457957C1DF88169AC68D6BE1ABE97CBD56CA2F2E0DF802
            E225FBBB7007CCAB80475217764FCD8F55AE73D60A28A2800A2A39E78ADA0927
            9E548A1894BC9248C155140C9249E0003BD60783FC59078C2DB53BEB3E6C60BE
            6B6B672855A4458E3258827BB3363A718C8073401D1D14514005145140187E34
            FF009113C43FF60CB9FF00D14D5C37C00FF9112FBFEC2727FE8A8ABB9F1A7FC8
            89E21FFB065CFF00E8A6AE1BE007FC8897DFF61393FF004545401EAB45145001
            45145001451450078C7807FE454F19FF00D788FF00D025A3C03FF22A78CFFEBC
            47FE812D1E01FF009153C67FF5E23FF40968F00FFC8A9E33FF00AF11FF00A04B
            5D92FB5F23E6E87FCB9F497EA6AF827FE494F88BFEDE7FF442D6A7C23FF9152E
            BFEBF9FF00F408EB2FC13FF24A7C45FF006F3FFA216B53E11FFC8A975FF5FCFF
            00FA0475153697A9D785F8E8FF00859DF514515CC7B21451450067EBBA67F6D7
            87B52D2BCEF27EDB6B2DB79BB776CDE8577632338CE71915E4B37C0CD76E74B1
            A5CFF12351974F08A82D1EDDDA20AB8DA3619B18181818E302BD5FC49A94DA3F
            85B57D52DD51A6B3B29AE2359012A5910B007041C647AD78AF847E0BD9F8CB43
            B7F12F893C4D7DA85D6A3124A1AD660C53A8DAF23862EC00552303695239C500
            7A1782BC09AEF863599AF754F1BEA3AEC0F6ED12DB5D07DAAC594EF1BA461901
            48E9FC479AEEEBC7BE19E9FA8F827E22EA7E07975B4D574F4D356F62F9981B66
            F300D9B3711193E633103391B1B2338AF61A00A3ACE9369AF68D79A55F26EB6B
            A88C6F80095CF4619040607041C704035F21F8A7C377BE14F10DD6937A8E0C4C
            4C52B2ED134793B641C918207A9C1C83C835F65579C7C5FF00047FC24DE1B3A8
            69F67E6EB163864F2D3324D17F147D46719DC0727208032C6803E63AB7A66A77
            BA36A506A3A75C3DBDDC0DBE3953A83FC88232083C10483C554A2803EA0F0F6A
            BA47C62F02CD6DAB5A225C46C23B88A371BA1931F2CB1F52A0E4E33E8CA77007
            3E15E34F87FAD782AECFDB62F374F794C76F7B1E364BC646464946C763E8D824
            0CD61693ACEA5A0DFADF6957B35A5CAE3E789B1B8641DAC3A32E40CA9C838E45
            7B2784FE38417B1FF65F8CED61F22489A37BD8E32C8E3681892200E777CD92BC
            7206D0326803C368AF79D77E0968BAE5A8D4BC17AA431C727DC89E6335BBE085
            3B6419618C3939DF93C7CB5C6EA3F03FC6765E57D9E0B2D437E777D9AE42ECC6
            3AF99B3AE7B67A1CE38A00F38A2BA3B3F87FE2FBEBB4B687C37A9AC8F9C19EDD
            A14E06797701474EE7DABABB3F811E2FBAB549A6974CB491B398279D8BAF38E4
            A2B2F3D7827AD00798D7A97C39F8477BE219EDF55D7607B6D10A896342D892EC
            13C0001CAA1C64B1C1208DBD770EE34CF02781FE18A41ABF887534B8BF8DB7C3
            2DC8C00C0E33142B92C46F5C93BB04061B6B91F1A7C71BFD5A3367E1A8E6D36D
            8E43DCC857CF914AE3000C88F049E41278520AF22803A0F8B9F10E2D12CE6F05
            E87024729804374E230120859062245C632508E7A28381CFDDF03A9279E5B99E
            49E795E59A562F249231667627249279249EF51D0015EC7F017C2DF6BD56EBC4
            D70BFBAB3CDBDB73D6565F9CF07B236304107CCE395AF27D334CBDD6752834ED
            3ADDEE2EE76D91C49D49FE40019249E00049E2BEC3F0D68507867C3761A35B36
            E8ED620A5F046F73CBB60938CB12719E338A00D5A28A2800AE3BC7DE0E6F12D9
            47736655751B652101000997AEC27B1F4ED927D723B1A29C64E2EE8CEAD28D58
            384F667CD3AAA5FC4F6D0EA3672DB4D140117CE8991E4404ED27772703E507D1
            40ED45F6B37BA85DDB5E4D2E2EE04541709F2C8E549DACCC392C0606EEB851DF
            9AFA3AF2C6CF5088457B6B05CC61B7049A30E01E99C1EFC9FCEB9EFF008573E1
            3FFA057FE4C4BFFC5574AC447AA3C5A994D5BFB93D3CCF9C7C49F6EBDD71B5EB
            7C4778EE9239B55F2D84A00FDE2EDE8C48DC48FE224FD3D47C3BF1F2D240B6FE
            26D364B5B8DE10CF68BBA3196392C8C7728518E8589E781C0AEAE5F84DE1F925
            7759F508D59890892AE147A0CA9381EE49AAB71F05FC31743F7D36A0E718C992
            3CE3EBB33594FD9BD6277E1DE2E0B96AABF9DF52E7FC2E1F01FF00D077FF0025
            27FF00E22993FC65F02C5049226B0F33A29658A3B49433903EE8DCA064F4E481
            EE2A0B3F827E09B5DFE7595CDE6EC63CFB971B7E9B0AF5F7CF4AD1B3F853E07B
            1BB4B9874085A44CE04F2C9327231CA3B153D7B8F7AC8EE4EE8F2AB68BC59F1B
            F5598DC5CFF67787AD6566401374713EDC2A8E8657C72493F286246DDC14FB97
            873C39A6F85B46874BD2E1F2E08F9666E5E573D5DCF7638FE40600005EB3B2B4
            D3AD52D6C6D61B5B68F3B21823088B939380381C927F1A9E8185145140051451
            40187E34FF009113C43FF60CB9FF00D14D5C37C00FF9112FBFEC2727FE8A8ABD
            2B54D3E2D5B49BDD36767586EE0782468C80C15D4A923208CE0FA565783FC1FA
            7F82B49974DD366B996196733B35CB2B36E2AAB8F9540C61476A00E828A28A00
            28A28A0028A28A00F18F00FF00C8A9E33FFAF11FFA04B47807FE454F19FF00D7
            88FF00D025AF4DB0F09E89A5DA5EDAD9D97950DEA79770BE6BB6F5C118C9248E
            18F4C75A2C3C27A2697697B6B6765E5437A9E5DC2F9AEDBD7046324923863D31
            D6BA1D58BBF9D8F269E02A4792ED7BA9AFBEFE5E670FE09FF9253E22FF00B79F
            FD10B5A9F08FFE454BAFFAFE7FFD023AEA6CBC39A4E9DA4DCE976969E5D9DCEE
            F363F31CEEDCA14F24E47000E0D4DA468BA7E8368F6BA6DBF910BB991977B365
            880339624F402A255134FCCDA8E1674E54DB6BDD4D17E8A28AC8F4028A28A008
            E7821BAB792DEE2249A1950A491C8A195D48C1041E0823B57895E7C1D87C22F3
            DD69DF12EEFC37A7DC3A27EF9C465D82920348248C31FBE40C7033EE6BD4BC75
            FF0024F7C4BFF60ABAFF00D14D5E23E22FF8473C5963F0B746BAF1158DBDAC5A
            7B26A12A5CC79B6DB04276BE4E118942A37743D8E31401E87F0A3C19E16F0C47
            7B368BAFDAEBBA848A8973730C91308D773150A149281B8C82C771407B607A55
            78AF80345F0D685F1AAF20F0A6A0979A7CDA13CEC63BA59D627370A3CB0CBD82
            85E09279E49CD7B5500145145007CE3F177E1D7FC23F74FAE69365B74A9E5265
            109F92D9885017663E552DB886CE3E60B85C0DDE555F6FCF0457304904F124B0
            CAA5248E450CAEA460820F0411DABE7CF881F062EF48F3353F0CA4D7B66D2F36
            2885E6814E31B7A991739ED90319DDCB000F23A28A280367C3DE2BD73C2B3CD3
            689A83DA3CEA1250155D5C0391956046473838C8C9F535DCC1F1EFC5B1411C6F
            6BA4CCE8A15A592070CE40FBC76B8193D78007B0AF2DA2803D57FE17FF008ABF
            E81FA37FDF997FF8E54179F1DFC5F756AF0C3169969236313C103175E73C0766
            5E7A720F5AF31A2802F6ADACEA5AF5FB5F6AB7B35DDCB67E795B3B4649DAA3A2
            AE49C28C019E0551A28A002A482096E678E082279669582471C6A599D89C0000
            E4927B54FA66997BACEA5069DA75BBDC5DCEDB23893A93FC80032493C00093C5
            7D2BF0EFE15597831CEA379325F6AECA02CA13096E08F982679249C8DE7048E3
            03272007C2AF876DE0CD365BCD44A36AF7AAA2455008B741CF961BA924E0B60E
            090319DB93E8745140051451401CB78CBC65FF000897D8BFD03ED7F6AF33FE5B
            797B76EDFF0064E73BBF4AE5BFE1727FD407FF00273FFB0A3E327FCC17FEDBFF
            00ED3AF2CAEBA54A12826D1F3F8EC757A55E5084AC95BA2EC7A9FF00C2E4FF00
            A80FFE4E7FF6147FC2E4FF00A80FFE4E7FF6157F45D5EE341F83906A56A913CD
            0EEDAB28254E6E0A9CE083D0FAD58D33C4779E27F873AFDEDEC7047224571101
            0A90302107B93CFCC6A5A8FF002F5B6E6F1A95DD97B5D5C79BE14647FC2E4FFA
            80FF00E4E7FF006147FC2E4FFA80FF00E4E7FF00615E595F486B3FDBFF00B8FE
            C3FECDFE2F3BEDDE67B6DDBB3F1CE7DA9D48C216D3F132C257C562149FB4B5AD
            D13DCE0BFE1727FD407FF273FF00B0A3FE1727FD407FF273FF00B0AE4FC7B79A
            9DCF89DE2D5C5A0BBB589223F640DB082378FBDCE7E7AAFE1AF175FF00857ED5
            F6186DA4FB4ECDFE7AB1C6DCE31861FDE357ECA2E374BF13078EAF1AAE12A964
            BAF2AFC8ED3FE1727FD407FF00273FFB0A3FE1727FD407FF00273FFB0ADEF1F7
            8BAFFC2BFD9FF6186DA4FB4F99BFCF5638DBB718C30FEF1AF0EA9A74E1357B7E
            2698BC5E2284F9154BBEBA247A9FFC2E4FFA80FF00E4E7FF006147FC2E4FFA80
            FF00E4E7FF00615DF6A53EB116A7A6C7A75A41359C8EC2F6491B0625E30579E4
            FDEEC7A0E9D6BC93E29C36D0F8BC7D9D5159ED91A609FDFCB75F7DA16A60A127
            6B7E27462A78AA1073F697B3B7C297DC6EFF00C2E4FF00A80FFE4E7FF6147FC2
            E4FF00A80FFE4E7FF61599F0AF43B2D4F53BCBDBC896636413CA47195DCDBBE6
            23B91B78FAE7D2BA7F0FF8AAD7C757DA8E8B7FA6C46D0466487AF28085E7D1B9
            04118C7E19A728C137EEEC451AB89A908CA556CE57B2B2E9F9197FF0B93FEA03
            FF00939FFD851FF0B93FEA03FF00939FFD8579C6AB66BA7EB17D648C596DEE24
            8831EA42B119FD2BD2BC28B69E19F86F378996D639EF5F710CCA323F79E5AAE7
            A85C804FFF00AAAA54E9A57B18D0C562AACDC5CED64DBD174F90CFF85C9FF501
            FF00C9CFFEC28FF85C9FF501FF00C9CFFEC2B17C51E34D2FC4DE1E8629F4D74D
            5D369F3D4008A73F3007249523B1EF8F4CD737E19FF91AF47FFAFE87FF004314
            2A50B5DC499E36BAA8A30A974FAD91DF7FC2E4FF00A80FFE4E7FF6147FC2E4FF
            00A80FFE4E7FF615DC6AFF00F093FDAD3FB17FB23ECDB06EFB6F99BF7E4E71B7
            8C631FAD785F8A6F2F2FBC4FA84B7E20176B298A5F201D9941B3E5CF38F97BD4
            D38C27D3F137C5D6C4E1D7F11BFF00B7523BCFF85C9FF501FF00C9CFFEC28FF8
            5C9FF501FF00C9CFFEC2AE7C317B98FC09A9BD946B25DADCCA6147E8CFE526D0
            791C138EE2ACF8E04D71F0D8DC6B56D6F06A6A632110EE0AFBC0214FFBB9E327
            BF27AD2B439B96DF89A29E29D1F6BED3A5FE15F9995FF0B93FEA03FF00939FFD
            851FF0B93FEA03FF00939FFD8579A58DE49A7EA16D7B105692DE5595038C8254
            8233EDC57B4F877C5D7FABF82755D6AE21B65B9B4F3BCB58D5821D9186190589
            EA7D6AA74E31FB3F898617155EBB69D4B3FF000A660FFC2E4FFA80FF00E4E7FF
            006147FC2E4FFA80FF00E4E7FF00615C1F88FC4779E27D423BDBD8E08E448844
            042A40C024F7279F98D6455AA30B6A8E69E6388526A33BAF447A9FFC2E4FFA80
            FF00E4E7FF00615E91A65E7F68E93677DE5F97F698126D99CEDDCA0E33DFAD7C
            C95F487867FE454D1FFEBC61FF00D005635A9C62958F472CC556AF392A8EF6F4
            3568A28AE73D82BDFD95BEA7A7DCD85DC7E65B5CC4D0CC9B88DC8C086191C8C8
            27A57CE57DAC7C09B4BC92087C35AADEC6B8C4F6F24C11F8CF01E656E3A72074
            F4E6BDFBC576571A9783B5BB0B38FCCBAB9D3E78614DC06E768D828C9E072475
            AF21F861F143E1F681E1786C6E2DFF00B16FE38912EA5FB334BF6B71BBE7DE80
            B1EA4E180DBBF0B902803A7F8530FC39BE96EB56F05E9F3DA5EC71086EA39DE5
            2F1A3B1201DCCC87263CE549E9CE3A57A757897C2FBDD23C47F16359D77C31A1
            FF0065E8D1694B6D22E11374CCEA43796A70B911B0C2E47C99382D5EDB400514
            5140051451401C378B7E14F86FC55E6DC7D9FF00B3F517CB7DAAD405DCC771CB
            A747CB3649E18E00DC2BC73C53F063C49A06E9F4F4FED8B318F9AD908997EE8E
            62E4F527EE96E012715F4E51401F0E515F6AEA3A2E95AC795FDA7A6595EF959F
            2FED302C9B338CE37038CE07E42B989FE127816E279267D0503C8C5D847712A2
            824E78557000F60001401F28D15F557FC29EF01FFD00BFF26E7FFE2EADE9FF00
            0BFC15A64ED341E1EB67765D845CB3CEB8C83F7642C01E3AE33F9D007CB1A4E8
            DA96BD7EB63A5594D7772D8F9225CED1903731E8AB9232C70067935EB9E1CF80
            13CD1C371E22D53ECFBB97B4B350CE015E0190F01831E40561C7079C8F72B3B2
            B4D3AD52D6C6D61B5B68F3B21823088B939380381C927F1A9E8030FC2FE10D17
            C1F60D6BA3DAF97E66D334CEC5A49980C02C4FE2703001270064D6E514500145
            1450014514500796FC64FF00982FFDB7FF00DA75E595F4DDE69961A8ECFB758D
            B5D7979D9E7C4AFB73D7191C741F9554FF00846740FF00A01E9BFF008091FF00
            857453ACA31B58F1F15964EBD67514AD7FF23CB7FE123D27FE1527F61FDAFF00
            E265FF003C7CB7FF009EFBFEF631F779EB4785FC47A4E9DF0FB5AD2EEEEFCBBC
            B9F3FCA8FCB73BB744AA390303904726BD4BFE119D03FE807A6FFE0247FE147F
            C233A07FD00F4DFF00C048FF00C297B48DAD6F32D60ABA929732D172ECF63E6F
            AF5DF12EB1E04F157D97EDDADDCC7F66DFB3C885C6776339CC67FBA2BB3FF846
            740FFA01E9BFF8091FF851FF0008CE81FF00403D37FF000123FF000A72AD1934
            FB11472FAB4A328DD34EDBA7D3E6783788EDF43B6D4234D02F27BBB43102EF30
            2087C9C8FBABC636F6EF5915F487FC233A07FD00F4DFFC048FFC28FF00846740
            FF00A01E9BFF008091FF008552C424B6319E513949BE64BEF3CB7E25F88F49F1
            07F65FF65DDF9FE479BE67EEDD36EED98FBC07A1AE06BE90FF00846740FF00A0
            1E9BFF008091FF00851FF08CE81FF403D37FF0123FF0A51AD18AB245D7CB2AD6
            A8EA4A4AEFD4F37F1F78DA1BFF00ECFF00F847758B95D9E679FE41921EBB76E7
            2067A3579D4B3493CAD2CD23C9239CB3BB1249F726BE8DFF00846740FF00A01E
            9BFF008091FF00851FF08CE81FF403D37FF0123FF0A215A315648AAF9756AF37
            394D7E363C6FC07E2C8FC2FA9CA2E6366B3BA0AB294E5908CE1B1DC72723DFDB
            07ACB2F12781BC306FAFF4779A7B9B8E902C6E028FEEAEE0005CF3DFF90AEE3F
            E119D03FE807A6FF00E0247FE147FC233A07FD00F4DFFC048FFC2A65520DDEC6
            B47075E94545493B6D75B5FB1F3ADE5D497D7B7177363CD9E4695F1D3731C9FE
            75DDF85BC57A31F0A4FE1AF101922B66DC239923DC0293BBB64EE0C490718FEB
            E9FF00F08CE81FF403D37FF0123FF0A3FE119D03FE807A6FFE0247FE1552AD19
            2B58C68E5B5A94DCD493BEF7EA79878BBC45E1B6F0B5B685A146B702320099E2
            2A6200E4E0B0077139CE3D4FAD71BA15CC567E20D36EAE1F6430DD45248D8270
            A1C127039E82BE81FF00846740FF00A01E9BFF008091FF00851FF08CE81FF403
            D37FF0123FF0A1568A56B0EAE5D5AA5453725A5B65A68709E23BDF00789F508E
            F6F75CBB8E44884404313818049EF19E7E635E73AD45A641ABCF1E8F712DC580
            DBE54B28C337CA339E077C8E95F40FFC233A07FD00F4DFFC048FFC28FF008467
            40FF00A01E9BFF008091FF008528D651EE557CBEA56D5F2A7DD27FE6797F84BC
            51A6E8FE04D5EC65BE6B7D465699ADD511F39312852180C03B87AF15C55E6A9A
            86A2145EDF5D5C84FBBE7CCCF8FA64D7D0BFF08CE81FF403D37FF0123FF0A3FE
            119D03FE807A6FFE0247FE14D568A6DD899E5D5A708C1CD5969D4F9BEBBEF0BF
            88F49D3BE1F6B5A5DDDDF977973E7F951F96E776E8954720607208E4D7A97FC2
            33A07FD00F4DFF00C048FF00C28FF846740FFA01E9BFF8091FF8512AD192B344
            D1CB2AD1973464BB753E6FA2BE90FF00846740FF00A01E9BFF008091FF00851F
            F08CE81FF403D37FF0123FF0AAFACAEC65FD8D3FE647CDF5F487867FE454D1FF
            00EBC61FFD0051FF0008CE81FF00403D37FF000123FF000AD28A28E089228916
            38D142A220C05038000EC2B2AB554D1DD81C0CB0D26DBBDC7D1451589E915753
            BDFECDD26F2FBCBF33ECD03CDB338DDB549C67B74AF1EBEF1D787353BC7BBBFF
            0000E9577732637CD3F9723B6060658C593C003F0AF689628E789E2963592375
            2AE8E32181E0823B8ACDFF00846340FF00A01E99FF008091FF008534D75339C6
            6FE1763CE2CBE2BD9E9B691DA58785A0B5B68F3B2182E0222E4E4E144781C927
            F1AB1FF0B9BFEA01FF00939FFD8577FF00F08C681FF403D33FF0123FF0A3FE11
            8D03FE807A67FE0247FE15578F62392AFF0031C07FC2E6FF00A807FE4E7FF614
            7FC2E6FF00A807FE4E7FF615DFFF00C231A07FD00F4CFF00C048FF00C28FF846
            340FFA01E99FF8091FF85178F60E4ABFCC701FF0B9BFEA01FF00939FFD851FF0
            B9BFEA01FF00939FFD8577FF00F08C681FF403D33FF0123FF0A3FE118D03FE80
            7A67FE0247FE145E3D8392AFF31C07FC2E6FFA807FE4E7FF006147FC2E6FFA80
            7FE4E7FF00615DFF00FC231A07FD00F4CFFC048FFC28FF00846340FF00A01E99
            FF008091FF0085178F60E4ABFCC701FF000B9BFEA01FF939FF00D851FF000B9B
            FEA01FF939FF00D8577FFF0008C681FF00403D33FF000123FF000A3FE118D03F
            E807A67FE0247FE145E3D8392AFF0031C07FC2E6FF00A807FE4E7FF6147FC2E6
            FF00A807FE4E7FF615DFFF00C231A07FD00F4CFF00C048FF00C28FF846340FFA
            01E99FF8091FF85178F60E4ABFCC701FF0B9BFEA01FF00939FFD851FF0B9BFEA
            01FF00939FFD8577FF00F08C681FF403D33FF0123FF0A3FE118D03FE807A67FE
            0247FE145E3D8392AFF31C07FC2E6FFA807FE4E7FF006147FC2E6FFA807FE4E7
            FF00615DFF00FC231A07FD00F4CFFC048FFC28FF00846340FF00A01E99FF0080
            91FF0085178F60E4ABFCC701FF000B9BFEA01FF939FF00D851FF000B9BFEA01F
            F939FF00D8577FFF0008C681FF00403D33FF000123FF000A3FE118D03FE807A6
            7FE0247FE145E3D8392AFF0031C07FC2E6FF00A807FE4E7FF6147FC2E6FF00A8
            07FE4E7FF615DFFF00C231A07FD00F4CFF00C048FF00C28FF846340FFA01E99F
            F8091FF85178F60E4ABFCC701FF0B9BFEA01FF00939FFD851FF0B9BFEA01FF00
            939FFD8577FF00F08C681FF403D33FF0123FF0A3FE118D03FE807A67FE0247FE
            145E3D8392AFF31C07FC2E6FFA807FE4E7FF006147FC2E6FFA807FE4E7FF0061
            5DFF00FC231A07FD00F4CFFC048FFC28FF00846340FF00A01E99FF008091FF00
            85178F60E4ABFCC701FF000B9BFEA01FF939FF00D851FF000B9BFEA01FF939FF
            00D8577FFF0008C681FF00403D33FF000123FF000A3FE118D03FE807A67FE024
            7FE145E3D8392AFF0031C07FC2E6FF00A807FE4E7FF6147FC2E6FF00A807FE4E
            7FF615DFFF00C231A07FD00F4CFF00C048FF00C28FF846340FFA01E99FF8091F
            F85178F60E4ABFCC701FF0B9BFEA01FF00939FFD851FF0B9BFEA01FF00939FFD
            8577FF00F08C681FF403D33FF0123FF0A3FE118D03FE807A67FE0247FE145E3D
            8392AFF31C07FC2E6FFA807FE4E7FF006147FC2E6FFA807FE4E7FF00615DFF00
            FC231A07FD00F4CFFC048FFC28FF00846340FF00A01E99FF008091FF0085178F
            60E4ABFCC701FF000B9BFEA01FF939FF00D851FF000B9BFEA01FF939FF00D857
            7FFF0008C681FF00403D33FF000123FF000A3FE118D03FE807A67FE0247FE145
            E3D8392AFF0031C07FC2E6FF00A807FE4E7FF6147FC2E6FF00A807FE4E7FF615
            DFFF00C231A07FD00F4CFF00C048FF00C28FF846340FFA01E99FF8091FF85178
            F60E4ABFCC701FF0B9BFEA01FF00939FFD851FF0B9BFEA01FF00939FFD8577FF
            00F08C681FF403D33FF0123FF0A3FE118D03FE807A67FE0247FE145E3D8392AF
            F31C07FC2E6FFA807FE4E7FF006147FC2E6FFA807FE4E7FF00615DFF00FC231A
            07FD00F4CFFC048FFC28FF00846340FF00A01E99FF008091FF0085178F60E4AB
            FCC701FF000B9BFEA01FF939FF00D851FF000B9BFEA01FF939FF00D8577FFF00
            08C681FF00403D33FF000123FF000A3FE118D03FE807A67FE0247FE145E3D839
            2AFF0031C07FC2E6FF00A807FE4E7FF6147FC2E6FF00A807FE4E7FF615DFFF00
            C231A07FD00F4CFF00C048FF00C28FF846340FFA01E99FF8091FF85178F60E4A
            BFCC701FF0B9BFEA01FF00939FFD851FF0B9BFEA01FF00939FFD8577FF00F08C
            681FF403D33FF0123FF0A3FE118D03FE807A67FE0247FE145E3D8392AFF31C07
            FC2E6FFA807FE4E7FF00615E95A65EFF0069693677DE5F97F698126D99CEDDCA
            0E33DFAD54FF00846340FF00A01E99FF008091FF0085694514704491451AC71A
            285444180A070001D854B6BA1708CD7C4EE3E8A28A4681451450014514500145
            1450014514500145145001451450014514500145145001451450014514500145
            1450014514500145145001451450014514500145145001451450014514500145
            14500145145001451450014514500145145001451450014514500145145007FF
            D9}
          HightQuality = False
          Transparent = False
          TransparentColor = clWhite
        end
        object Memo56: TfrxMemoView
          Left = 275.90569
          Top = 98.26778
          Width = 49.13389
          Height = 11.33859
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -8
          Font.Name = 'Arial'
          Font.Style = []
          Memo.UTF8 = (
            '('#1056#1029#1056#1109#1056#1112#1056#181#1057#1026' '#1056#1118#1056#1032')')
          ParentFont = False
        end
        object Memo57: TfrxMemoView
          Left = 188.9765
          Top = 79.37013
          Width = 147.40167
          Height = 18.89765
          ShowHint = False
          DataSetName = 'frxDBDataset2'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -9
          Font.Name = 'Arial'
          Font.Style = []
          Memo.UTF8 = (
            '[Spc."TU"]')
          ParentFont = False
          VAlign = vaCenter
        end
        object Picture8: TfrxPictureView
          Left = 453.5436
          Top = 68.03154
          Width = 56.69295
          Height = 79.37013
          ShowHint = False
          Picture.Data = {
            0A544A504547496D616765EF060000FFD8FFE000104A46494600010101006000
            600000FFDB004300080606070605080707070909080A0C140D0C0B0B0C191213
            0F141D1A1F1E1D1A1C1C20242E2720222C231C1C2837292C30313434341F2739
            3D38323C2E333432FFDB0043010909090C0B0C180D0D1832211C213232323232
            3232323232323232323232323232323232323232323232323232323232323232
            32323232323232323232323232FFC00011080064005003012200021101031101
            FFC4001F0000010501010101010100000000000000000102030405060708090A
            0BFFC400B5100002010303020403050504040000017D01020300041105122131
            410613516107227114328191A1082342B1C11552D1F02433627282090A161718
            191A25262728292A3435363738393A434445464748494A535455565758595A63
            6465666768696A737475767778797A838485868788898A92939495969798999A
            A2A3A4A5A6A7A8A9AAB2B3B4B5B6B7B8B9BAC2C3C4C5C6C7C8C9CAD2D3D4D5D6
            D7D8D9DAE1E2E3E4E5E6E7E8E9EAF1F2F3F4F5F6F7F8F9FAFFC4001F01000301
            01010101010101010000000000000102030405060708090A0BFFC400B5110002
            0102040403040705040400010277000102031104052131061241510761711322
            328108144291A1B1C109233352F0156272D10A162434E125F11718191A262728
            292A35363738393A434445464748494A535455565758595A636465666768696A
            737475767778797A82838485868788898A92939495969798999AA2A3A4A5A6A7
            A8A9AAB2B3B4B5B6B7B8B9BAC2C3C4C5C6C7C8C9CAD2D3D4D5D6D7D8D9DAE2E3
            E4E5E6E7E8E9EAF2F3F4F5F6F7F8F9FAFFDA000C03010002110311003F00F7FA
            28AC7D5B5E3A66A3696106957DA8DD5D452CCA968611B523318624CB220EB2AF
            4CF7A00B1AEEA7FD89E1ED4F56F27CEFB0DA4B73E56EDBBF6216DB9C1C6718CE
            0D799F867C6FAAF8F3E1ACFA86A1E5D9CFFDBB67624E9CF2404C4D3DB061B839
            60489181208E0D741E34D77519BC0BE2189FC27ACC08FA65CAB4B24B66550189
            BE63B672703AF009F406BCEFE0E7EFFE1AC1A72F135E78AE1F2D8FDD1E4AC372
            D9FAA40E07FB457A0C9001EC1FF086E97FF3F5AE7FE0F6F7FF008F579BF843E2
            86B177E38F0CF83A482092D64D2ADDEE6EE667927964366272DBB38192403904
            9C139E78F68AF963C24F791FC6EF0EB584104F7434AB4D91CF31891BFE25899C
            B056238CFF0009F4E3AD007D4F4573FF006CF187FD00B43FFC1CCDFF00C8B573
            C3FAACDACE93F6BB8B68EDA75B8B8B79228E532A868A678890C554904A67A0EB
            401A9451450015CFDE7FC943D1BFEC157FFF00A36D2BA0AE7EF3FE4A1E8DFF00
            60ABFF00FD1B6940173C4BA6CDACF85757D2EDDA359EF6CA6B78DA424286742A
            09C027193E86BC7FE12693A968DA06816FAA69F77633B78A27758EEA16898AFF
            00674A3203007190467D8D7BA553D4B49D3759B75B7D534FB4BE815C3AC7750A
            CAA1B0464060467048CFB9A00B95F3C7833C2FAC5BFC5BF076B9F619E5D32E74
            4B697ED5144ED1C58B0F2B6BBE36AB6E4E99E8CBEB8AF67FF8413C1FFF0042A6
            87FF0082E87FF89ADC82086D6DE2B7B78A38608902471C6A155140C0000E0003
            8C500495CFF837FE40773FF615D4BFF4B66AE82B9FF06FFC80EE7FEC2BA97FE9
            6CD401D051451400573F79FF00250F46FF00B055FF00FE8DB4AE82B9FBCFF928
            7A37FD82AFFF00F46DA50074145145001451450015CFF837FE40773FF615D4BF
            F4B66AE82B9FF06FFC80EE7FEC2BA97FE96CD401D051451400573F79FF00250F
            46FF00B055FF00FE8DB4AE82B93B5B7D43C4534BAD41AAC9612DB5C5D59DB429
            6D0C8816298C6DE6164F3183B4419823C7C6D0395DE403ACA2B3F42D4FFB6FC3
            DA66ADE4F93F6EB48AE7CADDBB66F40DB73819C6719C0AD0A0028A28A002B9FF
            0006FF00C80EE7FEC2BA97FE96CD563C457D7169676B0DAC9E44D7B7715A8BA6
            5056DC31F99893901880553208323C60820D53D2D67D0F5E87437BB92FA0BCB7
            B8BE59668A28DE374923DE0F9488AC1CCFBB3B41043125B70DA01D2514514005
            737A969BE17BBF102DA5EDD469A95DA076B05D45E2FB5A80465EDD5C2CA36A15
            2595B2A9B4E42E07495E07AB5D787349FDA6749BF8753B48E036F336A1712DF6
            F58EE364E855D998842004509C01C0005007BE51451400514514019FAD9D2D74
            79CEB53C10580DA649A79BCA58CEE1B583E46C60DB4AB02086C1041C553F0D47
            A035BCF75A0DF47A823B88E5BA17ED7AD95190864676381B890B9C0DE4E3E639
            CFF887E24D17C27E1A5D6359B08EF8C17086C6068C31373862854904210031DF
            D400719380787FD9E744B6D37C35A85F7F685A4F7F7EF13CB6F6F74929B78806
            F2F785E51C9690E09E800E0861401EC945145001451450014514500145145001
            45145001451450014514500145145001451450014514500145145007FFD9}
          HightQuality = False
          Transparent = False
          TransparentColor = clWhite
        end
        object Memo58: TfrxMemoView
          Left = 109.60637
          Top = 109.60637
          Width = 124.72449
          Height = 18.89765
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = []
          Memo.UTF8 = (
            #1056#152#1056#1029#1056#1169#1056#1105#1056#1030#1056#1105#1056#1169#1057#1107#1056#176#1056#187#1057#1034#1056#1029#1057#8249#1056#8470' '#1074#8222#8211)
          ParentFont = False
        end
        object Line4: TfrxLineView
          Left = 215.43321
          Top = 98.26778
          Width = 238.11039
          ShowHint = False
          Frame.Typ = [ftTop]
        end
        object Memo59: TfrxMemoView
          Left = 109.60637
          Top = 128.50402
          Width = 124.72449
          Height = 18.89765
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = []
          Memo.UTF8 = (
            #1056#8221#1056#176#1057#8218#1056#176' '#1056#1105#1056#183#1056#1110#1056#1109#1057#8218#1056#1109#1056#1030#1056#187#1056#181#1056#1029#1056#1105#1057#1039' ')
          ParentFont = False
        end
        object Memo76: TfrxMemoView
          Left = 245.66945
          Top = 109.60637
          Width = 86.92919
          Height = 15.11812
          ShowHint = False
          DataSetName = 'frxDBDataset1'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          Memo.UTF8 = (
            '[Lianoz."N"]')
          ParentFont = False
        end
        object Memo77: TfrxMemoView
          Left = 7.55906
          Top = 147.40167
          Width = 336.37817
          Height = 15.11812
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -8
          Font.Name = 'Arial'
          Font.Style = []
          Memo.UTF8 = (
            
              #1056#1038#1057#8230#1056#181#1056#1112#1056#176' '#1057#1027#1056#1109#1056#181#1056#1169#1056#1105#1056#1029#1056#181#1056#1029#1056#1105#1057#1039' '#1057#1036#1056#187#1056#181#1056#1108#1057#8218#1057#1026#1056#1109#1056#1169#1056#1109#1056#1030' '#1057#1027' '#1056#1030#1057#8249#1056#1030#1056#1109 +
              #1056#1169#1056#176#1056#1112#1056#1105': ___________________________________')
          ParentFont = False
        end
        object Memo78: TfrxMemoView
          Left = 170.07885
          Top = 158.74026
          Width = 173.85838
          Height = 15.11812
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = []
          Memo.UTF8 = (
            '1.'#1056#1115#1057#1027#1056#1029#1056#1109#1056#1030#1056#1029#1057#8249#1056#181' '#1057#8218#1056#181#1057#8230#1056#1029#1056#1105#1057#8225#1056#181#1057#1027#1056#1108#1056#1105#1056#181' '#1056#1169#1056#176#1056#1029#1056#1029#1057#8249#1056#181)
          ParentFont = False
        end
        object Memo79: TfrxMemoView
          Left = 241.88992
          Top = 128.50402
          Width = 90.70872
          Height = 18.89765
          ShowHint = False
          DataSetName = 'frxDBDataset1'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = []
          Memo.UTF8 = (
            '[Lianoz."Date"]')
          ParentFont = False
        end
        object frxDBDataset1Date1: TfrxMemoView
          Left = 188.9765
          Top = 506.45702
          Width = 98.26778
          Height = 18.89765
          ShowHint = False
          DataSetName = 'frxDBDataset1'
          Memo.UTF8 = (
            '[Lianoz."Date1"]')
        end
        object Memo2: TfrxMemoView
          Left = 264.5671
          Top = 298.58287
          Width = 34.01577
          Height = 15.11812
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftTop, ftBottom]
          Memo.UTF8 = (
            #1056#1038)
          ParentFont = False
        end
        object Memo1: TfrxMemoView
          Left = 7.55906
          Top = 238.11039
          Width = 109.60637
          Height = 15.11812
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          Frame.Typ = [ftLeft, ftBottom]
          HAlign = haCenter
          Memo.UTF8 = (
            ''
            '          ')
          ParentFont = False
        end
        object Memo32: TfrxMemoView
          Left = 128.50402
          Top = 238.11039
          Width = 264.5671
          Height = 15.11812
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftBottom]
          Memo.UTF8 = (
            '                      '#1056#1030' '#1056#1110#1056#181#1056#1029#1056#181#1057#1026#1056#176#1057#8218#1056#1109#1057#1026#1056#181' '#1057#8218#1056#1105#1056#1111#1056#176
            '          ')
          ParentFont = False
        end
        object Memo34: TfrxMemoView
          Left = 7.55906
          Top = 559.37044
          Width = 215.43321
          Height = 11.33859
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -8
          Font.Name = 'Arial'
          Font.Style = []
          Memo.UTF8 = (
            
              '2.1. '#1056#1114#1056#1109#1057#8240#1056#1029#1056#1109#1057#1027#1057#8218#1057#1034', '#1057#1026#1056#176#1057#1027#1057#1027#1056#181#1056#1105#1056#1030#1056#176#1056#181#1056#1112#1056#176#1057#1039' '#1056#1029#1056#176' '#1057#1026#1056#181#1056#183#1056#1109#1056#1029#1056 +
              #176#1057#8218#1056#1109#1057#1026#1056#181', '#1056#1029#1056#181' '#1056#177#1056#1109#1056#187#1056#181#1056#181'   '
            
              '                                                                ' +
              '                                                                ' +
              '    ')
          ParentFont = False
        end
        object Memo80: TfrxMemoView
          Left = 222.99227
          Top = 559.37044
          Width = 22.67718
          Height = 11.33859
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -8
          Font.Name = 'Arial'
          Font.Style = []
          ParentFont = False
        end
        object Memo81: TfrxMemoView
          Left = 245.66945
          Top = 559.37044
          Width = 22.67718
          Height = 11.33859
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -8
          Font.Name = 'Arial'
          Font.Style = []
          Memo.UTF8 = (
            #1056#1112#1056#8217#1057#8218
            
              '                                                                ' +
              '                                                                ' +
              '    ')
          ParentFont = False
        end
        object Memo82: TfrxMemoView
          Left = 154.96073
          Top = 45.35436
          Width = 41.57483
          Height = 15.11812
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = []
          HAlign = haCenter
          ParentFont = False
          VAlign = vaCenter
        end
        object Memo55: TfrxMemoView
          Left = 340.1577
          Top = 79.37013
          Width = 113.3859
          Height = 18.89765
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -9
          Font.Name = 'Arial'
          Font.Style = []
          ParentFont = False
          VAlign = vaCenter
        end
        object Memo84: TfrxMemoView
          Left = 170.07885
          Top = 188.9765
          Width = 222.99227
          Height = 15.11812
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftRight, ftTop, ftBottom]
          ParentFont = False
        end
        object Memo85: TfrxMemoView
          Left = 298.58287
          Top = 457.32313
          Width = 68.03154
          Height = 15.11812
          ShowHint = False
          DataSetName = 'frxDBDataset2'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -8
          Font.Name = 'Arial'
          Font.Style = []
          ParentFont = False
        end
        object Memo11: TfrxMemoView
          Left = 260.78757
          Top = 298.58287
          Width = 30.23624
          Height = 15.11812
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -7
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftTop, ftBottom]
          Memo.UTF8 = (
            #1056#1109)
          ParentFont = False
        end
        object Memo86: TfrxMemoView
          Left = 287.24428
          Top = 283.46475
          Width = 41.57483
          Height = 15.11812
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -7
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftTop, ftBottom]
          Memo.UTF8 = (
            #1056#1109)
          ParentFont = False
        end
        object Memo87: TfrxMemoView
          Left = 291.02381
          Top = 283.46475
          Width = 102.04731
          Height = 15.11812
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftRight, ftTop, ftBottom]
          Memo.UTF8 = (
            #1056#1038', '#1056#1115#1056#1112'   ')
          ParentFont = False
        end
        object Memo88: TfrxMemoView
          Left = 321.26005
          Top = 219.21274
          Width = 22.67718
          Height = 18.89765
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -7
          Font.Name = 'Arial'
          Font.Style = []
          Memo.UTF8 = (
            #1056#1109)
          ParentFont = False
        end
        object Memo89: TfrxMemoView
          Left = 328.81911
          Top = 219.21274
          Width = 52.91342
          Height = 18.89765
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = []
          Memo.UTF8 = (
            #1056#1038)
          ParentFont = False
        end
        object Memo90: TfrxMemoView
          Left = 181.41744
          Top = 268.34663
          Width = 15.11812
          Height = 15.11812
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -7
          Font.Name = 'Arial'
          Font.Style = []
          Memo.UTF8 = (
            #1056#1109)
          ParentFont = False
        end
        object Memo91: TfrxMemoView
          Left = 188.9765
          Top = 268.34663
          Width = 30.23624
          Height = 15.11812
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = []
          Memo.UTF8 = (
            #1056#1038)
          ParentFont = False
        end
        object Memo93: TfrxMemoView
          Left = 328.81911
          Top = 253.22851
          Width = 26.45671
          Height = 18.89765
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -8
          Font.Name = 'Arial'
          Font.Style = []
          Memo.UTF8 = (
            '-6')
          ParentFont = False
        end
        object Memo94: TfrxMemoView
          Left = 136.06308
          Top = 578.26809
          Width = 64.25201
          Height = 15.11812
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -7
          Font.Name = 'Arial'
          Font.Style = []
          Memo.UTF8 = (
            'o')
          ParentFont = False
        end
        object Memo95: TfrxMemoView
          Left = 56.69295
          Top = 442.20501
          Width = 83.14966
          Height = 15.11812
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -9
          Font.Name = 'Arial'
          Font.Style = []
          HAlign = haCenter
          ParentFont = False
          VAlign = vaCenter
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
      Columns = 7
      ColumnWidth = 27.1
      ColumnPositions.Strings = (
        '0'
        '27.10'
        '54.30'
        '81.40'
        '108.60'
        '135.70'
        '162.90')
      BackPictureVisible = False
      BackPicturePrintable = False
      Duplex = dmSimplex
      object PageHeader1: TfrxPageHeader
        Height = 162.51979
        Top = 18.89765
        Width = 718.1107
        OnBeforePrint = 'PageHeader1OnBeforePrint'
        object Memo3: TfrxMemoView
          Left = 294.80334
          Top = 7.55906
          Width = 109.60637
          Height = 18.89765
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -16
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          Memo.UTF8 = (
            #1056#1119#1057#1026#1056#1105#1056#187#1056#1109#1056#182#1056#181#1056#1029#1056#1105#1056#181)
          ParentFont = False
        end
        object Memo4: TfrxMemoView
          Left = 464.88219
          Top = 7.55906
          Width = 204.09462
          Height = 15.11812
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          Memo.UTF8 = (
            #1056#1114#1056#1038#1056#1113' '#1074#8222#8211'  [Lianoz."Msk"]')
          ParentFont = False
        end
        object Memo5: TfrxMemoView
          Left = 3.77953
          Top = 52.91342
          Width = 695.43352
          Height = 18.89765
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = []
          Memo.UTF8 = (
            
              #1056#1108' '#1056#1105#1056#183#1056#1030#1056#181#1057#8240#1056#181#1056#1029#1056#1105#1057#1035' '#1074#8222#8211' ______________________________________' +
              '________ '#1056#1109#1057#8218' _______________________________')
          ParentFont = False
        end
        object Memo6: TfrxMemoView
          Left = 3.77953
          Top = 79.37013
          Width = 215.43321
          Height = 18.89765
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = []
          Memo.UTF8 = (
            #1056#1119#1057#1026#1056#181#1056#1169#1057#1033#1057#1039#1056#1030#1056#187#1057#1039#1056#181#1057#8218#1057#1027#1057#1039' '#1056#1169#1056#187#1057#1039' '#1056#1111#1057#1026#1056#1109#1056#1030#1056#181#1057#1026#1056#1108#1056#1105' '#1056#8217#1056#1119'  ')
          ParentFont = False
        end
        object Memo7: TfrxMemoView
          Left = 268.34663
          Top = 79.37013
          Width = 442.20501
          Height = 18.89765
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -12
          Font.Name = 'Arial'
          Font.Style = [fsUnderline]
          Memo.UTF8 = (
            '[Spc."Text"]________________________________')
          ParentFont = False
        end
        object Memo8: TfrxMemoView
          Left = 438.42548
          Top = 94.48825
          Width = 192.75603
          Height = 18.89765
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = [fsUnderline]
          Memo.UTF8 = (
            #1056#1118#1056#1032'    [Spc."TU"]')
          ParentFont = False
        end
        object Memo9: TfrxMemoView
          Left = 3.77953
          Top = 124.72449
          Width = 351.49629
          Height = 18.89765
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = []
          Memo.UTF8 = (
            
              #1056#8217' '#1056#1108#1056#1109#1056#187#1056#1105#1057#8225#1056#181#1057#1027#1057#8218#1056#1030#1056#181'___________________________'#1057#8364#1057#8218#1057#1107#1056#1108' '#1074#8222#8211#1074#8222 +
              #8211)
          ParentFont = False
        end
        object Memo13: TfrxMemoView
          Left = 211.65368
          Top = 49.13389
          Width = 94.48825
          Height = 18.89765
          ShowHint = False
          Memo.UTF8 = (
            '[Edit1.Text]')
        end
        object Memo14: TfrxMemoView
          Left = 487.55937
          Top = 49.13389
          Width = 75.5906
          Height = 18.89765
          ShowHint = False
          Memo.UTF8 = (
            '[Edit2.Text]')
        end
        object Memo30: TfrxMemoView
          Left = 585.82715
          Top = 49.13389
          Width = 94.48825
          Height = 18.89765
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = []
          Memo.UTF8 = (
            '[YearOf(Now())] '#1056#1110'.')
          ParentFont = False
        end
        object BarCode1: TfrxBarCodeView
          Left = 3.77953
          Top = 7.55906
          Width = 129
          Height = 37.7953
          ShowHint = False
          BarType = bcCode39Extended
          Expression = '<Lianoz."Measure_ID">'
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
        object Memo10: TfrxMemoView
          Left = 139.84261
          Top = 120.94496
          Width = 94.48825
          Height = 18.89765
          OnAfterPrint = 'Memo10OnAfterPrint'
          ShowHint = False
          Memo.UTF8 = (
            '[COUNT(MasterData2)]')
        end
        object Memo83: TfrxMemoView
          Left = 222.99227
          Top = 79.37013
          Width = 41.57483
          Height = 18.89765
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -12
          Font.Name = 'Arial'
          Font.Style = [fsUnderline]
          HAlign = haRight
          ParentFont = False
          VAlign = vaCenter
        end
      end
      object PageFooter1: TfrxPageFooter
        Height = 26.45671
        Top = 321.26005
        Width = 718.1107
        object Memo12: TfrxMemoView
          Left = 3.77953
          Top = 7.55905999999987
          Width = 347.71676
          Height = 18.89765
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = []
          Memo.UTF8 = (
            #1056#1119#1057#1026#1056#181#1056#1169#1057#1027#1057#8218#1056#176#1056#1030#1056#1105#1057#8218#1056#181#1056#187#1057#1034' '#1056#1115#1056#1118#1056#1113'_____________________________')
          ParentFont = False
        end
      end
      object MasterData2: TfrxMasterData
        Height = 18.89765
        Top = 241.88992
        Width = 102.425263
        OnBeforePrint = 'MasterData2OnBeforePrint'
        DataSet = Lianoz
        DataSetName = 'Lianoz'
        RowCount = 0
        object PsiDataN: TfrxMemoView
          Width = 94.48825
          Height = 18.89765
          ShowHint = False
          DataSet = PsiData
          DataSetName = 'PsiData'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8 = (
            '[Lianoz."N"]')
          ParentFont = False
          VAlign = vaCenter
        end
      end
    end
    object DialogPage1: TfrxDialogPage
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clBlack
      Font.Height = -11
      Font.Name = 'Tahoma'
      Font.Style = []
      Height = 279
      ClientHeight = 240
      Left = 605
      Top = 313
      Width = 238
      ClientWidth = 222
      object Edit1: TfrxEditControl
        Left = 12
        Top = 36
        Width = 197
        Height = 21
        ShowHint = True
        Color = clWindow
        MaxLength = 0
        PasswordChar = #0
      end
      object Label1: TfrxLabelControl
        Left = 16
        Top = 12
        Width = 90
        Height = 13
        ShowHint = True
        Caption = #1053#1086#1084#1077#1088' '#1080#1079#1074#1077#1097#1077#1085#1080#1103
        Color = clBtnFace
        OnClick = 'Label1OnClick'
      end
      object Button1: TfrxButtonControl
        Left = 72
        Top = 200
        Width = 75
        Height = 25
        ShowHint = True
        Caption = 'OK'
        ModalResult = 1
      end
      object Label2: TfrxLabelControl
        Left = 12
        Top = 72
        Width = 85
        Height = 13
        ShowHint = True
        Caption = #1044#1072#1090#1072' '#1080#1079#1074#1077#1097#1077#1085#1080#1103
        Color = clBtnFace
        OnClick = 'Label1OnClick'
      end
      object Edit2: TfrxEditControl
        Left = 12
        Top = 92
        Width = 197
        Height = 21
        ShowHint = True
        Color = clWindow
        MaxLength = 0
        PasswordChar = #0
      end
      object Label3: TfrxLabelControl
        Left = 12
        Top = 128
        Width = 157
        Height = 13
        ShowHint = True
        Caption = #1047#1085#1072#1095#1077#1085#1080#1077' '#1077#1084#1082#1086#1089#1090#1080' '#1085#1072#1075#1088#1091#1079#1082#1080' '#1057#1085
        Color = clBtnFace
        OnClick = 'Label1OnClick'
      end
      object Edit3: TfrxEditControl
        Left = 12
        Top = 152
        Width = 197
        Height = 21
        ShowHint = True
        Color = clWindow
        MaxLength = 0
        PasswordChar = #0
        Text = '0'
      end
    end
  end
  object Lianoz: TfrxDBDataset
    UserName = 'Lianoz'
    CloseDataSource = False
    FieldAliases.Strings = (
      'ID=ID'
      'N=N'
      'Msk=Msk'
      'Operator=Operator'
      'Spc=Spc'
      'F=F'
      'R=R'
      'C0=C0'
      'Cq=Cq'
      'RR=RR'
      'Fmaxm=Fmaxm'
      'Q=Q'
      'Intervalfg=Intervalfg'
      'FT=FT'
      'Spur=Spur'
      'Slope=Slope'
      'Rmax=Rmax'
      'Mono=Mono'
      'Shum=Shum'
      'RR1=RR1'
      'Fptp=Fptp'
      'L=L'
      'Tmin=Tmin'
      'Rc_Rb=Rc_Rb'
      'Tmax=Tmax'
      'C0_C1=C0_C1'
      'Old=Old'
      'Date=Date'
      'NN=NN'
      'Date1=Date1'
      'Fmax=Fmax'
      'IT=IT'
      'Fmin=Fmin'
      'Ftgk=Ftgk'
      'Rtgk=Rtgk'
      'Measure_Protokol_ID=Measure_Protokol_ID'
      'Measure_ID=Measure_ID'
      'PMI=PMI'
      'Ft1=Ft1'
      'Ft2=Ft2'
      'Ft3=Ft3'
      'C1_2C0=C1_2C0'
      'Shum_1=Shum_1'
      'G=G'
      'Variant=Variant'
      'Fn=Fn'
      'PH_OCS=PH_OCS'
      'PH_Analyser=PH_Analyser'
      'PH_Analyser_SN=PH_Analyser_SN'
      'TurnOver=TurnOver'
      'Customer=Customer'
      'Dogovor=Dogovor')
    DataSource = DataModule2.LianozDataSource
    BCDToCurrency = False
    Left = 192
    Top = 16
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
      'Sh4OT=Sh4OT'
      'Tint=Tint'
      'TintValue=TintValue'
      'AltAppprox=AltAppprox'
      'INVERT_Rc_RB=INVERT_Rc_RB'
      'Fmax1max=Fmax1max'
      'Fmin1max=Fmin1max'
      'Rmax1max=Rmax1max'
      'Fmax1min=Fmax1min'
      'Fmin1min=Fmin1min'
      'Rmax1min=Rmax1min'
      'Cq1max=Cq1max'
      'Cq1min=Cq1min'
      'C01max=C01max'
      'C01min=C01min'
      'IT1max=IT1max'
      'IT1min=IT1min'
      'M1max=M1max'
      'M1min=M1min'
      'F1max=F1max'
      'F1min=F1min'
      'M2max=M2max'
      'M2min=M2min'
      'Mono_Approx_Type=Mono_Approx_Type'
      'Generator_Type=Generator_Type'
      'Solve_Date=Solve_Date'
      'Dopusk_M=Dopusk_M')
    DataSet = DataModule2.SqlSpec
    BCDToCurrency = False
    Left = 232
    Top = 16
  end
  object Psi: TfrxDBDataset
    UserName = 'Psi'
    CloseDataSource = False
    FieldAliases.Strings = (
      'MSK=MSK'
      'Nominal=Nominal'
      'Name=Name'
      'Type=Type'
      'Begin=Begin'
      'End=End'
      'Date=Date'
      'Time=Time'
      'Status=Status'
      'Number=Number'
      'Position=Position'
      'Spc1=Spc1'
      'Temp=Temp'
      'Note=Note'
      'chamberN=chamberN'
      'transatN=transatN'
      'StatusX=StatusX'
      'DateEnd=DateEnd'
      'TimeEnd=TimeEnd'
      'atall=atall'
      'Good=Good'
      'Bad=Bad'
      'Operator=Operator'
      'File1=File1'
      'File2=File2'
      'Spc2=Spc2'
      'RecordId=RecordId'
      'protkol=protkol'
      'opfrom=opfrom'
      'Spc3=Spc3'
      'Print=Print'
      'FileOld1=FileOld1'
      'FileOld2=FileOld2'
      'FileOld3=FileOld3'
      'OldGood=OldGood'
      'OldBad=OldBad'
      'Number_ID=Number_ID'
      'Measure_ID=Measure_ID'
      'Nezamer=Nezamer'
      'Anomal=Anomal')
    DataSet = DataModule2.psi
    BCDToCurrency = False
    Left = 264
    Top = 16
  end
  object PsiData: TfrxDBDataset
    UserName = 'PsiData'
    CloseDataSource = False
    FieldAliases.Strings = (
      'ID=ID'
      'MSK=MSK'
      'N=N'
      'F=F'
      'R=R'
      'C0=C0'
      'Cq=Cq'
      'L=L'
      'Q=Q'
      'Tmax=Tmax'
      'Tmin=Tmin'
      'TurnOver=TurnOver'
      'Slope=Slope'
      'Fptp=Fptp'
      'Fmax=Fmax'
      'RcRb=RcRb'
      'Fmin=Fmin'
      'Rmax=Rmax'
      'Rmin=Rmin'
      'R1R2=R1R2'
      'Mono=Mono'
      'F0-Fl=F0-Fl'
      'Position=Position'
      'Date=Date'
      'A3=A3'
      'A2=A2'
      'A1=A1'
      'A0=A0'
      'A4=A4'
      'Rbmax=Rbmax'
      'Rsp1=Rsp1'
      'Rsp2=Rsp2'
      'Rsp3=Rsp3'
      'Time=Time'
      'Spc=Spc'
      'Status=Status'
      'Nominal=Nominal'
      'DateR=DateR'
      'File=File'
      'Operator=Operator'
      'Fptp_2=Fptp_2'
      'intervalgf=intervalgf'
      'Fmaxm=Fmaxm'
      'FT=FT'
      'Spur=Spur'
      'Shum=Shum'
      'Old1=Old1'
      'Old2=Old2'
      'Old3=Old3'
      'RR1=RR1'
      'ProtokolN=ProtokolN'
      'Rmax-Rmin=Rmax-Rmin'
      'C0_C1=C0_C1'
      'RR2=RR2'
      'Status2=Status2'
      'MSK-M=MSK-M'
      'Jmax=Jmax'
      'Jmin=Jmin'
      'Jptp=Jptp'
      'Jt=Jt'
      'MonoT=MonoT'
      'FF=FF'
      'Old=Old'
      'Ft1=Ft1'
      'Ft2=Ft2'
      'Ft3=Ft3'
      'Ft4=Ft4'
      'MakeDate=MakeDate'
      'MakeDate1=MakeDate1'
      'RR3=RR3'
      'PrintSelect=PrintSelect'
      'C1_2C0=C1_2C0'
      'Measure_ID=Measure_ID'
      'Rtgk=Rtgk'
      'Ftgk=Ftgk'
      'RR4=RR4'
      'RR5=RR5'
      'Cn=Cn'
      'PMI=PMI'
      'MachineType=MachineType'
      'FSpur1=FSpur1'
      'FSpur2=FSpur2'
      'RSphere1=RSphere1'
      'RSphere2=RSphere2'
      'Fn=Fn'
      'variant=variant'
      'Variant_1=Variant_1'
      'Variant_2=Variant_2'
      'Variant_3=Variant_3'
      'PH_ID=PH_ID'
      'Machine_ID=Machine_ID'
      'Rekv=Rekv'
      'Imax=Imax'
      'Imax_T=Imax_T'
      'DF_Time_1_F=DF_Time_1_F'
      'DF_Time_2_F=DF_Time_2_F'
      'DF_Time_3_F=DF_Time_3_F'
      'Uust_T1=Uust_T1'
      'Uust_T2=Uust_T2'
      'Uust_T3=Uust_T3'
      'Iust=Iust'
      'view=view'
      'Shum_1=Shum_1'
      'Lot_Date=Lot_Date'
      'Factory=Factory'
      'type=type'
      'B5=B5'
      'B4=B4'
      'B3=B3'
      'B1=B1'
      'B0=B0'
      'dfB=dfB'
      'D5=D5'
      'D4=D4'
      'D3=D3'
      'D1r=D1r'
      'D1s=D1s'
      'Dit=Dit'
      'G=G'
      'M_Type=M_Type'
      'Machine_Serial=Machine_Serial'
      'Machine_Call_Date=Machine_Call_Date'
      'PoverKa=PoverKa'
      'Version=Version'
      'Protokol_ID=Protokol_ID'
      'Protokol_Date=Protokol_Date'
      'Proverka_PSI_ID=Proverka_PSI_ID'
      'Proverka_PH_ID=Proverka_PH_ID'
      'Proverke_PH_Date=Proverke_PH_Date'
      'Proverka_PH_Status=Proverka_PH_Status'
      'Shum_2=Shum_2'
      'Shum_3=Shum_3'
      'Shum_4=Shum_4'
      'PH_Analyser=PH_Analyser'
      'PH_OCS=PH_OCS'
      'PH_Analyser_SN=PH_Analyser_SN'
      'Filtr_Freq=Filtr_Freq'
      'FSpur3=FSpur3')
    DataSource = DataModule2.psiDataSource
    BCDToCurrency = False
    Left = 296
    Top = 16
  end
  object psiDataTemp: TfrxDBDataset
    UserName = 'psiDataTemp'
    CloseDataSource = False
    FieldAliases.Strings = (
      'RecordId=RecordId'
      'Temp=Temp'
      'F=F'
      'R=R'
      'Rb=Rb'
      'N=N'
      'MSK=MSK'
      'FL=FL'
      'Mono=Mono'
      'File=File'
      'C0=C0'
      'Cq=Cq'
      'Q=Q'
      'L=L'
      'pos=pos'
      'Status=Status'
      'ProtokolN=ProtokolN'
      'MSK-M=MSK-M'
      'Status1=Status1'
      'Measure_ID=Measure_ID'
      'Fn=Fn'
      'variant_1=variant_1'
      'variant_2=variant_2'
      'variant_3=variant_3'
      'SpurR=SpurR'
      'Spur=Spur')
    DataSet = DataModule2.psiDataTemp
    BCDToCurrency = False
    Left = 328
    Top = 16
  end
  object frxPDFExport1: TfrxPDFExport
    UseFileCache = True
    ShowProgress = True
    OverwritePrompt = False
    PrintOptimized = False
    Outline = False
    Background = False
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
    Left = 152
    Top = 72
  end
  object Dopuski: TfrxDBDataset
    UserName = 'Dopuski'
    CloseDataSource = False
    FieldAliases.Strings = (
      'TUID=TUID'
      'C0=C0'
      'Cq=Cq'
      'FT=FT'
      'F=F'
      'Fm=Fm'
      'R=R'
      'Fptp=Fptp'
      'Q=Q'
      'Rsp=Rsp'
      'dR=dR'
      'S=S'
      'Tmax=Tmax'
      'Fm_Real=Fm_Real'
      'F_P=F_P')
    DataSet = DataModule2.dopuski
    BCDToCurrency = False
    Left = 328
    Top = 72
  end
  object frxDialogControls1: TfrxDialogControls
    Left = 296
    Top = 72
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
    Left = 192
    Top = 72
  end
  object frxBarCodeObject1: TfrxBarCodeObject
    Left = 232
    Top = 72
  end
  object Dopusk: TfrxDBDataset
    UserName = 'Dopusk'
    CloseDataSource = False
    FieldAliases.Strings = (
      'TUID=TUID'
      'C0=C0'
      'Cq=Cq'
      'FT=FT'
      'F=F'
      'Fm=Fm'
      'R=R'
      'Fptp=Fptp'
      'Q=Q'
      'Rsp=Rsp'
      'dR=dR'
      'S=S'
      'Tmax=Tmax'
      'Fm_Real=Fm_Real'
      'F_P=F_P')
    DataSet = DataModule1.Dostup
    BCDToCurrency = False
    Left = 360
    Top = 72
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
      'Old_ID=Old_ID'
      'Measure1_R=Measure1_R'
      'Measure2_R=Measure2_R'
      'Operator=Operator')
    DataSet = DataModule2.old
    BCDToCurrency = False
    Left = 360
    Top = 16
  end
  object ActionManager1: TActionManager
    Left = 112
    Top = 16
    object Action1: TAction
      Caption = 'Action1'
      OnExecute = Action1Execute
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
      'Shum3=Shum3')
    DataSet = DataModule2.PhazeNoise
    BCDToCurrency = False
    Left = 352
    Top = 128
  end
  object psi_stat_1: TfrxDBDataset
    UserName = 'psi_stat_1'
    CloseDataSource = False
    DataSet = DataModule2.psi_stat_1
    BCDToCurrency = False
    Left = 392
    Top = 16
  end
  object frxRTFExport1: TfrxRTFExport
    ShowDialog = False
    UseFileCache = False
    DefaultPath = 'C:\\Program Files (x86)\\MORION\\MeasureSQL\\Report\\RTF'
    ShowProgress = False
    OverwritePrompt = False
    ExportEMF = False
    Wysiwyg = False
    Creator = 'FastReport'
    SuppressPageHeadersFooters = False
    HeaderFooterMode = hfText
    AutoSize = False
    Left = 120
    Top = 72
  end
  object frxDBDataset2: TfrxDBDataset
    UserName = 'Graphics'
    CloseDataSource = False
    FieldAliases.Strings = (
      '-ID=ID'
      'N=N'
      '-Measure_ID=Measure_ID'
      '-Msk=Msk'
      'Graph_Picture=Graph_Picture'
      '-Graph_Data=Graph_Data'
      '-DNCH_Data=DNCH_Data'
      'DNCH_Picture=DNCH_Picture')
    DataSet = DataModule2.GR_TCH
    BCDToCurrency = False
    Left = 424
    Top = 16
  end
  object psiDataTemp_P: TfrxDBDataset
    UserName = 'psiDataTemp_P'
    CloseDataSource = False
    FieldAliases.Strings = (
      'RecordId=RecordId'
      'Temp=Temp'
      'F=F'
      'R=R'
      'Rb=Rb'
      'N=N'
      'MSK=MSK'
      'FL=FL'
      'Mono=Mono'
      'File=File'
      'C0=C0'
      'Cq=Cq'
      'Q=Q'
      'L=L'
      'pos=pos'
      'Status=Status'
      'ProtokolN=ProtokolN'
      'MSK-M=MSK-M'
      'Status1=Status1'
      'Measure_ID=Measure_ID'
      'Fn=Fn'
      'variant_1=variant_1'
      'variant_2=variant_2'
      'variant_3=variant_3'
      'SpurR=SpurR'
      'Spur=Spur')
    DataSet = DataModule2.psiDataTemp5
    BCDToCurrency = False
    Left = 176
    Top = 152
  end
  object ActionList1: TActionList
    Left = 136
    Top = 152
    object Create_LOT_RQ: TAction
      Caption = 'Create_LOT_RQ'
      OnExecute = Create_LOT_RQExecute
    end
    object SetNumbers: TAction
      Caption = 'SetNumbers'
      OnExecute = SetNumbersExecute
    end
    object MskSelect: TAction
      Caption = 'MskSelect'
      OnExecute = MskSelectExecute
    end
    object Print: TAction
      Caption = 'Print'
      OnExecute = PrintExecute
    end
    object ExportProtokol: TAction
      Caption = 'ExportProtokol'
      OnExecute = ExportProtokolExecute
    end
    object CreateNorm: TAction
      Caption = 'CreateNorm'
      OnExecute = CreateNormExecute
    end
    object Create_ID: TAction
      Caption = 'Create_ID'
      OnExecute = Create_IDExecute
    end
    object InsertArchive: TAction
      Caption = 'InsertArchive'
      OnExecute = InsertArchiveExecute
    end
    object InsertLianoz: TAction
      Caption = 'InsertLianoz'
      OnExecute = InsertLianozExecute
    end
    object Razbrakovka: TAction
      Caption = 'Razbrakovka'
      OnExecute = RazbrakovkaExecute
    end
    object Razbrakovka_bez_ZP: TAction
      Caption = 'Razbrakovka_bez_ZP'
      OnExecute = Razbrakovka_bez_ZPExecute
    end
    object Razbrakovka_ZP: TAction
      Caption = 'Razbrakovka_ZP'
      OnExecute = Razbrakovka_ZPExecute
    end
    object Razbrakovka_RK: TAction
      Caption = 'Razbrakovka_RK'
      OnExecute = Razbrakovka_RKExecute
    end
    object NumbersSelect: TAction
      Caption = 'NumbersSelect'
      OnExecute = NumbersSelectExecute
    end
    object CreateStatTable: TAction
      Caption = 'CreateStatTable'
      OnExecute = CreateStatTableExecute
    end
    object WriteStat: TAction
      Caption = 'WriteStat'
      OnExecute = WriteStatExecute
    end
    object AddCount: TAction
      Caption = 'AddCount'
      OnExecute = AddCountExecute
    end
    object PrintAll: TAction
      Caption = 'PrintAll'
      OnExecute = PrintAllExecute
    end
    object LoadProtokolTypes: TAction
      Caption = 'LoadProtokolTypes'
      OnExecute = LoadProtokolTypesExecute
    end
    object ID_Change: TAction
      Caption = 'ID_Change'
      OnExecute = ID_ChangeExecute
    end
    object LotChange: TAction
      Caption = 'LotChange'
      OnExecute = LotChangeExecute
    end
    object SpcChangeLot: TAction
      Caption = 'SpcChangeLot'
      OnExecute = SpcChangeLotExecute
    end
    object GetCustomer: TAction
      Caption = 'GetCustomer'
      OnExecute = GetCustomerExecute
    end
  end
  object TU_Parameters: TfrxDBDataset
    UserName = 'TU_Parameters'
    CloseDataSource = False
    FieldAliases.Strings = (
      'ID=ID'
      'TU=TU'
      'TU_ID=TU_ID'
      'KK_Name=KK_Name'
      'Parametr_1_Name=Parametr_1_Name'
      'Parametr_1_ID=Parametr_1_ID'
      'Parametr_1_Norm_P=Parametr_1_Norm_P'
      'Parametr_1_Norm_OTK=Parametr_1_Norm_OTK'
      'Parametr_1_Cntrl_P=Parametr_1_Cntrl_P'
      'Parametr_2_Name=Parametr_2_Name'
      'Parametr_2_ID=Parametr_2_ID'
      'Parametr_2_Norm_P=Parametr_2_Norm_P'
      'Parametr_2_Norm_OTK=Parametr_2_Norm_OTK'
      'Parametr_2_Cntrl_P=Parametr_2_Cntrl_P'
      'Parametr_3_Name=Parametr_3_Name'
      'Parametr_3_ID=Parametr_3_ID'
      'Parametr_3_Norm_P=Parametr_3_Norm_P'
      'Parametr_3_Norm_OTK=Parametr_3_Norm_OTK'
      'Parametr_3_Cntrl_P=Parametr_3_Cntrl_P'
      'Parametr_4_Name=Parametr_4_Name'
      'Parametr_4_ID=Parametr_4_ID'
      'Parametr_4_Norm_P=Parametr_4_Norm_P'
      'Parametr_4_Norm_OTK=Parametr_4_Norm_OTK'
      'Parametr_4_Cntrl_P=Parametr_4_Cntrl_P'
      'Parametr_5_Name=Parametr_5_Name'
      'Parametr_5_ID=Parametr_5_ID'
      'Parametr_5_Norm_P=Parametr_5_Norm_P'
      'Parametr_5_Norm_OTK=Parametr_5_Norm_OTK'
      'Parametr_5_Cntrl_P=Parametr_5_Cntrl_P'
      'Parametr_6_Name=Parametr_6_Name'
      'Parametr_6_ID=Parametr_6_ID'
      'Parametr_6_Norm_P=Parametr_6_Norm_P'
      'Parametr_6_Norm_OTK=Parametr_6_Norm_OTK'
      'Parametr_6_Cntrl_P=Parametr_6_Cntrl_P'
      'Parametr_7_Name=Parametr_7_Name'
      'Parametr_ID=Parametr_ID'
      'Parametr_7_Norm_P=Parametr_7_Norm_P'
      'Parametr_7_Norm_OTK=Parametr_7_Norm_OTK'
      'Parametr_7_Cntrl_P=Parametr_7_Cntrl_P'
      'Parametr_8_Name=Parametr_8_Name'
      'Parametr_8_ID=Parametr_8_ID'
      'Parametr_8_Norm_P=Parametr_8_Norm_P'
      'Parametr_8_Norm_OTK=Parametr_8_Norm_OTK'
      'Parametr_8_Cntrl_P=Parametr_8_Cntrl_P')
    DataSet = DataModule2.TU_Parameters
    BCDToCurrency = False
    Left = 392
    Top = 72
  end
end
