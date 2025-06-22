// coffee_shop.c
//
// Written by M15X,
//
// This program is a simple coffee shop used to demonstrate the use of
// structs and enums in C. This program takes user input for a coffee order
// and outputs the cost of the order.

#include <stdio.h>

#define LARGE 'L'
#define REGULAR 'R'
#define ADDED_COST 0.5
#define BASE_COST 4.5

// Define an enum `coffee_type` that stores the different types of coffees
// the shop sells. These are: LATTE, CAPPUCCINO, ESPRESSO, AMERICANO & MATCHA.

enum coffee_type { LATTE, CAPPUCCINO, ESPRESSO, AMERICANO, MATCHA };

// Define a struct `coffee` that stores
// 1. the coffee type (an enum)
// 2. the number of sugars
// 3. the size of a coffee
struct coffee {
  enum coffee_type type;
  int num_sugars;
  char size;
};

int main(void) {
  // Initalise a variable for the struct
  struct coffee order;
  //^^^^^^^^^^^ ^^^^^
  // var type   var name

  printf("Enter coffee type (0: LATTE, 1: CAPPUCCINO, 2: ESPRESSO, 3: "
         "AMERICANO, 4: MATCHA): ");
  int coffee_type = -1;
  scanf("%d", &coffee_type);
  if (coffee_type == 0) {
    order.type = LATTE;
  } else if (coffee_type == 1) {
    order.type = CAPPUCCINO;
  } else if (coffee_type == 2) {
    order.type = ESPRESSO;
  } else if (coffee_type == 3) {
    order.type = AMERICANO;
  } else {
    // note that here we don't bother handling the case where none
    // of the correct values were passed in, instead assuming MATCHA
    // as the base case
    order.type = MATCHA;
  }

  printf("Enter number of sugars: ");
  // note here that we can scan straight into struct fields like so
  scanf("%d", &order.num_sugars);

  printf("Enter size (L for Large, R for Regular): ");
  scanf(" %c", &order.size);
  // Calculate cost of order
  // Initialize the price with the value of the base price
  double price = BASE_COST;

  // using an enum to make a decision in out program's logic
  if (order.size == LARGE) {
    price += ADDED_COST;
  }

  // note that since we can have both a size markup and a type markup
  // we don't have them in an else-if block, they can both be true
  if (order.type == LATTE || order.type == CAPPUCCINO || order.type == MATCHA) {
    // ^ Note that this is just the way i like to wrap my long lines,
    // the style guide is not opinionated about what you choose, just
    // that you are consistent with that method
    price += ADDED_COST;
  }

  // add the surcharge for any sugars added
  price += ADDED_COST * order.num_sugars;

  printf("Total cost: %.2lf\n", price);

  return 0;
}
