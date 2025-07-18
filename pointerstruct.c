#include<stdio.h>

typedef struct _abc {
int p;
char q;
float r;
} __attribute__((packed)) abc;


struct xyz{

    int a;
    float b;
    abc o;
};

int main(){
   struct xyz axay[10];
    axay[5].a=10;
    axay[5].b=10.5;


    struct xyz *p=&axay[5];

    printf("axay[5].b=%f\n ",(*p).b);
     printf("axay[5].b=%f\n ",p->b);




   return 0;

}