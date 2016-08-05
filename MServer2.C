//Server Side Code By SAGAR
#include "TH1.h"
#include "TH2.h"
#include "TProfile.h"
#include "TCanvas.h"
#include "TFrame.h"
#include "TSocket.h"
#include "TServerSocket.h"
#include "TMonitor.h"
#include "TMessage.h"
#include "TRandom.h"
#include "TList.h"
#ifndef __CINT__
#include "TError.h"
#endif
#define port_no 5000
#include<stdlib.h>

class Tserver
{
		TCanvas       *fCanvas;    // main canvas
		TH1F          *fHpx;       // 1-D histogram
		TServerSocket *fServ;      // server socket
		TMonitor      *fMon;       // socket monitor
		TList         *fSockets;   // list of open spy sockets
		TTree         *t,*totree,*fromtree;	      //tree object
		TChain 	      *chain;
		TGraph        *tg;         //graph
		TDatime        jk;
		TStopwatch     loop;
		TDatime        fToday;  
		char frequest[200];
		char freq[120],fpara[20],fdate[120],fendate[20],fplot[20],fyear[20],val_date[20]; 
		int FileExistence(char *fname);		
	
};	

Tserver::Tserver()
{
	TSocket *s;
	// Open a server socket looking for connections on a named service or on a specified port
	fServ = new TServerSocket(port_no, 1);
	if (!fServ->IsValid())
		gSystem->Exit(1);
	
	// Add server socket to monitor so we are notified when a client needs to be
	// accepted
	fMon  = new TMonitor;
	fMon->Add(fServ);

	// Create a list to contain all client connections
	fSockets = new TList;
   
	// Create a new canvas
	/*
	   TCanvas * c1 = new TCanvas("c", "c", w, h);
  	 c->SetWindowSize(w + (w - c->GetWw()), h + (h - c->GetWh()));	
	*/
	fCanvas = new TCanvas("Serv","Welcome to SERVER",200,10,700,500);
	// Check if there is a message waiting on one of the sockets.
	// Wait not longer than 20ms (returns -1 in case of time-out).
    for(Int_t i=0;;i++)
    {
   		if ((s = fMon->Select(20)) != (TSocket*)-1)
     	{        
 			HandleSocket(s);
	   	}
     	if (!fCanvas->TestBit(TObject::kNotDeleted))
     	{ 
        		break;
     	}
        if (gROOT->IsInterrupted())
     	{   
        		break;
     	}
 	}
}


void Tserver::HandleSocket(TSocket *s)
{
  	if (s->IsA() == TServerSocket::Class()) 
	{
		// accept new connection from client
		TSocket *sock = ((TServerSocket*)s)->Accept();
		fMon->Add(sock);
		fSockets->Add(sock);
	 	printf("accepted connection from %s\n", sock->GetInetAddress().GetHostName());
	} 
	else // send requested object back
	{
		strcpy(frequest,"\0");
		if (s->Recv(frequest, sizeof(frequest)) <= 0) //no request recieved
	    {
			fMon->Remove(s);
        	fSockets->Remove(s);
        	printf("closed connection from %s\n", s->GetInetAddress().GetHostName());
         	delete s;
         	return;
	    }		
		
		Dr(s);		
		
	}
}

void Tserver::Dr(TSocket *s)
{
	Char_t msg[50],line_token[120];
	TMessage answer(kMESS_OBJECT);
	char filedate[30];
	Int_t i=0,j=0,k=0;
	while(frequest[i]!='\0')
	{
								
		while(frequest[i]!=','&&frequest[i]!='\0') 
			{
				freq[j]=frequest[i];
				i++;
				j++;
			}	
			freq[j]='\0';
			i++;
			j=0;
			while(frequest[i]!=','&&frequest[i]!='\0') 
			{
				fdate[j]=frequest[i];
				i++;
				j++;
			}	
			fdate[j]='\0';
			i++;
			j=0;

		
	}
	cout<<"parameter"<<freq;
	cout<<"date"<<fdate;
	cout<<"plot"<<fplot;
	strcpy(filedate,"maplot_");
	strcat(filedate,fdate);
	strcat(filedate,"_4m.root");
	  fCanvas->Modified();
          fCanvas->Update();
	
	 cout<<"new date "<<filedate;
	 TFile *f1=new TFile(filedate);
	if (gSystem->AccessPathName(filedate, kFileExists))
	{	
		 //fCanvas->Modified();
	         // fCanvas->Update();
		cout<<" File Does not Exist ";	
		 //return 0; //file not available		
 		s->Send("11");
		fMon->Remove(s);
  		fSockets->Remove(s);			
		

	}
//	return 1;  //file available
else {
	 TTree *tr=(TTree*)f1->Get(freq);
	 tr->Draw("Hist");	
	  
          answer.WriteObject(tr);
	  s->Send(answer);
 	  fMon->Remove(s);
  	  fSockets->Remove(s);			
		  fCanvas->Modified();
          fCanvas->Update();

	}
}

int Tserver :: FileExistence(char *fname)
{
	if (gSystem->AccessPathName(fname, kFileExists))
	{
		return 0; //file not available		 	
	}
	return 1;  //file available
}

Tserver::~Tserver()
{
   fSockets->Delete();
   delete fSockets;
   delete fServ;
   delete fCanvas;
   delete fHpx;
   delete fHpxpy;
   delete fHprof;
   delete chain;
}
void MServer2()
{
	new Tserver;
}
