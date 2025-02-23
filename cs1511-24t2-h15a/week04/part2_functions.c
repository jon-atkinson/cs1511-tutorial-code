// functions.c
//
// Written by H15A
// on 20/06/2024
//
// This program is a simple demonstration of functions

#include <stdio.h>

// TODO: Function protoype
int my_function(int num1, int num2);

int main() {
    int num1 = 5;
    int num2 = 3;

    // an alternative method of solving this problem
    // int result;
    // result = num1 + num2;
    // result = my_function(num1, num2);

    // Function call
    printf("Result: %d\n", my_function(num1, num2));
    return 0;
}

// Function definition
// note here that function argument names don't have to match what's in main
int my_function(int number1, int number2) {
    return number1 + number2;
}
