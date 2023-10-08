// small program to demonstrate the dangers of the unrequited
// scan

#include <stdio.h>

int main(void) {
    
    // note: we don't initialise here, this can be an issue as we'll see
    int num;
    // try entering a number, then rerun and enter a letter instead
    printf("please enter a number: ");
    int scanf_return = scanf("%d", &num);

    // this value is the return from the scanf on line 10
    printf("scanf return=%d\n", scanf_return);

    // printing whatever is stored in num
    printf("num=%d\n", num);

    return 0;
}