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
```console
gcc -Wall -O hello -o hello.c
```

## Array
```C
int a[3];
int b[3][3];
char hello[15] = "Hello, world!\n";
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








