/*
 *  $Id: DmpEvtTest.cc, 2014-02-22 13:26:43 chi $
 *  Author(s):
 *    Chi WANG (chiwang@mail.ustc.edu.cn) 13/11/2013
*/

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


