// part5_roller_coaster
//
// This program was written by YOUR-NAME, ZID
// on [DATE]
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

// Note that we declare these as constants because we know they won't change at
// runtime
// This allows for changing the consant value everywhere it appears quickly and
// also allows us to differentiate between two consants with the same value
#define MIN_HEIGHT 50
#define RIDE_ALONE_HEIGHT 100

int main(void) {
	// 1. Scans in the users height.
	double height;
	printf("Enter your height (cm): ");
	scanf("%lf", &height);

	// 2. If the height is 0 or less, 
	//    it should print an error message
	if (height <= 0) {
		printf("height must be greater than 0\n");
	}

	// 3. If the height is below the minimum height, 
	//    it should print a message telling the user they are not tall enough to ride
    else if (height < MIN_HEIGHT) {
        printf("You are not tall enough to ride\n");
    }

	// 4. If the height is above the minimum but below the ride alone threshold,
	//    it should print a message telling the user they can ride with an adult

    // else if (height >= MIN_HEIGHT && height < RIDE_ALONE_HEIGHT) {
    // above is an alternative line, notice that we have already checked that the
    // height is >= MIN_HEIGHT, or the last else-if block would have been run instead

    else if (height < RIDE_ALONE_HEIGHT) {
        printf("You can ride, but only with an adult\n");
    }

	// 5. If the height is equal to or above the ride alone threshold, 
	//    it should print a message telling the user they can ride.
    else {
        printf("You can ride alone!\n");
    }

	return 0;
}
