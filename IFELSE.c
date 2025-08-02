#include<stdio.h>

int main() {
    int i=10;
    int j=2;
 
    if(i==10) {
        j=j+10;
    } 

    return 0;
}



#elf file   :riscv64-linux-gnu-gcc -g -o IFELSE.elf IFELSE.c -static