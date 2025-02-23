// COMP1511 23T3 H09C tut problem

#include <stdio.h>

int main(void) {
    // create an integer array with at least 5 elements
    int five_elements[5] = {3, 2, 5, 6, 8};
    
    // write a while loop which loops through every element of the array
    int i = 0;
    while (i < 5) {
        // write an if statement which adds 1 to each even value
        // do this within the while loop
        if (five_elements[i] % 2 == 0) {
            five_elements[i]++;
        }
        i++;
    }


    // write another while loops which goes through the array with
    // a different iterator
    int j = 0;
    while (j < 5) {
        // print out the values in the array
        printf("%d, ", five_elements[j]);
        j++;
    }

    printf("\n");

    return 0;
}