object PNForm: TPNForm
  Left = 469
  Top = 166
  Width = 264
  Height = 651
  Caption = #1053#1086#1084#1077#1088#1072
  Color = clBlack
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clLime
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object RzPanel1: TRzPanel
    Left = 0
    Top = 537
    Width = 248
    Height = 75
    Align = alBottom
    BorderColor = clRed
    BorderWidth = 2
    Color = clBlack
    TabOrder = 0
    object lCount: TLabel
      Left = 96
      Top = 22
      Width = 3
      Height = 13
      Color = clBlack
      ParentColor = False
    end
    object Label7: TLabel
      Left = 112
      Top = 6
      Width = 45
      Height = 13
      Caption = #1042#1099#1073#1088#1072#1085#1086
    end
    object btnClose: TRzButton
      Left = 176
      Top = 40
      Width = 56
      FrameColor = clRed
      Caption = #1047#1072#1082#1088#1099#1090#1100
      Color = clDefault
      HotTrack = True
      HotTrackColor = clRed
      TabOrder = 0
      OnClick = btnCloseClick
    end
    object RzButton1: TRzButton
      Left = 8
      Top = 8
      Width = 81
      FrameColor = clLime
      Caption = #1042#1099#1073#1088#1072#1090#1100' '#1074#1089#1077
      Color = clDefault
      HotTrack = True
      HotTrackColor = clRed
      TabOrder = 1
      OnClick = RzButton1Click
    end
    object RzButton2: TRzButton
      Left = 8
      Top = 40
      Width = 81
      FrameColor = clLime
      Caption = #1054#1095#1080#1089#1090#1080#1090#1100
      Color = clDefault
      HotTrack = True
      HotTrackColor = clRed
      TabOrder = 2
      OnClick = RzButton2Click
    end
  end
  object viewNumber: TRzCheckList
    Left = 0
    Top = 0
    Width = 248
    Height = 537
    ItemFillColor = clYellow
    ItemFocusColor = clSkyBlue
    TransparentColor = clBlack
    OnChange = viewNumberChange
    Align = alClient
    Color = clBlack
    FrameColor = clLime
    FrameHotColor = clRed
    FrameHotTrack = True
    FrameVisible = True
    ItemHeight = 17
    ParentColor = True
    Sorted = True
    TabOrder = 1
    UseGradients = False
  end
end
