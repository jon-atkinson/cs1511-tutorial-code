#include <stdio.h>

enum opal_card_type {
    ADULT,
    STUDENT,
    CONCESSION
};

struct person {
    int shoe_size;
    double height;
    char first_name_initial;
    // note here that the enum opal_card_type is a variable type and so can be
    // added as a field of a struct definition
    enum opal_card_type card;
};

int main(void) {
    // creating an instance of a struct person
    // remember that the variable type is "struct person" and the variable name
    // is "jessica"
    struct person jessica;

    // initialising jessica with some values
    jessica.shoe_size = 9;
    jessica.height = 174.7;
    jessica.first_name_initial = 'J';
    jessica.card = STUDENT;

    // creating and initialising a second instance of a struct person
    struct person tom;
    tom.shoe_size = 12;
    tom.height = 182.3;
    tom.first_name_initial = 'T';
    tom.card = ADULT;
    
    // printing the shoe size of tom
    printf("Tom has a shoe size of %d\n", tom.shoe_size);

    // printing the first_name_initial and height of both "struct person"s
    printf("Tom: initial=%c, height=%.1f\n", tom.first_name_initial, tom.height);
    printf("Jessica: initial=%c, height=%.1f\n",
            jessica.first_name_initial, jessica.height);

    // changing jessica's values
    jessica.height = 180.0;
    printf("Jessica: initial=%c, height=%.1f\n",
            jessica.first_name_initial, jessica.height);

    // enums won't print the all caps value that we assign them, we need to do
    // some extra logic to get that to print
    printf("internal representation of jessica's opal_card_type: %d\n",
            jessica.card);
    printf("Better way, Jessica's card type is: ");
    if (jessica.card == ADULT) {
        printf("adult\n");
    } else if (jessica.card == STUDENT) {
        printf("student\n");
    } else {
        printf("concession\n");
    }

    return 0;
}