object NewSpcForm: TNewSpcForm
  Left = 445
  Top = 271
  BorderStyle = bsNone
  Caption = 'New Specification'
  ClientHeight = 140
  ClientWidth = 417
  Color = clBlack
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clLime
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  FormStyle = fsStayOnTop
  OldCreateOrder = False
  Position = poMainFormCenter
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 16
    Top = 16
    Width = 170
    Height = 13
    Caption = #1042#1074#1077#1076#1080#1090#1077' '#1085#1072#1079#1074#1072#1085#1080#1077' '#1089#1087#1077#1094#1080#1092#1080#1082#1072#1094#1080#1080
  end
  object edtSpcName: TRzEdit
    Left = 16
    Top = 40
    Width = 377
    Height = 21
    Hint = 
      #1044#1086#1087#1091#1089#1090#1080#1084#1086' '#1076#1083#1103' '#1056#1050'386'#1052', '#1056#1050'386'#1052#1052', '#1056#1050'379'#1052', '#1056#1050'379'#1052#1052', '#1056#1050'408'#1069#1041'|'#1044#1086#1087#1091#1089#1090#1080#1084 +
      #1086' '#1076#1083#1103' '#1056#1050'386'#1052', '#1056#1050'386'#1052#1052', '#1056#1050'379'#1052', '#1056#1050'379'#1052#1052', '#1056#1050'408'#1069#1041
    Color = clBlack
    DisabledColor = clMaroon
    FrameColor = clLime
    FrameHotColor = clYellow
    FrameHotTrack = True
    FrameVisible = True
    ParentShowHint = False
    ShowHint = True
    TabOrder = 0
  end
  object btnClose: TAdvGlassButton
    Left = 288
    Top = 87
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
    TabOrder = 1
    Version = '1.2.3.0'
    OnClick = btnCloseClick
  end
  object btnCreate: TAdvGlassButton
    Left = 16
    Top = 87
    Width = 100
    Height = 32
    BackColor = clLime
    Caption = #1057#1086#1079#1076#1072#1090#1100
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
    TabOrder = 2
    Version = '1.2.3.0'
    OnClick = btnCreateClick
  end
end
