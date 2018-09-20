## Struct
Structure is a user-defined datatype in C language which allows us to combine data of different types together. 
Structure helps to construct a complex data type which is more meaningful. It is somewhat similar to an Array, 
but an array holds data of similar type only. But structure on the other hand, can store data of any type, 
which is practical more useful.([Source](https://www.studytonight.com/c/structures-in-c.php))

The best way to explain struct is to see them in action, so this is the code of a single linked list. 

```C
#include <stdlib.h>

typedef struct node{
  int val;
  struct *next_node;
}node_t;

node_t *head = NULL;
head = (node_t*)malloc(sizeof(node_t));
if(head==NULL){
  return = 1;
}

void init_head(){
  head->val = 3;
  head->next_node = NULL;
}

void push(node_t * head, int val) {
    node_t * current = head; //point to the head 
    while (current->next_node != NULL) { 
    current = current->next_node; //while the next node is not null keep looping
    } //exit the while the while loop when find a next_node == NULL
    current->next_node = malloc(sizeof(node_t)); //malloc space to the next node sizeof(node_t) that is the sum of and int(4 bytes)+ value of the node structure
    current->next_node->val = val; //assign the value
    current->next_node->next_node = NULL; //and assign the valude of the next_node to NULL. 
}

void print_list(node_t * head) { //to investigate why I do need to pass the head because technically it has been already declared outside 
    node_t * current = head; //declare a node_t called current that copy the head value. Carbon copy it. 

    while (current != NULL) { 
        printf("%d\n", current->val);
        current = current->next_node;
    }
}


```

