// COMP1511 M18A 23T3 week 3 tut problem
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
    // this enum is a component of a struct, it still needs a name
    // the name can be any valid, allowed variable name and is how we access this field
    enum opal_card_type card;
};

// sorry about the spelling, 'cause the americans do it you'll probably have to 
// get used to it eventually (it's everywhere in packages)
enum color {
    RED,
    BLUE,
    GREEN
}

int main(void) {
    // note: type = "struct person", name = "jack"
    // jack is an instance of type struct person
    struct person jack;
    jack.shoe_size = 46;
    jack.height = 183.2;
    jack.card = ADULT;

    // tammy is a different instance to jack, and we can store different values here
    // this is the usual way of declaring and initialising a struct
    struct person tammy;
    tammy.shoe_size = 34;
    tammy.height = 154.8;
    // note, card is the name of the enum opal_card_type we added to the struct
    tammy.card = STUDENT;

    struct person henrico;
    henrico.height = 201;

    printf("%d\n", jack.card);

    printf("%d\n", jack.shoe_size);
    printf("%lf\n", jack.height);

    // this is one use case of an enum, we can put useful logic in the if/else too
    if (jack.card == STUDENT) {
        printf("jack is a student\n");
    } else {
        printf("jack is not a student\n");
    }

    return 0;
}
