//  THE CONCEPT OF STRUCT


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



    abc  o;
   struct xyz m;
   printf("sizeof(struct _abc ):%lu\n\n",sizeof(o));
   printf("&o.p:%p\n\n",&o.p);
   printf("&o.q:%p\n\n",&o.q);
   printf("&o.r:%p\n\n",&o.r);

printf("sizeof(struct _xyz ):%lu\n\n",sizeof(m));
  printf("&m.a:%p\n\n",&m.a);
   printf("&m.b:%p\n\n",&m.b);
   printf("&m.abc:%p\n\n",&m.o);





    return 0;
}


