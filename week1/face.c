// this is a comment
// Basic Hello World program
// Marc Chee, September 2020

// memorise this for now, it's including a library we need to use printf, scanf, etc.
#include <stdio.h>

// this is the start of the main function, we need to include it on all .c files for now
int main (void) {

    // this is a print statement, it prints the characters in the ""
    // the '\n' is a newline or linefeed, and it's like hitting enter on your keyboard
    printf("Hello World\n");

    // this is the desired way of printing, note it's easy to see
    printf("first face:\n");
    printf("~ ~\n");
    printf("0 0\n");
    printf(" o\n");
    printf(" -\n");

    // run the program and you'll see that this is print format also works
    // to produce the desired output, but it's harder to understand, so please
    // don't use it, also note the double backslash, used to negate the escape character syntax
    printf("\nsecond face:\n");
    printf("~ ~\n0 0\n o\n\\_/\n");
    
    // this is the return statement, note that it's the last thing before the
    // closing '}' for the main function, the 0 means no errors
    return 0;
}