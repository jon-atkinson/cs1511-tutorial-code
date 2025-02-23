// part2_circles
//
// This program was written by COMP1511 T09B,
// on 20/02/2024
//
// This program calculates the area of a circle

#include <stdio.h>

#define PI 3.14

int main(void) {
	int radius = 0;
	scanf("%d", &radius);

	// calculate the area of the circle
	double area = PI * radius * radius;

	printf("area of our circle is %lf\n", area);

	// Or, if you want to be fancy we don't need a seperate variable for area,
	// we can just pass the expression to the printf function
	printf("area of our circle is %lf\n", PI * radius * radius);
	
	return 0;
}
