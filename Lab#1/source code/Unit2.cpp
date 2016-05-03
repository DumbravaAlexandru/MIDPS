//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFContor *FContor;
int count=0;
//---------------------------------------------------------------------------
__fastcall TFContor::TFContor(TComponent* Owner)
        : TForm(Owner)
{
         Label2->Visible=false;
         Edit1->Text=AnsiString(count);
}
//---------------------------------------------------------------------------
void __fastcall TFContor::Button1Click(TObject *Sender)
{
        count++;
        Label2->Visible=true;
        Label2->Caption="i Creste";
        Edit1->Text=AnsiString(count);
}
//---------------------------------------------------------------------------
void __fastcall TFContor::Button2Click(TObject *Sender)
{
        count--;
        Label2->Visible=true;
        Label2->Caption="i Descreste";
        Edit1->Text=AnsiString(count);
}
//---------------------------------------------------------------------------
void __fastcall TFContor::Button3Click(TObject *Sender)
{
        FContor->Close();
        FMeniu->Show();
}
//---------------------------------------------------------------------------
