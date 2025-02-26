// part1_variables
//
// This program was written by H09B
//
// This program calculates the area of a circle

#include <stdio.h>

#define PI 3.14159

int main(void) {
  // Declaring the variable
  int radius;
  printf("Please enter the radius of your circle: ");

  // Initalising the variable with user input
  scanf("%d", &radius);

  // Calculating the area
  double area = (radius * radius) * PI;

  printf("The area of the circle with a radius of %d is %lf\n", radius, area);
  return 0;
}
