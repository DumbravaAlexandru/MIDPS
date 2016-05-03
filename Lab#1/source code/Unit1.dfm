object FMeniu: TFMeniu
  Left = 190
  Top = 136
  Width = 375
  Height = 356
  Caption = 'Meniu'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Button1: TButton
    Left = 104
    Top = 32
    Width = 161
    Height = 57
    Caption = 'Contor'
    TabOrder = 0
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 104
    Top = 112
    Width = 161
    Height = 57
    Caption = 'Cronometru'
    TabOrder = 1
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 104
    Top = 192
    Width = 161
    Height = 57
    Caption = 'Grafic'
    TabOrder = 2
    OnClick = Button3Click
  end
  object Button4: TButton
    Left = 272
    Top = 280
    Width = 75
    Height = 25
    Caption = 'Exit'
    TabOrder = 3
    OnClick = Button4Click
  end
end
