object TempMainForm: TTempMainForm
  Left = 518
  Top = 137
  BorderStyle = bsNone
  Caption = 'TempMainForm'
  ClientHeight = 659
  ClientWidth = 523
  Color = clBlack
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clLime
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 8
    Top = 560
    Width = 55
    Height = 13
    Caption = #1059#1089#1090#1072#1085#1086#1074#1082#1072
  end
  object Label2: TLabel
    Left = 128
    Top = 560
    Width = 39
    Height = 13
    Caption = #1050#1072#1084#1077#1088#1072
  end
  object Label3: TLabel
    Left = 256
    Top = 560
    Width = 73
    Height = 13
    Caption = #1058#1077#1088#1084#1086#1076#1072#1090#1095#1080#1082#1080
  end
  object btnClose: TAdvGlassButton
    Left = 416
    Top = 616
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
    TabOrder = 0
    Version = '1.2.3.0'
    OnClick = btnCloseClick
  end
  object TempChart: TChart
    Left = 0
    Top = 32
    Width = 521
    Height = 361
    BackWall.Color = -1
    BackWall.Dark3D = False
    BackWall.Size = 8
    BackWall.Transparent = False
    Border.Visible = True
    BottomWall.Color = -1
    BottomWall.Dark3D = False
    BottomWall.Size = 8
    LeftWall.Color = -1
    LeftWall.Dark3D = False
    LeftWall.Size = 8
    Legend.Alignment = laTop
    Legend.Font.Height = -13
    Legend.Font.Name = 'Times New Roman'
    Legend.FontSeriesColor = True
    Legend.Frame.Visible = False
    Legend.LegendStyle = lsSeries
    Legend.Shadow.HorizSize = 0
    Legend.Shadow.VertSize = 0
    Legend.Symbol.DefaultPen = False
    Legend.Symbol.Pen.Visible = False
    Legend.Transparent = True
    RightWall.Color = -1
    RightWall.Dark3D = False
    RightWall.Size = 8
    Title.Font.Color = 65408
    Title.Font.Height = -16
    Title.Font.Name = 'Times New Roman'
    Title.Text.Strings = (
      #1054#1096#1080#1073#1082#1072' '#1091#1089#1090#1072#1085#1086#1074#1082#1080' '#1090#1077#1084#1087#1077#1088#1072#1090#1091#1088#1099' '#1074' '#1082#1072#1084#1077#1088#1077)
    BottomAxis.Axis.Color = 65408
    BottomAxis.Grid.Color = clRed
    BottomAxis.Grid.Style = psSolid
    BottomAxis.Grid.Width = 2
    BottomAxis.GridCentered = True
    BottomAxis.LabelsFont.Color = clLime
    BottomAxis.LabelsFont.Height = -13
    BottomAxis.LabelsFont.Name = 'Times New Roman'
    BottomAxis.MinorTicks.Visible = False
    BottomAxis.Ticks.Color = clBlack
    BottomAxis.TicksInner.Visible = False
    BottomAxis.Title.Caption = 'T'
    BottomAxis.Title.Font.Color = 65408
    BottomAxis.Title.Font.Name = 'Times New Roman'
    BottomAxis.Title.Color = 65408
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
    LeftAxis.Axis.Color = clLime
    LeftAxis.Grid.Color = clRed
    LeftAxis.LabelsFont.Color = clLime
    LeftAxis.LabelsFont.Height = -13
    LeftAxis.LabelsFont.Name = 'Times New Roman'
    LeftAxis.MinorTicks.Visible = False
    LeftAxis.Ticks.Color = clLime
    LeftAxis.TicksInner.Visible = False
    LeftAxis.Title.Caption = 'dT'
    LeftAxis.Title.Font.Color = 65408
    LeftAxis.Title.Font.Name = 'Times New Roman'
    LeftAxis.Title.Color = clRed
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
    Zoom.Pen.Color = clLime
    BevelOuter = bvNone
    Color = clBlack
    TabOrder = 1
    ColorPaletteIndex = 13
  end
  object ChartGrid1: TChartGrid
    Left = 0
    Top = 400
    Width = 521
    Height = 145
    BorderStyle = bsNone
    Color = clBlack
    FixedColor = clBlack
    Options = [goVertLine, goHorzLine, goRangeSelect, goDrawFocusSelected, goRowSizing, goColSizing, goEditing, goTabs, goThumbTracking]
    TabOrder = 2
    Chart = TempChart
    ShowLabels = False
  end
  object TeeCommander1: TTeeCommander
    Left = 0
    Top = 0
    Width = 523
    Height = 33
    Gradient.StartColor = clRed
    Panel = TempChart
    Align = alTop
    Color = clBlack
    ParentShowHint = False
    TabOrder = 3
    ChartEditor = ChartEditor1
    Previewer = ChartPreviewer1
    object StatusL: TLabel
      Left = 448
      Top = 8
      Width = 53
      Height = 20
      Caption = #1057#1090#1072#1090#1091#1089
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clLime
      Font.Height = -16
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
    end
  end
  object edtMachine: TRzComboBox
    Left = 8
    Top = 584
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
    TabOrder = 4
  end
  object edtChamber: TRzComboBox
    Left = 128
    Top = 584
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
    TabOrder = 5
  end
  object edtTempD: TRzComboBox
    Left = 256
    Top = 584
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
    TabOrder = 6
  end
  object AdvGlassButton1: TAdvGlassButton
    Left = 7
    Top = 616
    Width = 106
    Height = 33
    BackColor = clAqua
    Caption = #1044#1086#1073#1072#1074#1080#1090#1100
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
    TabOrder = 7
    Version = '1.2.3.0'
    OnClick = btnCloseClick
  end
  object AdvGlassButton2: TAdvGlassButton
    Left = 135
    Top = 616
    Width = 98
    Height = 33
    BackColor = 8388863
    Caption = #1054#1095#1080#1089#1090#1080#1090#1100
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
    TabOrder = 8
    Version = '1.2.3.0'
    OnClick = btnCloseClick
  end
  object AdvGlassButton3: TAdvGlassButton
    Left = 255
    Top = 616
    Width = 98
    Height = 33
    BackColor = clLime
    Caption = #1053#1086#1074#1099#1081
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
    TabOrder = 9
    Version = '1.2.3.0'
    OnClick = btnCloseClick
  end
  object btnView: TAdvGlassButton
    Left = 415
    Top = 576
    Width = 98
    Height = 33
    BackColor = clYellow
    Caption = #1055#1088#1086#1089#1084#1086#1090#1088
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
    TabOrder = 10
    Version = '1.2.3.0'
    OnClick = btnCloseClick
  end
  object ChartEditor1: TChartEditor
    Chart = TempChart
    Left = 488
    Top = 24
  end
  object ChartPreviewer1: TChartPreviewer
    Chart = TempChart
    Left = 456
    Top = 24
  end
end
