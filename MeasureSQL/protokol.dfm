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
    DataSetName = 'frxUserDataSet1'
    DotMatrixReport = False
    IniFile = '\Software\Fast Reports'
    PreviewOptions.Buttons = [pbPrint, pbLoad, pbSave, pbExport, pbZoom, pbFind, pbOutline, pbPageSetup, pbTools, pbEdit, pbNavigator, pbExportQuick]
    PreviewOptions.Zoom = 1
    PrintOptions.Printer = #1055#1086' '#1091#1084#1086#1083#1095#1072#1085#1080#1102
    PrintOptions.PrintOnSheet = 0
    ReportOptions.CreateDate = 39953.7254732639
    ReportOptions.LastChange = 45574.6174904167
    ScriptLanguage = 'BasicScript'
    ScriptText.Strings = (
      '    ')
    Left = 152
    Top = 16
    Datasets = <
      item
        DataSet = Dopusk
        DataSetName = 'Dopusk'
      end
      item
        DataSet = Dopuski
        DataSetName = 'Dopuski'
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
      Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
      object ReportTitle1: TfrxReportTitle
        Height = 1028.03216
        Top = 18.89765
        Width = 718.1107
        OnBeforePrint = 'ReportTitle1OnBeforePrint'
        object Memo1: TfrxMemoView
          Left = 3.77953
          Top = 68.03154
          Width = 287.24428
          Height = 18.89765
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          Memo.UTF8 = (
            #1056#1119#1057#1026#1056#1109#1057#8218#1056#1109#1056#1108#1056#1109#1056#187' '#1056#1105#1056#183#1056#1112#1056#181#1057#1026#1056#181#1056#1029#1056#1105#1056#8470' '#1057#1026#1056#181#1056#183#1056#1109#1056#1029#1056#176#1057#8218#1056#1109#1057#1026#1056#1109#1056#1030)
          ParentFont = False
        end
        object Memo2: TfrxMemoView
          Left = 343.93723
          Top = 68.03154
          Width = 355.27582
          Height = 18.89765
          ShowHint = False
          DataSetName = 'frxDBDataset1'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          Memo.UTF8 = (
            '[Spc."Text"]')
          ParentFont = False
        end
        object Memo3: TfrxMemoView
          Left = 94.48825
          Top = 109.60637
          Width = 158.74026
          Height = 18.89765
          ShowHint = False
          DataSetName = 'frxDBDataset1'
          Memo.UTF8 = (
            '[PsiData."MSK"]')
        end
        object Memo10: TfrxMemoView
          Left = 551.81138
          Top = 109.60637
          Width = 41.57483
          Height = 18.89765
          ShowHint = False
          DataSetName = 'frxDBDataset1'
          Memo.UTF8 = (
            ' '#1056#1114#1056#1110#1057#8224)
        end
        object Memo14: TfrxMemoView
          Left = 11.33859
          Top = 109.60637
          Width = 64.25201
          Height = 18.89765
          ShowHint = False
          Memo.UTF8 = (
            #1056#1114#1056#1038#1056#1113)
        end
        object Memo15: TfrxMemoView
          Left = 283.46475
          Top = 109.60637
          Width = 94.48825
          Height = 18.89765
          ShowHint = False
          Memo.UTF8 = (
            #1056#1116#1056#1109#1056#1112#1056#1105#1056#1029#1056#176#1056#187)
        end
        object Memo90: TfrxMemoView
          Left = 423.30736
          Top = 147.40167
          Width = 143.62214
          Height = 18.89765
          ShowHint = False
          Memo.UTF8 = (
            #1056#1116#1056#176#1056#1110#1057#1026#1057#1107#1056#183#1056#1109#1057#8225#1056#1029#1056#176#1057#1039' '#1056#181#1056#1112#1056#1108#1056#1109#1057#1027#1057#8218#1057#1034)
        end
        object Memo91: TfrxMemoView
          Left = 668.97681
          Top = 147.40167
          Width = 30.23624
          Height = 18.89765
          ShowHint = False
          Memo.UTF8 = (
            #1056#1111#1056#164)
        end
        object Memo9: TfrxMemoView
          Left = 11.33859
          Top = 147.40167
          Width = 166.29932
          Height = 18.89765
          ShowHint = False
          Memo.UTF8 = (
            #1056#1118#1056#181#1056#1112#1056#1111#1056#181#1057#1026#1056#176#1057#8218#1057#1107#1057#1026#1056#1029#1057#8249#1056#8470' '#1056#1111#1057#1026#1056#1109#1057#8222#1056#1105#1056#187#1057#1034)
        end
        object PsiDataNominal: TfrxMemoView
          Left = 423.30736
          Top = 109.60637
          Width = 124.72449
          Height = 18.89765
          ShowHint = False
          DataField = 'Nominal'
          DataSet = PsiData
          DataSetName = 'PsiData'
          DisplayFormat.FormatStr = '%2.3f'
          DisplayFormat.Kind = fkNumeric
          Memo.UTF8 = (
            '[PsiData."Nominal"]')
        end
        object PsiDataintervalgf: TfrxMemoView
          Left = 226.7718
          Top = 147.40167
          Width = 173.85838
          Height = 18.89765
          ShowHint = False
          DataField = 'intervalgf'
          DataSet = PsiData
          DataSetName = 'PsiData'
          Memo.UTF8 = (
            '[PsiData."intervalgf"]')
        end
        object Memo4: TfrxMemoView
          Left = 11.33859
          Top = 181.41744
          Width = 143.62214
          Height = 18.89765
          ShowHint = False
          Memo.UTF8 = (
            #1056#1116#1056#1109#1056#1112#1056#181#1057#1026' '#1056#1111#1057#1026#1056#1109#1057#8218#1056#1109#1056#1108#1056#1109#1056#187#1056#176)
        end
        object BarCode2: TfrxBarCodeView
          Left = 230.55133
          Top = 181.41744
          Width = 129
          Height = 18.89765
          ShowHint = False
          BarType = bcCode39Extended
          Expression = '<PsiData."Measure_ID">'
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
        object SpcLoadvalue: TfrxMemoView
          Left = 578.26809
          Top = 147.40167
          Width = 71.81107
          Height = 18.89765
          ShowHint = False
          DataField = 'Loadvalue'
          DataSet = Spc
          DataSetName = 'Spc'
          Memo.UTF8 = (
            '[Spc."Loadvalue"]')
        end
        object Line1: TfrxLineView
          Left = -7.55906
          Top = 215.43321
          Width = 721.89023
          ShowHint = False
          Diagonal = True
        end
        object Picture1: TfrxPictureView
          Left = 7.55906
          Top = 7.55906
          Width = 41.57483
          Height = 37.7953
          ShowHint = False
          Picture.Data = {
            09544D65746166696C6540610000010000006C0000000000000000000000B400
            0000920000000000000000000000FA0200006D02000020454D46000001003C61
            00004E0000000500000000000000000000000000000080120000A81A0000C800
            000021010000000000000000000000000000400D0300E8680400460000002C00
            000020000000454D462B014001001C000000100000000210C0DB000000005802
            000058020000460000005C00000050000000454D462B224004000C0000000000
            00001E4009000C00000000000000244001000C00000000000000304002001000
            0000040000000000803F214007000C00000000000000044000000C0000000000
            0000160000000C000000180000000A0000001000000000000000000000000900
            000010000000B400000093000000250000000C0000000E000080250000000C00
            00000E000080120000000C00000001000000520000007001000001000000A4FF
            FFFF00000000000000000000000090010000000000CC04400022430061006C00
            6900620072006900000000000000000000000000000000000000000000000000
            00000000000000000000000000000000000000000000000000000000120094DE
            120010000000F8E1120078DF1200E4506032F8E11200F0DE12001000000060E0
            1200DCE112008A4F6032F8E11200F0DE12002000000080E02D31F0DE1200F8E1
            120020000000FFFFFFFF0C95F500FBE02D31FFFFFFFFFFFF0180FFFF01802DFF
            0180FFFFFFFF0000000000080000000800004300000001000000000000005802
            000025000000372E9001CC0000000000000000000000FF0200E1FFAC00400900
            0000000000009F01000000000000430061006C00690062007200000000000000
            0000B8DF1200334E2F31282E0C3218E3120024DF1200D5322731080000000100
            000060DF120060DF1200007625310800000088DF12000C95F500647600080000
            0000250000000C00000001000000250000000C00000001000000250000000C00
            000001000000180000000C000000000000025400000054000000000000009100
            0000350000009200000001000000982287408D85874000000000E90000000100
            00004C000000040000000000000000000000B400000093000000500000002000
            00003600000046000000280000001C0000004744494302000000FFFFFFFFFEFF
            FFFFB5000000930000000000000046000000902B0000842B0000454D462B2A40
            000024000000180000000000803F00000080000000800000803F000000800000
            0080214005000C0000000000000008400005EC2A0000E02A00000210C0DB0200
            000002000000B82A0000D7CDC69A0000000000000B03FC026000000000008656
            00000100090000035C1500000200E41400000000050000000B02000000000500
            00000C02FC020B03030000001E000400000007010100E4140000430F2000CC00
            00002701100100000000B2021302030002002800000010010000270100000100
            0100000000007C2900000000000000000000020000000000000000000000FFFF
            FF00FFFFFFFFFFFFFFFFFFFFFFFFFFFFE0000000000FFFFFFFFFFFFFFFFFFFFF
            FFFFFFFF0000FFFFFFFFFFFFFFFFFFFFFFFFFFFC0000000000007FFFFFFFFFFF
            FFFFFFFFFFFFFFFF4000FFFFFFFFFFFFFFFFFFFFFFFFFFC000000000000003FF
            FFFFFFFFFFFFFFFFFFFFFFFF4F8AFFFFFFFFFFFFFFFFFFFFFFFFFC0000000000
            0000007FFFFFFFFFFFFFFFFFFFFFFFFF0700FFFFFFFFFFFFFFFFFFFFFFFFE000
            0000000000000007FFFFFFFFFFFFFFFFFFFFFFFF0000FFFFFFFFFFFFFFFFFFFF
            FFFF00000000000000000001FFFFFFFFFFFFFFFFFFFFFFFF0000FFFFFFFFFFFF
            FFFFFFFFFFFC000000000000000000003FFFFFFFFFFFFFFFFFFFFFFFFE00FFFF
            FFFFFFFFFFFFFFFFFFC00000000000000000000007FFFFFFFFFFFFFFFFFFFFFF
            2201FFFFFFFFFFFFFFFFFFFFFF000000000000000000000001FFFFFFFFFFFFFF
            FFFFFFFF4601FFFFFFFFFFFFFFFFFFFFFC0000000000000000000000007FFFFF
            FFFFFFFFFFFFFFFF6A01FFFFFFFFFFFFFFFFFFFFF00000000000000000000000
            001FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFE000000000000000
            00000000000FFFFFFFFFFFFFFFFFFFFFFF00FFFFFFFFFFFFFFFFFFFF80000000
            00000000000000000003FFFFFFFFFFFFFFFFFFFF00FFFFFFFFFFFFFFFFFFFFFE
            0000000000000000000000000000FFFFFFFFFFFFFFFFFFFFFF00FFFFFFFFFFFF
            FFFFFFFC00000000000000000000000000007FFFFFFFFFFFFFFFFFFF00FFFFFF
            FFFFFFFFFFFFFFF800000000000000000000000000001FFFFFFFFFFFFFFFFFFF
            0000FFFFFFFFFFFFFFFFFFE000000000000000000000000000000FFFFFFFFFFF
            FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFC0000000000000000000000000000007FF
            FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF80000000000000000000000000
            000001FFFFFFFFFFFFFFFFFF0000FFFFFFFFFFFFFFFFFE000000000000000000
            00000000000000FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFC0000000000
            00000000000000000000003FFFFFFFFFFFFFFFFF0000FFFFFFFFFFFFFFFFF800
            0000000000000000000000000000003FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
            FFFFF0000000000000000000000000000000000FFFFFFFFFFFFFFFFFFFFFFFFF
            FFFFFFFFFFFFE00000000000000000000000000000000007FFFFFFFFFFFFFFFF
            0000FFFFFFFFFFFFFFFFC00000000000000000000000000000000003FFFFFFFF
            FFFFFFFF0000FFFFFFFFFFFFFFFF000000000000000000000000000000000001
            FFFFFFFFFFFFFFFF5043FFFFFFFFFFFFFFFE0000000000000000000000000000
            00000000FFFFFFFFFFFFFFFF2900FFFFFFFFFFFFFFFC00000000000000000000
            00000000000000007FFFFFFFFFFFFFFFE820FFFFFFFFFFFFFFF8000000000000
            0000000000000000000000003FFFFFFFFFFFFFFFE920FFFFFFFFFFFFFFF00000
            000000000000000000000000000000001FFFFFFFFFFFFFFF0000FFFFFFFFFFFF
            FFE00000000000000000000000000000000000000FFFFFFFFFFFFFFF0000FFFF
            FFFFFFFFFFC000000000000000000000000000000000000007FFFFFFFFFFFFFF
            0000FFFFFFFFFFFFFF8000000000000000000000000000000000000003FFFFFF
            FFFFFFFF1200FFFFFFFFFFFFFF80000000000000000000000000000000000000
            01FFFFFFFFFFFFFF0000FFFFFFFFFFFFFF000000000000000000000000000000
            0000000001FFFFFFFFFFFFFF0000FFFFFFFFFFFFFE0000000000000000000000
            000000000000000000FFFFFFFFFFFFFF0000FFFFFFFFFFFFFC00000000000000
            000000000000000000000000007FFFFFFFFFFFFF0000FFFFFFFFFFFFF8000000
            00000000000000000000000000000000003FFFFFFFFFFFFF0000FFFFFFFFFFFF
            F800000000000000000000000000000000000000001FFFFFFFFFFFFF706CFFFF
            FFFFFFFFF000000000000000000000000000000000000000001FFFFFFFFFFFFF
            0000FFFFFFFFFFFFE000000000000000000000000000000000000000000FFFFF
            FFFFFFFF0000FFFFFFFFFFFFC000000000000000000000000000000000000000
            0007FFFFFFFFFFFF0000FFFFFFFFFFFFC0000000000000000000000000000000
            000000000007FFFFFFFFFFFF0000FFFFFFFFFFFF800000000000000000000000
            00000000000000000001FFFFFFFFFFFF0000FFFFFFFFFFFF0000000000000000
            0000000000000000000000000001FFFFFFFFFFFF0000FFFFFFFFFFFF00000000
            000000000000000000000000000000000000FFFFFFFFFFFF0000FFFFFFFFFFFE
            00000000000000000000000000000000000000000000FFFFFFFFFFFF0000FFFF
            FFFFFFFC000000000000000000000000000000000000000000007FFFFFFFFFFF
            0000FFFFFFFFFFFC000000000000000000000000000000000000000000003FFF
            FFFFFFFF0000FFFFFFFFFFF80000000000000000000000000000000000000000
            00001FFFFFFFFFFF0000FFFFFFFFFFF000000000000000000000000000000000
            0000000000001FFFFFFFFFFF4246FFFFFFFFFFF0000000000000000000000000
            000000000000000000000FFFFFFFFFFF4631FFFFFFFFFFE00000000000000000
            00000000000000000000000000000FFFFFFFFFFF3431FFFFFFFFFFC000000000
            00000000000000000000000000000000000007FFFFFFFFFF0000FFFFFFFFFFC0
            0000000000000000000000000000000000000000000007FFFFFFFFFF0000FFFF
            FFFFFFC00000000000000000000000000000000000000000000003FFFFFFFFFF
            0000FFFFFFFFFF800000000000000000000000000000000000000000000001FF
            FFFFFFFF0000FFFFFFFFFF000000000000000000000000000000000000000000
            000001FFFFFFFFFF5A00FFFFFFFFFF0000000000000000000000000000000000
            00000000000000FFFFFFFFFF6700FFFFFFFFFE00000000000000000000000000
            0000000000000000000000FFFFFFFFFF0000FFFFFFFFFE000000000000000000
            0000000000000000000000000000007FFFFFFFFF0000FFFFFFFFFC0000000000
            000000000000000000000000000000000000007FFFFFFFFF0000FFFFFFFFFC00
            00000000000000000000000000000000000000000000003FFFFFFFFF0000FFFF
            FFFFF80000000000000000000000000000000000000000000000001FFFFFFFFF
            0000FFFFFFFFF00000000000000000000000000000000000000000000000001F
            FFFFFFFF0000FFFFFFFFF0000000000000000000000000000000000000000000
            0000000FFFFFFFFF0000FFFFFFFFF00000000000000000000000000000000000
            000000000000000FFFFFFFFF0000FFFFFFFFE000000000000000000000000000
            000000000000000000000007FFFFFFFF0000FFFFFFFFC0000000000000000000
            00000000000000000000000000000007FFFFFFFF0000FFFFFFFFC00000000000
            0000000000000000000000000000000000000003FFFFFFFF0000FFFFFFFFC000
            000000000000000000000000000000000000000000000003FFFFFFFF0000FFFF
            FFFF8000000000000000000000000000000000000000000000000001FFFFFFFF
            0000FFFFFFFF0000000000000000000000000000000000000000000000000001
            FFFFFFFF0000FFFFFFFF00000000000000000000000000000000000000000000
            00000000FFFFFFFF0000FFFFFFFE000000000000000000000000000000000000
            00000000000000007FFFFFFF0000FFFFFFFE0000000000000000000000000000
            0000000000000000000000007FFFFFFFFF00FFFFFFFC00000000000000000000
            000000000000000000000000000000007FFFFFFFFFFFFFFFFFFC000000000000
            00000000000000000000000000000000000000003FFFFFFFFFFFFFFFFFFC0000
            0000000000000000000000000000000000000000000000003FFFFFFF0000FFFF
            FFF800000000000000000000000000000000000000000000000000003FFFFFFF
            FFFFFFFFFFF00000000000000000000000000000000000000000000000000000
            1FFFFFFF0000FFFFFFF000000000000000000000000000000000000000000000
            000000001FFFFFFFFFFFFFFFFFF0000000000000000000000000000000000000
            00000000000000000FFFFFFFFFFFFFFFFFF00000000000000000000000000000
            0000000000000000000000000FFFFFFFFFFFFFFFFFE000000000000000000000
            000000000000000000000000000000000FFFFFFFF6F6FFFFFFE0000000000000
            00000000000000000000000000000000000000000FFFFFFFF6F6FFFFFFC00000
            00000000000000000000000000000000000000000000000007FFFFFFF6F6FFFF
            FFC0000000000000000000000000000000000000000000000000000007FFFFFF
            F6F6FFFFFFC00000000000000000000000000000000000000000000000000000
            03FFFFFFF6F6FFFFFF8000000000000000000000000000000000000000000000
            0000000003FFFFFFF6F6FFFFFF80000000000000000000000000000000000000
            000000000000000003FFFFFF0000FFFFFF800000000000000000000000000000
            00000000000000000000000001FFFFFFFFFFFFFFFF0000000000000000000000
            0000000000000000000000000000000001FFFFFFFFFFFFFFFF00000000000000
            000000000000000000000000000000000000000000FFFFFF0000FFFFFF000000
            00000000000000000000000000000000000000000000000000FFFFFFFFFFFFFF
            FE00000000000000000000000000000000000000000000000000000000FFFFFF
            0000FFFFFE000000000000000000000000000000000000000000000000000000
            00FFFFFFFFFFFFFFFE0000000000000000000000000000000000000000000000
            0000000000FFFFFFFFFFFFFFFE00000000000000000000000000000000000000
            0000000000000000007FFFFFF6F6FFFFFC000000000000000000000000000000
            000000000000000000000000007FFFFFF6F6FFFFFC0000000000000000000000
            00000000000000000000000000000000003FFFFFF6F6FFFFFC00000000000000
            0000000000000000000000000000000000000000003FFFFFF6F6FFFFF8000000
            000000000000000000000000000000000000000000000000003FFFFFF6F6FFFF
            F8000000000000000000000000000000000000000000000000000000003FFFFF
            F6F6FFFFF8000000000000000000000000000000000000000000000000000000
            003FFFFF0404FFFFF80000000000000000000000000000000000000000000000
            00000000001FFFFFFFFFFFFFF000000000000000000000000000000000000000
            0000000000000000001FFFFFFFFFFFFFF0000000000000000000000000000000
            000000000000000000000000000FFFFF0000FFFFF00000000000000000000000
            00000000000000000000000000000000000FFFFF0000FFFFE000000000000000
            0000000000000000000000000000000000000000000FFFFF0000FFFFE0000000
            000000000000001C0000000000007F000000000000000000000FFFFF0000FFFF
            E00000000000000000001FFC0000000000007FFE00000000000000000007FFFF
            FFFFFFFFE0000000000000000003FFFC0000000000007FFFC000000000000000
            0007FFFFFFFFFFFFC000000000000000000FFFFC0000000000007FFFF0000000
            000000000007FFFFF6F6FFFFC000000000000000003FFFFC0000000000007FFF
            F8000000000000000003FFFFF6F6FFFFC00000000000000000FFFFFC00000000
            00007FFFFE000000000000000003FFFFF6F6FFFF800000000000000003FFFFFC
            0000000000007FFFFF800000000000000003FFFFF6F6FFFF8000000000000000
            0FFFFFFC0000000000007FFFFFE00000000000000003FFFFF6F6FFFF80000000
            000000003FFFFFFC0000000000007FFFFFF80000000000000001FFFFF6F6FFFF
            80000000000000007FFFFFFC0000000000007FFFFFFC0000000000000001FFFF
            00FFFFFF0000000000000000FFFFFFFC0000000000007FFFFFFE000000000000
            0001FFFFFFFFFFFF0000000000000001FFFFFFFC0000000000007FFFFFFF0000
            000000000000FFFFFFFFFFFF0000000000000007FFFFFFFC0000000000007FFF
            FFFFC000000000000000FFFF0000FFFE000000000000000FFFFFFFFC00000000
            00007FFFFFFFE000000000000000FFFFFFFFFFFE000000000000001FFFFFFFFC
            0000000000007FFFFFFFF000000000000000FFFF0000FFFE000000000000003F
            FFFFFFFC0000000000007FFFFFFFF800000000000000FFFFFFFFFFFE00000000
            0000007FFFFFFFFC0000000000007FFFFFFFFC000000000000007FFFFFFFFFFE
            000000000000007FFFFFFFFC0000000000007FFFFFFFFE000000000000007FFF
            FFFFFFFC00000000000001FFFFFFFFFC0000000000007FFFFFFFFF0000000000
            00007FFFF6F6FFFC00000000000003FFFFFFFFFC0000000000007FFFFFFFFF80
            0000000000003FFFF6F6FFFC00000000000007FFFFFFFFFC0000000000007FFF
            FFFFFFC00000000000003FFFF6F6FFF80000000000000FFFFFFFFFFC00000000
            00007FFFFFFFFFE00000000000003FFFF6F6FFF80000000000001FFFFFFFFFFC
            0000000000007FFFFFFFFFF00000000000003FFFF6F6FFF80000000000001FFF
            FFFFFFFC0000000000007FFFFFFFFFF80000000000003FFFF6F6FFF800000000
            00003FFFFFFFFFFC0000000000007FFFFFFFFFFC0000000000003FFF0000FFF8
            0000000000007FFFFFFFFFFC0000000000007FFFFFFFFFFE0000000000001FFF
            FFFFFFF8000000000000FFFFFFFFFFFC0000000000007FFFFFFFFFFE00000000
            00001FFFFFFFFFF0000000000001FFFFFFFFFFFC0000000000007FFFFFFFFFFF
            0000000000001FFF0000FFF0000000000001FFFFFFFFFFFC0000000000007FFF
            FFFFFFFF8000000000001FFFFFFFFFF0000000000003FFFFFFFFFFFC00000000
            00007FFFFFFFFFFFC000000000000FFF0000FFF0000000000007FFFFFFFFFFFC
            0000000000007FFFFFFFFFFFC000000000000FFFFFFFFFE000000000000FFFFF
            FFFFFFFC0000000000007FFFFFFFFFFFE000000000000FFFFFFFFFE000000000
            001FFFFFFFFFFFFC0000000000007FFFFFFFFFFFF000000000000FFFF6F6FFE0
            00000000001FFFFFFFFFFFFC0000000000007FFFFFFFFFFFF800000000000FFF
            F6F6FFE000000000003FFFFFFFFFFFFC0000000000007FFFFFFFFFFFF8000000
            00000FFFF6F6FFE000000000003FFFFFFFFFFFFC0000000000007FFFFFFFFFFF
            FC00000000000FFFF6F6FFE000000000007FFFFFFFFFFFFC0000000000007FFF
            FFFFFFFFFC000000000007FFF6F6FFE00000000000FFFFFFFFFFFFFC00000000
            00007FFFFFFFFFFFFE000000000007FFF6F6FFC00000000000FFFFFFFFFFFFFC
            0000000000007FFFFFFFFFFFFE000000000007FF0000FFC00000000001FFFFFF
            FFFFFFFC0000000000007FFFFFFFFFFFFF000000000007FFFFFFFFC000000000
            01FFFFFFFFFFFFFC0000000000007FFFFFFFFFFFFF800000000003FFFFFFFFC0
            0000000003FFFFFFFFFFFFFC0000000000007FFFFFFFFFFFFF800000000003FF
            0000FFC00000000007FFFFFFFFFFFFFC0000000000007FFFFFFFFFFFFFC00000
            000003FF0000FF800000000007FFFFFFFFFFFFFC0000000000007FFFFFFFFFFF
            FFC00000000003FF0000FF80000000000FFFFFFFFFFFFFFC0000000000007FFF
            FFFFFFFFFFE00000000003FF0000FF80000000000FFFFFFFFFFFFFFC00000000
            00007FFFFFFFFFFFFFF00000000003FFFFFFFF80000000001FFFFFFFFFFFFFFC
            0000000000007FFFFFFFFFFFFFF00000000003FFFFFFFF80000000003FFFFFFF
            FFFFFFFC0000000000007FFFFFFFFFFFFFF80000000003FFF6F6FF8000000000
            3FFFFFFFFFFFFFFC0000000000007FFFFFFFFFFFFFF80000000001FFF6F6FF80
            000000003FFFFFFFFFFFFFFC0000000000007FFFFFFFFFFFFFFC0000000001FF
            F6F6FF80000000007FFFFFFFFFFFFFFC0000000000007FFFFFFFFFFFFFFE0000
            000001FFF6F6FF0000000000FFFFFFFFFFFFFFFC0000000000007FFFFFFFFFFF
            FFFE0000000001FFF6F6FF0000000000FFFFFFFFFFFFFFF80000000000001FFF
            FFFFFFFFFFFF0000000001FFF6F6FF0000000001FFFFFFFFFFFFFF8000000000
            000003FFFFFFFFFFFFFF0000000000FF0000FF0000000001FFFFFFFFFFFFFC00
            000000000000007FFFFFFFFFFFFF8000000000FFFFFFFE0000000003FFFFFFFF
            FFFFF000000000000000001FFFFFFFFFFFFF8000000000FFFFFFFE0000000003
            FFFFFFFFFFFFC0000000000000000003FFFFFFFFFFFFC000000000FF0000FE00
            00000007FFFFFFFFFFFF00000000000000000001FFFFFFFFFFFFC000000000FF
            FFFFFE000000000FFFFFFFFFFFFC000000000000000000007FFFFFFFFFFFE000
            000000FF0000FE000000000FFFFFFFFFFFF8000000000000000000003FFFFFFF
            FFFFE000000000FFFFFFFE000000000FFFFFFFFFFFF000000000000000000000
            1FFFFFFFFFFFF0000000007FFFFFFE000000001FFFFFFFFFFFE0000000000000
            0000000007FFFFFFFFFFF0000000007FFFFFFC000000003FFFFFFFFFFF800000
            000000000000000003FFFFFFFFFFF8000000007FF6F6FC000000003FFFFFFFFF
            FF000000000000000000000001FFFFFFFFFFF8000000007FF6F6FC000000007F
            FFFFFFFFFE000000000000000000000000FFFFFFFFFFFC000000007FF6F6FC00
            0000007FFFFFFFFFFC0000000000000000000000007FFFFFFFFFFE000000003F
            F6F6FC00000000FFFFFFFFFFF80000000000000000000000003FFFFFFFFFFE00
            0000003FF6F6FC00000000FFFFFFFFFFF00000000000000000000000001FFFFF
            FFFFFE000000003FF6F6F800000001FFFFFFFFFFE00000000000000000000000
            000FFFFFFFFFFF000000003F0000F800000001FFFFFFFFFFC000000000000000
            000000000007FFFFFFFFFF800000003FFFFFF800000003FFFFFFFFFFC0000000
            00000000000000000007FFFFFFFFFF800000003FFFFFF800000003FFFFFFFFFF
            8000000000000000000000000003FFFFFFFFFF800000003F0000F800000003FF
            FFFFFFFF0000000000000000000000000001FFFFFFFFFFC00000003FFFFFF800
            000007FFFFFFFFFF0000000000000000000000000001FFFFFFFFFFC00000003F
            0000F80000000FFFFFFFFFFE0000000000000000000000000000FFFFFFFFFFE0
            0000001FFFFFF80000000FFFFFFFFFFE0000000000000000000000000000FFFF
            FFFFFFE00000001FFFFFF80000000FFFFFFFFFFC000000000000000000000000
            00007FFFFFFFFFF00000001FF6F6F80000001FFFFFFFFFFC0000000000000000
            0000000000003FFFFFFFFFF00000001FF6F6F00000001FFFFFFFFFF800000000
            000000000000000000003FFFFFFFFFF80000001FF6F6F00000003FFFFFFFFFF8
            00000000000000000000000000003FFFFFFFFFF80000001FF6F6F00000003FFF
            FFFFFFF800000000000000000000000000001FFFFFFFFFF80000001FF6F6F000
            00003FFFFFFFFFF000000000000000000000000000001FFFFFFFFFFC0000000F
            F6F6F00000007FFFFFFFFFF000000000000000000000000000000FFFFFFFFFFC
            0000000F0000F00000007FFFFFFFFFF000000000000000000000000000000FFF
            FFFFFFFE0000000FFFFFF0000000FFFFFFFFFFE0000000000000000000000000
            00000FFFFFFFFFFE0000000FFFFFE0000000FFFFFFFFFFE00000000000000000
            0000000000000FFFFFFFFFFE0000000F0000E0000001FFFFFFFFFFE000000000
            000000000000000000000FFFFFFFFFFF0000000F0000E0000001FFFFFFFFFFE0
            000000000000000000000000000007FFFFFFFFFF8000000F0000E0000001FFFF
            FFFFFFE0000000000000000000000000000007FFFFFFFFFF8000000F0000E000
            0003FFFFFFFFFFE0000000000000000000000000000007FFFFFFFFFF8000000F
            FFFFE0000003FFFFFFFFFFC0000000000000000000000000000007FFFFFFFFFF
            8000000FFFFFE0000003FFFFFFFFFFC0000000000000000000000000000007FF
            FFFFFFFFC000000FF6F6E0000007FFFFFFFFFFC0000000000000000000000000
            000007FFFFFFFFFFC0000007F6F6E000000FFFFFFFFFFFC00000000000000000
            00000000000007FFFFFFFFFFE0000007F6F6E000000FFFFFFFFFFFC000000000
            0000000000000000000007FFFFFFFFFFE0000007F6F6C000000FFFFFFFFFFFC0
            000000000000000000000000000007FFFFFFFFFFE0000007F6F6C000000FFFFF
            FFFFFFC0000000000000000000000000000007FFFFFFFFFFF0000007F6F6C000
            001FFFFFFFFFFFC0000000000000000000000000000007FFFFFFFFFFF0000007
            0000C000001FFFFFFFFFFFC0000000000000000000000000000003FFFFFFFFFF
            F0000007FFFFC000003FFFFFFFFFFFC00000000000000FF000000000000003FF
            FFFFFFFFF8000007FFFFC000003FFFFFFFFFFFC0000000000000FFFF00000000
            000003FFFFFFFFFFF80000070000C000003FFFFFFFFFFFC0000000000003FFFF
            C0000000000003FFFFFFFFFFFC000007FFFFC000007FFFFFFFFFFFC000000000
            000FFFFFE0000000000003FFFFFFFFFFFC0000070000C000007FFFFFFFFFFFC0
            00000000001FFFFFF0000000000003FFFFFFFFFFFC000007FFFFC000007FFFFF
            FFFFFFC000000000001FFFFFF8000000000003FFFFFFFFFFFC000007FFFFC000
            00FFFFFFFFFFFFC000000000003FFFFFF8000000000003FFFFFFFFFFFE000007
            FFFFC00000FFFFFFFFFFFFC000000000003FFFFFF8000000000003FFFFFFFFFF
            FE000007F6F6800000FFFFFFFFFFFFC000000000003FFFFFF8000000000003FF
            FFFFFFFFFF000003F6F6800001FFFFFFFFFFFFC000000000003FFFFFF8000000
            000003FFFFFFFFFFFF000003F6F6800001FFFFFFFFFFFFC000000000003FFFFF
            F8000000000003FFFFFFFFFFFF000003F6F6800001FFFFFFFFFFFFC000000000
            003FFFFFF8000000000003FFFFFFFFFFFF800003F6F6800003FFFFFFFFFFFFC0
            00000000003FFFFFF8000000000003FFFFFFFFFFFF800003F6F6800003FFFFFF
            FFFFFFC000000000003FFFFFF8000000000003FFFFFFFFFFFFC0000300008000
            03FFFFFFFFFFFFC000000000003FFFFFF8000000000003FFFFFFFFFFFFC00003
            FFFF800007FFFFFFFFFFFFC000000000003FFFFFF8000000000003FFFFFFFFFF
            FFC00003FFFF800007FFFFFFFFFFFFC000000000003FFFFFF8000000000003FF
            FFFFFFFFFFC000030000800007FFFFFFFFFFFFC000000000003FFFFFF8000000
            000003FFFFFFFFFFFFE00003FFFF80000FFFFFFFFFFFFFC000000000003FFFFF
            F8000000000003FFFFFFFFFFFFE00003000080000FFFFFFFFFFFFFC000000000
            003FFFFFF8000000000003FFFFFFFFFFFFF00003FFFF80000FFFFFFFFFFFFFC0
            00000000003FFFFFF8000000000003FFFFFFFFFFFFF00003FFFF80001FFFFFFF
            FFFFFFC000000000003FFFFFF8000000000003FFFFFFFFFFFFF00003F6F68000
            1FFFFFFFFFFFFFC000000000003FFFFFF8000000000003FFFFFFFFFFFFF00003
            F6F680001FFFFFFFFFFFFFC000000000003FFFFFF8000000000003FFFFFFFFFF
            FFF80003F6F680003FFFFFFFFFFFFFC000000000003FFFFFF8000000000003FF
            FFFFFFFFFFF80003F6F680003FFFFFFFFFFFFFC000000000003FFFFFF8000000
            000003FFFFFFFFFFFFFC0003F6F680007FFFFFFFFFFFFFC000000000003FFFFF
            F8000000000003FFFFFFFFFFFFFC0003F6F680007FFFFFFFFFFFFFC000000000
            003FFFFFF8000000000003FFFFFFFFFFFFFC000300FF80007FFFFFFFFFFFFFC0
            00000000003FFFFFF8000000000003FFFFFFFFFFFFFC0003FFFF80007FFFFFFF
            FFFFFFC000000000003FFFFFF8000000000003FFFFFFFFFFFFFE0003FFFF8000
            FFFFFFFFFFFFFFC000000000003FFFFFF8000000000003FFFFFFFFFFFFFE0003
            00008000FFFFFFFFFFFFFFC000000000003FFFFFF8000000000003FFFFFFFFFF
            FFFF000300008000FFFFFFFFFFFFFFC000000000003FFFFFF8000000000003FF
            FFFFFFFFFFFF000300008001FFFFFFFFFFFFFFC000000000003FFFFFF8000000
            000003FFFFFFFFFFFFFF000300008001FFFFFFFFFFFFFFC000000000003FFFFF
            F8000000000003FFFFFFFFFFFFFF0003FFFF8001FFFFFFFFFFFFFFC000000000
            003FFFFFF8000000000003FFFFFFFFFFFFFF8001FFFF8003FFFFFFFFFFFFFFC0
            00000000003FFFFFF8000000000003FFFFFFFFFFFFFF8001F6F68003FFFFFFFF
            FFFFFFC000000000003FFFFFF8000000000003FFFFFFFFFFFFFFC001F6F68003
            FFFFFFFFFFFFFFC000000000003FFFFFF8000000000003FFFFFFFFFFFFFFC001
            F6F68007FFFFFFFFFFFFFFC000000000003FFFFFF8000000000003FFFFFFFFFF
            FFFFC001F6F68007FFFFFFFFFFFFFFC000000000003FFFFFF8000000000003FF
            FFFFFFFFFFFFC001F6F68007FFFFFFFFFFFFFFC000000000003FFFFFF8000000
            000003FFFFFFFFFFFFFFC001F6F68007FFFFFFFFFFFFFFC000000000003FFFFF
            F8000000000003FFFFFFFFFFFFFFE0010000800FFFFFFFFFFFFFFFC000000000
            003FFFFFF8000000000003FFFFFFFFFFFFFFE001FFFF800FFFFFFFFFFFFFFFC0
            00000000003FFFFFF8000000000003FFFFFFFFFFFFFFF001FFFF801FFFFFFFFF
            FFFFFFC000000000003FFFFFF8000000000003FFFFFFFFFFFFFFF0010000801F
            FFFFFFFFFFFFFFC000000000003FFFFFF8000000000003FFFFFFFFFFFFFFF001
            FFFF801FFFFFFFFFFFFFFFC000000000003FFFFFF8000000000003FFFFFFFFFF
            FFFFF0010000801FFFFFFFFFFFFFFFC000000000003FFFFFF8000000000003FF
            FFFFFFFFFFFFF801FFFF803FFFFFFFFFFFFFFFC000000000003FFFFFF8000000
            000003FFFFFFFFFFFFFFF801FFFF803FFFFFFFFFFFFFFFC000000000003FFFFF
            F8000000000003FFFFFFFFFFFFFFF801FFFF803FFFFFFFFFFFFFFFC000000000
            003FFFFFF8000000000003FFFFFFFFFFFFFFFC01F6F6807FFFFFFFFFFFFFFFC0
            00000000003FFFFFF8000000000003FFFFFFFFFFFFFFFC01F6F6007FFFFFFFFF
            FFFFFFC000000000003FFFFFF8000000000003FFFFFFFFFFFFFFFC01F6F6007F
            FFFFFFFFFFFFFFC000000000003FFFFFF8000000000003FFFFFFFFFFFFFFFC01
            F6F6007FFFFFFFFFFFFFFFC000000000003FFFFFF8000000000003FFFFFFFFFF
            FFFFFE01F6F600FFFFFFFFFFFFFFFFC000000000003FFFFFF8000000000003FF
            FFFFFFFFFFFFFE01F6F600FFFFFFFFFFFFFFFFC000000000003FFFFFF8000000
            000003FFFFFFFFFFFFFFFE01000000FFFFFFFFFFFFFFFFC000000000003FFFFF
            F8000000000003FFFFFFFFFFFFFFFF01FFFF01FFFFFFFFFFFFFFFFC000000000
            003FFFFFF8000000000003FFFFFFFFFFFFFFFF01FFFF01FFFFFFFFFFFFFFFFC0
            00000000003FFFFFF8000000000003FFFFFFFFFFFFFFFF01000001FFFFFFFFFF
            FFFFFFC000000000003FFFFFF8000000000003FFFFFFFFFFFFFFFF01FFFF01FF
            FFFFFFFFFFFFFFC000000000003FFFFFF8000000000003FFFFFFFFFFFFFFFF81
            000001FFFFFFFFFFFFFFFFC000000000003FFFFFF8000000000003FFFFFFFFFF
            FFFFFF81FFFF03FFFFFFFFFFFFFFFFC000000000003FFFFFF8000000000003FF
            FFFFFFFFFFFFFF81FFFF03FFFFFFFFFFFFFFFFC000000000003FFFFFF8000000
            000003FFFFFFFFFFFFFFFFC1F6F603FFFFFFFFFFFFFFFFC000000000003FFFFF
            F8000000000003FFFFFFFFFFFFFFFFC1F6F607FFFFFFFFFFFFFFFFC000000000
            003FFFFFF8000000000003FFFFFFFFFFFFFFFFC1F6F607FFFFFFFFFFFFFFFFC0
            00000000003FFFFFF8000000000003FFFFFFFFFFFFFFFFC1F6F607FFFFFFFFFF
            FFFFFFC000000000003FFFFFF8000000000003FFFFFFFFFFFFFFFFE1F6F607FF
            FFFFFFFFFFFFFFC000000000003FFFFFF8000000000003FFFFFFFFFFFFFFFFE1
            F6F60FFFFFFFFFFFFFFFFFC000000000003FFFFFF8000000000003FFFFFFFFFF
            FFFFFFE1FF000FFFFFFFFFFFFFFFFFC000000000003FFFFFF8000000000003FF
            FFFFFFFFFFFFFFF1FFFF0FFFFFFFFFFFFFFFFFC000000000003FFFFFF8000000
            000003FFFFFFFFFFFFFFFFF1FFFF1FFFFFFFFFFFFFFFFFC000000000003FFFFF
            F8000000000003FFFFFFFFFFFFFFFFF100001FFFFFFFFFFFFFFFFFC000000000
            003FFFFFF8000000000003FFFFFFFFFFFFFFFFF100001FFFFFFFFFFFFFFFFFC0
            00000000003FFFFFF8000000000003FFFFFFFFFFFFFFFFF100001FFFFFFFFFFF
            FFFFFFC000000000003FFFFFF8000000000003FFFFFFFFFFFFFFFFF900003FFF
            FFFFFFFFFFFFFFC000000000003FFFFFF8000000000003FFFFFFFFFFFFFFFFF9
            FFFF3FFFFFFFFFFFFFFFFFC000000000003FFFFFF8000000000003FFFFFFFFFF
            FFFFFFF9FF003FFFFFFFFFFFFFFFFFC000000000003FFFFFF8000000000003FF
            FFFFFFFFFFFFFFF9F6F67FFFFFFFFFFFFFFFFFC000000000003FFFFFF8000000
            000003FFFFFFFFFFFFFFFFFDF6F67FFFFFFFFFFFFFFFFFC000000000003FFFFF
            F8000000000003FFFFFFFFFFFFFFFFFDF6F67FFFFFFFFFFFFFFFFFC000000000
            003FFFFFF8000000000003FFFFFFFFFFFFFFFFFDF6F67FFFFFFFFFFFFFFFFFC0
            00000000003FFFFFF8000000000003FFFFFFFFFFFFFFFFFFF6F6FFFFFFFFFFFF
            FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF6F60400
            00002701FFFF050000000902FFFFFF000500000001020000000010000000FB02
            D4FE9100000000009001000000020000001253796D626F6C0002040000002D01
            000010000000FB021400090000000000BC02000000CC0102022253797374656D
            00CC040000002D0101000400000008010000050000000A020000000004000000
            02010100040000002E01180005000000090200000000040000002D0100000700
            000021050100D2009D02F701040000002D010100030000000000084001082400
            0000180000000210C0DB01000000030000000000000000000000000000001B40
            000040000000340000000100000002000000000000000000000000C042440000
            3F44030000007FAA6A3F00ABAABEA8EA344300ABAABE7FAA6A3FFFBF12432100
            000008000000620000000C000000010000002100000008000000620000000C00
            000001000000110000000C000000080000000A00000010000000000000000000
            000009000000100000000B030000FC0200000C00000010000000010000000000
            00000B00000010000000B4000000930000002100000008000000250000000C00
            000007000080250000000C00000000000080160000000C000000000000001800
            00000C00000000000000190000000C000000FFFFFF00140000000C0000000D00
            0000520000007001000002000000A4FFFFFF0000000000000000000000009001
            0000000000CC07400022430061006C0069006200720069000000000000000000
            0000000000000000000000000000000000000000000000000000000000000000
            0000000000000000000000000000A42421891900B0019625F27700000000D5CD
            63010100B001750800000300000004BE120016DF2631F6FF00001CBE12000800
            00000000000020BE120088552831D355283138BE1200505428317C243D002A1D
            1EBE64CB1200C6C3273100003D0005000000B43D0000E097807CF0C327310000
            0000304B5F0600003D00000021891000900100003D000080240400000000D4C4
            12004DC527310800000001000000008024048FC5273101000000000000000000
            000038191E000000000000000000000000000000000000000000000000000000
            00000000000095000000C0821B00DCBE12005E5AF377DCBE12007024F277D4C7
            2000A4242189C0821B006476000800000000250000000C000000020000000A00
            000010000000000000000000000009000000100000000B030000FC0200002100
            000008000000150000000C0000000100000051000000FC290000010000000100
            00007B0000008400000002000000030000000000000000000000100100002701
            00005000000030000000800000007C290000000000002000CC0013020000B202
            000028000000100100002701000001000100000000007C290000000000000000
            0000020000000000000000000000FFFFFF00FFFFFFFFFFFFFFFFFFFFFFFFFFFF
            E0000000000FFFFFFFFFFFFFFFFFFFFFFFFFFFFF0000FFFFFFFFFFFFFFFFFFFF
            FFFFFFFC0000000000007FFFFFFFFFFFFFFFFFFFFFFFFFFF4000FFFFFFFFFFFF
            FFFFFFFFFFFFFFC000000000000003FFFFFFFFFFFFFFFFFFFFFFFFFF4F8AFFFF
            FFFFFFFFFFFFFFFFFFFFFC00000000000000007FFFFFFFFFFFFFFFFFFFFFFFFF
            0700FFFFFFFFFFFFFFFFFFFFFFFFE0000000000000000007FFFFFFFFFFFFFFFF
            FFFFFFFF0000FFFFFFFFFFFFFFFFFFFFFFFF00000000000000000001FFFFFFFF
            FFFFFFFFFFFFFFFF0000FFFFFFFFFFFFFFFFFFFFFFFC00000000000000000000
            3FFFFFFFFFFFFFFFFFFFFFFFFE00FFFFFFFFFFFFFFFFFFFFFFC0000000000000
            0000000007FFFFFFFFFFFFFFFFFFFFFF2201FFFFFFFFFFFFFFFFFFFFFF000000
            000000000000000001FFFFFFFFFFFFFFFFFFFFFF4601FFFFFFFFFFFFFFFFFFFF
            FC0000000000000000000000007FFFFFFFFFFFFFFFFFFFFF6A01FFFFFFFFFFFF
            FFFFFFFFF00000000000000000000000001FFFFFFFFFFFFFFFFFFFFFFFFFFFFF
            FFFFFFFFFFFFFFFFE00000000000000000000000000FFFFFFFFFFFFFFFFFFFFF
            FF00FFFFFFFFFFFFFFFFFFFF8000000000000000000000000003FFFFFFFFFFFF
            FFFFFFFF00FFFFFFFFFFFFFFFFFFFFFE0000000000000000000000000000FFFF
            FFFFFFFFFFFFFFFFFF00FFFFFFFFFFFFFFFFFFFC000000000000000000000000
            00007FFFFFFFFFFFFFFFFFFF00FFFFFFFFFFFFFFFFFFFFF80000000000000000
            0000000000001FFFFFFFFFFFFFFFFFFF0000FFFFFFFFFFFFFFFFFFE000000000
            000000000000000000000FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFC0
            000000000000000000000000000007FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
            FFFFFF80000000000000000000000000000001FFFFFFFFFFFFFFFFFF0000FFFF
            FFFFFFFFFFFFFE00000000000000000000000000000000FFFFFFFFFFFFFFFFFF
            FFFFFFFFFFFFFFFFFFFFFC000000000000000000000000000000003FFFFFFFFF
            FFFFFFFF0000FFFFFFFFFFFFFFFFF8000000000000000000000000000000003F
            FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF000000000000000000000000000
            0000000FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFE0000000000000000000
            0000000000000007FFFFFFFFFFFFFFFF0000FFFFFFFFFFFFFFFFC00000000000
            000000000000000000000003FFFFFFFFFFFFFFFF0000FFFFFFFFFFFFFFFF0000
            00000000000000000000000000000001FFFFFFFFFFFFFFFF5043FFFFFFFFFFFF
            FFFE000000000000000000000000000000000000FFFFFFFFFFFFFFFF2900FFFF
            FFFFFFFFFFFC0000000000000000000000000000000000007FFFFFFFFFFFFFFF
            E820FFFFFFFFFFFFFFF80000000000000000000000000000000000003FFFFFFF
            FFFFFFFFE920FFFFFFFFFFFFFFF0000000000000000000000000000000000000
            1FFFFFFFFFFFFFFF0000FFFFFFFFFFFFFFE00000000000000000000000000000
            000000000FFFFFFFFFFFFFFF0000FFFFFFFFFFFFFFC000000000000000000000
            000000000000000007FFFFFFFFFFFFFF0000FFFFFFFFFFFFFF80000000000000
            00000000000000000000000003FFFFFFFFFFFFFF1200FFFFFFFFFFFFFF800000
            0000000000000000000000000000000001FFFFFFFFFFFFFF0000FFFFFFFFFFFF
            FF0000000000000000000000000000000000000001FFFFFFFFFFFFFF0000FFFF
            FFFFFFFFFE0000000000000000000000000000000000000000FFFFFFFFFFFFFF
            0000FFFFFFFFFFFFFC00000000000000000000000000000000000000007FFFFF
            FFFFFFFF0000FFFFFFFFFFFFF800000000000000000000000000000000000000
            003FFFFFFFFFFFFF0000FFFFFFFFFFFFF8000000000000000000000000000000
            00000000001FFFFFFFFFFFFF706CFFFFFFFFFFFFF00000000000000000000000
            0000000000000000001FFFFFFFFFFFFF0000FFFFFFFFFFFFE000000000000000
            000000000000000000000000000FFFFFFFFFFFFF0000FFFFFFFFFFFFC0000000
            000000000000000000000000000000000007FFFFFFFFFFFF0000FFFFFFFFFFFF
            C0000000000000000000000000000000000000000007FFFFFFFFFFFF0000FFFF
            FFFFFFFF80000000000000000000000000000000000000000001FFFFFFFFFFFF
            0000FFFFFFFFFFFF00000000000000000000000000000000000000000001FFFF
            FFFFFFFF0000FFFFFFFFFFFF0000000000000000000000000000000000000000
            0000FFFFFFFFFFFF0000FFFFFFFFFFFE00000000000000000000000000000000
            000000000000FFFFFFFFFFFF0000FFFFFFFFFFFC000000000000000000000000
            000000000000000000007FFFFFFFFFFF0000FFFFFFFFFFFC0000000000000000
            00000000000000000000000000003FFFFFFFFFFF0000FFFFFFFFFFF800000000
            0000000000000000000000000000000000001FFFFFFFFFFF0000FFFFFFFFFFF0
            000000000000000000000000000000000000000000001FFFFFFFFFFF4246FFFF
            FFFFFFF0000000000000000000000000000000000000000000000FFFFFFFFFFF
            4631FFFFFFFFFFE0000000000000000000000000000000000000000000000FFF
            FFFFFFFF3431FFFFFFFFFFC00000000000000000000000000000000000000000
            000007FFFFFFFFFF0000FFFFFFFFFFC000000000000000000000000000000000
            00000000000007FFFFFFFFFF0000FFFFFFFFFFC0000000000000000000000000
            0000000000000000000003FFFFFFFFFF0000FFFFFFFFFF800000000000000000
            000000000000000000000000000001FFFFFFFFFF0000FFFFFFFFFF0000000000
            00000000000000000000000000000000000001FFFFFFFFFF5A00FFFFFFFFFF00
            0000000000000000000000000000000000000000000000FFFFFFFFFF6700FFFF
            FFFFFE000000000000000000000000000000000000000000000000FFFFFFFFFF
            0000FFFFFFFFFE0000000000000000000000000000000000000000000000007F
            FFFFFFFF0000FFFFFFFFFC000000000000000000000000000000000000000000
            0000007FFFFFFFFF0000FFFFFFFFFC0000000000000000000000000000000000
            000000000000003FFFFFFFFF0000FFFFFFFFF800000000000000000000000000
            00000000000000000000001FFFFFFFFF0000FFFFFFFFF0000000000000000000
            0000000000000000000000000000001FFFFFFFFF0000FFFFFFFFF00000000000
            000000000000000000000000000000000000000FFFFFFFFF0000FFFFFFFFF000
            00000000000000000000000000000000000000000000000FFFFFFFFF0000FFFF
            FFFFE000000000000000000000000000000000000000000000000007FFFFFFFF
            0000FFFFFFFFC000000000000000000000000000000000000000000000000007
            FFFFFFFF0000FFFFFFFFC0000000000000000000000000000000000000000000
            00000003FFFFFFFF0000FFFFFFFFC00000000000000000000000000000000000
            0000000000000003FFFFFFFF0000FFFFFFFF8000000000000000000000000000
            000000000000000000000001FFFFFFFF0000FFFFFFFF00000000000000000000
            00000000000000000000000000000001FFFFFFFF0000FFFFFFFF000000000000
            0000000000000000000000000000000000000000FFFFFFFF0000FFFFFFFE0000
            0000000000000000000000000000000000000000000000007FFFFFFF0000FFFF
            FFFE00000000000000000000000000000000000000000000000000007FFFFFFF
            FF00FFFFFFFC0000000000000000000000000000000000000000000000000000
            7FFFFFFFFFFFFFFFFFFC00000000000000000000000000000000000000000000
            000000003FFFFFFFFFFFFFFFFFFC000000000000000000000000000000000000
            00000000000000003FFFFFFF0000FFFFFFF80000000000000000000000000000
            0000000000000000000000003FFFFFFFFFFFFFFFFFF000000000000000000000
            000000000000000000000000000000001FFFFFFF0000FFFFFFF0000000000000
            00000000000000000000000000000000000000001FFFFFFFFFFFFFFFFFF00000
            0000000000000000000000000000000000000000000000000FFFFFFFFFFFFFFF
            FFF000000000000000000000000000000000000000000000000000000FFFFFFF
            FFFFFFFFFFE00000000000000000000000000000000000000000000000000000
            0FFFFFFFF6F6FFFFFFE000000000000000000000000000000000000000000000
            000000000FFFFFFFF6F6FFFFFFC0000000000000000000000000000000000000
            000000000000000007FFFFFFF6F6FFFFFFC00000000000000000000000000000
            00000000000000000000000007FFFFFFF6F6FFFFFFC000000000000000000000
            0000000000000000000000000000000003FFFFFFF6F6FFFFFF80000000000000
            000000000000000000000000000000000000000003FFFFFFF6F6FFFFFF800000
            00000000000000000000000000000000000000000000000003FFFFFF0000FFFF
            FF80000000000000000000000000000000000000000000000000000001FFFFFF
            FFFFFFFFFF000000000000000000000000000000000000000000000000000000
            01FFFFFFFFFFFFFFFF0000000000000000000000000000000000000000000000
            0000000000FFFFFF0000FFFFFF00000000000000000000000000000000000000
            000000000000000000FFFFFFFFFFFFFFFE000000000000000000000000000000
            00000000000000000000000000FFFFFF0000FFFFFE0000000000000000000000
            0000000000000000000000000000000000FFFFFFFFFFFFFFFE00000000000000
            000000000000000000000000000000000000000000FFFFFFFFFFFFFFFE000000
            000000000000000000000000000000000000000000000000007FFFFFF6F6FFFF
            FC000000000000000000000000000000000000000000000000000000007FFFFF
            F6F6FFFFFC000000000000000000000000000000000000000000000000000000
            003FFFFFF6F6FFFFFC0000000000000000000000000000000000000000000000
            00000000003FFFFFF6F6FFFFF800000000000000000000000000000000000000
            0000000000000000003FFFFFF6F6FFFFF8000000000000000000000000000000
            000000000000000000000000003FFFFFF6F6FFFFF80000000000000000000000
            00000000000000000000000000000000003FFFFF0404FFFFF800000000000000
            0000000000000000000000000000000000000000001FFFFFFFFFFFFFF0000000
            000000000000000000000000000000000000000000000000001FFFFFFFFFFFFF
            F0000000000000000000000000000000000000000000000000000000000FFFFF
            0000FFFFF0000000000000000000000000000000000000000000000000000000
            000FFFFF0000FFFFE00000000000000000000000000000000000000000000000
            00000000000FFFFF0000FFFFE0000000000000000000001C0000000000007F00
            0000000000000000000FFFFF0000FFFFE00000000000000000001FFC00000000
            00007FFE00000000000000000007FFFFFFFFFFFFE0000000000000000003FFFC
            0000000000007FFFC0000000000000000007FFFFFFFFFFFFC000000000000000
            000FFFFC0000000000007FFFF0000000000000000007FFFFF6F6FFFFC0000000
            00000000003FFFFC0000000000007FFFF8000000000000000003FFFFF6F6FFFF
            C00000000000000000FFFFFC0000000000007FFFFE000000000000000003FFFF
            F6F6FFFF800000000000000003FFFFFC0000000000007FFFFF80000000000000
            0003FFFFF6F6FFFF80000000000000000FFFFFFC0000000000007FFFFFE00000
            000000000003FFFFF6F6FFFF80000000000000003FFFFFFC0000000000007FFF
            FFF80000000000000001FFFFF6F6FFFF80000000000000007FFFFFFC00000000
            00007FFFFFFC0000000000000001FFFF00FFFFFF0000000000000000FFFFFFFC
            0000000000007FFFFFFE0000000000000001FFFFFFFFFFFF0000000000000001
            FFFFFFFC0000000000007FFFFFFF0000000000000000FFFFFFFFFFFF00000000
            00000007FFFFFFFC0000000000007FFFFFFFC000000000000000FFFF0000FFFE
            000000000000000FFFFFFFFC0000000000007FFFFFFFE000000000000000FFFF
            FFFFFFFE000000000000001FFFFFFFFC0000000000007FFFFFFFF00000000000
            0000FFFF0000FFFE000000000000003FFFFFFFFC0000000000007FFFFFFFF800
            000000000000FFFFFFFFFFFE000000000000007FFFFFFFFC0000000000007FFF
            FFFFFC000000000000007FFFFFFFFFFE000000000000007FFFFFFFFC00000000
            00007FFFFFFFFE000000000000007FFFFFFFFFFC00000000000001FFFFFFFFFC
            0000000000007FFFFFFFFF000000000000007FFFF6F6FFFC00000000000003FF
            FFFFFFFC0000000000007FFFFFFFFF800000000000003FFFF6F6FFFC00000000
            000007FFFFFFFFFC0000000000007FFFFFFFFFC00000000000003FFFF6F6FFF8
            0000000000000FFFFFFFFFFC0000000000007FFFFFFFFFE00000000000003FFF
            F6F6FFF80000000000001FFFFFFFFFFC0000000000007FFFFFFFFFF000000000
            00003FFFF6F6FFF80000000000001FFFFFFFFFFC0000000000007FFFFFFFFFF8
            0000000000003FFFF6F6FFF80000000000003FFFFFFFFFFC0000000000007FFF
            FFFFFFFC0000000000003FFF0000FFF80000000000007FFFFFFFFFFC00000000
            00007FFFFFFFFFFE0000000000001FFFFFFFFFF8000000000000FFFFFFFFFFFC
            0000000000007FFFFFFFFFFE0000000000001FFFFFFFFFF0000000000001FFFF
            FFFFFFFC0000000000007FFFFFFFFFFF0000000000001FFF0000FFF000000000
            0001FFFFFFFFFFFC0000000000007FFFFFFFFFFF8000000000001FFFFFFFFFF0
            000000000003FFFFFFFFFFFC0000000000007FFFFFFFFFFFC000000000000FFF
            0000FFF0000000000007FFFFFFFFFFFC0000000000007FFFFFFFFFFFC0000000
            00000FFFFFFFFFE000000000000FFFFFFFFFFFFC0000000000007FFFFFFFFFFF
            E000000000000FFFFFFFFFE000000000001FFFFFFFFFFFFC0000000000007FFF
            FFFFFFFFF000000000000FFFF6F6FFE000000000001FFFFFFFFFFFFC00000000
            00007FFFFFFFFFFFF800000000000FFFF6F6FFE000000000003FFFFFFFFFFFFC
            0000000000007FFFFFFFFFFFF800000000000FFFF6F6FFE000000000003FFFFF
            FFFFFFFC0000000000007FFFFFFFFFFFFC00000000000FFFF6F6FFE000000000
            007FFFFFFFFFFFFC0000000000007FFFFFFFFFFFFC000000000007FFF6F6FFE0
            0000000000FFFFFFFFFFFFFC0000000000007FFFFFFFFFFFFE000000000007FF
            F6F6FFC00000000000FFFFFFFFFFFFFC0000000000007FFFFFFFFFFFFE000000
            000007FF0000FFC00000000001FFFFFFFFFFFFFC0000000000007FFFFFFFFFFF
            FF000000000007FFFFFFFFC00000000001FFFFFFFFFFFFFC0000000000007FFF
            FFFFFFFFFF800000000003FFFFFFFFC00000000003FFFFFFFFFFFFFC00000000
            00007FFFFFFFFFFFFF800000000003FF0000FFC00000000007FFFFFFFFFFFFFC
            0000000000007FFFFFFFFFFFFFC00000000003FF0000FF800000000007FFFFFF
            FFFFFFFC0000000000007FFFFFFFFFFFFFC00000000003FF0000FF8000000000
            0FFFFFFFFFFFFFFC0000000000007FFFFFFFFFFFFFE00000000003FF0000FF80
            000000000FFFFFFFFFFFFFFC0000000000007FFFFFFFFFFFFFF00000000003FF
            FFFFFF80000000001FFFFFFFFFFFFFFC0000000000007FFFFFFFFFFFFFF00000
            000003FFFFFFFF80000000003FFFFFFFFFFFFFFC0000000000007FFFFFFFFFFF
            FFF80000000003FFF6F6FF80000000003FFFFFFFFFFFFFFC0000000000007FFF
            FFFFFFFFFFF80000000001FFF6F6FF80000000003FFFFFFFFFFFFFFC00000000
            00007FFFFFFFFFFFFFFC0000000001FFF6F6FF80000000007FFFFFFFFFFFFFFC
            0000000000007FFFFFFFFFFFFFFE0000000001FFF6F6FF0000000000FFFFFFFF
            FFFFFFFC0000000000007FFFFFFFFFFFFFFE0000000001FFF6F6FF0000000000
            FFFFFFFFFFFFFFF80000000000001FFFFFFFFFFFFFFF0000000001FFF6F6FF00
            00000001FFFFFFFFFFFFFF8000000000000003FFFFFFFFFFFFFF0000000000FF
            0000FF0000000001FFFFFFFFFFFFFC00000000000000007FFFFFFFFFFFFF8000
            000000FFFFFFFE0000000003FFFFFFFFFFFFF000000000000000001FFFFFFFFF
            FFFF8000000000FFFFFFFE0000000003FFFFFFFFFFFFC0000000000000000003
            FFFFFFFFFFFFC000000000FF0000FE0000000007FFFFFFFFFFFF000000000000
            00000001FFFFFFFFFFFFC000000000FFFFFFFE000000000FFFFFFFFFFFFC0000
            00000000000000007FFFFFFFFFFFE000000000FF0000FE000000000FFFFFFFFF
            FFF8000000000000000000003FFFFFFFFFFFE000000000FFFFFFFE000000000F
            FFFFFFFFFFF0000000000000000000001FFFFFFFFFFFF0000000007FFFFFFE00
            0000001FFFFFFFFFFFE00000000000000000000007FFFFFFFFFFF0000000007F
            FFFFFC000000003FFFFFFFFFFF800000000000000000000003FFFFFFFFFFF800
            0000007FF6F6FC000000003FFFFFFFFFFF000000000000000000000001FFFFFF
            FFFFF8000000007FF6F6FC000000007FFFFFFFFFFE0000000000000000000000
            00FFFFFFFFFFFC000000007FF6F6FC000000007FFFFFFFFFFC00000000000000
            00000000007FFFFFFFFFFE000000003FF6F6FC00000000FFFFFFFFFFF8000000
            0000000000000000003FFFFFFFFFFE000000003FF6F6FC00000000FFFFFFFFFF
            F00000000000000000000000001FFFFFFFFFFE000000003FF6F6F800000001FF
            FFFFFFFFE00000000000000000000000000FFFFFFFFFFF000000003F0000F800
            000001FFFFFFFFFFC000000000000000000000000007FFFFFFFFFF800000003F
            FFFFF800000003FFFFFFFFFFC000000000000000000000000007FFFFFFFFFF80
            0000003FFFFFF800000003FFFFFFFFFF8000000000000000000000000003FFFF
            FFFFFF800000003F0000F800000003FFFFFFFFFF000000000000000000000000
            0001FFFFFFFFFFC00000003FFFFFF800000007FFFFFFFFFF0000000000000000
            000000000001FFFFFFFFFFC00000003F0000F80000000FFFFFFFFFFE00000000
            00000000000000000000FFFFFFFFFFE00000001FFFFFF80000000FFFFFFFFFFE
            0000000000000000000000000000FFFFFFFFFFE00000001FFFFFF80000000FFF
            FFFFFFFC00000000000000000000000000007FFFFFFFFFF00000001FF6F6F800
            00001FFFFFFFFFFC00000000000000000000000000003FFFFFFFFFF00000001F
            F6F6F00000001FFFFFFFFFF800000000000000000000000000003FFFFFFFFFF8
            0000001FF6F6F00000003FFFFFFFFFF800000000000000000000000000003FFF
            FFFFFFF80000001FF6F6F00000003FFFFFFFFFF8000000000000000000000000
            00001FFFFFFFFFF80000001FF6F6F00000003FFFFFFFFFF00000000000000000
            0000000000001FFFFFFFFFFC0000000FF6F6F00000007FFFFFFFFFF000000000
            000000000000000000000FFFFFFFFFFC0000000F0000F00000007FFFFFFFFFF0
            00000000000000000000000000000FFFFFFFFFFE0000000FFFFFF0000000FFFF
            FFFFFFE000000000000000000000000000000FFFFFFFFFFE0000000FFFFFE000
            0000FFFFFFFFFFE000000000000000000000000000000FFFFFFFFFFE0000000F
            0000E0000001FFFFFFFFFFE000000000000000000000000000000FFFFFFFFFFF
            0000000F0000E0000001FFFFFFFFFFE0000000000000000000000000000007FF
            FFFFFFFF8000000F0000E0000001FFFFFFFFFFE0000000000000000000000000
            000007FFFFFFFFFF8000000F0000E0000003FFFFFFFFFFE00000000000000000
            00000000000007FFFFFFFFFF8000000FFFFFE0000003FFFFFFFFFFC000000000
            0000000000000000000007FFFFFFFFFF8000000FFFFFE0000003FFFFFFFFFFC0
            000000000000000000000000000007FFFFFFFFFFC000000FF6F6E0000007FFFF
            FFFFFFC0000000000000000000000000000007FFFFFFFFFFC0000007F6F6E000
            000FFFFFFFFFFFC0000000000000000000000000000007FFFFFFFFFFE0000007
            F6F6E000000FFFFFFFFFFFC0000000000000000000000000000007FFFFFFFFFF
            E0000007F6F6C000000FFFFFFFFFFFC0000000000000000000000000000007FF
            FFFFFFFFE0000007F6F6C000000FFFFFFFFFFFC0000000000000000000000000
            000007FFFFFFFFFFF0000007F6F6C000001FFFFFFFFFFFC00000000000000000
            00000000000007FFFFFFFFFFF00000070000C000001FFFFFFFFFFFC000000000
            0000000000000000000003FFFFFFFFFFF0000007FFFFC000003FFFFFFFFFFFC0
            0000000000000FF000000000000003FFFFFFFFFFF8000007FFFFC000003FFFFF
            FFFFFFC0000000000000FFFF00000000000003FFFFFFFFFFF80000070000C000
            003FFFFFFFFFFFC0000000000003FFFFC0000000000003FFFFFFFFFFFC000007
            FFFFC000007FFFFFFFFFFFC000000000000FFFFFE0000000000003FFFFFFFFFF
            FC0000070000C000007FFFFFFFFFFFC000000000001FFFFFF0000000000003FF
            FFFFFFFFFC000007FFFFC000007FFFFFFFFFFFC000000000001FFFFFF8000000
            000003FFFFFFFFFFFC000007FFFFC00000FFFFFFFFFFFFC000000000003FFFFF
            F8000000000003FFFFFFFFFFFE000007FFFFC00000FFFFFFFFFFFFC000000000
            003FFFFFF8000000000003FFFFFFFFFFFE000007F6F6800000FFFFFFFFFFFFC0
            00000000003FFFFFF8000000000003FFFFFFFFFFFF000003F6F6800001FFFFFF
            FFFFFFC000000000003FFFFFF8000000000003FFFFFFFFFFFF000003F6F68000
            01FFFFFFFFFFFFC000000000003FFFFFF8000000000003FFFFFFFFFFFF000003
            F6F6800001FFFFFFFFFFFFC000000000003FFFFFF8000000000003FFFFFFFFFF
            FF800003F6F6800003FFFFFFFFFFFFC000000000003FFFFFF8000000000003FF
            FFFFFFFFFF800003F6F6800003FFFFFFFFFFFFC000000000003FFFFFF8000000
            000003FFFFFFFFFFFFC000030000800003FFFFFFFFFFFFC000000000003FFFFF
            F8000000000003FFFFFFFFFFFFC00003FFFF800007FFFFFFFFFFFFC000000000
            003FFFFFF8000000000003FFFFFFFFFFFFC00003FFFF800007FFFFFFFFFFFFC0
            00000000003FFFFFF8000000000003FFFFFFFFFFFFC000030000800007FFFFFF
            FFFFFFC000000000003FFFFFF8000000000003FFFFFFFFFFFFE00003FFFF8000
            0FFFFFFFFFFFFFC000000000003FFFFFF8000000000003FFFFFFFFFFFFE00003
            000080000FFFFFFFFFFFFFC000000000003FFFFFF8000000000003FFFFFFFFFF
            FFF00003FFFF80000FFFFFFFFFFFFFC000000000003FFFFFF8000000000003FF
            FFFFFFFFFFF00003FFFF80001FFFFFFFFFFFFFC000000000003FFFFFF8000000
            000003FFFFFFFFFFFFF00003F6F680001FFFFFFFFFFFFFC000000000003FFFFF
            F8000000000003FFFFFFFFFFFFF00003F6F680001FFFFFFFFFFFFFC000000000
            003FFFFFF8000000000003FFFFFFFFFFFFF80003F6F680003FFFFFFFFFFFFFC0
            00000000003FFFFFF8000000000003FFFFFFFFFFFFF80003F6F680003FFFFFFF
            FFFFFFC000000000003FFFFFF8000000000003FFFFFFFFFFFFFC0003F6F68000
            7FFFFFFFFFFFFFC000000000003FFFFFF8000000000003FFFFFFFFFFFFFC0003
            F6F680007FFFFFFFFFFFFFC000000000003FFFFFF8000000000003FFFFFFFFFF
            FFFC000300FF80007FFFFFFFFFFFFFC000000000003FFFFFF8000000000003FF
            FFFFFFFFFFFC0003FFFF80007FFFFFFFFFFFFFC000000000003FFFFFF8000000
            000003FFFFFFFFFFFFFE0003FFFF8000FFFFFFFFFFFFFFC000000000003FFFFF
            F8000000000003FFFFFFFFFFFFFE000300008000FFFFFFFFFFFFFFC000000000
            003FFFFFF8000000000003FFFFFFFFFFFFFF000300008000FFFFFFFFFFFFFFC0
            00000000003FFFFFF8000000000003FFFFFFFFFFFFFF000300008001FFFFFFFF
            FFFFFFC000000000003FFFFFF8000000000003FFFFFFFFFFFFFF000300008001
            FFFFFFFFFFFFFFC000000000003FFFFFF8000000000003FFFFFFFFFFFFFF0003
            FFFF8001FFFFFFFFFFFFFFC000000000003FFFFFF8000000000003FFFFFFFFFF
            FFFF8001FFFF8003FFFFFFFFFFFFFFC000000000003FFFFFF8000000000003FF
            FFFFFFFFFFFF8001F6F68003FFFFFFFFFFFFFFC000000000003FFFFFF8000000
            000003FFFFFFFFFFFFFFC001F6F68003FFFFFFFFFFFFFFC000000000003FFFFF
            F8000000000003FFFFFFFFFFFFFFC001F6F68007FFFFFFFFFFFFFFC000000000
            003FFFFFF8000000000003FFFFFFFFFFFFFFC001F6F68007FFFFFFFFFFFFFFC0
            00000000003FFFFFF8000000000003FFFFFFFFFFFFFFC001F6F68007FFFFFFFF
            FFFFFFC000000000003FFFFFF8000000000003FFFFFFFFFFFFFFC001F6F68007
            FFFFFFFFFFFFFFC000000000003FFFFFF8000000000003FFFFFFFFFFFFFFE001
            0000800FFFFFFFFFFFFFFFC000000000003FFFFFF8000000000003FFFFFFFFFF
            FFFFE001FFFF800FFFFFFFFFFFFFFFC000000000003FFFFFF8000000000003FF
            FFFFFFFFFFFFF001FFFF801FFFFFFFFFFFFFFFC000000000003FFFFFF8000000
            000003FFFFFFFFFFFFFFF0010000801FFFFFFFFFFFFFFFC000000000003FFFFF
            F8000000000003FFFFFFFFFFFFFFF001FFFF801FFFFFFFFFFFFFFFC000000000
            003FFFFFF8000000000003FFFFFFFFFFFFFFF0010000801FFFFFFFFFFFFFFFC0
            00000000003FFFFFF8000000000003FFFFFFFFFFFFFFF801FFFF803FFFFFFFFF
            FFFFFFC000000000003FFFFFF8000000000003FFFFFFFFFFFFFFF801FFFF803F
            FFFFFFFFFFFFFFC000000000003FFFFFF8000000000003FFFFFFFFFFFFFFF801
            FFFF803FFFFFFFFFFFFFFFC000000000003FFFFFF8000000000003FFFFFFFFFF
            FFFFFC01F6F6807FFFFFFFFFFFFFFFC000000000003FFFFFF8000000000003FF
            FFFFFFFFFFFFFC01F6F6007FFFFFFFFFFFFFFFC000000000003FFFFFF8000000
            000003FFFFFFFFFFFFFFFC01F6F6007FFFFFFFFFFFFFFFC000000000003FFFFF
            F8000000000003FFFFFFFFFFFFFFFC01F6F6007FFFFFFFFFFFFFFFC000000000
            003FFFFFF8000000000003FFFFFFFFFFFFFFFE01F6F600FFFFFFFFFFFFFFFFC0
            00000000003FFFFFF8000000000003FFFFFFFFFFFFFFFE01F6F600FFFFFFFFFF
            FFFFFFC000000000003FFFFFF8000000000003FFFFFFFFFFFFFFFE01000000FF
            FFFFFFFFFFFFFFC000000000003FFFFFF8000000000003FFFFFFFFFFFFFFFF01
            FFFF01FFFFFFFFFFFFFFFFC000000000003FFFFFF8000000000003FFFFFFFFFF
            FFFFFF01FFFF01FFFFFFFFFFFFFFFFC000000000003FFFFFF8000000000003FF
            FFFFFFFFFFFFFF01000001FFFFFFFFFFFFFFFFC000000000003FFFFFF8000000
            000003FFFFFFFFFFFFFFFF01FFFF01FFFFFFFFFFFFFFFFC000000000003FFFFF
            F8000000000003FFFFFFFFFFFFFFFF81000001FFFFFFFFFFFFFFFFC000000000
            003FFFFFF8000000000003FFFFFFFFFFFFFFFF81FFFF03FFFFFFFFFFFFFFFFC0
            00000000003FFFFFF8000000000003FFFFFFFFFFFFFFFF81FFFF03FFFFFFFFFF
            FFFFFFC000000000003FFFFFF8000000000003FFFFFFFFFFFFFFFFC1F6F603FF
            FFFFFFFFFFFFFFC000000000003FFFFFF8000000000003FFFFFFFFFFFFFFFFC1
            F6F607FFFFFFFFFFFFFFFFC000000000003FFFFFF8000000000003FFFFFFFFFF
            FFFFFFC1F6F607FFFFFFFFFFFFFFFFC000000000003FFFFFF8000000000003FF
            FFFFFFFFFFFFFFC1F6F607FFFFFFFFFFFFFFFFC000000000003FFFFFF8000000
            000003FFFFFFFFFFFFFFFFE1F6F607FFFFFFFFFFFFFFFFC000000000003FFFFF
            F8000000000003FFFFFFFFFFFFFFFFE1F6F60FFFFFFFFFFFFFFFFFC000000000
            003FFFFFF8000000000003FFFFFFFFFFFFFFFFE1FF000FFFFFFFFFFFFFFFFFC0
            00000000003FFFFFF8000000000003FFFFFFFFFFFFFFFFF1FFFF0FFFFFFFFFFF
            FFFFFFC000000000003FFFFFF8000000000003FFFFFFFFFFFFFFFFF1FFFF1FFF
            FFFFFFFFFFFFFFC000000000003FFFFFF8000000000003FFFFFFFFFFFFFFFFF1
            00001FFFFFFFFFFFFFFFFFC000000000003FFFFFF8000000000003FFFFFFFFFF
            FFFFFFF100001FFFFFFFFFFFFFFFFFC000000000003FFFFFF8000000000003FF
            FFFFFFFFFFFFFFF100001FFFFFFFFFFFFFFFFFC000000000003FFFFFF8000000
            000003FFFFFFFFFFFFFFFFF900003FFFFFFFFFFFFFFFFFC000000000003FFFFF
            F8000000000003FFFFFFFFFFFFFFFFF9FFFF3FFFFFFFFFFFFFFFFFC000000000
            003FFFFFF8000000000003FFFFFFFFFFFFFFFFF9FF003FFFFFFFFFFFFFFFFFC0
            00000000003FFFFFF8000000000003FFFFFFFFFFFFFFFFF9F6F67FFFFFFFFFFF
            FFFFFFC000000000003FFFFFF8000000000003FFFFFFFFFFFFFFFFFDF6F67FFF
            FFFFFFFFFFFFFFC000000000003FFFFFF8000000000003FFFFFFFFFFFFFFFFFD
            F6F67FFFFFFFFFFFFFFFFFC000000000003FFFFFF8000000000003FFFFFFFFFF
            FFFFFFFDF6F67FFFFFFFFFFFFFFFFFC000000000003FFFFFF8000000000003FF
            FFFFFFFFFFFFFFFFF6F6FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
            FFFFFFFFFFFFFFFFFFFFFFFFF6F6220000000C000000FFFFFFFF180000000C00
            0000FFFFFF00190000000C00000000000000520000007001000003000000D4FE
            FFFF910000000000000000000000900100000000000207000012530079006D00
            62006F006C000000000000000000000000000000000000000000000000000000
            00000000000000000000000000000000000000000000000000000000917C4006
            150000901C0000001500400615005CBD1200B29E917C4006150000901C000030
            00000000150000901C00000000000000000000C01C00000000001000EF060000
            000000C01C00F08F1C000000000000000000000000002CBE12007909917C4009
            917C080615005D00917CD0B91C0024901C0008901C0000000000000000000090
            1C00D6B1F1779FB1F177A4242189020000000300000013020000B20200000000
            000000000000100100002701000054901C0024901C00000000000000CC003000
            00007C290000D0290000D0B91C0024901C003400910300901C00B00C2F040000
            00000000000000901C00D0290000000015000000000000000000647600080000
            0000250000000C00000003000000520000007001000004000000140000000900
            00000000000000000000BC020000000000CC0702022253007900730074006500
            6D00000000000000000000000000000000000000000000000000000000000000
            0000000000000000000000000000000000000000000000000000000000000000
            0000000000000000917C4006150000901C0000001500400615005CBD1200B29E
            917C4006150000901C00003000000000150000901C00000000000000000000C0
            1C00000000001000EF060000000000C01C00F08F1C0000000000000000000000
            00002CBE12007909917C4009917C080615005D00917C00001C0024901C000890
            1C00000000000000000000901C00D6B1F1779FB1F177A4242189020000000300
            000013020000B20200000000000000000000100100000000000054901C002490
            1C00000000000000CC00300000007C290000D0290000D0B91C0024901C003400
            910300901C00B00C2F04000000000000000000901C0064760008000000002500
            00000C00000004000000120000000C00000001000000160000000C0000001800
            0000180000000C00000000000000250000000C00000003000000540000005400
            00007500000047000000A00000008D00000001000000EDCC793FA49A503FF701
            00009D020000010000004C000000000000000000000000000000FFFFFFFFFFFF
            FFFF50000000D2F00000BE000000250000000C00000004000000250000000C00
            000007000080250000000C00000000000080300000000C0000000F0000802500
            00000C000000010000004B000000100000000000000005000000280000000C00
            000003000000280000000C00000004000000250000000C000000000000802500
            00000C00000007000080220000000C000000FFFFFFFF250000000C0000000D00
            0080280000000C00000002000000220000000C000000FFFFFFFF220000000C00
            0000FFFFFFFF460000007000000064000000454D462B2C400000240000001800
            00006B9C6C3E00000080000000804B23453E7FAA6A3F00ABAABE2A4000002400
            0000180000000000803F00000080000000800000803F00000080000000802140
            07000C00000000000000044000000C0000000000000046000000140000000800
            00004744494303000000250000000C0000000E000080250000000C0000000E00
            0080460000003400000028000000454D462B2A40000024000000180000000000
            803F00000080000000800000803F000000800000008021000000080000006200
            00000C000000010000004C000000640000000100000000000000B40000009200
            00000100000000000000B4000000930000002900AA0000000000000000000000
            803F00000000000000000000803F000000000000000000000000000000000000
            0000000000000000000000000000220000000C000000FFFFFFFF460000001C00
            000010000000454D462B024000000C000000000000000E000000140000000000
            00001000000014000000}
          HightQuality = False
          Transparent = False
          TransparentColor = clWhite
        end
        object Memo5: TfrxMemoView
          Left = 64.25201
          Top = 7.55906
          Width = 219.21274
          Height = 37.7953
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -27
          Font.Name = 'Arial'
          Font.Style = []
          Memo.UTF8 = (
            #1056#1106#1056#1115' "'#1056#1114#1056#1109#1057#1026#1056#1105#1056#1109#1056#1029'"')
          ParentFont = False
        end
        object SysMemo1: TfrxSysMemoView
          Left = 574.48856
          Top = 7.55906
          Width = 132.28355
          Height = 30.23624
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -21
          Font.Name = 'Arial'
          Font.Style = []
          Memo.UTF8 = (
            '[DATE]')
          ParentFont = False
        end
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
