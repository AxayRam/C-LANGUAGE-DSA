# C Programming & Assembly Fundamentals

Complete collection of **C programming**, **data structures**, **algorithms**, and **low-level assembly** implementations (x86-64 & RISC-V).

![C](https://img.shields.io/badge/C-00599C?style=flat&logo=c) ![x86-64](https://img.shields.io/badge/x86--64-FF6B00?style=flat) ![RISC--V](https://img.shields.io/badge/RISC--V-FF6B00?style=flat)

---

## 📚 Programs Included

| Program | Type | Key Topics |
|---------|------|-----------|
| **IFELSE.c** | Control Flow | Conditionals, decision-making |
| **array.c** | Data Structures | 1D/2D arrays, dynamic memory |
| **pointer.c** | Pointers | Pointer arithmetic, dereferencing |
| **struct.c, union.c** | User Types | Structures, unions, memory layout |
| **bubboleshootinarray.c** | Sorting | Bubble sort - O(n²) |
| **binarysearch.c** | Searching | Binary search - O(log n) |
| **linkdlistinsertlist.c** | Data Structure | Linked list operations |
| **dowhileatmcashwithdrawal.c** | Real-world | ATM system simulation |
| **digitalaudio.c** | Signal Processing | PCM audio, sine wave generation |

---

## 🔧 x86-64 Compilation (Native)

Clean build
rm -f main.o main.s main

C → Assembly
gcc -S main.c -o main.s

Assembly → Object
as main.s -o main.o

Link & Execute
gcc main.o -o main
./main

View disassembly
objdump -d main > disasm.txt

text

---

## 🖥️ RISC-V Cross-Compilation

Install tools
sudo apt-get install gcc-riscv64-linux-gnu qemu-user

Clean build
rm -f main.s main.o main disasm.txt

Compile to RISC-V assembly
riscv64-linux-gnu-gcc -S -o main.s main.c

Assemble
riscv64-linux-gnu-as -o main.o main.s

Link
riscv64-linux-gnu-ld -o main main.o -lc -static

Execute on emulator
qemu-riscv64 ./main

Disassemble
riscv64-linux-gnu-objdump -d main > disasm.txt

text

---

## 📊 Algorithm Complexity

| Algorithm | Time | Space | Notes |
|-----------|------|-------|-------|
| Bubble Sort | O(n²) | O(1) | Simple, stable |
| Binary Search | O(log n) | O(1) | Requires sorted data |
| Array Access | O(1) | — | Direct indexing |
| Linked List | O(n) | O(1) | Sequential access |

---

## 💡 Key Concepts Covered

- **C Fundamentals:** Variables, loops, conditionals, functions, pointers, memory management
- **Data Structures:** Arrays, pointers, structs, unions, linked lists
- **Algorithms:** Sorting (bubble sort), searching (binary search), traversal
- **Assembly:** x86-64 and RISC-V instruction sets, compilation pipeline
- **Binary Analysis:** Disassembly, object files, machine code inspection
- **Real-world:** ATM system, audio processing, system simulation

---

## 🚀 Quick Start

Clone & compile
git clone https://github.com/AxayRam/C-LANGUAGE.git
cd C-LANGUAGE

Compile with GCC
gcc array.c -o array
./array

Or cross-compile for RISC-V
riscv64-linux-gnu-gcc -static -o array_riscv array.c
qemu-riscv64 ./array_riscv

text

---

## 🛠️ Tools Used

- **gcc** - C compiler
- **as** - Assembler
- **objdump** - Binary disassembler
- **qemu-riscv64** - RISC-V emulator
- **riscv64-linux-gnu-*** - RISC-V cross-compilation toolchain

---

## 📈 Code Quality

✓ ANSI C compliant
✓ Memory safe (proper malloc/free)
✓ Well documented
✓ Modular & reusable
✓ Production-ready examples

---

## 📧 Contact

**Author:** Axay Ram
**GitHub:** github.com/AxayRam
**Email:** axay19392@gmail.com
**LinkedIn:** linkedin.com/in/axay-ram

---

**Last Updated:** December 2025

⭐ **If helpful, please star the repository!**
