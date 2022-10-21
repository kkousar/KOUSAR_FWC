#!/bin/bash
ip="192.168.43.140"
uname="student"
path="/home/student/arm"
cd $1/GCC_Project
make
cd ../../
scp $1/GCC_Project/output/bin/$1.bin $uname@$ip:$path
