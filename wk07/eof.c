#include <stdio.h>

#define MAX_LETTERS 100

int main (void) {

    // GIVEN
    char my_var[MAX_LETTERS];

    // while (scanf(" %s", my_var) != EOF) {
    //     printf("Input: %s\n", my_var);
    // }

    while (fgets(my_var, MAX_LETTERS, stdin) != NULL) {
        printf("Input: %s\n", my_var);
    }

    return 0;
}









    // // Solution
    // char my_arr[MAX_LETTERS];
    // while (fgets(my_arr, MAX_LETTERS, stdin) != NULL) {
    //     printf("Input: %s\n", my_arr);
    // }