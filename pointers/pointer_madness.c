int main() {
    int z = 10;
    int **a = z;
    printf("&%p a point to %p | %d\n",&a,a, a);

    int *b = &a;
    printf("&%p b point to %p | %d\n",&b,b, *b);

    int **c = &b;
    int d = *b;
    int **e = &d;
    int f = *b;
    int *g = b;
    *g = 20;
    
   
    
    printf("&%p b point to %p | %d\n",&b,b, *b);
    printf("&%p c point to %p | %d\n",&c,c, **c);
    printf("&%p d point to %p | %d\n",&d,d, d);
    printf("&%p e point to %p | %d\n",&e,e, *e);
    printf("&%p f dereferencing-read point to %p | %d\n",&f,f, f);
    printf("&%p g deferencing-write point to %p | %d\n",&g,g, *g);

    
}
