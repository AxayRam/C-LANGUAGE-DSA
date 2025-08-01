# Default value (if FILE not provided)
FILE ?= main.c

# Get filename without extension
BASE := $(basename $(FILE))

# 1. Compile C to Assembly (RISC-V)
compile:
	riscv64-linux-gnu-gcc -g -S -o $(BASE).s $(FILE)
	@echo "✔ Compiled $(FILE) → $(BASE).s (RISC-V ASM)"

# 2. Assemble to Object File (RISC-V)
assemble:
	riscv64-linux-gnu-as -g -o $(BASE).o $(BASE).s
	@echo "✔ Assembled $(BASE).s → $(BASE).o"

# 3. Link to Executable (RISC-V static)



link:
	riscv64-linux-gnu-ld -o $(BASE) $(BASE).o -lc -static
	@echo "✔ Linked $(BASE).o → $(BASE) (RISC-V Executable)"

# 4. Disassemble
disasm:
	riscv64-linux-gnu-objdump -d $(BASE) > disasm.txt
	@echo "✔ Disassembly saved to disasm.txt"

# 5. Run using QEMU
run:
	@echo "🟢 Output (via QEMU):"
	qemu-riscv64 ./$(BASE)

# 6. Debug using QEMU + GDB
debug:
	@echo "🐞 Starting QEMU in GDB debug mode..."
	qemu-riscv64 -g 1234 ./$(BASE) & \
	echo "💡 Now in another terminal, run: riscv64-linux-gnu-gdb $(BASE)" && \
	echo "   Then inside gdb: target remote localhost:1234"

# 7. Clean
clean:
	rm -f $(BASE).s $(BASE).o $(BASE) disasm.txt
	@echo "🧹 Cleaned files for $(BASE) (RISC-V)"


