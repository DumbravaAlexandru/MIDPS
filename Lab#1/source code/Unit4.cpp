//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit4.h"
#include "Unit1.h"

#include "dos.h"
#include "stdio.h"
#include "time.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFDiagram *FDiagram;

struct date d;
struct time t;

int x=0;
int y=0;
 
//---------------------------------------------------------------------------
__fastcall TFDiagram::TFDiagram(TComponent* Owner)
        : TForm(Owner)
{
        std::srand(std::time(NULL));
        y=rand()% 151;
        Panel2->Height=y;
        PaintBox1->Canvas->MoveTo(0,y);
}
//---------------------------------------------------------------------------
void __fastcall TFDiagram::Timer1Timer(TObject *Sender)
{
        getdate(&d);
        gettime(&t);
        char buf[20];
        sprintf(buf,"%02d-%02d-%4d %02d:%02d:%02d",d.da_day,d.da_mon,d.da_year,
        t.ti_hour,t.ti_min,t.ti_sec);
        Edit1->Text=(AnsiString)buf;

}
//---------------------------------------------------------------------------

void __fastcall TFDiagram::ExitClick(TObject *Sender)
{
        FDiagram->Close();
        FMeniu->Show();
}
//---------------------------------------------------------------------------

void __fastcall TFDiagram::StartClick(TObject *Sender)
{
        Timer2->Enabled=true;
        Start->Enabled=false;
        Stop->Enabled=true;        
}
//---------------------------------------------------------------------------

void __fastcall TFDiagram::StopClick(TObject *Sender)
{
        Timer2->Enabled=false;
        Start->Enabled=true;
        Stop->Enabled=false;
}
//---------------------------------------------------------------------------

void __fastcall TFDiagram::Timer2Timer(TObject *Sender)
{
        y = rand() % 151;
        x+= (rand() % 5) + 1;
        Panel2->Height = y;
        PaintBox1->Canvas->LineTo(x, y);
        if (x > 180){
        TRect sursa,destinatie;
        sursa=Rect(0,0,209,209);
        destinatie=Rect(-(207- x),0,211- (209 - x),209);
        PaintBox1->Canvas->CopyRect(destinatie,PaintBox1->Canvas,sursa);
        x -= (209 - x);
        }
        PaintBox1->Canvas->MoveTo(x, y);
        
}
//---------------------------------------------------------------------------


void __fastcall TFDiagram::PaintBox1Click(TObject *Sender)
{
        TRect dreptunghi;
        PaintBox1->Canvas->Pen->Color=clRed;
        PaintBox1->Canvas->Pen->Width=1;
        PaintBox1->Canvas->Brush->Style=bsCross;
        PaintBox1->Canvas->Brush->Color=clGray;
        PaintBox1->Canvas->FloodFill(10,10,clGray,fsBorder);                

}
//---------------------------------------------------------------------------

void __fastcall TFDiagram::FormCreate(TObject *Sender)
{
        Timer2->Enabled=false;
        Panel2->Enabled=false;
}
//---------------------------------------------------------------------------

