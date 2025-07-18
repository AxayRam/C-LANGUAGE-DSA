//VISUALIZATION AND WORKING WITH MULTI-DIMENSIONAL ARRAY

#include<stdio.h>
int main(){
     char p[10]={'a','b','c','d','e','f','g','h','j','k'};
     char q[10]={'a','b','c','d','e','f','g','h','j','k'};
   
    char r[5][5];

printf("enter a elementts of array\n\n");
    for (int i=0;i<5;i++){
         for (int j=0;j<5;j++){
        
      printf("r[%d][%d]:",i,j);
      scanf(" %c",&r[i][j]);
        }
   printf("\n");
}
    
  
printf("array is show as a\n\n");



    for (int i=0;i<5;i++){
         for (int j=0;j<5;j++){
        
      printf("r[%d][%d]:%c  ",i,j,r[i][j]);
     
        }
   printf("\n");
}
    
   
   
   
   
   
   
   
   
   
   
   
   
    // printf("sizeof(p)=%lu\n",sizeof(p));
    // for(int i=0;i<10;i++){
    //  printf("p[%d]=%c\n",i,p[i]);

    // }
      
    
    return 0;
}