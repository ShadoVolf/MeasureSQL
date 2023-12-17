object SpcSelectForm: TSpcSelectForm
  Left = 489
  Top = 361
  BorderStyle = bsSingle
  Caption = #1042#1072#1088#1080#1072#1085#1090' '#1089#1087#1077#1094#1080#1092#1080#1082#1072#1094#1080#1080
  ClientHeight = 145
  ClientWidth = 330
  Color = clBlack
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clLime
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  FormStyle = fsStayOnTop
  OldCreateOrder = False
  Position = poMainFormCenter
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object Label5: TLabel
    Left = 14
    Top = 24
    Width = 127
    Height = 13
    Caption = #1042#1072#1088#1080#1072#1085#1090#1099' '#1089#1087#1077#1094#1080#1092#1080#1082#1072#1094#1080#1081
    Visible = False
  end
  object btnClose: TAdvGlassButton
    Left = 227
    Top = 94
    Width = 84
    Height = 32
    BackColor = clRed
    Caption = #1055#1088#1080#1085#1103#1090#1100
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
  object edtSpcV: TRzComboBox
    Left = 11
    Top = 49
    Width = 301
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
    ReadOnlyColor = clBlack
    Sorted = True
    TabOrder = 1
  end
end
