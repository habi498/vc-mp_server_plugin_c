Beginner Information
--------------------
This project creates DLLs which can be put in 'plugins'
folder along with name mentioned in server.cfg of 
VC-MP Server. 
Note that vc-mp server can be run without any plugin (default)
or with plugins.

A Server (VC-MP) can also be scripted in Squirrel, which 
is the most simple.

Other language support provided by users include Python (2017) by ysc3839
and Lua (2020) by  DizzasTeR.

See forum.vc-mp.org for all information.

VC-MP Server can be scripted in Java too.

The DLLs are (created by this program) codes in C (in 'source' folder)
eg.
Server->SetVehicleHealth(vehicleId, 1000.0);

Where are the codes: The vcmpsrvr.c file contains all the codes.
-------------------

Requirements: gcc or TDM-gcc (or any C compiler)
-------------


Windows
=======
To compile, run batch file in 'source' folder.

Note: server32.exe (in this directory) must be closed 
(if running) inorder to do run batch file

Linux
======
1. Follow instructions under file 'manual' in 'source' directory
