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
   int p=101;
   int *abc=&p;



   printf("sizeof (abc)=%lu\n\n",sizeof(abc));
   printf("&p: %p\n",&p);
   printf("&abc: %p\n",&abc);
   printf("abc : 0x%lx\n",abc);
    printf("*abc : %d\n",*abc);

   *abc=*abc+20;
    printf("*abc : %d\n",*abc);




   return 0;

}