/*
 *  $Id: DmpEvtTest.hh, 2014-02-22 13:25:46 chi $
 *  Author(s):
 *    Chi WANG (chiwang@mail.ustc.edu.cn) 13/11/2013
*/

#ifndef CDYNODEPARAMETER_H
#define CDYNODEPARAMETER_H

#include <map>
#include "TObject.h"        // key

class DmpEvtTest : public TObject{  // key
  private:
    Int_t   fEventID;
    Int_t   fParticleID;
    std::map<short,int>   fTrigger;
    Int_t   fEnergy;
    Int_t   fTmp;       //! this is tem.

  public:
    DmpEvtTest();       // key. must define default constructor
    virtual ~DmpEvtTest();
    Int_t GetEventID() const    {return fEventID;}
    Int_t GetParticleID() const {return fParticleID;}
    Int_t GetEnergy() const     {return fEnergy;}
    int   GetTrigger(short id)  {return fTrigger[id];}
    void SetSignal(Int_t PID,Int_t Eng,Int_t tmp);
    void SetTrigger(short id,int trg)  {fTrigger.insert(std::make_pair(id,trg));}
    void PrintEvent()const;

  ClassDef(DmpEvtTest,1);   // key
};

#endif


