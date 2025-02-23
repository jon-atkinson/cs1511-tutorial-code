// Auth: Jonathan Atkinson
// Tut code demo-ing scanning integers from stdin using scanf

#include <stdio.h>
#define MAX_NUMBERS 100

void scan_quicker(void);

int main(void)
{
    int num;
    // note here that scanf usually returns the number of successfully scanned inputs
    int result = scanf(" %d", &num);
    printf("num is %d, result is %d\n", num, result);

    ////////////////////////////////////////////////////////////////////////
    // scanning in multiple inputs - the loop used to scan each of the integers
    // can be written in a more concise format, check out the code in the scan_shorter
    // function at the bottom of this file

    // setting up the numbers array to store the integers in
    int numbers[MAX_NUMBERS] = {0};

    // scanning the first integer into numbers
    result = scanf(" %d", &numbers[0]);

    // while condition checks that the last scan was successful
    int i = 0;
    while (result == 1 && i < MAX_NUMBERS)
    {
        i++;
        // scanning one integer into the numbers array
        result = scanf("%d ", &numbers[i]);
    }

    // printing out all of the scanned numbers in reverse order
    printf("Printing scanned nums:\n");
    i--;
    while (i >= 0)
    {
        printf("%d ", numbers[i]);
        i--;
    }

    // please comment out all the above code before uncommenting out this function
    // call because of some quirks using ctrl+D to end input
    // scan_quicker();

    return 0;
}

// more concise writing of the scanning while loop, please recompile yourself
// before running as my compiler is a bit buggy when working with while loops atm
void scan_quicker(void)
{
    printf("This is a more concise way of scanning from input!\n");
    int letters[MAX_NUMBERS];

    int i = 0;
    printf("Please enter ints separated by whitespace: ");
    while (scanf("%d ", &letters[i]) == 1)
    {
        i++;
    }

    int j = 0;
    while (j <= i)
    {
        printf("%d ", letters[j]);
        j++;
    }
    printf("\n");
}