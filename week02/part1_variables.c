// part1_variables
//
// This program was written by T09A,
// 09/24
//
// This program calculates the area of a circle

#include <stdio.h>

#define PI 3.1415

int main(void) {
	// 1. Declare the variables
    // 2. Initalise the variables
	int radius = 2;
	
    // 3. Calculate the area of the circle
	double area = PI * radius * radius;
    
	// 4. Print the result
	printf("%.10lf\n", area);

	return 0;
}
