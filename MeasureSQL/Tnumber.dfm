object TnumberForm: TTnumberForm
  Left = 569
  Top = 312
  BorderStyle = bsNone
  Caption = 'TnumberForm'
  ClientHeight = 155
  ClientWidth = 266
  Color = clBlack
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clLime
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object Label10: TLabel
    Left = 19
    Top = 62
    Width = 151
    Height = 13
    Caption = #1042#1074#1077#1076#1080#1090#1077' '#1085#1086#1084#1077#1088' '#1090#1077#1088#1084#1086#1076#1072#1090#1095#1080#1082#1072
  end
  object Label1: TLabel
    Left = 19
    Top = 6
    Width = 157
    Height = 13
    Caption = #1053#1086#1084#1077#1088' '#1090#1077#1084#1087#1077#1088#1072#1090#1091#1088#1085#1086#1081' '#1082#1072#1084#1077#1088#1099
  end
  object Label2: TLabel
    Left = 211
    Top = 6
    Width = 30
    Height = 13
    Caption = #1042#1089#1077#1075#1086
    Color = clBlack
    ParentColor = False
  end
  object btnClose: TAdvGlassButton
    Left = 184
    Top = 112
    Width = 71
    Height = 28
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
  object edtTNumber: TRzEdit
    Left = 24
    Top = 84
    Width = 145
    Height = 21
    Color = clBlack
    FrameColor = clRed
    FrameHotColor = clYellow
    FrameHotTrack = True
    FrameVisible = True
    TabOrder = 2
    OnKeyPress = edtTNumberKeyPress
  end
  object edtChamber: TRzComboBox
    Left = 24
    Top = 31
    Width = 145
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
    TabOrder = 1
  end
  object lCount: TRzEdit
    Left = 192
    Top = 30
    Width = 66
    Height = 21
    Color = clBlack
    FrameColor = clYellow
    FrameHotColor = clYellow
    FrameHotTrack = True
    FrameVisible = True
    TabOrder = 3
  end
end
