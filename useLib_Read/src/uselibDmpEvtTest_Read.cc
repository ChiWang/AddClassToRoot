/*=============================================================================
#       FileName :          uselibDmpEvtTest_Read.cc
#       Version  :          0.0.1
#       Author   :          Chi WANG    (chiwang@mail.ustc.edu.cn)
#       Time     :          2013-11-14   14:32:44
#------------------------------------------------------------------------------
#       Description  :
#
#------------------------------------------------------------------------------
#       History  :
#                                          Update:  2013-11-14   14:32:44
=============================================================================*/

#include "TFile.h"
#include "TTree.h"

#include "DmpEvtTest.hh"

int main(){
  DmpEvtTest *EvtHolder = new DmpEvtTest();

  TFile *aFile = new TFile("../Database/DmpRDCTest.root");

  TTree *aTree = (TTree*)aFile->Get("DAMPEEvent");
  aTree->SetBranchAddress("DstEvent",&EvtHolder);        // key

  Int_t N = aTree->GetEntries();

  for (Int_t i = 0;i<N;++i) {
    aTree->GetEntry(i);
    if (EvtHolder->GetEventID()%100 == 0) {
      EvtHolder->PrintEvent();
    }
  }
  return 0;
}
