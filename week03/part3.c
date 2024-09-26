#include<stdio.h>

int main(void) {
    int my_num;

    while (scanf("%d", &my_num) == 1) {
        printf("%d\n", my_num);
    }

    return 0;
}