#include<stdio.h>
int main() {
    char * var ="hi";

    printf("%s\n",var);
    printf("%c\n",*var);
    printf("%ld\n",sizeof(var));
    printf("%ld\n",sizeof("hi"));
    return 0;
}