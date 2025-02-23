// this file contains the C implementation of questions in the comp1511 week 2
// lab. Feel free to compile and run on your own lab acct to see check your
// predictions
// Apologies for some of the weird formatting, the environment I prepared this in
// has auto-formatting enabled that isn't standard for the course (i.e. long lines
// and putting the } on a new line for the main function)
//
// Written by Jonathan Atkinson (z5363013), 10/06/2023

#include <stdio.h>

int main(void)
{
    // (7 / 2)
    printf("(7 / 2) is %d\n\n", (7 / 2));

    // (3.0 / 2) + 1
    printf("(3.0 / 2) + 1 is %f\n\n", (3.0 / 2) + 1);

    // 'a' + 5
    printf("'a' + 5 is %c as a char and %d as an integer\n", 'a' + 5, 'a' + 5);
    printf("NOTE: the char is how the value is stored and thus what we care about, but we include the integer printf to show how C represents chars internally\n\n");

    // 'F' - 'A' + 'a'
    printf("'F' - 'A' + 'a' is %c as a char and %d as an integer\n",
           'F' - 'A' + 'a', 'F' - 'A' + 'a');
    printf("NOTE: same disclaimer as the last question\n\n");

    return 0;
}