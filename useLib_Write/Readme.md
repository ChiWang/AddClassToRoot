
              Project:     uselibDmpEvtTest_Write
      ======================================================
          By: Chi WANG (chiwang@mail.ustc.edu.cn)  13/11/2013

Description
--------------
    in ./include    DmpEvtTest.h, use this header file
    in ./src/uselibDmpEvtTest_Write.cc, create a root file, the branch is the class DmpEvtTest. Then save the root file in ../Database


Usage
--------------
  scons       // will create executable file uselibDmpEvtBgoTest at ./, and temporary files in ./Scons
  scons -c    // clean up

  execute the created file "libDmpEvtTest_Write"


Note
-----

    1.  if you get this error while compiling:
            /usr/bin/ld: cannot find -lDmpEvtTest

        cd ../creatLib, compile at there

    2.  if get this error while running:
           ./libDmpEvtTest_Write: error while loading shared libraries: libDmpEvtTest.so: cannot open shared object file: No such file or directory 

        do:
            export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:`pwd`/../createLib

    3.  check root file in ../Database, the structure is the same as the data members in class DmpEvtTest
