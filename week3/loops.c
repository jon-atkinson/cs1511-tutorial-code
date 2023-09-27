// COMP1511 M18A 23T3 week 3 tutorial exercise

#include <stdio.h>

void a(void);
void b(void);
void c(void);
void d(void);
void e(void);
void f(void);
void g(void);
void h(void);

int main(void) {
    char dummy = ' ';
    printf("a:\n");
    a();
    scanf("%c", &dummy);

    printf("b:\n");
    b();
    scanf("%c", &dummy);

    printf("c:\n");
    c();
    scanf("%c", &dummy);

    printf("d:\n");
    d();
    scanf("%c", &dummy);

    printf("e:\n");
    e();
    scanf("%c", &dummy);

    // printf("f:\n");
    // f();
    // scanf("%c", &dummy);

    // printf("g:\n");
    // g();
    // scanf("%c", &dummy);

    printf("h:\n");
    h();

    return 0;
}

void a(void) {
    int i = 5;
    while (i > 0) {
        printf("%d\n", i);
        i--;
    }
}

void b(void) {
    int i = 1;
    while (i < 32) {
        printf("%d\n", i);
        i = i + i;
    }
}

void c(void) {
    int i = 0;
    while (i < 32) {
        printf("%d\n", i);
        i = i + 2;
    }
}

void d(void) {
    int i = 5;
    while (i >= 0) {
        printf("%d\n", i);
        i--;
    }
}

void e(void) {
    int i = 0;
    int keep_going = 1;
    while (keep_going == 1) {
        if (i > 3) {
            keep_going = 0;
        }
        i++;
    }
    printf("%d\n", i);
}

void f(void) {
    int i;
    while (i > 0) {
        printf("%d\n", i);
        i--;
    }

}

void g(void) {
    int i = 0;
    int max = 32;
    while (i < max) {
        printf("%d\n", i);
        max = max + 2;
    }

}

void h(void) {
    int i = 0;
    int keep_going = 0;
    while (keep_going == 1) {
        if (i > 3) {
            keep_going = 0;
        }
        i++;
    }
    printf("%d\n", i);
}