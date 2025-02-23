// Author: Jonathan Atkinson (COMP1511, H15A, 23T2)
// Program creates a char array[8], finds the largest char and prints it to stdout

#include <stdio.h>

#define ARR_LEN 8

int main(void)
{
    // Create a character array with exactly 8 elements.
    char letters[ARR_LEN] = {'a', 'd', 'Z', 'b', 'z', 'r', 'q', 'O'};

    // Create a character variable called largest_character, equal to the first character of the array.
    char largest_character = letters[0];

    // Create a while loop to loop through the character array.
    int i = 0;
    while (i < ARR_LEN)
    {
        // Create an if statement to check if the current character has a higher ascii value than "largest_character"
        if (letters[i] > largest_character)
        {
            largest_character = letters[i];
        }
        i++;
    }

    // Print out the largest character you've found.
    printf("The largest character found was: %c\n", largest_character);

    return 0;
}