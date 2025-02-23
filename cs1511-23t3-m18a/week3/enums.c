// M18A COMP1511 23T3 tutorial week 3
#include <stdio.h>

// this might be a functional alternative to using en enum but we do lose some
// information, have a think about what we lose
// #define ADULT 0
// #define STUDENT 1
// #define CONCESSION 2

// definition of the "enum opal_card_type" type, remember, 
// the type includes both words
enum opal_card_type {
    ADULT,
    STUDENT,
    CONCESSION
};

int main(void) {

    // note here both words used for the type, also present is the name of the 
    // instance ("card" in this case)
    enum opal_card_type card = CONCESSION;
    // we can't just print the shouting snake case names like this, it'll print
    // out an integer instead, hence enums are better for checking values, etc.
    printf("(1) card value is %d\n", card);

    card = STUDENT;
    printf("(2) card value is %d\n", card);

    card = PENSIONER;
    printf("(3) card value is %d\n", card);
    
    return 0;
}