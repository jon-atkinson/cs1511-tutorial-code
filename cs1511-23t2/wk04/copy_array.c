// Author: Jonathan Atkinson (COMP1511, H15A, 23t2)
// Program that creates two arrays, second longer than the first, copies doubles
// in from first into second array and prints second array to stdin

#include <stdio.h>

#define SMALL_ARR_SIZE 3
#define LARGE_ARR_SIZE 10

int main(void)
{

    // Create an array of doubles with 3 elements, each with a non-zero value.
    double first_array[] = {3, 54.78, 982334.3577};
    // Create another array of doubles with 10 elements where every element initialised to 0.0.
    double second_array[LARGE_ARR_SIZE] = {0};

    // Create a while loop that loops through every element of the first array.
    int i = 0;
    while (i < SMALL_ARR_SIZE)
    {
        // Copy the elements of the first array into the second array (leave 0's at the end)
        second_array[i] = first_array[i];
        i++;
    }

    // Create a while loop that prints out all the elements of the second array.
    i = 0;
    while (i < LARGE_ARR_SIZE)
    {
        printf("%.2lf ", second_array[i]);
        i++;
    }

    return 0;
}