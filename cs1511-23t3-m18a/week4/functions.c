// COMP1511 23T3 H09C tut problem

#include <stdio.h>

// struct definitions go here
struct colour {
    int red;
    int green;
    int blue;
};

// we put our function prototypes here
struct colour make_colour(int red, int green, int blue);
void print_colour(struct colour colour);

int main(void) {
    // declare and initialise my_colour with a struct returned from make_colour
    struct colour my_colour = make_colour(0, 255, 0);
    struct colour second_colour = make_colour(45, 55, 180);

    // printing out my_colour using the print_colour function
    print_colour(my_colour);
    print_colour(second_colour);

    return 0;
}

// this is where the function is defined
struct colour make_colour(int red, int green, int blue) {
    struct colour new_colour;

    new_colour.red = red;
    new_colour.green = green;
    new_colour.blue = blue;

    return new_colour;
}

// this is a completely seperate function, below are some parts of functions
//return type       function arguments
// |  fn name           |
// |    |               |
// v    v               v
void print_colour(struct colour colour) {
    printf("Red value is %d\n", colour.red);
    printf("Green value is %d\n", colour.green);
    printf("Blue value is %d\n\n", colour.blue);
}