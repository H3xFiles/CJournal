#include <stdio.h>

int main() {
    int z = 10;
    int **a = z;
    int *b = &a;
    int **c = &b;
    int d = *b;
    int **e = &d;
    int *f = b;
    int *g = f;
    
    printf("&%p a point to %p | %d\n",&a,a, a);
    printf("&%p b point to %p | %d\n",&b,b, *b);
    printf("&%p c point to %p | %d\n",&c,c, **c);
    printf("&%p d point to %p | %d\n",&d,d, d);
    printf("&%p e point to %p | %d\n",&e,e, e);
    printf("&%p f point to %p | %d\n",&f,f, f);
    printf("&%p g point to %p | %d\n",&g,g, g);
}
