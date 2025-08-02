#include <stdio.h>

int main() {
    char number[5];
    char *ptr;
  
  
int i=0;

    while (i < 5) {
        printf("Enter number[%d]: ", i);
        scanf(" %c", &number[i]); // Space before %c skips newlines
        i++;
    }

    i = 0;
    while (i < 5) {
    ptr=&number[i];
    printf("Value of number[%d]: %c \n", i, *ptr);
    printf("Enter number[%d]:%p \n",i,ptr);
        i++;
    }
    return 0;
}
