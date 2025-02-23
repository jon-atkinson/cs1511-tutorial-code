// part5_roller_coaster
//
// This program was written by T15B
// on 04/06/2024
//
// This program:
// 1. Scans in the users height.
//
// 2. If the height is 0 or less, 
//    it should print an error message
//
// 3. If the height is below the minimum height, 
//    it should print a message telling the user they are not tall enough to ride
// 
// 4. If the height is above the minimum but below the ride alone threshold,
//    it should print a message telling the user they can ride with an adult
//
// 5. If the height is or is above the ride alone threshold, 
//    it should print a message telling the user they can ride.

#include <stdio.h>

#define MIN_HEIGHT 100.0
#define RIDE_ALONE 160.0

int main(void) {
	double height;

	// 1. Scans in the users height.
	//
	printf("What is your height: ");
	scanf("%lf", &height);

	// 2. If the height is 0 or less, 
	//    it should print an error message
	if (height <= 0) {
		printf("This height is invalid!\n");
	} else if (height <= MIN_HEIGHT) {
		printf("You are not tall enough to ride!\n");
	}

	// 4. If the height is above the minimum but below the ride alone threshold,
	//    it should print a message telling the user they can ride with an adult
	//
	else if (height > MIN_HEIGHT && height < RIDE_ALONE) {
		printf("You must ride with an adult.\n");
	}

	// 5. If the height is or is above the ride alone threshold, 
	//    it should print a message telling the user they can ride.
	// 
	else {
		printf("you can ride alone!\n");
	}
	
	return 0;
}
