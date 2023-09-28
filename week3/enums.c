// H09C COMP1511 23T3 tutorial week 3
#include <stdio.h>


// these 3 constant definitions could be used in place of the enum below but we'd
// lose the specificity of whether the assigned value is valid or not
// #define ADULT 3
// #define STUDENT 4
// #define CONCESSION 5

#define ADULT_PRICE 25
#define STUDENT_PRICE 15
#define CONCESSION_PRICE 10

#define TRUE 1
#define FALSE 0


enum opal_card_type {
    ADULT,
    STUDENT,
    CONCESSION
};

enum flavour {
    CHOCOLATE,
    VANILLA, 
    STRAWBERRY,
    MANGO
};

int main(void) {
    enum opal_card_type card = ADULT;

    // this is both a good use of an enum and a constant, and shows their strengths
    if (card == ADULT) {
        printf("adult price is %d\n", ADULT_PRICE);
    } else if (card == STUDENT) {
        printf("student price is %d\n", STUDENT_PRICE);
    } else if (card == CONCESSION) {
        printf("concession price is %d\n", CONCESSION_PRICE);
    }

    // example of limiting input options based on options in an enum
    printf("what flavour do you want? ");
    char flav = ' ';
    enum flavour icecream;
    int valid = FALSE;
    while (valid != TRUE) {
        printf("scanning\n");
        scanf(" %c", &flav);
        valid = TRUE;
        if (flav == 'c') {
            icecream = CHOCOLATE;
            printf("you selected choc\n");
        } else if (flav == 'v') {
            icecream = VANILLA;
            printf("you selected vanilla\n");
        } else if (flav == 's') {
            icecream = STRAWBERRY;
            printf("you selected strawberry\n");
        } else if (flav == 'm') {
            icecream = STRAWBERRY;
            printf("you selected mango\n");
        } else {
            printf("'%c' flavour is not allowed, please enter a new flavour: ", flav);
            valid = FALSE;
        }
    }
    printf("underlying value of icecream is %d\n", icecream);

    return 0;
}
