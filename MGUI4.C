//CLIENT SIDE CODE by Sagar
#ifndef ROOT_TGDockableFrame
#include "TGDockableFrame.h"
#endif
#include "TImage.h"
#endif
#include "TStyle.h"
#endif
#ifndef ROOT_TGWindow
#include "TGWindow.h"
#endif
#ifndef ROOT_TGMenu
#include "TGMenu.h"
#endif
#ifndef ROOT_TGMdiDecorFrame
#include "TGMdiDecorFrame.h"
#endif
#ifndef ROOT_TGTab
#include <TGTab.h>
#endif
#ifndef ROOT_TGSlider
#include <TGSlider.h>
#endif
#ifndef ROOT_TG3DLine
#include "TG3DLine.h"
#endif
#ifndef ROOT_TGMdiFrame
#include "TGMdiFrame.h"
#endif
#ifndef ROOT_TGMdiMainFrame
#include "TGMdiMainFrame.h"
#endif
#ifndef ROOT_TGMdiMenu
#include "TGMdiMenu.h"
#endif
#ifndef ROOT_TGListBox
#include "TGListBox.h"
#endif
#ifndef ROOT_TGNumberEntry
#include "TGNumberEntry.h"
#endif
#ifndef ROOT_TGScrollBar
#include "TGScrollBar.h"
#endif
#ifndef ROOT_TGComboBox
#include "TGComboBox.h"
#endif
#ifndef ROOT_TGuiBldHintsEditor
#include "TGuiBldHintsEditor.h"
#endif
#ifndef ROOT_TGuiBldNameFrame
#include "TGuiBldNameFrame.h"
#endif
#ifndef ROOT_TGFrame
#include "TGFrame.h"
#endif
#ifndef ROOT_TGFileDialog
#include "TGFileDialog.h"
#endif
#ifndef ROOT_TGShutter
#include "TGShutter.h"
#endif
#ifndef ROOT_TGButtonGroup
#include "TGButtonGroup.h"
#endif
#ifndef ROOT_TGCanvas
#include "TGCanvas.h"
#endif
#ifndef ROOT_TGFSContainer
#include "TGFSContainer.h"
#endif
#ifndef ROOT_TGuiBldEditor
#include "TGuiBldEditor.h"
#endif
#ifndef ROOT_TGColorSelect
#include "TGColorSelect.h"
#endif
#ifndef ROOT_TGButton
#include "TGButton.h"
#endif
#ifndef ROOT_TGFSComboBox
#include "TGFSComboBox.h"
#endif
#ifndef ROOT_TGLabel
#include "TGLabel.h"
#endif
#ifndef ROOT_TGMsgBox
#include "TGMsgBox.h"
#endif
#ifndef ROOT_TRootGuiBuilder
#include "TRootGuiBuilder.h"
#endif
#ifndef ROOT_TGTab
#include "TGTab.h"
#endif
#ifndef ROOT_TGListView
#include "TGListView.h"
#endif
#ifndef ROOT_TGSplitter
#include "TGSplitter.h"
#endif
#ifndef ROOT_TGStatusBar
#include "TGStatusBar.h"
#endif
#ifndef ROOT_TGListTree
#include "TGListTree.h"
#endif
#ifndef ROOT_TGuiBldGeometryFrame
#include "TGuiBldGeometryFrame.h"
#endif
#ifndef ROOT_TGToolTip
#include "TGToolTip.h"
#endif
#ifndef ROOT_TGToolBar
#include "TGToolBar.h"
#endif
#ifndef ROOT_TRootEmbeddedCanvas
#include "TRootEmbeddedCanvas.h"
#endif
#ifndef ROOT_TCanvas
#include "TCanvas.h"
#endif
#ifndef ROOT_TGView
#include "TGView.h"
#endif
#ifndef ROOT_TGuiBldDragManager
#include "TGuiBldDragManager.h"
#endif
#include <TGMenu.h>
#include <TList.h>
#include "RQ_OBJECT.h"
#include "Riostream.h"
#include "TMessage.h"
#include "TGMsgBox.h"
#define port_no 5000
#define DET_MAX 700
#include "string.h"

//Client class
class dynamicMonitor
{
	private:       
	//Variables required to build the GUI
	TGMainFrame 		*fMainFrameError,*fMainFrameAddParameter;  
	TGCompositeFrame	*fMainFrameTitle,*fMain;  
	TGCompositeFrame	*fMainFrameAll_inputs,*fGroupFrame,*fGroupFrame1;
	TGCompositeFrame	*fMainFrameAll_inputs1,*fGroupFrame2,*fGroupFrame3;    
	TGComboBox 		*fTrigger, *fTrigger1; 
	TGListBox 		*fParameter; 
	TGRadioButton 		*fRadioButton[2]; 
	TGComboBox		*fdate1,*fdate2,*fdate3,*fyear;
	TGComboBox		*fend_date1,*fend_date2,*fend_date3;
	TGComboBox		*fhr1,*fmin1,*fsec1;
	TGComboBox		*fhr2,*fmin2,*fsec2;
	TGComboBox		*fdate4,*fdate5,*fdate6,*fyear1;	//combo-box for tab2
	TGComboBox		*fend_date4,*fend_date5,*fend_date6;
	TGComboBox		*fhr3,*fmin3,*fsec3;
	TGComboBox		*fhr4,*fmin4,*fsec4;
	TRootEmbeddedCanvas	*fCanvas,*fCanvas1;
	TGListBox 		*fParameter1; 
	TGRadioButton 		*fRadioButton[2]; 
	TGComboBox		*fdate1,*fdate2,*fdate3,*fyear;
	TGComboBox		*fend_date1,*fend_date2,*fend_date3;
	TGComboBox		*fmodule_no,*fstation_no;
	TGComboBox		*fhr1,*fmin1,*fsec1;
	TGComboBox		*fhr2,*fmin2,*fsec2;
	TRootEmbeddedCanvas 	*fCanvas;
	TSocket             	*fSock;
	TGButton            	*fConnect;
	TGButton 		*fDisplayHist;/*

	TGButton		*fDisplayAll;
						*/

