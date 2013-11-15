
    This is an example of how to define your event class and register it into root by rootcint
================================================================================================


Once you develope the event class this way,
    TTree could set your defined class as a branch just by using the class name, and
    the leaves are the data members in that class.


As I know, AMS-2, BES-III and Daya bay are using the same technical, that is:
    Define a event class which inherit from TObject, then
    create the event class as a shared library by using rootcint, then
    other package could use the class, and book branch just by the class name, instead of by a serial data members.
================================================================================================


Structure
----------
    createLib
            define event class, generate a dictionary by rootcint, create shared library

    useLib_Write
            use the created library and the header file of event class to create a root file

    useLib_Read
            use the created library and the header file of event class to read the root file which is created before

    Database
            root file is stored in here.

How to test
-----------
    step 1
        cd into createLib
        1.  compile

    step 2
        cd  into useLib_Write
        1.  compile
        2.  execute the created command

    step 3
        cd into useLib_Read
        1.  compile
        2.  execute the created command


What is the key point in code?
------------------------------
    those lines are commented by "key"


