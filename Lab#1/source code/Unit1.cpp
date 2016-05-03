//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
#include "Unit4.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFMeniu *FMeniu;
//---------------------------------------------------------------------------
__fastcall TFMeniu::TFMeniu(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFMeniu::Button1Click(TObject *Sender)
{
        FMeniu->Hide();
        FContor->ShowModal();
}
//---------------------------------------------------------------------------
void __fastcall TFMeniu::Button2Click(TObject *Sender)
{
        FMeniu->Hide();
        FCronometru->ShowModal();
}
//---------------------------------------------------------------------------
void __fastcall TFMeniu::Button3Click(TObject *Sender)
{
        FMeniu->Hide();
        FDiagram->ShowModal();
}
//---------------------------------------------------------------------------
void __fastcall TFMeniu::Button4Click(TObject *Sender)
{
        FMeniu->Close();
}
//---------------------------------------------------------------------------
