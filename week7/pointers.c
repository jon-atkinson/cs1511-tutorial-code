// Jon Atkinson and COMP1511 M18A 23T3
// short program to demonstrate a series of pointer uses
// use: try to predict is stored in n, p, q when they print
//      when the error occurs, try to figure out which line is causing the error
//      or SPOILERS: comment out the line with assignment to seventeen
#include <stdio.h>

int main(void) {
    int n = 42;
    int *p;
    int *q;
    p = &n;
    *p = 5;
    *q = 17;
    q = p;
    *q = 8;

    printf("n is %d at address %p\n", n, &n);
    printf("p is %d at address %p\n", p, &p);
    printf("q is %d at address %p\n", q, &q);

    return 0;
}