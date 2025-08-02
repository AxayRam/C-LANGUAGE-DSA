#include<stdio.h>


union complex_number {
    float a;
    float b;
};

int main(){
    
union complex_number axay;
axay.a=100;
axay.b=200;

printf("sizeof(union complex_number)=%ld\n ",sizeof(union complex_number));
printf("a=%f\n,b=%f\n", axay.a, axay.b);
printf("a=%p\n,b=%p\n", &axay.a,&axay.b);
printf("momory address of struct=%p\n\n",&axay);
   

    return 0;

}