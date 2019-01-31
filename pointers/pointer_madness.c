#include <stdio.h>

int main() {
    int z = 10;
    int **a = z;
    int *b = &a;
    int **c = &b;
    int d = *b;
    int **e = d;
    int *f = b;
    printf("a %p | %d\n",a, a);
    printf("b %p | %d\n",b, *b);
    printf("c %p | %d\n",c, **c);
    printf("d %p | %d\n",d, d);
    printf("e %p | %d\n",e, e);
    printf("e %p | %d\n",f, f);
}
