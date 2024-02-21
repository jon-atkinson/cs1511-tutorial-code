// part6_roller_coaster
//
// This program was written by COMP1511 T09B
// on 20/02/2024
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

#define MIN_HEIGHT 1.2
#define RIDE_ALONE_HEIGHT 1.5

int main(void) {
	// 1. Scan in the users height.
	printf("Please enter the user's height (in meters): ");
	double height = 0.0;
	scanf(" %lf", &height);

	// 2. If the height is 0 or less, 
	//    print an error message
	if (height <= 0) {
		printf("Err: height cannot be 0.00m or less\n");
	}

	// 3. If the height is below the minimum height, 
	//    print a message telling the user they are not tall enough to ride
	else if (height < MIN_HEIGHT) {
		printf("%.2lfm is not tall enough to ride.\n", height);
	}

	// 4. If the height is above the minimum but below the ride alone threshold,
	//    print a message telling the user they can ride with an adult
	else if (height < RIDE_ALONE_HEIGHT) {
		// note that we have already checked that we're taller than the MIN_HEIGHT
		// at this point so we don't need to check that again
		printf("%.2lfm is tall enough to ride, but only with an adult.\n", height);
	}

	// 5. If the height is or is above the ride alone threshold, 
	//    print a message telling the user they can ride.
	else {
		printf("%.2lfm is tall enough to ride on your own.\n", height);
	}

	return 0;
}
