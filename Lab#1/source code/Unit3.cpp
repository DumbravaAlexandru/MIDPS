//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit3.h"
#include "Unit1.h"

#include <stdio.h>
#include "dos.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFCronometru *FCronometru;

struct date d;
struct time t;


int zec;
int sec;
int min;


//---------------------------------------------------------------------------
__fastcall TFCronometru::TFCronometru(TComponent* Owner)
        : TForm(Owner)
{
        zec=0;
        sec=0;
        min=0;
        char buf[20];
        sprintf(buf,"%02d min %02d sec %02d zec",min,sec,zec);
        Edit2->Text=(AnsiString)buf;

}
//---------------------------------------------------------------------------
void __fastcall TFCronometru::Timer1Timer(TObject *Sender)
{
        char buf[20];
        getdate(&d);
        gettime(&t);
        sprintf(buf,"%02d-%02d-%4d %02d:%02d:%02d",d.da_day,d.da_mon,d.da_year,
        t.ti_hour,t.ti_min,t.ti_sec);
        Edit1->Text=(AnsiString)buf;

}
//---------------------------------------------------------------------------

void __fastcall TFCronometru::FormCreate(TObject *Sender)
{
        Edit1->Clear();
        Timer1->Interval=1000;
        Timer2->Interval=100;
        Timer2->Enabled=false;
}
//---------------------------------------------------------------------------


void __fastcall TFCronometru::ExitClick(TObject *Sender)
{
        FCronometru->Close();
        FMeniu->Show();
}
//---------------------------------------------------------------------------

void __fastcall TFCronometru::Timer2Timer(TObject *Sender)
{
        zec++;
        if(zec==10){
        zec=0;
        sec++;
        }
        if(sec==60){
        sec=0;
        min++;
        }
        char buf[20];
        sprintf(buf,"%02d min %02d sec %02d zec",min,sec,zec);
        Edit2->Text=(AnsiString)buf;
}
//---------------------------------------------------------------------------

void __fastcall TFCronometru::STARTClick(TObject *Sender)
{
        Timer2->Enabled=true;
        START->Enabled=false;
        STOP->Enabled=true;
        ZERO->Enabled=false;
}
//---------------------------------------------------------------------------

void __fastcall TFCronometru::STOPClick(TObject *Sender)
{
        START->Enabled=true;
        STOP->Enabled=false;
        ZERO->Enabled=true;
        Timer2->Enabled=false;

}
//---------------------------------------------------------------------------

void __fastcall TFCronometru::ZEROClick(TObject *Sender)
{
        START->Enabled=true;
        STOP->Enabled=false;
        ZERO->Enabled=false;
        zec=0;
        sec=0;
        min=0;

        char buf[20];
        sprintf(buf,"%02d min %02d sec %02d zec",min,sec,zec);
        Edit2->Text=(AnsiString)buf;

}
//---------------------------------------------------------------------------

