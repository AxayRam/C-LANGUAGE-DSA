#include<stdio.h>


enum color {red, green, blue};

int main() {
    
    enum color e ;
    
    printf("Size of enum color: %ld bytes\n", sizeof(enum color));
    printf("Value of my_color: %d\n", e);
    printf("Memory address of my_color: %p\n", (void*)&e);
    printf("red : %d\n", red);
    printf("green : %d\n", green);
    printf("blue : %d\n", blue);
    
 
    
    return 0;
}