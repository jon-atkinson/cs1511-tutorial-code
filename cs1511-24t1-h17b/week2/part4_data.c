// Author: COMP1511 H17B 24T1
// Date: 22/02/2024
// 
// A small program that demonstrates some unintuitive behaviours in the C
// programming language when evaluating expressions

#include <stdio.h>

int main(void) {
    // note: int / int == int
    printf("7/2 is %d\n", 7/2);

    // note: this is as expected, double / int == double
    printf("(3.0/2)+1 is %lf\n", (3.0/2)+1);

    // note: char + int == char
    printf("'a'+5 is %c\n", 'a'+5);
    
    // note: chars are treated by as ints for mathematical operations
    // here we see how tricks can be used to shift the case of an number
    printf("'F'-'A'+'a' is %c\n", 'F'-'A'+'a');

    // be careful when using big additions, as some of you learned in the lab this
    // week chars have quite a low ceiling in terms of possible values, leading to
    // some very unusual results (big number + big number == big negative number)
}