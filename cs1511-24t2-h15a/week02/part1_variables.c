// part1_variables
//
// This program was written by T15B (ZID),
// on 04/06/2024
//
// This program calculates the area of a circle
#include <stdio.h>

#define PI 3.14159265

int main(void) {
	// 1. Declare the variables
	int radius;

    // 2. Initalise the variables
	radius = 6;

    // 3. Calculate the area of the circle
	double area = PI * radius * radius;

	// 4. Print the result
	printf("%.3lf, %lf\n", area, PI);

	return 0;
}
