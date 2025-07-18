//code to represent a node and initialisation




#include<stdio.h>
#include<stdlib.h>
#include<string.h>




struct node {
       char data[40];
       struct node *next_node;
} node_s __attribute__((packed)) ;





node_s *__head= NULL;

int init(char *data){
         

      
    //Allocate amemory assiggn the address to __head

         __head = malloc(sizeof(node_s));
    
    
    if(!__head){
        printf("Memory is faild\n");
        return -1;
    }
      // Make the node point to NULL because there is nothing
      //to point to.
      __head->next_node=NULL;
    

      //copy over the given data.
      memcpy(__head->data,data,strlen(data));
      __head->data;

      printf("%p\n",__head);
      printf("%s\n",__head->data);
      printf("%p\n",&__head->data);
      printf("%p\n",&__head->next_node);
   
 
    return 0;
}


int main(){
     init("hello world \n\n");
    //  struct node *head =NULL;


    return 0;
}


    




// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>
   
// typedef struct node {
//        char data[40];
//        struct node *next_node;
// } node_s ;





// node_s *__head= NULL;

// int init(char *data){
//          printf("%p\n", __head);
//          printf("sizeof(node_s):%ld\n",sizeof(node_s));

//          __head = malloc(sizeof(node_s));
    
    
//     if(__head == NULL){
//         printf("Memory is faild\n");
//         return -1;
//     }
      
//       __head->next_node=NULL;

//       memcpy(__head->data,data,strlen(data));
//       __head->data;

//       printf("%p\n",__head);
//       printf("%s\n",__head->data);
//       printf("%p\n",&__head->data);
//       printf("%p\n",&__head->next_node);
   
 
//     return 0;
// }


// int main(){
//      init("hello world \n\n");
//     //  struct node *head =NULL;


//     return 0;
// }


    

