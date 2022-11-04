How To
======

Build FPGA and M4
----------

From the project root dir, execute:

::
  
  ql_symbiflow -compile -d ql-eos-s3 -P pu64 -v Lcd_fpga.v -t lcd_fpga -p quickfeather.pcf -dump binary 
  
  This will generate a :code:`lcd_fpga.bin`  which can be flashed.


Flash FPGA and M4
------------------

Put the Vaman board into Flash Mode.make sure the connections of board and Lcd should be as shown in the pdf

From the project root dir, execute:

::
  
python3 <path of tinyfpga>/TinyFPGA-Programmer-Application/tinyfpga-programmer-gui.py --port /dev/ttyACM0 fpga/code/lcd_fpga.bin --mode fpga

make sure you have downloaded the Tinyfpga 
git clone --recursive https://github.com/QuickLogic-Corp/TinyFPGA-Programmer-Application.git


Run Code
--------

Once the board is flashed, and reset, you should see the characters on LCD as:

::

  THE SUM IS 60
  
  
