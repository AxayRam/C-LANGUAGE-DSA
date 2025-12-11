# 📚 C Programming Fundamentals

A comprehensive collection of **essential C programming concepts** and **data structure implementations** with practical examples, including **x86-64 Assembly** and **RISC-V** cross-compilation.

![C](https://img.shields.io/badge/Language-C-00599C?style=flat-square&logo=c)
![x86-64](https://img.shields.io/badge/x86--64-Assembly-FF6B00?style=flat-square)
![RISC-V](https://img.shields.io/badge/RISC--V-Architecture-FF6B00?style=flat-square)
![License](https://img.shields.io/badge/License-MIT-green?style=flat-square)
![Status](https://img.shields.io/badge/Status-Active-brightgreen?style=flat-square)

---

## 📖 Overview

This repository contains **production-grade implementations** of fundamental C programming concepts with **low-level assembly exploration**:

- ✅ **Core Language Features:** Variables, loops, conditionals, functions
- ✅ **Data Structures:** Arrays, pointers, structs, unions, enums
- ✅ **Advanced Concepts:** DSA (sorting, searching), file handling
- ✅ **Real-world Applications:** ATM systems, audio processing, system simulations
- ✅ **Low-Level Programming:** x86-64 Assembly, RISC-V compilation & execution
- ✅ **Binary Analysis:** Disassembly, object file inspection, memory analysis
- ✅ **Clean Code Practices:** Modular design, proper memory management, documentation

---

## 📂 Directory Structure

# 📚 C Programming Fundamentals

A comprehensive collection of **essential C programming concepts** and **data structure implementations** with practical examples, including **x86-64 Assembly** and **RISC-V** cross-compilation.

![C](https://img.shields.io/badge/Language-C-00599C?style=flat-square&logo=c)
![x86-64](https://img.shields.io/badge/x86--64-Assembly-FF6B00?style=flat-square)
![RISC-V](https://img.shields.io/badge/RISC--V-Architecture-FF6B00?style=flat-square)
![License](https://img.shields.io/badge/License-MIT-green?style=flat-square)
![Status](https://img.shields.io/badge/Status-Active-brightgreen?style=flat-square)

---

## 📖 Overview

This repository contains **production-grade implementations** of fundamental C programming concepts with **low-level assembly exploration**:

- ✅ **Core Language Features:** Variables, loops, conditionals, functions
- ✅ **Data Structures:** Arrays, pointers, structs, unions, enums
- ✅ **Advanced Concepts:** DSA (sorting, searching), file handling
- ✅ **Real-world Applications:** ATM systems, audio processing, system simulations
- ✅ **Low-Level Programming:** x86-64 Assembly, RISC-V compilation & execution
- ✅ **Binary Analysis:** Disassembly, object file inspection, memory analysis
- ✅ **Clean Code Practices:** Modular design, proper memory management, documentation

---

## 📂 Directory Structure

C-LANGUAGE/
├── README.md # Documentation (this file)
├── Makefile # Build automation (x86-64)
├── Makefile.riscv # Build automation (RISC-V)
│
├── 🔹 Control Flow
│ ├── IFELSE.c # If-else conditionals
│ ├── LOOPS.c # For, while, do-while loops
│ └── ENUM.c # Enumeration types
│
├── 🔹 Data Structures
│ ├── array.c # 1D & 2D array operations
│ ├── arraypointer.c # Pointer-array interactions
│ ├── pointer.c # Pointer fundamentals
│ ├── struct.c # Structure definitions & usage
│ └── union.c # Union data type
│
├── 🔹 Algorithms & Applications
│ ├── bubboleshootinarray.c # Bubble sort implementation
│ ├── binarysearch.c # Binary search algorithm
│ ├── linkdlistinsertlist.c # Linked list operations
│ └── dowhileatmcashwithdrawal.c# ATM system simulation
│
├── 🔹 Signal Processing
│ ├── digitalaudio.c # Digital audio processing
│ ├── sine.raw # Raw audio data file
│ └── disasm.txt # Assembly disassembly reference
│
└── 🔹 Build Artifacts
├── *.o files # Object files (auto-generated)
├── *.s files # Assembly files (auto-generated)
└── [executables] # Compiled binaries


---

## 🛠 Key Programs

### 1. Control Flow Mastery

#### IFELSE.c
- ✓ Conditional logic & decision-making
- ✓ Nested conditionals, switch-case statements
- ✓ Real-world scenarios (age validation, grade calculation)

**Complexity:** O(1) | **Usage:** Fundamental logic implementation

#### LOOPS.c
- ✓ For, while, do-while loop patterns
- ✓ Loop optimization & break/continue statements
- ✓ Pattern generation & iteration problems

**Complexity:** O(n) | **Usage:** Iterative processing

---

### 2. Data Structures

#### array.c
Array operations including:
- ✓ 1D array declaration, initialization, traversal
- ✓ 2D array (matrix) operations
- ✓ Array searching & sorting
- ✓ Dynamic memory allocation for arrays

Time Complexity: Access O(1), Search O(n), Sort O(n²)

#### pointer.c
Advanced pointer concepts:
- ✓ Pointer declaration & dereferencing
- ✓ Pointer arithmetic & array-pointer equivalence
- ✓ Function pointers & callbacks
- ✓ Double pointers & pointer-to-pointer operations

#### struct.c & union.c
User-defined types:
- ✓ Structure packing & memory layout
- ✓ Union vs Structure differences
- ✓ Typedef for code readability

---

### 3. Algorithms

#### bubboleshootinarray.c
Bubble Sort Implementation:
- Time Complexity: O(n²) average & worst case
- Space Complexity: O(1)
- Stability: Stable sort
- Best Use: Small datasets, educational purposes

#### binarysearch.c
Binary Search Algorithm:
- Time Complexity: O(log n)
- Prerequisite: Sorted array
- Space Complexity: O(1)
- Best Use: Large sorted datasets

#### linkdlistinsertlist.c
Linked List Operations:
- ✓ Node creation & deletion
- ✓ Insertion at beginning, end, middle
- ✓ Search & traversal operations
- ✓ Dynamic memory management

---

### 4. Real-World Application

#### dowhileatmcashwithdrawal.c
Full-featured ATM system demonstrating:
- ✓ Menu-driven interface
- ✓ State management with do-while loop
- ✓ Input validation & error handling
- ✓ Balance tracking & transaction logic

---

### 5. Signal Processing

#### digitalaudio.c
Digital audio signal generation:
- ✓ PCM (Pulse Code Modulation) waveform generation
- ✓ Sine wave synthesis
- ✓ Raw audio file output
- ✓ Audio verification with Audacity

Output: sine.raw - Raw 16-bit PCM audio file

---

## 🔧 Compilation & Execution Guide

### 🖥️ x86-64 Architecture (Native Compilation)

#### Step-by-Step Manual Compilation

1. Clean previous build artifacts
rm -f main.o main.s main

2. Convert C to Assembly (x86-64)
gcc -S main.c -o main.s

Output: main.s (human-readable x86-64 assembly)
3. Convert Assembly to Object File
as main.s -o main.o

Output: main.o (binary object file with machine code)
4. Link and Create Executable
gcc main.o -o main

Output: main (fully linked, executable binary)
5. Execute the Program
./main


#### Binary Analysis & Disassembly

View object file disassembly
objdump -d main.o

Save disassembly to file
objdump -d main > disasm.txt

Tool explanation:
objdump : Linux utility to inspect binary files
-d : Disassembler mode (converts machine code → assembly)
main : Input binary file to analyze
> : Redirect output to file (without displaying in terminal)
disasm.txt : Output file containing complete disassembly
View with color syntax highlighting
mv disasm.txt disasm.s


---

### 🖥️ RISC-V Architecture (Cross-Compilation)

#### Prerequisites

Install RISC-V toolchain (Ubuntu/Debian)
sudo apt-get install gcc-riscv64-linux-gnu
sudo apt-get install binutils-riscv64-linux-gnu
sudo apt-get install qemu-system-riscv64
sudo apt-get install qemu-user

Verify installation
riscv64-linux-gnu-gcc --version
qemu-riscv64 --version


#### Step-by-Step RISC-V Cross-Compilation

1. Clean previous build artifacts
rm -f main.s main.o main disasm.txt

2. Compile C to RISC-V Assembly
riscv64-linux-gnu-gcc -S -o main.s main.c

Output: main.s (RISC-V assembly instructions)
3. Assemble to RISC-V Object File
riscv64-linux-gnu-as -o main.o main.s

Output: main.o (RISC-V machine code object)
4. Link for RISC-V Execution
riscv64-linux-gnu-ld -o main main.o -lc -static

Flags explained:
-o main : Output executable name
main.o : Input object file
-lc : Link C runtime library
-static : Statically link libraries
5. Execute on RISC-V Emulator
qemu-riscv64 ./main

qemu-riscv64 : RISC-V CPU emulator


#### RISC-V Binary Analysis


Disassemble RISC-V Binary
riscv64-linux-gnu-objdump -d main > disasm.txt


---

## 📊 Algorithm Complexity Reference

| Algorithm | Time (Avg) | Time (Worst) | Space | Notes |
|---|---|---|---|---|
| **Bubble Sort** | O(n²) | O(n²) | O(1) | Simple, stable |
| **Binary Search** | O(log n) | O(log n) | O(1) | Requires sorted input |
| **Linear Search** | O(n) | O(n) | O(1) | Works on unsorted |
| **Array Access** | O(1) | O(1) | — | Direct indexing |
| **Linked List Insert** | O(n) | O(n) | O(1) | Linear traversal |

---

## 💡 Learning Outcomes

By studying this repository, you will master:

### C Language
1. Variable types & declarations (int, float, char, double)
2. Type casting & conversions
3. Scope & storage classes
4. Control structures (if-else, switch, loops)
5. Functions & modularity
6. Pointers & memory management
7. Data structures (arrays, structs, linked lists)
8. File I/O & signal processing

### Low-Level Programming
1. **x86-64 Assembly:**
   - CPU instruction set
   - Register usage (rax, rbx, rsp, rbp)
   - Stack frames & function calls
   - Memory addressing modes

2. **RISC-V Assembly:**
   - Reduced Instruction Set Computing
   - RISC-V registers & calling conventions
   - Load-Store architecture
   - Immediate values & instruction encoding

3. **Binary Analysis:**
   - Machine code inspection
   - Disassembly techniques
   - Object file formats (ELF)
   - Symbol tables & relocation

---

## 🎯 Project Goals

- ✅ Implement fundamental C concepts with clean, readable code
- ✅ Provide production-ready examples for learning
- ✅ Demonstrate industry best practices
- ✅ Bridge gap between high-level C and low-level assembly
- ✅ Enable cross-platform compilation (x86-64 & RISC-V)
- ✅ Serve as reference material for embedded systems development

---

## 📈 Code Quality Standards

✓ ANSI C Compliant - Maximum compatibility
✓ Memory Safe - Proper allocation/deallocation
✓ Well Documented - Comments & documentation
✓ Modular Design - Reusable code components
✓ Error Handling - Input validation throughout
✓ Optimization - Efficient algorithms & data structures
✓ Assembly Analysis - Clear compilation pipeline

---

## 🚀 Quick Start Guide

### Prerequisites
For x86-64 compilation
gcc --version # Should be 9.0+
make --version

For RISC-V cross-compilation
sudo apt-get install gcc-riscv64-linux-gnu qemu-user



### Clone Repository
git clone https://github.com/AxayRam/C-LANGUAGE.git
cd C-LANGUAGE


### Compile & Run (x86-64)
Option 1: Using Makefile
make all
./main

Option 2: Manual compilation
gcc -S main.c -o main.s # C → Assembly
as main.s -o main.o # Assembly → Object
gcc main.o -o main # Link executable
./main # Run

### Compile & Run (RISC-V)
Option 1: Using Makefile
make all
./main

Option 2: Manual compilation
gcc -S main.c -o main.s # C → Assembly
as main.s -o main.o # Assembly → Object
gcc main.o -o main # Link executable
./main # Run


### Compile & Run (RISC-V)

Cross-compile to RISC-V
riscv64-linux-gnu-gcc -S -o main.s main.c
riscv64-linux-gnu-as -o main.o main.s
riscv64-linux-gnu-ld -o main main.o -lc -static

Execute on emulator
qemu-riscv64 ./main


### Analyze Binary

Generate disassembly
objdump -d main > disasm.txt

View assembly
cat disasm.txt

Or for RISC-V
riscv64-linux-gnu-objdump -d main > disasm.txt


---

## 🤝 Contributing

Suggestions and improvements are welcome! Feel free to:
- Report issues
- Suggest optimizations
- Add new algorithms
- Improve documentation
- Add support for other architectures

---

## 📜 License

This project is licensed under the **MIT License** - free to use, modify, and distribute.

---

## 📧 Contact & Support

**Author:** Axay Ram
**GitHub:** github.com/AxayRam
**Email:** axay19392@gmail.com
**LinkedIn:** linkedin.com/in/axay-ram

---

⭐ If this repository helped you, please star it!

Last Updated: December 2025

Maintained by: Axay Ram - Embedded Systems & Firmware Engineer

Specializing in: Low-Level Programming | Assembly | Cross-Platform Development
