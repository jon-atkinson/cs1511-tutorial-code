// part1_variables
//
// This program was written by T15B,
// on 04/06/2024
//
// This program calculates the area of a circle

#include <stdio.h>

#define PI 3.14159265

int main(void) {
	// 1. Declare the variables
	double radius;
	
    // 2. Initalise the variables
	radius = 6;
    
    // 3. Calculate the area of the circle
	// note here that we can declare and init on the same line
	double area = radius * radius * PI;
    
	// 4. Print the result
	printf("The area is %lf\n", area);

	return 0;
}
