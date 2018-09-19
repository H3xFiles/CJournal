## 14 RULES to be a better C programmer
1. THINK before you code and do not start to jump to code
2. Never use complex syntax, your code should be readible like a story (think about yourself like a writter) 
3. Do not optimize if not needed
4. Use only a standard debugging output
  ``` C
   #ifdef DEBUG
   #define dprint printf
   #else
   #define dprint(void)
   #endif
  ```
5. Do not create block-monsters: { No more than ~20 lines of code here}
6. Use proper intendation 
7. Use assert
8. Do not use:
``` C
#define True 1
#define False 0
```
9. Do not use globals variables
10. Put a debug counter in your malloc
```C
int malloc_counter = 0
void *my_malloc(size_t siz){
  malloc_counter++;
  return malloc(siz);
}
void my_free(void *mem){
  malloc_counter--;
  free(mem);
}

assert(malloc_counter == 0);
```
11. Do not use gets() or sscanf()
12. Variables with meaningful name such as: int my_first_index, int my_last_index
13. Use name constants
```C
#define MSG_MAX_SIZE 1024
#define MSG_ID_OFFSET 0

```
14 Use lint

## Compile
THe C compiler works in 3 stages:
1. Pre-process source file
2. Compile source file into object files
3. Link objects into an executable
```console
gcc -Wall -O hello -o hello.c
```

## Array
```C
int a[3];
int b[3][3];
char hello[15] = "Hello, world!\n";
char *array = a; 
```

## Format strings
```C
%d | signed int
%u | unsigned int
%x | hexadecimal unsigned int
%c | character
%d | float
%s | string
%% | print %
```

## Size variables
```C
bool:           1 bytes
char:           1 bytes
wchar_t:        2 bytes
char16_t:       2 bytes
char32_t:       4 bytes
short:          2 bytes
int:            4 bytes
long:           4 bytes
long long:      8 bytes
float:          4 bytes
double:         8 bytes
long double:    8 bytes
```

## sizeof()
The sizeof operator  yields  the  size  (in  bytes)  of  its  operand, which may be an expression or the parenthesized name of a type.
The size is determined from the type of the operand. The result is an integer.[Source](http://www.open-std.org/jtc1/sc22/wg14/www/docs/n1256.pdf)

## size_t
size_t is an unsigned integer type used to represent the size of any object (including arrays) in the particular implementation. The sizeof operator yields a value of the type size_t. The maximum size of size_t is provided via SIZE_MAX, a macro constant which is defined in the <stdint.h> header. size_t is a type that can hold any array index. Depending on the implementation, it can be any of:
```C
unsigned char
unsigned short
unsigned int
unsigned long
unsigned long long
```

```C
limit of size_t SIZE_MAX  65535
```

## inttypes.h
The purpose of <inttypes.h> is to provide a set of integer types whose definitions are consistent across machines and independent of operating systems and other implementation idiosyncrasies. It defines, via typedef, integer types of various sizes. Implementations are free to typedef them as ISO C standard integer types or extensions that they support. Consistent use of this header will greatly increase the portability of applications across platforms.

```C
#include <inttypes.h>
int8_t a;
int16_t b;
int32_t c;
```

### Define headers files

```C
#ifdef _MY_HEADER_H_
#define _MY_HEADER_H_
 Some code here ....
#endif
```


### Pointers
The star symbol * point to something and the & indicate the address of that memory address. 
Pointers must have the same type of the address they are pointing to. 
```C
int i = 8; 
int *p; 
p = &i;
```
But if p was declared double, it would result in an error. 

```C
int *ptr;                           /* Pointer to an int */
unsigned char *c;                   /* Pointer to an unsigned char */
struct ComplexNumber n*;            /* Pointer to a struct */
int **pp;                           /* Pointer to a pointer to an int */
void *v;                            /* Pointer to anything */

```

Another great way to understand pointers ([ref](https://hackaday.com/2018/04/04/the-basics-and-pitfalls-of-pointers-in-c/))
```C
// regular int variable with initial value
int value = 0x1000;
// int pointer variable, pointing to the location of value
int *pointer = &value;
 
printf("value:    0x%x at address %p\n", value, &value);
printf("pointer:    %p at address %p\n", pointer, &pointer);
printf("*pointer: 0x%x at address %p\n", *pointer, pointer);
```
The output is the following ... 
```bash
value:    0x1000 at address 0x2468
pointer:  0x2468 at address 0x246c
*pointer: 0x1000 at address 0x2468
```

#### Declare VS Deference(assign)
We have already seen how to declare a pointer int *p; , but we can as well deference a pointer in other words assign a new value to the memory address the pointer is poiting too. To better explain the idea, think about that the pointer is not a passive reader of the memory location, but it has both propieties of reading and writing the memory address is pointing to. 

```C
int i = 8; 
int *p; 
p = &i;
*p = 12; 
/* output: i is now equal to 12 */
```

#### When to use malloc and free with pointers? 
The primary reason malloc is needed is when you have data that must have a lifetime that is different from code scope. Your code calls malloc in one routine, stores the pointer somewhere and eventually calls free in a different routine.
```C
ptr = (int*) malloc(100 * sizeof(int));
free( ptr );

```
