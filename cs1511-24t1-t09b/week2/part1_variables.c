// part1_variables
//
// This program was written by COMP1511 T09B
// on 20/02/2024
//
// This program shows how to declare and initalise variables.
// It also shows how to define and use constants.

#include <stdio.h>

int main(void) {
	// 1. Declare the variables
    int number;
    double longer;
    char letter;
	
    // 2. Initalise the variables
    number = 9;
    longer = 3.4;
    letter = 'u';
    
    // 3. Print the variables
    printf("%d %lf %c\n", number, longer, letter);
    
    // 4. Reassign the values of some of the variables
    number = 7;
    longer = 4.9;
    letter = 'q';

	// 5. Print the variables
    printf("%d %lf %c\n", number, longer, letter);

	return 0;
}
