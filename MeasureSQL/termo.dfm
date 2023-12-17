object TermoForm: TTermoForm
  Left = 543
  Top = 176
  BorderStyle = bsNone
  Caption = 'TermoForm'
  ClientHeight = 480
  ClientWidth = 472
  Color = clBlack
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clLime
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  Position = poDesktopCenter
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 24
    Top = 48
    Width = 67
    Height = 13
    Caption = #1058#1077#1088#1084#1086#1076#1072#1090#1095#1080#1082
  end
  object Label2: TLabel
    Left = 256
    Top = 48
    Width = 42
    Height = 13
    Caption = #1063#1072#1089#1090#1086#1090#1072
  end
  object Label3: TLabel
    Left = 336
    Top = 48
    Width = 67
    Height = 13
    Caption = #1058#1077#1084#1087#1077#1088#1072#1090#1091#1088#1072
  end
  object Label4: TLabel
    Left = 136
    Top = 48
    Width = 47
    Height = 13
    Caption = #1058#1086#1095#1085#1086#1089#1090#1100
  end
  object Label5: TLabel
    Left = 24
    Top = 104
    Width = 97
    Height = 13
    Caption = #1055#1086#1088#1103#1076#1086#1082' '#1087#1086#1083#1080#1085#1086#1084#1072
  end
  object btnClose: TRzButton
    Left = 376
    Top = 446
    FrameColor = clRed
    Caption = #1047#1072#1082#1088#1099#1090#1100
    Color = clDefault
    HotTrack = True
    HotTrackColor = clRed
    TabOrder = 0
    OnClick = btnCloseClick
  end
  object edtName: TComboBox
    Left = 24
    Top = 72
    Width = 97
    Height = 21
    Color = clBlack
    ItemHeight = 13
    TabOrder = 1
    OnChange = edtNameChange
  end
  object btnResult: TRzButton
    Left = 16
    Top = 446
    FrameColor = clRed
    Caption = #1056#1072#1089#1095#1077#1090
    Color = clDefault
    HotTrack = True
    HotTrackColor = clRed
    TabOrder = 2
    OnClick = btnResultClick
  end
  object edtF: TEdit
    Left = 200
    Top = 72
    Width = 121
    Height = 21
    Color = clBlack
    TabOrder = 3
  end
  object edtT: TEdit
    Left = 344
    Top = 72
    Width = 49
    Height = 21
    Color = clBlack
    TabOrder = 4
  end
  object edtP: TEdit
    Left = 136
    Top = 72
    Width = 49
    Height = 21
    Color = clBlack
    TabOrder = 5
    Text = '0.1'
  end
  object edtM: TComboBox
    Left = 24
    Top = 128
    Width = 97
    Height = 21
    Color = clBlack
    ItemHeight = 13
    ItemIndex = 6
    TabOrder = 6
    Text = '7'
    OnChange = edtNameChange
    Items.Strings = (
      '1'
      '2'
      '3'
      '4'
      '5'
      '6'
      '7'
      '8'
      '9'
      '10'
      '11'
      '12')
  end
  object Chart1: TChart
    Left = 16
    Top = 160
    Width = 433
    Height = 281
    Gradient.Visible = True
    Legend.Visible = False
    Title.Text.Strings = (
      '')
    BottomAxis.Automatic = False
    BottomAxis.AutomaticMaximum = False
    BottomAxis.AutomaticMinimum = False
    BottomAxis.ExactDateTime = False
    BottomAxis.Grid.DrawEvery = 2
    BottomAxis.Increment = 10
    BottomAxis.LabelsSize = 12
    BottomAxis.Maximum = 120
    BottomAxis.Minimum = -60
    BottomAxis.Title.Caption = 'Temperature,C'
    LeftAxis.Title.Caption = 'F,Hz'
    View3D = False
    Color = clBlack
    TabOrder = 7
    PrintMargins = (
      15
      24
      15
      24)
    ColorPaletteIndex = 13
    object Series1: TLineSeries
      Marks.Arrow.Visible = True
      Marks.Callout.Brush.Color = clBlack
      Marks.Callout.Arrow.Visible = True
      Marks.Visible = False
      SeriesColor = clRed
      Dark3D = False
      Pointer.InflateMargins = True
      Pointer.Style = psRectangle
      Pointer.Visible = False
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
      ClickableLine = False
      Pointer.HorizSize = 2
      Pointer.InflateMargins = True
      Pointer.Style = psCircle
      Pointer.VertSize = 3
      Pointer.Visible = True
      XValues.Name = 'X'
      XValues.Order = loAscending
      YValues.Name = 'Y'
      YValues.Order = loNone
    end
  end
  object TeeCommander1: TTeeCommander
    Left = 0
    Top = 0
    Width = 472
    Height = 33
    Panel = Chart1
    Align = alTop
    Color = clBlack
    ParentShowHint = False
    TabOrder = 8
    ChartEditor = ChartEditor1
  end
  object ChartEditor1: TChartEditor
    Chart = Chart1
    Series = Series1
    Left = 432
    Top = 40
  end
end
