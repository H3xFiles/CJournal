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


## Fopen - open
fopen and open do most of things at the same way, but fopen is a standard library function and open is a syscall .
Therefore open is much much faster. 

#### fopen
```C

  FILE *file_to_read = fopen ("file.txt", "r");
  FILE *file_to_write = fopen ("otherFile.txt", "w");

  if (file_to_read == NULL | file_to_write == NULL) {
      printf ("One file wouldn't open.\n");
      return -1;
    }

  char c;
  while ((c = fgetc (file_to_read) != EOF)
	 {
	 if (c == '.')
	 {
	 c = '!';}
	 fputc (c, file_to_write);
   }
	 fclose (file_to_read); 
   fclose (flie_to_write);
   
```

#### open
```C
int fd_to_read = open("file.txt", O_RDONLY);
int fd_to_write = open("fileToWrite.txt", O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);

if (fd_to_read == -1 || fd_to_write == -1){
printf("One file wouldn't open\n");
return -1
}

char c;
int bytes;
while((bytes = read(fd_to_read, &c, sizeof(c))) > 0) {
if (c == '.'){
  c = '!';
}
 write(fd_to_write, &c, sizeof(c));
}

close(fd_to_read);
close(fd_to_write);

```

## How to Map Files into Memory in C ([Video Link](https://www.youtube.com/watch?v=m7E9piHcfr4))
[mmap()](http://man7.org/linux/man-pages/man2/mmap.2.html) creates a new mapping in the virtual address space of the
calling process.  The starting address for the new mapping is specified in addr. The length argument specifies the length of the
 mapping (which must be greater than 0). void *mmap(void *addr, size_t length, int prot, int flags, int fd, off_t offset);
```C
#include <sys/mman.h>

int fd = open("./somefile.txt", 0_RDWR, S_IRUSR | S_IWUSR);
struct stat sb;
if(fstat(fd, &sb) == -1){
  perror("Couldn't get file size.\n");
}
char* file_in_memory = mmap(NULL, PAGESIZE, PROT_READ | PROT_WRITE, MAP_SHARED | MAP_ANONYMOUS, fd,0);

```


