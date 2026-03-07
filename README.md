# Lab 4
## Compile
gcc -c Array.s -o ArrayAsm.o
gcc -c Array.c -o ArrayC.o
gcc ArrayC.o ArrayAsm.o -o Array
## Run Sample text file
./Array datasample.txt
