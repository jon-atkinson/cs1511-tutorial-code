// COMP1511 23T3 H09C tut problem

#include <stdio.h>

int main(void) {
    int input_var;

    // first option for scanning in a loop
    int result = scanf("%d", &input_var);

    while (result == 1) {
        // successfully read an integer into inputVar
        printf("Read %d", input_var);

        result = scanf("%d", &input_var);
    }

    // second and better option
    while (scanf("%d", &input_var)) {
        // successfully read an integer into inputVar
        printf("Read %d", input_var);
    }

    return 0;
}
