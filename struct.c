#include<stdio.h>

struct complex_number {
    
    float a;
    float b;
};

int main() {
    
    struct complex_number axay={100,200};
   
   printf("sizeof(struct complex_number)=%ld\n ",sizeof(struct complex_number));
   printf("a=%f\n,b=%f\n", axay.a,axay.b);
    printf("a=%p\n,b=%p\n", &axay.a,&axay.b);
   printf("momory address of struct=%p\n\n",&axay);
   
    

    


    return 0;
}