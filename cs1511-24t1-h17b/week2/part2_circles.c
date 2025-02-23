// part2_circles
//
// This program was written by COMP1511 H17B
// on 20/02/2024
//
// This program calculates the area of a circle

#include <stdio.h>

#define PI 3.14

int main(void) {
	printf("Please enter a radius: ");
	double radius = 0;
	scanf("%lf", &radius);

	double area = PI * radius * radius;

	printf("The circles area is %.2lf\n", area);	

	// an alternative way of printing the area without an extra variable
	// printf("The circles area is %.2lf\n", PI * radius * radius);	
	return 0;
}
