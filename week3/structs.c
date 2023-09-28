// COMP1511 H09C 23T3 week 3 tut problem
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
    enum opal_card_type card;
};

struct shoe {
    int shoe_size;
    char letter;
};

int main(void) {
    struct person jon;
    jon.shoe_size = 11;
    jon.height = 183.0;
    jon.first_name_initial = 'j';
    jon.card = STUDENT;

    // this is the same as the above code:
    jon = setup_person(11, 183.0, 'j', STUDENT);
    // so it's shorter in the call, and the beauty of this method is that we can reuse it!!!
    tim = setup_person(12, 180.5, 't', ADULT);
    tammy = setup_person(8, 160.4, 't', CONCESSION);
    jake = setup_person(10, 184.2, 'j', ADULT);

    // if you're not sure why functionising the setup of a struct is a good idea,
    // try initialising the above 4 people by hand, it takes a while
    
    return 0;
}

struct person setup_person(int shoe_size, double height, char initial, enum opal_card_type card) {
    struct person person;
    person.shoe_size = shoe_size;
    person.height = height;
    person.first_name_initial = initial;
    person.card = card;
    return person;
}