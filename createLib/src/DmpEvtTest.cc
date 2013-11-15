/*=============================================================================
#       FileName :          DmpEvtBgo.cc
#       Version  :          0.0.1
#       Author   :          Chi WANG    (chiwang@mail.ustc.edu.cn)
#       Time     :          2013-11-13   01:40:32
#------------------------------------------------------------------------------
#       Description  :
#
#------------------------------------------------------------------------------
#       History  :
#                                          Update:  2013-11-13   01:40:32
=============================================================================*/

#include <iostream>

#include "DmpEvtTest.hh"

ClassImp(DmpEvtTest)   // key

DmpEvtTest::DmpEvtTest()
 :fEventID(-1),
  fParticleID(0),
  fEnergy(0),
  fTmp(0)
{
}

DmpEvtTest::~DmpEvtTest(){
}

void DmpEvtTest::SetSignal(Int_t b, Int_t c, Int_t d){
  ++fEventID;
  fParticleID = b;
  fEnergy = c;
  fTmp = d;
}

void DmpEvtTest::PrintEvent()const{
  std::cout<<"Event ID = "<<fEventID<<"\tParticle ID = "<<fParticleID<<"\tEnergy = "<<fEnergy<<std::endl;
}


