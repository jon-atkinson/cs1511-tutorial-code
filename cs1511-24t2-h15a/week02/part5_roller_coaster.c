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

#define MIN_HEIGHT 110
#define RIDE_ALONE_HEIGHT 150

int main(void) {
	// 1. Scans in the users height.
	int height;
	printf("What is rider's height (in cm): ");
	scanf("%d", &height);
	
	// 2. If the height is 0 or less, 
	//    it should print an error message
	if (height <= 0) {
		printf("error: invalid height\n");
	}

	// 3. If the height is below the minimum height, 
	//    it should print a message telling the user they are not tall enough to ride
	else if (height < MIN_HEIGHT) {
		printf("you are not tall enough to ride\n");
	}

	// 4. If the height is above the minimum but below the ride alone threshold,
	//    it should print a message telling the user they can ride with an adult
	else if (height >= MIN_HEIGHT && height < RIDE_ALONE_HEIGHT) {
		printf("you are tall enough to ride with a tall person\n");
	}

	// 5. If the height is or is above the ride alone threshold, 
	//    it should print a message telling the user they can ride.
	else {
		printf("you are tall enough to ride alone\n");
	}

	return 0;
}
