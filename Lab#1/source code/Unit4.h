//---------------------------------------------------------------------------

#ifndef Unit4H
#define Unit4H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TFDiagram : public TForm
{
__published:	// IDE-managed Components
        TTimer *Timer1;
        TTimer *Timer2;
        TLabel *Label1;
        TEdit *Edit1;
        TButton *Start;
        TButton *Stop;
        TButton *Exit;
        TLabel *Label2;
        TPanel *Panel1;
        TPanel *Panel2;
        TPaintBox *PaintBox1;
        void __fastcall Timer1Timer(TObject *Sender);
        void __fastcall ExitClick(TObject *Sender);
        void __fastcall StartClick(TObject *Sender);
        void __fastcall StopClick(TObject *Sender);
        void __fastcall Timer2Timer(TObject *Sender);
        void __fastcall PaintBox1Click(TObject *Sender);
        void __fastcall FormCreate(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TFDiagram(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFDiagram *FDiagram;
//---------------------------------------------------------------------------
#endif
