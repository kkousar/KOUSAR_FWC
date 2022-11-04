16x2-LCD-Controller-ARM
===========================
I had written a code for ARM programming using Vaman to interface  LCD 16x2 and print characters on LCD

How To
======

Build ARM 
-----------------------

From the project root dir, execute:

::
  
 make -j4

This will generate a :code:`static.bin` in GCC_Project/output/bin which can be flashed.



Flash ARM
---------

Put the development board into Flash Mode.

From the project root dir, execute:

python3 <path of tinyfpga>/TinyFPGA-Programmer-Application/tinyfpga-programmer-gui.py --port /dev/ttyACM0 arm/LCD/GCC_Project/output/binstatic.bin --mode fpga

make sure you have downloaded the Tinyfpga 
git clone --recursive https://github.com/QuickLogic-Corp/TinyFPGA-Programmer-Application.git

Run Code
--------

Once the board is flashed, and reset, you should a characters on LCD as:

::

 THE SUM IS 45




  
