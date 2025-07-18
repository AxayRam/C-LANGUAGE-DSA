#include <stdio.h>

struct student {
    char n[100];
    int c;
    int s;
};

int main() {
    struct student a[10];  // Array for 10 students
    
    printf("ENTER NAME, CLASS, AND SUBJECT COUNT FOR 10 STUDENTS\n\n");
    for (int i = 0; i < 10; i++) {
        printf("--- STUDENT %d ---\n", i+1);
        
        printf("NAME: ");
        scanf(" %s", a[i].n);  // Corrected: base address of array
        

        printf("CLASS: ");
        scanf(" %d", &a[i].c);
        while(a[i].c>=10){
        
        
            printf("please enter a valid input 1 to 10");
             printf("CLASS: ");
            scanf(" %d", &a[i].c);
        }
        
        printf("SUBJECT COUNT TOTAL MARKS : ");
        scanf(" %d", &a[i].s);
        while(a[i].s>100){
           printf("please enter a valid input 1 to 10o");  
           printf("SUBJECT COUNT: ");
            scanf(" %d", &a[i].s);
        }
        printf("\n");
    }

    // Print all student data
    printf("\n\nSTUDENT DATA:\n");
    printf("------------------------------------------\n");
    for (int i = 0; i < 10; i++) {
        printf("STUDENT %d\n", i+1);
        printf("Name: %s\n", a[i].n);
        printf("Class: %d\n", a[i].c);
        printf("Subjects: %d\n", a[i].s);
        printf("------------------------------------------\n");
    }

    return 0;
}