#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct node {
       int data;
       struct node *next_node;
}  __attribute__((packed)) node_s ;



static node_s *__head= NULL;
static node_s *__tail= NULL;

int init(int data){
    node_s *cur;
    
    node_s *n=malloc (sizeof(node_s));

      if(__head){
        printf("LIST is already decrale\n\n");
        return -1;
      }
      
    //Allocate amemory assiggn the address to __head

     __head = malloc(sizeof(node_s));
    
    
    if(!__head){
        printf("Memory is faild\n");
        return -2;
    }
      // Make the node point to NULL because there is nothing
      //to point to.
    __head->next_node=NULL;
      //copy over the given data.
    __head->data=data;

    //tail and hhead are the same
    __tail=__head;

    return 0;
}


int add(int  data){
    
    node_s *cur;

  node_s *n=malloc (sizeof(node_s));

  
  if (!n){
    printf("Allocation failed \n\n");
    return -1;
  }
  n->data=data; 
  n->next_node=NULL;

 __tail->next_node=n;   
 __tail=n;

  cur->next_node=n;



   
  return 0;

}

int fetch(void){
    if(!__head){
        printf("Queue is empty\n");
        return -1;
    }
    int data=__head->data;
    node_s *temp=__head;
    __head=__head->next_node;
    free(temp);
    
    if(__head==NULL){
        __tail=NULL; // If the queue is empty, reset tail
    }
    
    return data;
}

void traverse(void){

 for( node_s *cursor=__head;
  cursor !=NULL;
  cursor = cursor->next_node){
  printf("%d-->",cursor->data);


  }
 printf("{}\n");
}


