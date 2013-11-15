/*=============================================================================
#       FileName :          uselibDmpEvtTest_write.cc
#       Version  :          0.0.1
#       Author   :          Chi WANG    (chiwang@mail.ustc.edu.cn)
#       Time     :          2013-11-14   14:32:17
#------------------------------------------------------------------------------
#       Description  :
#
#------------------------------------------------------------------------------
#       History  :
#                                          Update:  2013-11-14   14:32:17
=============================================================================*/

#include <sys/time.h>

#include "TFile.h"
#include "TTree.h"
#include "TRandom.h"

#include "DmpEvtTest.hh"

int main(){

  gRandom->SetSeed(time(0));

  DmpEvtTest *EvtHolder = new DmpEvtTest();

  TTree *aTree = new TTree("DAMPEEvent","DAMPE");

  aTree->Branch("DstEvent","DmpEvtTest",&EvtHolder);     // key

  for (Int_t i = 0;i<2000;++i) {
    static Int_t Signal = 0;
    Signal = (Int_t)(gRandom->Exp(80)*gRandom->Gaus(5,10));
    EvtHolder->SetSignal((Int_t)gRandom->Uniform(5),Signal,(Int_t)gRandom->Gaus(0,2));
    aTree->Fill();
    if (EvtHolder->GetEventID()%100 == 0) {
      EvtHolder->PrintEvent();
    }
    if (i%50 == 0) {
      Signal = 2300+(Int_t)gRandom->Gaus(5,35);
      EvtHolder->SetSignal((Int_t)gRandom->Uniform(5),Signal,(Int_t)gRandom->Gaus(0,2));
      aTree->Fill();
    }
  }

  TFile *aFile = new TFile("../Database/DmpRDCTest.root","recreate");
  aTree->Write();
  aFile->Close();
  delete aFile;
  return 0;
}

