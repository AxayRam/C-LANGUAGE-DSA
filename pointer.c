#include<stdio.h> 

int main(){


    int abc=20;
    
    int *ptr;
    char *in_ptr=0*12345;
    printf("in_ptr:%p\n",in_ptr);
     printf("*ptr:%d,\n abc:%d\n",*ptr,abc);
    ptr=&abc;
    *ptr=30;

    printf("&abc:%p\n ,ptr:%p\n,sizeof(ptr):%ld\n",&abc,ptr,sizeof(ptr));
    printf("*ptr:%d,\n abc:%d\n",*ptr,abc);

    return 0;
}



