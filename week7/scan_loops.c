// Jon Atkinson
// Small program to demonstrate different methods of scanning while in a loop
// comment/uncomment different sections to have a play with them and see how they
// work. Read the comment above fgets for important implementation info
#include <stdio.h>

#define MAX_LETTERS 100

int main (void) {

    // Alternative loop scanning options (one char at a time)

    // char my_var;
    // while (scanf(" %c", &my_var) == 1) {
    //     printf("Input: %c\n", my_var);
    // }

    // while (scanf(" %c", &myvar) != EOF) {
    //     printf("Input: %c\n", my_var);
    // }

    char my_word[MAX_LETTERS];
    // NOTE: fgets() returns NULL on failure to scan, not EOF
    // If you're interested, fgets returns the pointer to my_word (scanning location
    // on success which can be very useful for use in complex applications)
    while (fgets(my_word, MAX_LETTERS, stdin) != NULL) {
        printf("Input: %s\n", my_word);
    }

    return 0;
}