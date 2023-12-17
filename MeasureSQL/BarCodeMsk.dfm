object BarCodeMskForm: TBarCodeMskForm
  Left = 597
  Top = 359
  BorderStyle = bsNone
  Caption = 'BarCodeMskForm'
  ClientHeight = 217
  ClientWidth = 203
  Color = clBlack
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clRed
  Font.Height = -13
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 16
  object Label1: TLabel
    Left = 48
    Top = 24
    Width = 97
    Height = 16
    Caption = #1064#1090#1088#1080#1093' '#1082#1086#1076' '#1052#1057#1050
  end
  object edtCode: TRzEdit
    Left = 33
    Top = 56
    Width = 136
    Height = 37
    Color = clBlack
    DisabledColor = clBlack
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clRed
    Font.Height = -24
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    FrameColor = clRed
    FrameHotColor = clRed
    FrameHotTrack = True
    FrameStyle = fsFlatBold
    FrameVisible = True
    ParentFont = False
    ReadOnlyColor = clBlack
    TabOrder = 1
    OnKeyPress = edtCodeKeyPress
  end
  object btnClose: TAdvGlassButton
    Left = 136
    Top = 174
    Width = 58
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
    TabOrder = 0
    Version = '1.2.3.0'
    OnClick = btnCloseClick
  end
  object chkNumbers: TRzCheckBox
    Left = 35
    Top = 101
    Width = 158
    Height = 17
    Caption = #1053#1086#1084#1077#1088#1072' '#1074#1088#1091#1095#1085#1091#1102
    FillColor = clBlack
    FocusColor = clBlack
    FrameColor = clRed
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clRed
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    HighlightColor = clRed
    HotTrack = True
    ParentFont = False
    TextHighlightColor = clAqua
    State = cbUnchecked
    TabOrder = 2
    WinMaskColor = clRed
  end
  object AdvGlassButton1: TAdvGlassButton
    Left = 4
    Top = 174
    Width = 58
    Height = 32
    BackColor = clLime
    Caption = #1042#1074#1086#1076
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
  object chkSpc: TRzCheckBox
    Left = 35
    Top = 125
    Width = 158
    Height = 17
    Caption = #1053#1086#1074#1072#1103' '#1089#1087#1077#1094#1080#1092#1080#1082#1072#1094#1080#1103
    FillColor = clBlack
    FocusColor = clBlack
    FrameColor = clRed
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clRed
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    HighlightColor = clRed
    HotTrack = True
    ParentFont = False
    TextHighlightColor = clAqua
    State = cbUnchecked
    TabOrder = 4
    WinMaskColor = clRed
  end
  object chkMSK: TRzCheckBox
    Left = 3
    Top = 53
    Width = 22
    Height = 17
    Hint = #1042#1085#1077#1089#1090#1080' '#1085#1086#1084#1077#1088' '#1052#1057#1050
    HelpType = htKeyword
    FillColor = clBlack
    FocusColor = clBlack
    FrameColor = clRed
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clRed
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    HighlightColor = clRed
    HotTrack = True
    ParentFont = False
    ParentShowHint = False
    TextHighlightColor = clAqua
    ShowHint = True
    State = cbUnchecked
    TabOrder = 5
    WinMaskColor = clRed
    OnClick = chkMSKClick
  end
end
