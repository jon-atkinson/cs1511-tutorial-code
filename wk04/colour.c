// Auth: Jonathan Atkinson
// this program demos creating and changing a struct using functions

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct colour
{
    int red;
    int green;
    int blue;
};

// function prototypes
struct colour make_colour(int red, int green, int blue);
int get_main_colour(struct colour c);
double brightness(struct colour colour);

int main(void)
{
    // function call to make colour, find it below, saving returned struct colour
    // to the first_colour variable - try changing the values and seeing how
    // the program's output changes
    struct colour first_colour = make_colour(130, 198, 243);

    // some other calls to perform some operations on first_colour
    // see if you can understand what the get_main_colour and brightness functions
    // are doing by looking at their implementation
    printf("the main colour of first_colour is %d\n", get_main_colour(first_colour));
    printf("the brightness of first_colour is %.6lf\n", brightness(first_colour));

    return 0;
}

// function to construct and return a new colour given it's fields as args
struct colour make_colour(int red, int green, int blue)
{
    struct colour new_colour;

    new_colour.red = red;
    new_colour.green = green;
    new_colour.blue = blue;

    return new_colour;
}

// function to find the main colour of a struct colour
int get_main_colour(struct colour c)
{
    if (c.red > c.green && c.red > c.blue)
    {
        return c.red;
    }
    else if (c.green > c.red && c.green > c.blue)
    {
        return c.green;
    }
    else if (c.blue > c.red && c.blue > c.green)
    {
        return c.blue;
    }
    else
    {
        return 0;
    }
}

// function to find the brightness of a struct colour
double brightness(struct colour colour)
{
    return sqrt(colour.red) + sqrt(colour.green) + sqrt(colour.blue);
}