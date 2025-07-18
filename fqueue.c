#include<stdio.h>
#include "queue.h"





int main(){


  fetch();
  fetch();
     init(1010);
    
   for (int i=0;i<100;i++){
    add(i);
 }
  
   traverse();
printf("FIRST ELEMENT: %d\n", fetch());
     
    return 0;
}