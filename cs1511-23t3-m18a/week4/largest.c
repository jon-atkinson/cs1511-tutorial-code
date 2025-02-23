#include <stdio.h>

int main(void) {
    // Create a character array with exactly 8 elements.
    char arr[8] = {'a', 'b', 'c', 'd', 'z', 'f', 'g', 'h'};

    // Create a character variable called largest_character, equal to the first character of the array.
    char largest_character = arr[0];

    // Create a while loop to loop through the character array.
    int i = 0;
    while (i < 8) {
        // Create an if statement to check if the current character has a higher ascii value than "largest_character"
        if (arr[i] > largest_character) {
            largest_character = arr[i];
        }

        i++;
    }

    // Print out the largest character you've found.
    printf("%c\n", largest_character);
    
    // Ensure your code would pass "1511 style"
    return 0;
}