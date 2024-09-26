// etc. some header comment

#include<stdio.h>

int main(void) {
    int my_num;

    // example of scanning in until the user prints [ctrl+d]
    while (scanf("%d", &my_num) == 1) {
        printf("%d\n", my_num);
    }

    return 0;
}

