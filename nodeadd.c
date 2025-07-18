
#include<stdio.h>
#include<stdlib.h>
#include<string.h>




typedef struct node {
       int data;
       struct node *next_node;
}  __attribute__((packed)) node_s ;




node_s *__head= NULL;

int init(int data){
         
    //   if(__head){
    //     printf("LIST is already decrale\n\n");
    //     return -1;
    //   }
      
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
      __head->data=data;

   
 
    return 0;
}

int add(int  data){
    // if(!data){
    //   printf("invalid Data/\n\n");
    //   return -1;
    //       }

  node_s *n=malloc (sizeof(node_s));

  
  if (!n){
    printf("Allocation failed \n\n");
    return -1;
  }

  n->next_node=__head;
  n->data=data;

__head = n;
   
  return 0;

}

int add_at_the_end(int  data){
    // if(!data){
    //   printf("invalid Data/\n\n");
    //   return -1;
    //       }
    node_s *cur;

  node_s *n=malloc (sizeof(node_s));

  
  if (!n){
    printf("Allocation failed \n\n");
    return -1;
  }
  n->data=data; 
  n->next_node=NULL;

  for(cur=__head;cur->next_node !=NULL;cur=cur->next_node){

    /* Nothing to do just heading to the of the list*/ 

  }
  cur->next_node=n;



   
  return 0;

}

int exists(int data){

  for( node_s *cursor=__head;
  cursor !=NULL;
  cursor = cursor->next_node){
    if(cursor->data ==data){
      return 1;
    }
  }
  return 0;
}


void traverse(void){

 for( node_s *cursor=__head;
  cursor !=NULL;
  cursor = cursor->next_node){
  printf("%d\n",cursor->data);


  }
 
}


int main(){
     init(1010);
     add(102);
     add(200000);

    add_at_the_end(100);
    add_at_the_end(101);
    add_at_the_end(102);
    


     traverse();
    
    return 0;
}