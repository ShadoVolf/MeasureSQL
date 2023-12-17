object GForm: TGForm
  Left = 375
  Top = 165
  Width = 618
  Height = 592
  Caption = #1055#1086#1089#1090#1088#1086#1077#1085#1080#1077' '#1075#1088#1072#1092#1080#1082#1086#1074
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
    Top = 517
    Width = 610
    Height = 41
    Align = alBottom
    Color = clWhite
    TabOrder = 0
    object btnClose: TRzButton
      Left = 520
      Top = 8
      FrameColor = clRed
      Caption = #1047#1072#1082#1088#1099#1090#1100
      Color = clMoneyGreen
      HotTrack = True
      HotTrackColor = clRed
      TabOrder = 0
      OnClick = btnCloseClick
    end
  end
  object RzPanel2: TRzPanel
    Left = 0
    Top = 0
    Width = 610
    Height = 517
    Align = alClient
    ParentColor = True
    TabOrder = 1
  end
end
