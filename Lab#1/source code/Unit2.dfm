object FContor: TFContor
  Left = 192
  Top = 123
  Width = 445
  Height = 389
  Caption = 'MIDPS 1-A'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 120
    Top = 48
    Width = 232
    Height = 19
    Caption = 'Incrementare decrementare contor'
    Color = clBtnFace
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clRed
    Font.Height = -16
    Font.Name = 'Times New Roman'
    Font.Style = [fsBold]
    ParentColor = False
    ParentFont = False
  end
  object Label2: TLabel
    Left = 208
    Top = 96
    Width = 65
    Height = 20
    Caption = 'Label2'
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Reference Sans Serif'
    Font.Style = [fsBold, fsItalic]
    ParentFont = False
  end
  object Button1: TButton
    Left = 56
    Top = 168
    Width = 75
    Height = 25
    Caption = 'UP'
    TabOrder = 0
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 56
    Top = 224
    Width = 75
    Height = 25
    Caption = 'DOWN'
    TabOrder = 1
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 320
    Top = 296
    Width = 75
    Height = 25
    Caption = 'Exit'
    TabOrder = 2
    OnClick = Button3Click
  end
  object Edit1: TEdit
    Left = 152
    Top = 192
    Width = 81
    Height = 21
    TabOrder = 3
    Text = 'Edit1'
  end
end
