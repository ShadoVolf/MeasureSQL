object PHNForm: TPHNForm
  Left = 738
  Top = 285
  BorderStyle = bsNone
  ClientHeight = 596
  ClientWidth = 242
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clLime
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object viewNumber: TRzCheckList
    Left = 0
    Top = 0
    Width = 242
    Height = 521
    ItemFillColor = clYellow
    ItemFocusColor = clSkyBlue
    ItemFrameColor = clBlack
    TransparentColor = clBlack
    OnChange = viewNumberChange
    Align = alClient
    Color = clBackground
    FrameColor = clLime
    FrameHotColor = clRed
    FrameHotTrack = True
    FrameVisible = True
    ItemHeight = 17
    Sorted = True
    TabOrder = 0
    UseGradients = False
  end
  object RzPanel1: TRzPanel
    Left = 0
    Top = 521
    Width = 242
    Height = 75
    Align = alBottom
    BorderColor = clRed
    BorderWidth = 2
    Color = clBlack
    TabOrder = 1
    object Label7: TLabel
      Left = 112
      Top = 6
      Width = 45
      Height = 13
      Caption = #1042#1099#1073#1088#1072#1085#1086
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clRed
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
    end
    object Label1: TLabel
      Left = 104
      Top = 30
      Width = 3
      Height = 13
      Color = clBlack
      ParentColor = False
    end
    object lCount: TLabel
      Left = 184
      Top = 6
      Width = 3
      Height = 13
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clRed
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
    end
    object btnClose: TRzButton
      Left = 176
      Top = 40
      Width = 56
      FrameColor = clRed
      Caption = #1047#1072#1082#1088#1099#1090#1100
      Color = clDefault
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clRed
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      HotTrack = True
      HotTrackColor = clRed
      ParentFont = False
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
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clRed
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      HotTrack = True
      HotTrackColor = clRed
      ParentFont = False
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
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clRed
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      HotTrack = True
      HotTrackColor = clRed
      ParentFont = False
      TabOrder = 2
      OnClick = RzButton2Click
    end
  end
end
