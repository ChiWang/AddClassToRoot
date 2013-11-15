/*=============================================================================
#       FileName :          DmpEvtTest.hh
#       Version  :          0.0.1
#       Author   :          Chi WANG    (chiwang@mail.ustc.edu.cn)
#       Time     :          2013-11-13   01:40:25
#------------------------------------------------------------------------------
#       Description  :
#
#------------------------------------------------------------------------------
#       History  :
#                                          Update:  2013-11-13   01:40:25
=============================================================================*/

#ifndef CDYNODEPARAMETER_H
#define CDYNODEPARAMETER_H

#include "TObject.h"        // key

class DmpEvtTest : public TObject{  // key
  private:
    Int_t   fEventID;
    Int_t   fParticleID;
    Int_t   fEnergy;
    Int_t   fTmp;       //! this is tem.

  public:
    DmpEvtTest();       // key. must define default constructor
    virtual ~DmpEvtTest();
    Int_t GetEventID() const    {return fEventID;}
    Int_t GetParticleID() const {return fParticleID;}
    Int_t GetEnergy() const     {return fEnergy;}
    void SetSignal(Int_t PID,Int_t Eng,Int_t tmp);
    void PrintEvent()const;

  ClassDef(DmpEvtTest,1);   // key
};

#endif


