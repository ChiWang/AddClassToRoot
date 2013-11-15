
              Project:     sharedLibRootcint
      ======================================================
          By: Chi WANG (chiwang@mail.ustc.edu.cn)  13/11/2013

Description
--------------

    define the class DmpEvtTest in ./include/DmpEvtTest.hh
    write a ./include/XXXLinkDef.hh file (must include "LinkDef")

    use rootcint in ./src/SConscript


Usage
--------------

  scons       // will create executable file sharedLibRootcint at ./, and temporary files in ./Scons
  scons -c    // clean up


Note
-----
    if you want to re-compile this package, please make sure that these are no any "*_Dict.*" files in any directories.