	TGButton		*fsave,*fbut,*fsave1;
	TGButton 		*fQuit;
	TGButton		*fOpen;
	TGButton		*fHelp;
	TGButton 		*fDisplayGraph;
	TGButton		*fDownload;
	TGButton		*fConnect1,*fDisplayHist1,*fQuit1,*fOpen1,*fHelp1,*fDisplayGraph1,*fDownload1,*fClearCanvas1;
	TGTextButton 		*fAddParameter;
	TGTextButton 		*fAddParameter1;
	TGButton		*fClearCanvas;
	TH1F               	*fHist,*fHist1;
	TCanvas 		*fsave_canvas,*fsave_canvas1;
	TGTextEntry 		*fTextDetctor_no,*fTextFromRunno,*fTextToRunno,*fTextDirect_cmd,*fparam;
	TGTextEntry 		*fTextModule_no,*fTextStation_no,*fTextFromRunno1,*fTextToRunno1,*fTextDirect_cmd1,*fparam1;
	TGCompositeFrame 	*fCompositeFrame1909;
	TDatime  			fToday;   	
	TDatime 			jk;
	TGFileInfo 			fj;
	TGTab 				*fTab;
	TColor              *color;
	TList 				*fSelected;
	TObject				*fListObj;	
	//Buffers for input
	TGTextBuffer  		*fBufDetect_no,*fBufpara, *fBuf_From_Time,  *fBuf_To_Time, *fBufDate, *fBufIP_add, *fBufDirect_cmd, *fBuf_To_Runno, *fBuf_From_Runno;
	TGTextBuffer		*fBufGuiname,*fBufTreename,*fBufActualname; //To link these to text boxes in the AddParameter() Function
	
	//Buffers for input
	TGTextBuffer  		*fBufDetect_no,*fBufpara, *fBuf_From_Time,  *fBuf_To_Time, *fBufDate, *fBufIP_add, *fBufDirect_cmd, *fBuf_To_Runno, *fBuf_From_Runno,*fBufDetect_no1,*fBufDetect_no2;
	TGTextBuffer		*fBufGuiname,*fBufTreename,*fBufActualname; //To link these to text boxes in the AddParameter() Function
	//Variables
	char 				fStart_date1[30],*fTrigger_no,fParameter_type[100],str3[200],*fDetector_no,*fStart_run_no,*fEnd_run_no,fStart_time[30],fEnd_time[30],fStart_date[30],fEnd_date [30],*fTime_run_no,*fIP_add,fYear_value[10],paraname[20],treeflag[20],*para1,fNoOfPara[20];
	char 				fmodule_no[10],fstation_no[10]; 
	char 				*guiname,*treename,*actualname; //All these relate to PARAMETERS eg : PEDRMS scruntree pedhhrms
	int 				mapperlimit=0;   //This will give the no. of paramters from the config file
	Int_t 				Rad_button_selected,error=0,id,flag_save,i,fNoOfCan=1,down_flag;
	Int_t                           f,frame_flag=0,config_flag=0,config_flag1=0;
	//Labels	
	TGLabel 			*fLabelServer_IP,*fLabelEnter_only_numbers,*fLabelTo_date,*fLabelTo_time,*label5,*CanLabel ;
    TGLabel 			*fLabelYear;
	TGLabel 			*From_date_Format, *To_date_Format,*From_time_Format, *To_time_Format;
	
	TGLabel 			*fLabelServer_IP1,*fLabelEnter_only_numbers1,*fLabelTo_date1,*fLabelTo_time1,*label51,*CanLabel1 ;
	    TGLabel 			*fLabelYear1;
	TGLabel 			*From_date_Format1, *To_date_Format1,*From_time_Format1, *To_time_Format1;

	
    TGCompositeFrame 	*fCompositeFrame1907;

	
	Char_t a[2];

	struct mapper           //Structure to map GUI names form list box to actual parameter names in ROOT files
	{
  		char guiname[30];                 
  		char treeflag[30];
  		char actualname[30];
  		int flag;

	}st[100];
		
	public:
	//Functions
		dynamicMonitor();
		void Radio();
		void Reset();
		void visible(int );
		void addEntry(TGComboBox *,int ,int,int);
		void removeEntry(TGComboBox *,int ,int);
		void Graph();
		void Connect(); 
		void Connect1();
		void DoSave();
		void DoDownload();
		void DoButton(char *);
		void DoButton1(char *);
		void DoButton2(char *);
		void DoBut();
		void DoText();
		void DoText1();
		void DoText3();
		void DoText4();
		void Result(); 
		void Mapper1();
		//void Mapper2();
		void Concat(char *str3);
		int Num();
		int Validate_detector();
		int Validate_datetime();
		void Combo_box_app();
		void Help();
		void ClearCanvas();
				void ClearCanvas1();
		void Mapper(); //Function to map GUI names from list box to actual parameter names in ROOT files
	 	void AddParameter(); //Function to Add New parameter to RDMConfig file
		void WriteParameter(); //Function to Write given arguments to RDMConfig
		void closedialog(); //Function to Close the Add parameter Box after hitting SAVE button
		~dynamicMonitor();                                                                        
};


