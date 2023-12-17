object GpForm: TGpForm
  Left = 732
  Top = 170
  BorderStyle = bsSingle
  Caption = #1055#1086#1089#1090#1088#1086#1077#1085#1080#1077' '#1075#1088#1072#1092#1080#1082#1086#1074
  ClientHeight = 653
  ClientWidth = 660
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  Position = poMainFormCenter
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object Label8: TLabel
    Left = 384
    Top = 528
    Width = 23
    Height = 13
    Caption = #1052#1057#1050
  end
  object Chart1: TChart
    Left = 0
    Top = 33
    Width = 660
    Height = 479
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
    Align = alClient
    BevelOuter = bvNone
    Color = clWhite
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
  object TeeCommander1: TTeeCommander
    Left = 0
    Top = 0
    Width = 660
    Height = 33
    Panel = Chart1
    Align = alTop
    Color = clSkyBlue
    ParentShowHint = False
    TabOrder = 1
  end
  object RzPanel1: TRzPanel
    Left = 0
    Top = 512
    Width = 660
    Height = 141
    Align = alBottom
    Color = clSkyBlue
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
      Top = 80
      Width = 23
      Height = 13
      Caption = #1052#1057#1050
    end
    object Label5: TLabel
      Left = 192
      Top = 80
      Width = 34
      Height = 13
      Caption = #1053#1086#1084#1077#1088
    end
    object Label6: TLabel
      Left = 384
      Top = 80
      Width = 51
      Height = 13
      Caption = #1055#1072#1088#1072#1084#1077#1090#1088
    end
    object Label7: TLabel
      Left = 320
      Top = 80
      Width = 33
      Height = 13
      Caption = #1047#1072#1084#1077#1088
    end
    object Label4: TLabel
      Left = 376
      Top = 8
      Width = 121
      Height = 13
      Caption = #1048#1076#1077#1085#1090#1080#1092#1080#1082#1072#1090#1086#1088' '#1079#1072#1084#1077#1088#1072
    end
    object btnClose: TRzButton
      Left = 560
      Top = 104
      Width = 91
      FrameColor = clRed
      Caption = #1047#1072#1082#1088#1099#1090#1100
      Color = clSkyBlue
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
      ItemHeight = 13
      TabOrder = 1
      OnChange = edtTypeChange
    end
    object edtSpc: TComboBox
      Left = 112
      Top = 24
      Width = 257
      Height = 21
      Color = clWhite
      Enabled = False
      ItemHeight = 13
      TabOrder = 2
      OnChange = edtSpcChange
    end
    object edtMsk: TComboBox
      Left = 8
      Top = 96
      Width = 169
      Height = 21
      Color = clWhite
      Enabled = False
      ItemHeight = 13
      TabOrder = 3
      OnChange = edtMskChange
    end
    object edtNumber: TComboBox
      Left = 192
      Top = 96
      Width = 121
      Height = 21
      Color = clWhite
      Enabled = False
      ItemHeight = 13
      TabOrder = 4
      OnChange = edtNumberChange
    end
    object edtTypeF: TComboBox
      Left = 384
      Top = 96
      Width = 121
      Height = 21
      Color = clWhite
      Enabled = False
      ItemHeight = 13
      TabOrder = 5
      Text = 'F ('#1073#1077#1079' '#1085#1072#1075#1088#1091#1079#1082#1080')'
      OnChange = btnMakeClick
      Items.Strings = (
        'F ('#1073#1077#1079' '#1085#1072#1075#1088#1091#1079#1082#1080')'
        'FL ('#1089' '#1085#1072#1075#1088#1091#1079#1082#1086#1081')'
        'F+FL'
        'R ('#1057#1086#1087#1088#1086#1090#1080#1074#1083#1077#1085#1080#1077')'
        'Rb('#1057#1086#1087#1088#1086#1090#1080#1074#1083#1077#1085#1080#1077' '#1084#1086#1076#1099' '#1041')'
        'Rc/Rb'
        #1052#1086#1085#1086#1090#1086#1085#1085#1086#1089#1090#1100
        #1057#1082#1072#1095#1082#1080
        #1044#1086#1073#1088#1086#1090#1085#1086#1089#1090#1100
        #1057'0,pF'
        #1057'q,fF'
        'L,mh')
    end
    object btnMake: TRzButton
      Left = 560
      Top = 8
      Width = 91
      FrameColor = clLime
      Caption = #1055#1086#1089#1090#1088#1086#1080#1090#1100
      Color = clSkyBlue
      Enabled = False
      HotTrack = True
      HotTrackColor = clRed
      TabOrder = 6
      OnClick = btnMakeClick
    end
    object edtM: TRzComboBox
      Left = 320
      Top = 96
      Width = 57
      Height = 21
      Color = clWhite
      Ctl3D = False
      DisabledColor = clBlack
      FlatButtonColor = clLime
      FlatButtons = True
      FrameColor = clYellow
      FrameHotColor = clFuchsia
      FrameHotTrack = True
      FrameVisible = True
      ItemHeight = 13
      ParentCtl3D = False
      TabOrder = 7
    end
    object btnApp: TRzButton
      Left = 560
      Top = 32
      Width = 91
      FrameColor = clYellow
      Caption = #1040#1087#1088#1086#1082#1089#1080#1084#1072#1094#1080#1103
      Color = clSkyBlue
      Enabled = False
      HotTrack = True
      HotTrackColor = clRed
      TabOrder = 8
      OnClick = btnAppClick
    end
    object btnOptions: TRzButton
      Left = 560
      Top = 56
      Width = 91
      FrameColor = clBlue
      Caption = #1053#1072#1089#1090#1088#1086#1081#1082#1080
      Color = clSkyBlue
      HotTrack = True
      HotTrackColor = clRed
      TabOrder = 9
      OnClick = btnOptionsClick
    end
    object cmb_ID: TComboBox
      Left = 376
      Top = 24
      Width = 169
      Height = 21
      Color = clWhite
      ItemHeight = 13
      TabOrder = 10
      OnKeyPress = cmb_IDKeyPress
    end
    object RzButton1: TRzButton
      Left = 560
      Top = 80
      Width = 91
      FrameColor = clFuchsia
      Caption = #1055#1077#1095#1072#1090#1100' '#1074#1089#1077#1093
      Color = clSkyBlue
      HotTrack = True
      HotTrackColor = clRed
      TabOrder = 11
      OnClick = RzButton1Click
    end
  end
  object ActionList1: TActionList
    Left = 424
    Top = 16
    object Action1: TAction
      Caption = 'Action1'
      OnExecute = Action1Execute
    end
    object Action2: TAction
      Caption = 'Action2'
      OnExecute = Action2Execute
    end
    object Action3: TAction
      Caption = 'Action3'
    end
    object SetBorder: TAction
      Caption = 'SetBorder'
    end
  end
end
