// Jon Atkinson and COMP1511 M18A 23T3
// Demonstrates going from compiler managed memory to dynamically allocated memory
// management, how to malloc single variables, arrays and freeing

#include <stdio.h>
#include <stdlib.h>

#define NUM_NUMS 100

int main(void) {
    int *num_ptr = NULL;
    num_ptr = malloc(sizeof(int));
    *num_ptr = 56;
    
    printf("num is %d\n", *num_ptr);
    free(num_ptr);
    // trying to access a value via a freed pointer will cause a use after free error
    printf("num is %d\n", *num_ptr);
    // just comment out this whole first block of code if you're interested in the stuff
    // below



    // EXERCISE: for this section of code, the commented code has been replaced
    // by the pointer version underneath it (you'll need to add your own prints
    // to visualise what's going on)

    // int number;
    int *number_ptr = malloc(sizeof(int));
    
    // number = 3;
    *number_ptr = 3;

    // double longer_number = 4 * number;
    double *longer_number_ptr = malloc(sizeof(double));
    *longer_number_ptr =  4 * *number_ptr;

    // char letter;
    char *letter_ptr = malloc(sizeof(char));

    // int some_numbers[NUM_NUMS];
    int *some_numbers = malloc(NUM_NUMS * sizeof(int));

    // C treats arrays as pointers to the first element in the array, so accessing
    // values uses the same syntax whether we malloc or not
    for (int i = 0; i < NUM_NUMS; i++) {
        some_numbers[i] = i % 5 + i;
    }    
    
    // remember to free your dynamically allocated memory before returning from main
    // 1 malloc = 1 free on that memory
    free(number_ptr);
    free(longer_number_ptr);
    free(letter_ptr);
    free(some_numbers);

    return 0;
}