//Constructor
dynamicMonitor::dynamicMonitor()
{
   flag_save=1;
   //strcpy(treeflag,"pAngRateAlld");
   fSelected=new TList();
   
	Pixel_t blue;
	gClient->GetColorByName("lightseagreen", blue);

	//-----------------Main frame---------------------//
	fMainFrameError = new TGMainFrame(gClient->GetRoot(),100,100,kVerticalFrame);
	fMainFrameError->SetName("fMainFrameError");
	fMainFrameError->SetLayoutBroken(kTRUE);
	fMainFrameError->ChangeBackground(blue);

	//-----------------Composite frame----------------//
	fMainFrameTitle = new TGCompositeFrame(fMainFrameError,1030,660,kVerticalFrame);
	fMainFrameTitle->SetName("fMainFrameTitle");
	fMainFrameTitle->SetLayoutBroken(kTRUE);
	fMainFrameTitle->ChangeBackground(blue);

	//.............................tab widget...............................//
	fTab = new TGTab(fMainFrameTitle,1030,680);
	fTab->ChangeBackground(blue);


	//..............................container of "Tab1".....................//   
	fCompositeFrame1909 = fTab->AddTab("MUON");
	fCompositeFrame1909->SetLayoutManager(new TGVerticalLayout(fCompositeFrame1909));
	fCompositeFrame1909->SetLayoutBroken(kTRUE);
	TGTabElement *tabel = fTab->GetTabTab("MUON");
	tabel->ChangeBackground(blue);

			//-------------...............composite frame for tab 1 ................------------------//
		fMainFrameAll_inputs1 = new TGCompositeFrame(fCompositeFrame1909,1033,655,kVerticalFrame);
		fMainFrameAll_inputs1->SetName("fMainFrameAll_inputs1");
		fMainFrameAll_inputs1->SetLayoutBroken(kTRUE);
		fMainFrameAll_inputs1->ChangeBackground(blue);

	//......................group frame for time. tab 2 ......................//
	fGroupFrame2 = new TGCompositeFrame(fMainFrameAll_inputs1,1030,660,kVerticalFrame);
	fGroupFrame2->SetName("fGroupFrame2");
	fGroupFrame2->SetLayoutBroken(kTRUE);
	fMainFrameAll_inputs1->AddFrame(fGroupFrame2, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
	fGroupFrame2->MoveResize(450,2,300,500);
	fGroupFrame2->ChangeBackground(blue);


	//---------list box for parameters for tab1--------------------//
	
	fParameter1 = new TGListBox(fMainFrameAll_inputs1);
	fParameter1->SetMultipleSelections();
	fMainFrameAll_inputs1->AddFrame(fParameter1, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
	fParameter1->SetName("parameter");


//	Mapper1();	
	
        fParameter1->MoveResize(20,50,50,50);
		
//	fParameter1->Connect("Selected(Int_t)", "dynamicMonitor", this, "disable_button1()");
	


	//---------------Graphics context changes------------------//
	TGFont *ufont;         //Will reflect user font changes
	TGGC   *uGC;           //Will reflect user GC changes

	ufont = gClient->GetFont("-*-helvetica-medium-r-*-*-12-*-*-*-*-*-iso8859-1");
	GCValues_t valEntry828;
	valEntry828.fMask = kGCForeground | kGCBackground | kGCFillStyle | kGCFont | kGCGraphicsExposures;
	gClient->GetColorByName("#000000",valEntry828.fForeground);
	gClient->GetColorByName("#e0e0e0",valEntry828.fBackground);
	valEntry828.fFillStyle = kFillSolid;
	valEntry828.fFont = ufont->GetFontHandle();
	valEntry828.fGraphicsExposures = kFALSE;
	uGC = gClient->GetGC(&valEntry828, kTRUE); 

	ULong_t bcolor, ycolor,wcolor,ccolor,redcolor,runcolor;
	gClient->GetColorByName("white", bcolor);
	gClient->GetColorByName("blue", ycolor);  
	gClient->GetColorByName("white", wcolor);  
	gClient->GetColorByName("firebrick", redcolor);  
	gClient->GetColorByName("darkmagenta", runcolor);



	ufont = gClient->GetFont("-*-helvetica-medium-r-*-*-12-*-*-*-*-*-iso8859-1");


	//----------------------------Embedded canvas for tab1---------------------//
	fCanvas1 = new TRootEmbeddedCanvas(0,fMainFrameAll_inputs1,664,520);
	fCanvas1->SetName("fCanvas1");
	Int_t wfRootEmbeddedCanvas1499 = fCanvas1->GetCanvasWindowId();
	fsave_canvas1 = new TCanvas("fsave_canvas1", 10, 10, wfRootEmbeddedCanvas1499);
	fCanvas1->AdoptCanvas(fsave_canvas1);
	fMainFrameAll_inputs1->AddFrame(fCanvas1,new TGLayoutHints(kLHintsLeft | kLHintsTop,1,1,1,1));
	fCanvas1->MoveResize(5,150,1020,470);
	fCanvas1->GetCanvas()->SetFillColor(10);
	Pixel_t blue;
	scr = new TGHScrollBar(fCanvas1,3000,kHorizontalFrame,3000);
	fCanvas1->AddFrame(scr);



	     /* scroll bar */
           /*for (int i=0; i < 350; ++i)
                              fCanvas1->AddFrame(new TGFrame(fCanvas1->GetContainer(),
                              2, 2, 0),
                              new TGLayoutHints(kLHintsExpandY | kLHintsRight));
           fMainFrameAll_inputs1->AddFrame(fCanvas1,new TGLayoutHints(kLHintsLeft | kLHintsTop,1,1,1,1));
	*/




	//------------------------------Buttons  for tab1 -------------------//
	
	fDisplayGraph1 = new TGTextButton(fMainFrameAll_inputs1,"PLOT GRAPH",1); //plot graph
	fDisplayGraph1->Resize(96,22);
	fDisplayGraph1->MoveResize(75,629,90,24);    
	fDisplayGraph1->Connect("Clicked()", "dynamicMonitor", this, "Connect1()");
	fDisplayGraph1->Connect("Clicked()", "dynamicMonitor", this, "DoButton1()");
	fMainFrameAll_inputs1->AddFrame(fDisplayGraph1,new TGLayoutHints(kLHintsExpandX | kLHintsExpandY, 5, 5));
	fDisplayGraph1->ChangeBackground(wcolor);
        fDisplayGraph1->SetToolTipText("It plots the graph");

	fDisplayAll = new TGTextButton(fMainFrameAll_inputs1,"PLOT ALL",1);
	fDisplayAll->Resize(96,22);
	fDisplayAll->MoveResize(800,75,120,24);
	fDisplayAll->Connect("Clicked()", "dynamicMonitor", this, "Connect1()");
	//fDisplayAll->Connect("Clicked()", "dynamicMonitor", this, "DoButton2()");
	fMainFrameAll_inputs1->AddFrame(fDisplayGraph1,new TGLayoutHints(kLHintsExpandX | kLHintsExpandY, 5, 5));
	fDisplayAll->ChangeBackground(wcolor);
        fDisplayAll->SetToolTipText("It plots parameters in all direction");
	//fDisplayAll

	/*fDisplayHist1 = new TGTextButton(fMainFrameAll_inputs1,"PLOT HISTOGRAM",2);	//plot histogram
	fDisplayHist1->Resize(100,22);
	fDisplayHist1->MoveResize(152,629,122,24);
	fDisplayHist1->Connect("Clicked()", "dynamicMonitor", this, "Connect1()");
	fDisplayHist1->Connect("Clicked()", "dynamicMonitor", this, "DoButton1()");
	fMainFrameAll_inputs1->AddFrame(fDisplayHist1,new TGLayoutHints(kLHintsExpandX | kLHintsExpandY, 5, 5));
	fDisplayHist1->ChangeBackground(wcolor);
	fDisplayHist1->SetToolTipText("It plots 1-D histogram",200);
	*/
	
	fQuit1 = new TGTextButton(fMainFrameAll_inputs1,"QUIT");	//quit
	fQuit1->Resize(94,22);
	fQuit1->MoveResize(870,629,90,24);
	fQuit1->Connect("Clicked()", "TApplication", gApplication, "Terminate()");
	fMainFrameAll_inputs1->AddFrame(fQuit1,new TGLayoutHints(kLHintsExpandX | kLHintsExpandY, 5, 5));
	fQuit1->ChangeBackground(wcolor);
        fQuit1->SetToolTipText("It exists the application",200);     


	fAddParameter1 = new TGTextButton(fMainFrameAll_inputs1,"  ADD PARAMETER  ",17); //Add a new parameter in the Para file
	fAddParameter1->Resize(96,22);
	fAddParameter1->MoveResize(800,47,120,24);    
	fAddParameter1->Connect("Clicked()", "dynamicMonitor", this,"WriteParameter1()");
	fMainFrameAll_inputs1->AddFrame(fAddParameter1,new TGLayoutHints(kLHintsExpandX | kLHintsExpandY, 5, 5));
	fAddParameter1->ChangeBackground(wcolor);
        fAddParameter1->SetToolTipText("New parameter gets added",200);     
        

	fOpen1= new TGTextButton(fMainFrameAll_inputs1, "OPEN");	//open
	fOpen1->Resize(150,22);
	fOpen1->MoveResize(270,629,90,24);
	fOpen1->Connect("Clicked()", "dynamicMonitor", this, "DoOpen()");
	fMainFrameAll_inputs1->AddFrame(fOpen1,new TGLayoutHints(kLHintsExpandX | kLHintsExpandY, 5, 5));
	fOpen1->ChangeBackground(wcolor);
        fOpen1->SetToolTipText("It opens the downloaded and saved file",200);      
        

	
	/*fDownload1 = new TGTextButton(fMainFrameAll_inputs1,"DOWNLOAD FILE",3);	//download
	fDownload1->Resize(100,22);  
	fDownload1->MoveResize(590,629,90,24);
	fDownload1->Connect("Clicked()", "dynamicMonitor", this, "DoDownload()");
	fMainFrameAll_inputs1->AddFrame(fDownload1,new TGLayoutHints(kLHintsExpandX | kLHintsExpandY, 5, 5));
	fDownload1->ChangeBackground(wcolor);
	fDownload1->SetToolTipText("It downloads the root file",200);
	//fDownload1->SetState(kButtonDisabled);
	*/
	fsave1 = new TGTextButton(fMainFrameAll_inputs1, "SAVE PLOTTINGS");	//save
	fsave1 ->Resize(150,22);
	//fsave1->SetState(kButtonDisabled);   
	fsave1->MoveResize(470,629,90,24);  
	fsave1->Connect("Clicked()", "dynamicMonitor", this, "DoSave()");
	fMainFrameAll_inputs1->AddFrame(fsave1,new TGLayoutHints(kLHintsExpandX | kLHintsExpandY, 5, 5));
	fsave1->ChangeBackground(wcolor);	
        fsave1->SetToolTipText("It saves the graph/histogram",200);                  

	fhelp1 = new TGTextButton(fMainFrameAll_inputs1, "HELP");  	//help	
	fhelp1 ->Resize(150,22);  
	fhelp1->MoveResize(670,629,90,24);  
	fhelp1->Connect("Clicked()", "dynamicMonitor", this, "Help()");
	fMainFrameAll_inputs1->AddFrame(fhelp1,new TGLayoutHints(kLHintsExpandX | kLHintsExpandY, 5, 5));
	fhelp1->ChangeBackground(wcolor);
        fhelp1->SetToolTipText("It displays pdf to guide the user");

//----------------------------Text boxes for MUON ----------------------------// *fTextModule_no,*fTextStation_no

//---------------------Labels for tab1----------------------------------------------------//		

	TGLabel *fLabelParameter1 = new TGLabel(fMainFrameAll_inputs1,"PARAMETER");
	//  fLabelParameter->SetTextJustify(36);
	fLabelParameter1->SetMargins(0,0,0,0);
	fLabelParameter1->SetWrapLength(-1);

	fMainFrameAll_inputs1->AddFrame(fLabelParameter1,new TGLayoutHints(kLHintsExpandX | kLHintsExpandY, 5, 5));
	fLabelParameter1->MoveResize(100,30,90,20);
	fLabelParameter1->SetTextColor(bcolor);
	fLabelParameter1->ChangeBackground(blue);

	TGLabel *fTextModule_no = new TGLabel(fMainFrameAll_inputs1,"MODULE NO");
	fTextModule_no->SetTextJustify(36);
	fTextModule_no->SetMargins(0,0,0,0);
	fTextModule_no->SetWrapLength(-1);
	fMainFrameAll_inputs1->AddFrame(fTextModule_no,new TGLayoutHints(kLHintsExpandX | kLHintsExpandY, 5, 5));
	fTextModule_no->MoveResize(380,30,90,20);
	fTextModule_no->SetTextColor(bcolor);
	fTextModule_no->ChangeBackground(blue);

	TGLabel *fTextStation_no = new TGLabel(fMainFrameAll_inputs1,"STATION NO");
	fTextStation_no->SetTextJustify(36);
	fTextStation_no->SetMargins(0,0,0,0);
	fTextStation_no->SetWrapLength(-1);
	fMainFrameAll_inputs1->AddFrame(fTextStation_no,new TGLayoutHints(kLHintsExpandX | kLHintsExpandY, 5, 5));
	fTextStation_no->MoveResize(260,30,90,20);
	fTextStation_no->SetTextColor(bcolor);
	fTextStation_no->ChangeBackground(blue);
//.
	TGLabel *fLabelFrom_date1 = new TGLabel(fGroupFrame2,"FROM DATE");
	fLabelFrom_date1->SetTextJustify(36);
	fLabelFrom_date1->SetMargins(0,0,0,0);
	fLabelFrom_date1->SetWrapLength(-1);
	fGroupFrame2->AddFrame(fLabelFrom_date1,new TGLayoutHints(kLHintsExpandX | kLHintsExpandY, 5, 5));
	fLabelFrom_date1->MoveResize(60,25,90,25);
	fLabelFrom_date1->SetTextColor(bcolor);
	fLabelFrom_date1->ChangeBackground(blue);


	TGLabel *fLabelFrom_date1 = new TGLabel(fGroupFrame2," TO DATE");
	fLabelFrom_date1->SetTextJustify(36);
	fLabelFrom_date1->SetMargins(0,0,0,0);
	fLabelFrom_date1->SetWrapLength(-1);
	fGroupFrame2->AddFrame(fLabelFrom_date1,new TGLayoutHints(kLHintsExpandX | kLHintsExpandY, 5, 5));
	fLabelFrom_date1->MoveResize(60,90,90,25);
	fLabelFrom_date1->SetTextColor(bcolor);
	fLabelFrom_date1->ChangeBackground(blue);

	TGLabel *fLabelFrom_date_Format = new TGLabel(fGroupFrame2," DD      MM     YYYY");
	fLabelFrom_date_Format->SetTextJustify(17);
	fLabelFrom_date_Format->SetMargins(0,0,0,0);
	fLabelFrom_date_Format->SetWrapLength(-1);
	fGroupFrame2->AddFrame(fLabelFrom_date_Format,new TGLayoutHints(kLHintsExpandX | kLHintsExpandY, 5, 5));
	fLabelFrom_date_Format->MoveResize(52,65,150,25);
	// fLabelFrom_date_Format->MoveResize(40,55,100,16); 
	// fLabelFrom_date_Format->SetTextFont("Arial");
	fLabelFrom_date_Format->SetTextColor(redcolor);
	fLabelFrom_date_Format->ChangeBackground(blue);


	TGLabel *fLabelTo_date_Format = new TGLabel(fGroupFrame2," DD      MM     YYYY");
	fLabelTo_date_Format->SetTextJustify(36);
	fLabelTo_date_Format->SetMargins(0,0,0,0);
	fLabelTo_date_Format->SetWrapLength(-1);
	fGroupFrame2->AddFrame(fLabelTo_date_Format,new TGLayoutHints(kLHintsExpandX | kLHintsExpandY, 5, 5));
	fLabelTo_date_Format->MoveResize(52,130,120,20);
	fLabelTo_date_Format->SetTextColor(redcolor);
	fLabelTo_date_Format->ChangeBackground(blue);



//------------------------------------combo box for tab2 -------------------------------------------------------//

//------------------------------------combo box for tab2 -------------------------------------------------------//

	//----------------Combo Box for  DATE 1------------------------//
	fdate4 = new TGComboBox(fGroupFrame2,-1,kHorizontalFrame | kSunkenFrame | kDoubleBorder | kOwnBackground);
	fdate4->SetName("date1");	   
	addEntry(fdate4,1,31,1); 
	fdate4->Resize(102,20);
	fdate4->Select(fToday.GetDay());
	fGroupFrame2->AddFrame(fdate4,new TGLayoutHints(kLHintsExpandX | kLHintsExpandY, 5, 5));
	fdate4->MoveResize(50,48,40,20);  
	//fdate4->Connect("Selected(Int_t)", "dynamicMonitor", this, " ");

	fdate5 = new TGComboBox(fGroupFrame2,-1,kHorizontalFrame | kSunkenFrame | kDoubleBorder | kOwnBackground);
	fdate5->SetName("date2");	   
	addEntry(fdate5,1,12,1); 
	fdate5->Resize(102,20);
	fdate5->Select(fToday.GetMonth());
	fGroupFrame2->AddFrame(fdate5,new TGLayoutHints(kLHintsExpandX | kLHintsExpandY, 5, 5));
	fdate5->MoveResize(90,48,40,20);
	//fdate5->Connect("Selected(Int_t)", "dynamicMonitor", this, " ");

	fdate6 = new TGComboBox(fGroupFrame2,-1,kHorizontalFrame | kSunkenFrame | kDoubleBorder | kOwnBackground);
	fdate6->SetName("date3");	   
	addEntry(fdate6,2000,2050,0); 
	fdate6->Resize(102,20);
	fdate6->Select(fToday.GetYear());
	fGroupFrame2->AddFrame(fdate6,new TGLayoutHints(kLHintsExpandX | kLHintsExpandY, 5, 5));
	fdate6->MoveResize(130,48,50,20);
	//fdate6->Connect("Selected(Int_t)", "dynamicMonitor", this, "");


	//-------------------Combo box for TO DATE 2-------------------//
	/*fend_date1 = new TGComboBox(fGroupFrame2,-1,kHorizontalFrame | kSunkenFrame | kDoubleBorder | kOwnBackground);
	fend_date1->SetName("date1");	  
	addEntry(fend_date1,1,31,1); 	   
	fend_date1->Resize(102,20);
	fend_date1->Select(fToday.GetDay()); 
	fGroupFrame2->AddFramef(fend_date1,new TGLayoutHints(kLHintsExpandX | kLHintsExpandY, 5, 5));
	fend_date1->MoveResize(50,110,40,20);

	fend_date2 = new TGComboBox(fGroupFrame2,-1,kHorizontalFrame | kSunkenFrame | kDoubleBorder | kOwnBackground);
	fend_date2->SetName("date2");
	addEntry(fend_date2,1,12,1); 
	fend_date2->Resize(102,20);
	fend_date2->Select(fToday.GetMonth());
	fGroupFrame2->AddFrame(fend_date2,new TGLayoutHints(kLHintsExpandX | kLHintsExpandY, 5, 5));
	fend_date2->MoveResize(90,110,40,20);

	fend_date3 = new TGComboBox(fGroupFrame2,-1,kHorizontalFrame | kSunkenFrame | kDoubleBorder | kOwnBackground);
	fend_date3->SetName("date3");
	addEntry(fend_date3,2000,2050,0);   
	fend_date3->Resize(102,20);
	fend_date3->Select(fToday.GetYear());
	fGroupFrame2->AddFrame(fend_date3,new TGLayoutHints(kLHintsExpandX | kLHintsExpandY, 5, 5));
	fend_date3->MoveResize(130,110,50,20);*/

//-----------------------------Combo box for Station & Module No. ------------------------------\\
	
	fmodule_no = new TGComboBox(fMainFrameAll_inputs1,-1,kHorizontalFrame | kSunkenFrame | kDoubleBorder | kOwnBackground);
	//fmodule_no->SetName("module_no");	   
	fmodule_no->Resize(102,20);
	fmodule_no->AddEntry("M0",4);
	fmodule_no->AddEntry("M1",5);
	fmodule_no->AddEntry("M2",6);
	fmodule_no->AddEntry("M3",7);
	fmodule_no->Select(4);
	fGroupFrame2->AddFrame(fmodule_no,new TGLayoutHints(kLHintsExpandX | kLHintsExpandY, 5, 5));
	fmodule_no->MoveResize(380,50,80,20);

	fstation_no = new TGComboBox(fMainFrameAll_inputs1,-1,kHorizontalFrame | kSunkenFrame | kDoubleBorder | kOwnBackground);
	//fmodule_no->SetName("module_no");	   
	fstation_no->Resize(102,20);
	fstation_no->AddEntry("S0",0);
	fstation_no->AddEntry("S1",1);
	fstation_no->AddEntry("S2",2);
	fstation_no->AddEntry("S3",3);
	fstation_no->Select(0);
	fGroupFrame2->AddFrame(fstation_no,new TGLayoutHints(kLHintsExpandX | kLHintsExpandY, 5, 5));
	fstation_no->MoveResize(260,50,80,20);



//-------------------------------Trigger for Parameter------------------------------------------//
		
/*	fTrigger1 = new TGComboBox(fMainFrameAll_inputs1,-1,kHorizontalFrame | kSunkenFrame | kDoubleBorder | kOwnBackground);
	fTrigger1->SetName("fTrigger1");
	
	fTrigger1->AddEntry(" pAngRateAlld",8);
	fTrigger1->AddEntry(" pAngRateAlld_Pres",9);
	fTrigger1->Resize(102,20);
	fTrigger1->Select(8);
	fMainFrameAll_inputs1->AddFrame(fTrigger1,new TGLayoutHints(kLHintsExpandX | kLHintsExpandY, 5, 5));
	fTrigger1->MoveResize(90,50,140,20);
	fTrigger1->ChangeBackground(blue);
*/
	//fCompositeFrame1907->AddFrame(fMainFrameAll_inputs, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
//	fCompositeFrame1907->AddFrame(fMainFrameAll_inputs, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
	fCompositeFrame1909->AddFrame(fMainFrameAll_inputs1, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
	fMainFrameTitle->AddFrame(fTab, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
	fTab->MoveResize(0,0,0,0);
	//fMainFrameAll_inputs1->MoveResize(0,0,1060,700);
	fMainFrameError->AddFrame(fMainFrameTitle, new TGLayoutHints(kLHintsExpandX | kLHintsExpandY));
	fMainFrameTitle->MoveResize(0,0,1045,680);

	fMainFrameError->SetMWMHints(kMWMDecorAll, kMWMFuncAll, kMWMInputModeless);
	fMainFrameError->MapSubwindows();
	fMainFrameError->Resize();
	fMainFrameError->SetWindowName("CLIENT");
	fMainFrameError->SetWMSizeHints(fMainFrameError->GetDefaultWidth(), fMainFrameError->GetDefaultHeight(),1050,700, 0, 0);
	fMainFrameError->MapRaised();
	fMainFrameError->MapWindow();
	fMainFrameError->Resize(fMainFrameError->GetMaxWidth(),fMainFrameError->GetMaxHeight());
//	fMainFrameAll_inputs->ShowFrame(fGroupFrame);
//	fMainFrameAll_inputs->HideFrame(fGroupFrame1);
//	Mapper(); //CALLING MAPPER HERE IS A MUST
	Mapper1();
}  




void dynamicMonitor::addEntry(TGComboBox *obj,int fentry ,int lentry,int con)
{
	for(Int_t no=fentry;no<=lentry;no++)
	   {
		if(con==1)
		{
			if(no<10)
   				sprintf(a,"0%d",no);
	   		else
   				sprintf(a,"%d",no);   	  	
			obj->AddEntry(a,no);
		}
		else
		{
			sprintf(a,"%d",no);   	  	
			obj->AddEntry(a,no);
		}
	   }	

}
void dynamicMonitor::removeEntry(TGComboBox *obj,int fentry,int lentry)
{
	for(Int_t no=fentry;no<=lentry;no++)
	{
		obj->RemoveEntry(no);
		fyear->Layout();
	}
}
///Connecting to the server
/*void dynamicMonitor::Connect()
{
	fSock = new TSocket("localhost", port_no);	//localhost hard coded

	if (!fSock->IsValid())
	{
		Error("dynamicMonitor::Connect", "not valid");
		gApplication->Terminate();
	}

	fsave_canvas->GetCanvas()->Clear();
	fsave->SetState(kButtonDisabled);
	fDownload->SetState(kButtonDisabled);
	fsave_canvas->GetCanvas()->Modified();
	fsave_canvas->GetCanvas()->Update();
	fDisplayHist->SetState(kButtonUp);
	fDisplayGraph->SetState(kButtonUp);
}
*/
void dynamicMonitor::Connect1()
{
	fSock = new TSocket("localhost", port_no);	//localhost hard coded for Muon

	if (!fSock->IsValid())
	{
		cout<<"************************************Error************************************";
		Error("dynamicMonitor::Connect1", "not valid");
		gApplication->Terminate();
	}
/*	fsave_canvas1->GetCanvas()->Clear();
	fsave1->SetState(kButtonDisabled);
	fDownload1->SetState(kButtonDisabled);
	fsave_canvas1->GetCanvas()->Modified();
	fsave_canvas1->GetCanvas()->Update();
	fDisplayHist1->SetState(kButtonUp);
	fDisplayGraph1->SetState(kButtonUp);
*/

}



/*
---------------------------------------------------------------------------------------------------
void dynamicMonitor::DoButton2() 
{
	char buff1[200];	
	Char_t a[10];
	Int_t p=0,retval;
	Int_t t4,t5,t6,s1,m1,f1,n1,i;
	Int_t t,p,tmp;
	int no;
	TGTextBuffer *msg2=new TGTextBuffer(1000);
	int limit,index=0,j,i1,totalentry;
	char s2[10];
	char d2[10],d3[10];
	char station[10],module[10],parameter[50];
	p=fParameter1->GetSelected();
	TMessage *mess;
	TMessage *mess1;
	TGButton *btn = (TGButton *) gTQSender;
		
	 
{
	t4=fdate4->GetSelected();
	t5=fdate5->GetSelected();
	t6=fdate6->GetSelected();
		

		sprintf(fStart_date1,"%d",t6);
		if(t5<10)
		{
			sprintf(a,"0%d",t5);
			strcat(fStart_date1,a);
		}
		else
		{
			sprintf(a,"%d",t5);
			strcat(fStart_date1,a);
		}
		if(t4<10)
		{
			sprintf(a,"0%d",t4);
			strcat(fStart_date1,a);
		}   	
		else
		{
			sprintf(a,"%d",t4);
			strcat(fStart_date1,a);
		}

	strcat(buff,",");
	strcpy(buff,parameter);
	strcat(buff,"_");
	strcat(buff,station);
	strcat(buff,"_");
	strcat(buff,module);	
	strcat(buff,",");
	strcat(buff,fStart_date1);
	strcat(buff,",");
	strcat(buff,"\0");
	cout<<buff;
	fSock->Send(buff);
	int nnnn=1;
	fSock->Send(buff);
	
	{
	if (fSock->Recv(mess) <= 0)	//RECIEVES MESSAGE 
		
			{
						Error("dynamicMonitor::DoButton2", "error receiving message");
						return;
			}
			
		if(mess->What()==kMESS_OBJECT)	//Check object/data
			
					{
						cout<<mess;
						// Read the recieved object and plot the graph
						if (mess->GetClass()->InheritsFrom(TH1::Class()))
							
						{
							fHist = (TH1*) mess->ReadObject(mess->GetClass());
							fHist->Draw("Hist");	
							fsave_canvas1->GetCanvas()->Modified();
							fsave_canvas1->GetCanvas()->Update();
						}
				}
					
			else {
					Char_t str1[500000000];
					int int1;
						TGTextBuffer *msg9 = new TGTextBuffer(1000);		
						mess->ReadString(str1,2000000);
						cout<<str1<<endl;
						int1=atoi(str1);
						cout<<int1;
					switch(int1)
					{				
						case 11:
						msg9->AddText(0,"No File Present");
					        new TGMsgBox(gClient->GetRoot(),fMainFrameError,"ERROR",msg9->GetString(),0,4,&retval);			
				break;
					}
				delete mess;
			}
	}
}
}
---------------------------------------------------------------------------------------------------
*/


void dynamicMonitor::DoButton1() 
{
	char buff[200];	
	Char_t a[10];
	Int_t p=0,retval;
	Int_t t4,t5,t6,s1,m1,f1,n1,i;
	Int_t t,p,tmp;
	int no;
	TGTextBuffer *msg2=new TGTextBuffer(1000);
	int limit,index=0,j,i1,totalentry;
	char s2[10];
	char d2[10],d3[10];
	char station[10],module[10],parameter[50];
	p=fParameter1->GetSelected();
	TMessage *mess;
	TMessage *mess1;
	TGButton *btn = (TGButton *) gTQSender;
		
	if (p==-1)
	{
		msg2->AddText(0,"At least one parameter should be selected..!!");
		new TGMsgBox(gClient->GetRoot(),fMainFrameError,"ERROR",msg2->GetString(),0,4,&retval);	
	}	
	else 
{
	t4=fdate4->GetSelected();
	t5=fdate5->GetSelected();
	t6=fdate6->GetSelected();
		
	s1=fstation_no->GetSelected();	
	cout<<"station 1 :- "<<s1;
	
	
	switch (s1)
	{
		case 0:
			strcpy(station,"S0");
			break;
		case 1:
			strcpy(station,"S1");
			break;
		case 2:
			strcpy(station,"S2");	
			break;
		case 3:
			strcpy(station,"S3");	
			break;
	}	
	cout<<"station :- "<<station;	
	m1=fmodule_no->GetSelected();

	switch(m1)
	{
		case 4:
			strcpy(module,"M0");
		
		break;
		case 5:
			strcpy(module,"M1");
		
		break;

		case 6:
			strcpy(module,"M2");
		
		break;

		case 7:
			strcpy(module,"M3");
		
		break;

	}
	cout << module;
		sprintf(fStart_date1,"%d",t6);

		if(t5<10)
		{
			sprintf(a,"0%d",t5);
			strcat(fStart_date1,a);
		}
		else
		{
			sprintf(a,"%d",t5);
			strcat(fStart_date1,a);
		}

		if(t4<10)
		{
			sprintf(a,"0%d",t4);
			strcat(fStart_date1,a);
		}   	
		else
		{
			sprintf(a,"%d",t4);
			strcat(fStart_date1,a);
		}

	p=fParameter1->GetSelected();
	cout<<"p :-- " <<p;
	no=p;
//	sprintf(no,"%d",p);
	cout<<"dobutton :- " <<st[no].treeflag;
	sprintf(parameter,"%s",st[no].treeflag);
	

	strcat(buff,",");
	strcpy(buff,parameter);
	strcat(buff,"_");
	strcat(buff,station);
	strcat(buff,"_");
	strcat(buff,module);	
	strcat(buff,",");
	strcat(buff,fStart_date1);
	strcat(buff,",");
	strcat(buff,"\0");
	cout<<"\nthis is buffer content\n"<<buff;
	fSock->Send(buff);
	int nnnn=1;
	fSock->Send(buff);
	//for (int i = 0; i < 2;i++)
	{
	if (fSock->Recv(mess) <= 0)	//RECIEVES MESSAGE 
		//if (fSock->Recv(mess1) <= 0)
			{
						Error("dynamicMonitor::DoButton1", "error receiving message");
						return;
			}
			
		if(mess->What()==kMESS_OBJECT)	//Check object/data
			//if(mess1->What()==kMESS_OBJECT)
					{
						cout<<mess;
						// Read the recieved object and plot the graph
						if (mess->GetClass()->InheritsFrom(TH1::Class()))
							//if (mess1->GetClass()->InheritsFrom(TH1::Class()))
							
						{
							fHist = (TH1*) mess->ReadObject(mess->GetClass());
							//fHist = (TH1*) mess->ReadObject(mess1->GetClass());
							//fsave_canvas->cd(fNoOfCan);
							//fNoOfCan++;
							//fHist->SetMarkerStyle (kFullStar);
							//fHist->SetMarkerColor(2);
							//fHist->SetFillColor(38);
							//fHist->GetBinContent(fHist->Fill(1));
							//TH1->GetXaxis()->SetCanExtend(kTRUE);
							//fsave_canvas1->Divide(2,1);
							//fsave_canvas1->cd(nnnn);
							//fHist->Draw("Hist");
							//nnnn++;
							//fsave_canvas1->cd(nnnn);
							fHist->Draw("Hist");	
							fsave_canvas1->GetCanvas()->Modified();
							fsave_canvas1->GetCanvas()->Update();
							//fsave1->SetState(kButtonUp);
							//fDownload1->SetState(kButtonUp);
							//TGTextBuffer *msg14 = new TGTextBuffer(1000);
						}
				}
					
			else {
					Char_t str1[500000000];
					int int1;
						TGTextBuffer *msg9 = new TGTextBuffer(1000);		
						mess->ReadString(str1,2000000);
						cout<<str1<<endl;
						int1=atoi(str1);
						cout<<int1;
					switch(int1)
					{				
						case 11:
						msg9->AddText(0,"No File Present");
					        new TGMsgBox(gClient->GetRoot(),fMainFrameError,"ERROR",msg9->GetString(),0,4,&retval);			
				break;
					}
				delete mess;
			}
	}
}
}
///Send the command to server
/// Destructor
 void dynamicMonitor::Mapper1()				//MAPS GUI PARAMETER NAMES to ACTUAL PARAMETER NAMES PRESENT IN THE ROOT FILE
{
	FILE *fp;
	char sss[90];        
	char s[4][30]; 
	fp=fopen("Para","r");
	int i=0,scount=0;
   	int index=0,mapper=0;
   	fParameter1->RemoveAll();

   	for (i = 0; i < 100; ++i)
   	{
   		strcpy(st[i].guiname,"");                  //INITIALIZING
		strcpy(st[i].treeflag,"");
		strcpy(st[i].actualname,"");
		st[i].flag=-1;
   	}
	

   	while(!feof(fp))                    	//LOOPS runs till EndOfFile to get all parameters
   	{
   		strcpy(s[0],"");
   		strcpy(s[1],"");
   		strcpy(s[2],"");
		fgets(sss,90,fp);
		scount = sscanf(sss,"%s %s %s %s",s[0],s[1],s[2],s[3]);  //scans from file

		if(scount>0)
		{
			strcpy(st[index].guiname,s[0]);                  //ACTUAL MAPPING
			strcpy(st[index].treeflag,s[1]);
			strcpy(st[index].actualname,s[2]);
        		st[index].flag=atoi(s[3]);
			fParameter1->AddEntry(s[0],index);	    	//PUTTING GUINAMES into LIST BOX OF GUI
			index++;
		}
   	}
   	fParameter1->RemoveEntry(index-1);
   	mapperlimit = index;
   	//fParameter1->MoveResize(10,50,100,100);
  	fParameter1->MoveResize(80,50,130,60);
   	fclose(fp);
}

void dynamicMonitor::DoSave()
{
	static const char *gSaveAsTypes[] = { "All files",    "*",
                                      "Encapsulated PostScript", "*.eps",
                                      "PDF",          "*.pdf",
                                      "SVG",          "*.svg",
                                      "GIF",          "*.gif",
                                      "ROOT macros",  "*.C",
                                      "ROOT files",   "*.root",
                                      "XML",          "*.xml",
                                      "PNG",          "*.png",
                                      "XPM",          "*.xpm",
                                      "JPEG",         "*.jpg",
                                      "TIFF",         "*.tiff",
                                      "XCF",          "*.xcf",
                                      "PostScript",   "*.ps",
                                      0,              0 };
	TString workdir = gSystem->WorkingDirectory();
	static TString dir(".");
	static Int_t typeidx = 0;
	static Bool_t overwr = kFALSE;
	Int_t retval;
	fj.fFileTypes   = gSaveAsTypes;
	fj.fIniDir      = StrDup(dir);
	fj.fFileTypeIdx = typeidx;
	fj.fOverwrite = overwr;//
	new TGFileDialog(gClient->GetRoot(),fMainFrameError, kFDSave, &fj);
	gSystem->ChangeDirectory(workdir.Data());
    if (!fj.fFilename) 
	{
		flag_save=0;
		return ;
	}
	flag_save=1;
	Bool_t  appendedType = kFALSE;
	TString fn = fj.fFilename;
	TString ft = fj.fFileTypes[fj.fFileTypeIdx+1];
	dir     = fj.fIniDir;
	typeidx = fj.fFileTypeIdx;
	overwr  = fj.fOverwrite;

	if(!strstr(fj.fFilename,"."))
		fn += ft(ft.Index("."), ft.Length());

	if(!strstr(str3,"download"))
	{
		gPad->GetCanvas()->SaveAs(fn);	// gPad-active pad, getcanvas gets the pointer
		TGTextBuffer *msg15 = new TGTextBuffer(1000);		
		msg15->AddText(0,"File Saved Successfully");
		new TGMsgBox(gClient->GetRoot(),fMainFrameError,"Save",msg15->GetString(),3,4,&retval);    	    	
	}
}

void dynamicMonitor::DoOpen()
{
	static const char *gOpenTypes[] = {"PostScript",   "*.ps",
                                      "Encapsulated PostScript", "*.eps",
                                      "PDF",          "*.pdf",
                                      "SVG",          "*.svg",
                                      "GIF",          "*.gif",
                                      "ROOT macros",  "*.C",
                                      "ROOT files",   "*.root",
                                      "XML",          "*.xml",
                                      "PNG",          "*.png",
                                      "XPM",          "*.xpm",
                                      "JPEG",         "*.jpg",
                                      "TIFF",         "*.tiff",
                                      "XCF",          "*.xcf",
                                      "All files",    "*",
                                      0,              0};
	static TString dir(".");
	TGFileInfo fi;
	char open_command[100];
	fi.fFileTypes= gOpenTypes;
	fi.fIniDir= StrDup(dir);
	new TGFileDialog(gClient->GetRoot(),fMainFrameError, kFDOpen, &fi);	
	sprintf(open_command,"xdg-open %s",fi.fFilename);
	system(open_command);	
}

void dynamicMonitor::DoDownload()
{
	static const char *gSaveAsTypes[] = { //"All files",    "*",
     						"txt",   "*.txt",                            
					        0,              0 };
	TString workdir = gSystem->WorkingDirectory();
	static TString dir(".");
	static Int_t typeidx = 0;
	static Bool_t overwr = kFALSE;
	Int_t retval;
	fj.fFileTypes   = gSaveAsTypes;
    fj.fIniDir      = StrDup(dir);
	fj.fFileTypeIdx = typeidx;
	fj.fOverwrite = overwr;//
	new TGFileDialog(gClient->GetRoot(), fMainFrameError, kFDSave, &fj);

	gSystem->ChangeDirectory(workdir.Data());
    if (!fj.fFilename) 
	{
		flag_save=0;
		return ;
	}
	flag_save=1;
	Bool_t  appendedType = kFALSE;
	TString fn = fj.fFilename;
	TString ft = fj.fFileTypes[fj.fFileTypeIdx+1];
	dir     = fj.fIniDir;
	typeidx = fj.fFileTypeIdx;
	overwr  = fj.fOverwrite;

	if(!strstr(fj.fFilename,"."))
		fn += ft(ft.Index("."), ft.Length());
}

void dynamicMonitor::WriteParameter1()
{

	char open_command1[50];
	char help_filename1[20]="Para";	// Para file to be opened.
	
	if (config_flag1==0)
	{
		sprintf(open_command1,"xdg-open %s",help_filename1);
		system(open_command1);
		fAddParameter1->SetText("PLEASE UPDATE");	
		config_flag1=1;
		Mapper1();
	}
	else
	{		
		fAddParameter1->SetText("ADD PARAMETER");
		config_flag1=0;
		Mapper1();

	}
}


void dynamicMonitor::Combo_box_app1()
{
	fend_date1->Select(fdate4->GetSelected());
	fend_date2->Select(fdate5->GetSelected());
	fend_date3->Select(fdate6->GetSelected());	

	
	fend_date4->Select(fend_fdate1->GetSelected());
	fend_date5->Select(fend_fdate2->GetSelected());
	fend_date6->Select(fend_fdate3->GetSelected());
	
}

void dynamicMonitor::Help()
{
	//TString workdir = gSystem->WorkingDirectory();
	char open_command[50];
	char help_filename[20]="help.pdf";	// PDF to be opened
	sprintf(open_command,"xdg-open %s",help_filename);
	system(open_command);
	//system("xdg-open help.pdf");
}

dynamicMonitor::~dynamicMonitor()
{
	delete fmainframe;
	delete fMainFrameTitle;
	delete fMainFrameAll_inputs1; 
	delete fTrigger1; 
	delete fParameter; 
	delete fCanvas1;
	delete fSock;
	delete fConnect1;
	delete fDisplayHist;
	delete fQuit;
	delete fDisplayGraph;
	delete fHist;
	delete fsave_canvas1;

}
void MGUI4()
{
	new dynamicMonitor;
}

