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
    IniFile = '\Software\Fast Reports'
    PreviewOptions.Buttons = [pbPrint, pbLoad, pbSave, pbExport, pbZoom, pbFind, pbOutline, pbPageSetup, pbTools, pbEdit, pbNavigator, pbExportQuick]
    PreviewOptions.Zoom = 1
    PrintOptions.Printer = 'Default'
    PrintOptions.PrintOnSheet = 0
    ReportOptions.CreateDate = 40525.6070809722
    ReportOptions.LastChange = 45408.5762787037
    ScriptLanguage = 'BasicScript'
    ScriptText.Strings = (
      '    '
      ''
      'sub PageHeader1OnBeforePrint(Sender)'
      '     '
      '  '
      'IF <Spc."Tomax"><>"no" Then Memo42.Text=<Spc."Tomax">'
      'IF <Spc."Tomin"><>"no" Then Memo43.Text=<Spc."Tomin">'
      '  '
      'IF <Spc."Rmaxmax"><>"no" Then Memo46.Text=<Spc."Rmaxmax">'
      'IF <Spc."Rmaxmin"><>"no" Then Memo47.Text=<Spc."Rmaxmin">'
      '  '
      'IF <Spc."Mmax"><>"no" Then Memo50.Text=<Spc."Mmax">'
      'IF <Spc."Mmin"><>"no" Then Memo51.Text=<Spc."Mmin">'
      '  '
      
        'IF <Spc."Fmaxmax"><>"no" Then Memo48.Text=<Spc."Fmaxmax">       ' +
        '     '
      'IF <Spc."Fmaxmin"><>"no" Then Memo49.Text=<Spc."Fmaxmin">'
      '  '
      'IF <Spc."C0max"><>"no" Then  Memo54.Text=<Spc."C0max">'
      'IF <Spc."C0min"><>"no" Then Memo55.Text=<Spc."C0min">'
      '  '
      'IF <Spc."Cqmax"><>"no" Then  Memo59.Text=<Spc."Cqmax">'
      'IF <Spc."Cqmin"><>"no" Then Memo60.Text=<Spc."Cqmin">'
      ''
      'IF <Spc."Fmax"><>"no" Then  Memo29.Text=<Spc."Fmax">'
      'IF <Spc."Fmin"><>"no" Then Memo38.Text=<Spc."Fmin">    '
      '  '
      ''
      'end sub  '
      ''
      ''
      ''
      '  ')
    Left = 152
    Top = 16
    Datasets = <
      item
        DataSet = Dopusk
        DataSetName = 'Dopusk'
      end
      item
        DataSet = Lianoz
        DataSetName = 'Lianoz'
      end
      item
        DataSet = Spc
        DataSetName = 'Spc'
      end
      item
        DataSet = TU_Parameters
        DataSetName = 'TU_Parameters'
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
      OnBeforePrint = 'Page1OnBeforePrint'
      object ReportTitle1: TfrxReportTitle
        Height = 177.63791
        Top = 18.89765
        Width = 718.1107
        AllowSplit = True
        object frxDBDataset1Spc: TfrxMemoView
          Left = 120.94496
          Top = 64.25201
          Width = 430.86642
          Height = 18.89765
          ShowHint = False
          DataSetName = 'frxDBDataset1'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = [fsBold, fsUnderline]
          Memo.UTF8 = (
            '[Lianoz."Spc"]')
          ParentFont = False
        end
        object Memo4: TfrxMemoView
          Left = 7.55906
          Top = 90.70872
          Width = 34.01577
          Height = 18.89765
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = []
          Memo.UTF8 = (
            #1056#1118#1056#1032)
          ParentFont = False
        end
        object frxDBDataset2TU: TfrxMemoView
          Left = 56.69295
          Top = 90.70872
          Width = 495.11843
          Height = 18.89765
          ShowHint = False
          DataSetName = 'frxDBDataset2'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = [fsBold, fsUnderline]
          Memo.UTF8 = (
            '[Spc."TU"]')
          ParentFont = False
        end
        object Memo5: TfrxMemoView
          Left = 7.55906
          Top = 147.40167
          Width = 196.53556
          Height = 18.89765
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = []
          Memo.UTF8 = (
            #1056#152#1056#1029#1057#8218#1056#181#1057#1026#1056#1030#1056#176#1056#187' '#1057#8218#1056#181#1056#1112#1056#1111#1056#181#1057#1026#1056#176#1057#8218#1057#1107#1057#1026)
          ParentFont = False
        end
        object Memo1: TfrxMemoView
          Left = 7.55906
          Top = 117.16543
          Width = 52.91342
          Height = 18.89765
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          Memo.UTF8 = (
            #1056#1114#1056#1038#1056#1113)
          ParentFont = False
        end
        object frxDBDataset1Msk: TfrxMemoView
          Left = 109.60637
          Top = 117.16543
          Width = 188.9765
          Height = 18.89765
          ShowHint = False
          DataSetName = 'frxDBDataset1'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          Memo.UTF8 = (
            '[Lianoz."Msk"]')
          ParentFont = False
        end
        object frxDBDataset1Intervalfg: TfrxMemoView
          Left = 222.99227
          Top = 147.40167
          Width = 272.12616
          Height = 18.89765
          ShowHint = False
          DataSetName = 'frxDBDataset1'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = [fsBold, fsUnderline]
          Memo.UTF8 = (
            '[Lianoz."Intervalfg"]')
          ParentFont = False
        end
        object BarCode1: TfrxBarCodeView
          Left = 563.14997
          Width = 123
          Height = 49.13389
          ShowHint = False
          BarType = bcCode128A
          Expression = '123'
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
          Left = 166.29932
          Top = 30.23624
          Width = 374.17347
          Height = 22.67718
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -16
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          Memo.UTF8 = (
            
              #1056#1111#1057#1026#1056#1105#1056#181#1056#1112#1056#1109'-'#1057#1027#1056#1169#1056#176#1057#8218#1056#1109#1057#8225#1056#1029#1057#8249#1057#8230' '#1056#1105#1057#1027#1056#1111#1057#8249#1057#8218#1056#176#1056#1029#1056#1105#1056#8470' '#1057#1026#1056#181#1056#183#1056#1109#1056#1029#1056#176#1057 +
              #8218#1056#1109#1057#1026#1056#1109#1056#1030)
          ParentFont = False
        end
        object Memo15: TfrxMemoView
          Left = 7.55906
          Top = 64.25201
          Width = 94.48825
          Height = 18.89765
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          Memo.UTF8 = (
            #1056#152#1056#183#1056#1169#1056#181#1056#187#1056#1105#1057#1039)
          ParentFont = False
        end
        object Memo18: TfrxMemoView
          Left = 3.77953
          Width = 260.78757
          Height = 26.45671
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -19
          Font.Name = 'Arial'
          Font.Style = []
          Memo.UTF8 = (
            #1056#1119#1057#1026#1056#1109#1057#8218#1056#1109#1056#1108#1056#1109#1056#187' '#1074#8222#8211'___________')
          ParentFont = False
        end
        object Memo27: TfrxMemoView
          Left = 272.12616
          Width = 260.78757
          Height = 26.45671
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -19
          Font.Name = 'Arial'
          Font.Style = []
          Memo.UTF8 = (
            #1056#1115#1057#8218'___________')
          ParentFont = False
        end
      end
      object PageHeader1: TfrxPageHeader
        Height = 389.29159
        Top = 219.21274
        Width = 718.1107
        OnBeforePrint = 'PageHeader1OnBeforePrint'
        object Memo6: TfrxMemoView
          Left = 75.5906
          Width = 75.5906
          Height = 181.41744
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8 = (
            #1074#8222#8211' '#1057#1026#1056#181#1056#183#1056#1109#1056#1029#1056#176#1057#8218#1056#1109#1057#1026#1056#176)
          ParentFont = False
          Rotation = 90
          VAlign = vaCenter
        end
        object Memo8: TfrxMemoView
          Left = 234.33086
          Width = 79.37013
          Height = 181.41744
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8 = (
            '[TU_Parameters."Parametr_2_Name"], '#1056#1115#1056#1112'  (T=[Spc."Tpar"]C)')
          ParentFont = False
          Rotation = 90
          VAlign = vaCenter
        end
        object Memo12: TfrxMemoView
          Left = 472.44125
          Width = 83.14966
          Height = 181.41744
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8 = (
            '[TU_Parameters."Parametr_7_Name"], '#1056#1038' ([Lianoz."Intervalfg"])')
          ParentFont = False
          Rotation = 90
          VAlign = vaCenter
        end
        object Memo22: TfrxMemoView
          Left = 555.59091
          Width = 79.37013
          Height = 181.41744
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8 = (
            '[TU_Parameters."Parametr_3_Name"] 10E-6 ([Lianoz."Intervalfg"])')
          ParentFont = False
          Rotation = 90
          VAlign = vaCenter
        end
        object Memo10: TfrxMemoView
          Left = 634.96104
          Width = 83.14966
          Height = 181.41744
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8 = (
            '[TU_Parameters."Parametr_6_Name"], 10E-6'
            '[Lianoz."Intervalfg"]')
          ParentFont = False
          Rotation = 90
          VAlign = vaCenter
        end
        object Memo2: TfrxMemoView
          Left = 151.1812
          Width = 83.14966
          Height = 181.41744
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8 = (
            '[TU_Parameters."Parametr_1_Name"], 10'#1056#8226'-6 (T=[Spc."Tnastr"]C)')
          ParentFont = False
          Rotation = 90
          VAlign = vaCenter
        end
        object Memo39: TfrxMemoView
          Left = 313.70099
          Width = 83.14966
          Height = 181.41744
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8 = (
            '[TU_Parameters."Parametr_4_Name"], '#1056#1111#1056#164'  (T=[Spc."Tc0"]C)')
          ParentFont = False
          Rotation = 90
          VAlign = vaCenter
        end
        object Memo41: TfrxMemoView
          Left = 396.85065
          Width = 75.5906
          Height = 181.41744
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8 = (
            '[TU_Parameters."Parametr_5_Name"], '#1057#8222#1056#164' (T=[Spc."Tcq"]C)')
          ParentFont = False
          Rotation = 90
          VAlign = vaCenter
        end
        object Memo16: TfrxMemoView
          Left = 94.48825
          Top = 181.41744
          Width = 56.69295
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
            #1056#1116#1056#181' '#1056#177#1056#1109#1056#187#1056#181#1056#181)
          ParentFont = False
          VAlign = vaCenter
        end
        object Memo17: TfrxMemoView
          Left = 94.48825
          Top = 200.31509
          Width = 56.69295
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
            #1056#1116#1056#181' '#1056#1112#1056#181#1056#1029#1056#181#1056#181)
          ParentFont = False
          VAlign = vaCenter
        end
        object Memo42: TfrxMemoView
          Left = 234.33086
          Top = 181.41744
          Width = 79.37013
          Height = 18.89765
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = [fsBold, fsItalic]
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          ParentFont = False
          VAlign = vaCenter
        end
        object Memo43: TfrxMemoView
          Left = 234.33086
          Top = 200.31509
          Width = 79.37013
          Height = 18.89765
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = [fsBold, fsItalic]
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          ParentFont = False
          VAlign = vaCenter
        end
        object Memo46: TfrxMemoView
          Left = 472.44125
          Top = 181.41744
          Width = 83.14966
          Height = 18.89765
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = [fsBold, fsItalic]
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          ParentFont = False
          VAlign = vaCenter
        end
        object Memo47: TfrxMemoView
          Left = 472.44125
          Top = 200.31509
          Width = 83.14966
          Height = 18.89765
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = [fsBold, fsItalic]
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          ParentFont = False
          VAlign = vaCenter
        end
        object Memo48: TfrxMemoView
          Left = 555.59091
          Top = 181.41744
          Width = 79.37013
          Height = 18.89765
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = [fsBold, fsItalic]
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          ParentFont = False
          VAlign = vaCenter
        end
        object Memo49: TfrxMemoView
          Left = 555.59091
          Top = 200.31509
          Width = 79.37013
          Height = 18.89765
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = [fsBold, fsItalic]
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          ParentFont = False
          VAlign = vaCenter
        end
        object Memo50: TfrxMemoView
          Left = 634.96104
          Top = 181.41744
          Width = 83.14966
          Height = 18.89765
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = [fsBold, fsItalic]
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          ParentFont = False
          VAlign = vaCenter
        end
        object Memo51: TfrxMemoView
          Left = 634.96104
          Top = 200.31509
          Width = 83.14966
          Height = 18.89765
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = [fsBold, fsItalic]
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          ParentFont = False
          VAlign = vaCenter
        end
        object Memo29: TfrxMemoView
          Left = 151.1812
          Top = 181.41744
          Width = 83.14966
          Height = 18.89765
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = [fsBold, fsItalic]
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          ParentFont = False
          VAlign = vaCenter
        end
        object Memo38: TfrxMemoView
          Left = 151.1812
          Top = 200.31509
          Width = 83.14966
          Height = 18.89765
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = [fsBold, fsItalic]
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          ParentFont = False
          VAlign = vaCenter
        end
        object Memo54: TfrxMemoView
          Left = 313.70099
          Top = 181.41744
          Width = 83.14966
          Height = 18.89765
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = [fsBold, fsItalic]
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          ParentFont = False
          VAlign = vaCenter
        end
        object Memo55: TfrxMemoView
          Left = 313.70099
          Top = 200.31509
          Width = 83.14966
          Height = 18.89765
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = [fsBold, fsItalic]
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          ParentFont = False
          VAlign = vaCenter
        end
        object Memo59: TfrxMemoView
          Left = 396.85065
          Top = 181.41744
          Width = 75.5906
          Height = 18.89765
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = [fsBold, fsItalic]
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          ParentFont = False
          VAlign = vaCenter
        end
        object Memo60: TfrxMemoView
          Left = 396.85065
          Top = 200.31509
          Width = 75.5906
          Height = 18.89765
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = [fsBold, fsItalic]
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          ParentFont = False
          VAlign = vaCenter
        end
        object Memo9: TfrxMemoView
          Width = 75.5906
          Height = 181.41744
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8 = (
            #1074#8222#8211#1074#8222#8211)
          ParentFont = False
          Rotation = 90
          VAlign = vaCenter
        end
        object Memo21: TfrxMemoView
          Top = 181.41744
          Width = 94.48825
          Height = 37.7953
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8 = (
            #1056#1118#1057#1026#1056#181#1056#177#1056#1109#1056#1030#1056#176#1056#1029#1056#1105#1057#1039' '#1056#1108' '#1056#1111#1056#176#1057#1026#1056#176#1056#1112#1056#181#1057#8218#1057#1026#1057#1107)
          ParentFont = False
          VAlign = vaCenter
        end
        object Memo44: TfrxMemoView
          Top = 219.21274
          Width = 151.1812
          Height = 83.14966
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8 = (
            
              #1074#8222#8211' '#1056#1111'.'#1056#1111'. '#1056#1118#1056#181#1057#8230#1056#1029#1056#1105#1057#8225#1056#181#1057#1027#1056#1108#1056#1105#1057#8230' '#1057#8218#1057#1026#1056#181#1056#177#1056#1109#1056#1030#1056#176#1056#1029#1056#1105#1056#8470' '#1056#1118#1056#1032' [TU_' +
              'Parameters."TU"]')
          ParentFont = False
          VAlign = vaCenter
        end
        object Memo45: TfrxMemoView
          Top = 302.3624
          Width = 151.1812
          Height = 86.92919
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8 = (
            
              #1074#8222#8211' '#1056#1111'.'#1056#1111'. '#1056#1112#1056#181#1057#8218#1056#1109#1056#1169#1056#1109#1056#1030' '#1056#1108#1056#1109#1056#1029#1057#8218#1057#1026#1056#1109#1056#187#1057#1039' '#1056#1118#1056#1032'  [TU_Parameters.' +
              '"TU"]')
          ParentFont = False
          VAlign = vaCenter
        end
        object Memo64: TfrxMemoView
          Left = 151.1812
          Top = 219.21274
          Width = 83.14966
          Height = 83.14966
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8 = (
            #1056#1118#1056#1032' [<TU_Parameters."Parametr_1_Norm_P"> ] ')
          ParentFont = False
          Rotation = 90
          VAlign = vaCenter
        end
        object Memo65: TfrxMemoView
          Left = 234.33086
          Top = 219.21274
          Width = 79.37013
          Height = 83.14966
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8 = (
            #1056#1118#1056#1032' [TU_Parameters."Parametr_2_Norm_P"]')
          ParentFont = False
          Rotation = 90
          VAlign = vaCenter
        end
        object Memo66: TfrxMemoView
          Left = 313.70099
          Top = 219.21274
          Width = 83.14966
          Height = 83.14966
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8 = (
            #1056#1118#1056#1032' [TU_Parameters."Parametr_4_Norm_P"]  ')
          ParentFont = False
          Rotation = 90
          VAlign = vaCenter
        end
        object Memo67: TfrxMemoView
          Left = 396.85065
          Top = 219.21274
          Width = 75.5906
          Height = 83.14966
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8 = (
            #1056#1118#1056#1032' [TU_Parameters."Parametr_5_Norm_P"] ')
          ParentFont = False
          Rotation = 90
          VAlign = vaCenter
        end
        object Memo68: TfrxMemoView
          Left = 472.44125
          Top = 219.21274
          Width = 83.14966
          Height = 83.14966
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8 = (
            #1056#1118#1056#1032' [TU_Parameters."Parametr_7_Norm_P"] ')
          ParentFont = False
          Rotation = 90
          VAlign = vaCenter
        end
        object Memo69: TfrxMemoView
          Left = 555.59091
          Top = 219.21274
          Width = 79.37013
          Height = 83.14966
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8 = (
            #1056#1118#1056#1032' [TU_Parameters."Parametr_3_Norm_P"] ')
          ParentFont = False
          Rotation = 90
          VAlign = vaCenter
        end
        object Memo70: TfrxMemoView
          Left = 634.96104
          Top = 219.21274
          Width = 83.14966
          Height = 83.14966
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8 = (
            #1056#1118#1056#1032' [TU_Parameters."Parametr_6_Norm_P"]')
          ParentFont = False
          Rotation = 90
          VAlign = vaCenter
        end
        object Memo72: TfrxMemoView
          Left = 151.1812
          Top = 302.3624
          Width = 83.14966
          Height = 86.92919
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8 = (
            '[TU_Parameters."Parametr_1_Cntrl_P"]')
          ParentFont = False
          Rotation = 90
          VAlign = vaCenter
        end
        object Memo73: TfrxMemoView
          Left = 234.33086
          Top = 302.3624
          Width = 79.37013
          Height = 86.92919
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8 = (
            '[TU_Parameters."Parametr_2_Cntrl_P"]')
          ParentFont = False
          Rotation = 90
          VAlign = vaCenter
        end
        object Memo74: TfrxMemoView
          Left = 313.70099
          Top = 302.3624
          Width = 83.14966
          Height = 86.92919
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8 = (
            '[TU_Parameters."Parametr_4_Cntrl_P"]')
          ParentFont = False
          Rotation = 90
          VAlign = vaCenter
        end
        object Memo75: TfrxMemoView
          Left = 396.85065
          Top = 302.3624
          Width = 75.5906
          Height = 86.92919
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8 = (
            '[TU_Parameters."Parametr_5_Cntrl_P"]')
          ParentFont = False
          Rotation = 90
          VAlign = vaCenter
        end
        object Memo76: TfrxMemoView
          Left = 472.44125
          Top = 302.3624
          Width = 83.14966
          Height = 86.92919
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8 = (
            '[TU_Parameters."Parametr_7_Cntrl_P"]')
          ParentFont = False
          Rotation = 90
          VAlign = vaCenter
        end
        object Memo77: TfrxMemoView
          Left = 555.59091
          Top = 302.3624
          Width = 79.37013
          Height = 86.92919
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8 = (
            '[TU_Parameters."Parametr_3_Cntrl_P"]')
          ParentFont = False
          Rotation = 90
          VAlign = vaCenter
        end
        object Memo78: TfrxMemoView
          Left = 634.96104
          Top = 302.3624
          Width = 83.14966
          Height = 86.92919
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8 = (
            '[TU_Parameters."Parametr_6_Cntrl_P"]')
          ParentFont = False
          Rotation = 90
          VAlign = vaCenter
        end
      end
      object MasterData1: TfrxMasterData
        Height = 18.89765
        Top = 668.97681
        Width = 718.1107
        OnBeforePrint = 'MasterData1OnBeforePrint'
        DataSet = Lianoz
        DataSetName = 'Lianoz'
        RowCount = 0
        object frxDBDataset1N: TfrxMemoView
          Left = 75.5906
          Width = 75.5906
          Height = 18.89765
          ShowHint = False
          DataSetName = 'frxDBDataset1'
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
        object LianozMono: TfrxMemoView
          Left = 634.96104
          Width = 83.14966
          Height = 18.89765
          ShowHint = False
          DataField = 'Mono'
          DataSet = Lianoz
          DataSetName = 'Lianoz'
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
            '[Lianoz."Mono"]')
          ParentFont = False
          VAlign = vaCenter
        end
        object LianozRmax: TfrxMemoView
          Left = 234.33086
          Width = 79.37013
          Height = 18.89765
          ShowHint = False
          DataField = 'Rmax'
          DataSet = Lianoz
          DataSetName = 'Lianoz'
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
            '[Lianoz."Rmax"]')
          ParentFont = False
          VAlign = vaCenter
        end
        object LianozFptp: TfrxMemoView
          Left = 555.59091
          Width = 79.37013
          Height = 18.89765
          ShowHint = False
          DataSet = Lianoz
          DataSetName = 'Lianoz'
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
            '[Lianoz."Fmaxm"]')
          ParentFont = False
          VAlign = vaCenter
        end
        object Memo11: TfrxMemoView
          Left = 151.1812
          Width = 83.14966
          Height = 18.89765
          ShowHint = False
          DataField = 'F'
          DataSet = Lianoz
          DataSetName = 'Lianoz'
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
            '[Lianoz."F"]')
          ParentFont = False
          VAlign = vaCenter
        end
        object LianozC0: TfrxMemoView
          Left = 313.70099
          Width = 83.14966
          Height = 18.89765
          ShowHint = False
          DataField = 'C0'
          DataSet = Lianoz
          DataSetName = 'Lianoz'
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
            '[Lianoz."C0"]')
          ParentFont = False
          VAlign = vaCenter
        end
        object LianozCq: TfrxMemoView
          Left = 396.85065
          Width = 75.5906
          Height = 18.89765
          ShowHint = False
          DataField = 'Cq'
          DataSet = Lianoz
          DataSetName = 'Lianoz'
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
            '[Lianoz."Cq"]')
          ParentFont = False
          VAlign = vaCenter
        end
        object SysMemo2: TfrxSysMemoView
          Width = 75.5906
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
            '[LINE#]')
          ParentFont = False
          VAlign = vaCenter
        end
        object LianozTurnOver: TfrxMemoView
          Left = 472.44125
          Width = 83.14966
          Height = 18.89765
          ShowHint = False
          DataField = 'TurnOver'
          DataSet = Lianoz
          DataSetName = 'Lianoz'
          DisplayFormat.FormatStr = '%2.1f'
          DisplayFormat.Kind = fkNumeric
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8 = (
            '[Lianoz."TurnOver"]')
          ParentFont = False
          VAlign = vaCenter
        end
      end
      object PageFooter1: TfrxPageFooter
        Height = 18.89765
        Top = 1012.91404
        Width = 718.1107
        object Memo24: TfrxMemoView
          Left = 506.45702
          Width = 56.69295
          Height = 18.89765
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = []
          HAlign = haCenter
          Memo.UTF8 = (
            #1056#8250#1056#1105#1057#1027#1057#8218)
          ParentFont = False
          VAlign = vaCenter
        end
        object SysMemo3: TfrxSysMemoView
          Left = 566.9295
          Width = 52.91342
          Height = 18.89765
          ShowHint = False
          Memo.UTF8 = (
            '[PAGE#]')
        end
        object Memo81: TfrxMemoView
          Left = 623.62245
          Width = 34.01577
          Height = 18.89765
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = []
          HAlign = haCenter
          Memo.UTF8 = (
            #1056#1105#1056#183' ')
          ParentFont = False
          VAlign = vaCenter
        end
        object SysMemo4: TfrxSysMemoView
          Left = 661.41775
          Width = 52.91342
          Height = 18.89765
          ShowHint = False
          Memo.UTF8 = (
            '[TOTALPAGES#]')
        end
      end
      object Footer1: TfrxFooter
        Height = 241.88992
        Top = 710.55164
        Width = 718.1107
        object Memo7: TfrxMemoView
          Left = 3.77953
          Top = 3.77953
          Width = 117.16543
          Height = 22.67718
          ShowHint = False
          Memo.UTF8 = (
            #1056#8217#1057#8249#1056#1111#1056#1109#1056#187#1056#1029#1056#1105#1056#187)
        end
        object frxDBDataset1Operator: TfrxMemoView
          Left = 128.50402
          Top = 3.77953
          Width = 204.09462
          Height = 22.67718
          ShowHint = False
          DataSetName = 'frxDBDataset1'
          Memo.UTF8 = (
            '[Lianoz."Operator"]')
        end
        object Memo13: TfrxMemoView
          Left = 532.91373
          Top = 124.72449
          Width = 177.63791
          Height = 22.67718
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = []
          Memo.UTF8 = (
            #1056#1119#1057#1026#1056#181#1056#1169#1057#1027#1057#8218#1056#176#1056#1030#1056#1105#1057#8218#1056#181#1056#187#1057#1034' '#1056#8217#1056#1119)
          ParentFont = False
        end
        object Memo14: TfrxMemoView
          Left = 612.28386
          Top = 3.77953
          Width = 98.26778
          Height = 18.89765
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          Memo.UTF8 = (
            #1056#8217#1057#1027#1056#181#1056#1110#1056#1109'     [COUNT(MasterData1)]')
          ParentFont = False
        end
        object Memo37: TfrxMemoView
          Left = 7.55906
          Top = 75.5906
          Width = 710.55164
          Height = 30.23624
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = []
          Memo.UTF8 = (
            
              #1056#152#1056#183#1056#1169#1056#181#1056#187#1056#1105#1057#1039'  [Spc."Text"] '#1056#1030' '#1056#1108#1056#1109#1056#187#1056#1105#1057#8225#1056#181#1057#1027#1057#8218#1056#1030#1056#181' _____ '#1057#8364#1057#8218'.' +
              ' '#1056#1111#1057#1026#1056#181#1056#1169#1057#1034#1057#1039#1056#1030#1056#187#1056#181#1056#1029#1056#1029#1057#8249#1056#181' '#1056#1105#1056#183#1056#1030#1056#181#1057#8240#1056#181#1056#1029#1056#1105#1056#181#1056#1112' '#1074#8222#8211'___________ ' +
              #1056#1109#1057#8218' __________   '#1057#1027#1056#1109#1056#1109#1057#8218#1056#1030#1056#181#1057#8218#1057#1027#1056#1030#1057#1107#1057#1035#1057#8218' '#1057#8218#1057#1026#1056#181#1056#177#1056#1109#1056#1030#1056#176#1056#1029#1056#1105#1057#1039#1056 +
              #1112'  '#1056#1118#1056#1032'   [Spc."TU"]   ')
          ParentFont = False
        end
        object Memo20: TfrxMemoView
          Left = 340.1577
          Top = 3.77953
          Width = 192.75603
          Height = 22.67718
          ShowHint = False
          Memo.UTF8 = (
            #1056#1119#1056#1109#1056#1169#1056#1111#1056#1105#1057#1027#1057#1034'__________________')
        end
        object Memo33: TfrxMemoView
          Left = 11.33859
          Top = 128.50402
          Width = 94.48825
          Height = 18.89765
          ShowHint = False
          Memo.UTF8 = (
            #1056#1114'. '#1056#1119'.')
        end
        object Memo19: TfrxMemoView
          Left = 192.75603
          Top = 128.50402
          Width = 166.29932
          Height = 18.89765
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = []
          Memo.UTF8 = (
            #1056#8221#1056#176#1057#8218#1056#176' ______________')
          ParentFont = False
        end
        object Memo23: TfrxMemoView
          Left = 3.77953
          Top = 173.85838
          Width = 710.55164
          Height = 30.23624
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = []
          Memo.UTF8 = (
            
              #1056#152#1056#183#1056#1169#1056#181#1056#187#1056#1105#1057#1039'  '#1056#183#1056#176' '#1074#8222#8211#1074#8222#8211' __________________________________  ' +
              #1056#1029#1056#181'  '#1057#1027#1056#1109#1056#1109#1057#8218#1056#1030#1056#181#1057#8218#1057#1027#1056#1030#1057#1107#1057#1035#1057#8218' '#1057#8218#1057#1026#1056#181#1056#177#1056#1109#1056#1030#1056#176#1056#1029#1056#1105#1057#1039#1056#1112'  '#1056#1118#1056#1032'   [S' +
              'pc."TU"]   ')
          ParentFont = False
        end
        object Memo25: TfrxMemoView
          Left = 188.9765
          Top = 219.21274
          Width = 166.29932
          Height = 18.89765
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = []
          Memo.UTF8 = (
            #1056#8221#1056#176#1057#8218#1056#176' ______________')
          ParentFont = False
        end
        object Memo26: TfrxMemoView
          Left = 408.18924
          Top = 219.21274
          Width = 306.14193
          Height = 18.89765
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = []
          Memo.UTF8 = (
            #1056#1119#1057#1026#1056#181#1056#1169#1057#1027#1057#8218#1056#176#1056#1030#1056#1105#1057#8218#1056#181#1056#187#1057#1034' '#1056#8217#1056#1119'_______________________')
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
