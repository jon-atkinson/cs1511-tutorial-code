// part1_variables
//
// This program was written by COMP1511 H17B
// on 20/02/2024
//
// This program shows how to declare and initalise variables.
// It also shows how to define and use constants.

#include <stdio.h>

int main(void) {
	// 1. Declare the variables
    int number;
    char letter;
    double another_number;
	
    // 2. Initalise the variables
    number = 3;
    letter = 'd';
    another_number = 3.5;
    
    // 3. Print the variables
    printf("BEFORE CHANGES\n");
    printf("number is %d\n", number);
    printf("letter is %d\n", letter);
    printf("another_number is %d\n", another_number);
    
    // 4. Reassign the values of some of the variables
    number = 8;
    letter = 'r';
    another_number = 2.3;

	// 5. Print the variables
    printf("AFTER CHANGES\n");
    printf("number is %d\n", number);
    printf("letter is %d\n", letter);
    printf("another_number is %d\n", another_number);

	return 0;
}
