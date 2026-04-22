# Lab 4
## Compile Array.s file 
gcc -c Array.s -o ArrayAsm.o

## Compile Array.c 
gcc -c Array.c -o ArrayC.o

# Link the files
gcc ArrayC.o ArrayAsm.o -o Array

## Run Sample text file
./Array datasample.txt
