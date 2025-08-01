
# C LANGUAGE

# ///////for *86 ////////////

# Clean previous build

rm -f main.o main.s main

# Convert C to Assembly
gcc -S main.c -o main.s

# Convert Assembly to Object
as main.s -o main.o

# Link and create Executable
gcc main.o -o main

# Run the program
./main



# output check from memory

objdump -d mian.o or main etc




# text file banane ke liye 
 
objdump -d main> disasm.txt
// objdump : linux tool to inspect binaries (object/executable files)
// -d diassembler :  machine code to assembly code conveter 
// > is use to output with out terminat to save in new file 
// disasm.txt output ko text file to save


# coloure full output 

mv disasm.txt disasm.s
 




# ////////////// for riscv64 //////////////////



# Clean previous build

rm -f main.s main.o main disasm.txt


# Convert C to Assembly
riscv64-linux-gnu-gcc -S -o main.s main.c

# Convert Assembly to Object
riscv64-linux-gnu-as -o main.o main.s

# Link and create Executable
riscv64-linux-gnu-ld -o main main.o -lc -static

# Run the program
qemu-riscv64 ./main

# disaseemble  for text file
riscv64-linux-gnu-objdump -d main > disasm.txt

