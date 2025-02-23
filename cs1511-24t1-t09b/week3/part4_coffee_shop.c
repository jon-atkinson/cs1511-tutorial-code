// part4_coffee_shop.c
//
// Written by COMP1511 T09B, 
// on 27/02/2024
//
// This program is a simple coffee shop used to demonstrate the use of 
// structs and enums in C. This program takes user input for a coffee order
// and outputs the cost of the order.

#include <stdio.h>

#define LARGE 'L'
#define REGULAR 'R'
#define ADDED_COST 0.5
#define BASE_COST 4.5

enum coffee_type {
    LATTE,
    CAPPUCCINO,
    ESPRESSO,
    AMERICANO,
    MATCHA
};


struct coffee {
    enum coffee_type type;
    int num_sug;
    char size;
};

int main(void) {
    struct coffee my_coffee;
    printf("Enter coffee type (0: LATTE, 1: CAPPUCCINO, 2: ESPRESSO, \
            3: AMERICANO, 4: MATCHA): ");
    
    int type = -1;
    scanf("%d", &type);

    if (type == 0) {
        my_coffee.type = LATTE;
    } else if (type == 1) {
		my_coffee.type = CAPPUCCINO;
	} else if (type == 2) {
		my_coffee.type = ESPRESSO;
	} else if (type == 3) {
		my_coffee.type = AMERICANO;
	} else {
        my_coffee.type = MATCHA;
    }

    printf("Enter number of sugars: ");
    scanf("%d", &my_coffee.num_sug);

    printf("Enter size (L for Large, R for Regular): ");
    scanf(" %c", &my_coffee.size);

	double total_cost = BASE_COST;

	if (my_coffee.size == LARGE) {
		total_cost += ADDED_COST;
	}

	if (my_coffee.type == LATTE || 
			my_coffee.type == CAPPUCCINO|| 
			my_coffee.type == MATCHA) {
			total_cost += ADDED_COST;
	}
	
	total_cost += ADDED_COST * my_coffee.num_sug;

	printf("Total cost: %.2lf\n", total_cost);
	return 0;
}
