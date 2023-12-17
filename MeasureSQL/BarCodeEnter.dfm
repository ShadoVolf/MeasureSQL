object BarCodeEnterForm: TBarCodeEnterForm
  Left = 756
  Top = 519
  Width = 324
  Height = 147
  Caption = #1064#1090#1088#1080#1093' '#1082#1086#1076' '#1055#1057#1048
  Color = clBlack
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  FormStyle = fsStayOnTop
  OldCreateOrder = False
  Position = poMainFormCenter
  PixelsPerInch = 96
  TextHeight = 13
  object btnClose: TAdvGlassButton
    Left = 192
    Top = 36
    Width = 100
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
  object edtBar: TRzEdit
    Left = 32
    Top = 40
    Width = 121
    Height = 21
    Color = clBlack
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWhite
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    FrameColor = clLime
    FrameHotTrack = True
    FrameVisible = True
    ParentFont = False
    TabOrder = 1
  end
end
