// face.c
//
// Written by COMP1511 H17B,
// on January 2024
//
// The program prints two simple faces
//
// Face 1:
//   ~ ~
//  0 0
//   o
//   -
//
// Face 2:
//  ~ ~
//  0 0
//   o
//  \_/

#include <stdio.h>

int main(void) {
    
    // Face 1
    printf("~ ~\n");
    printf("0 0\n");
    printf(" o\n");
    printf(" -\n\n");
    
    // Face 2 - note the \\ and \n characters in different colour, that's because
    // they're using the special "\" escape character 
    printf("~ ~\n");
    printf("0 0\n");
    printf(" o\n");
    printf("\\_/\n");

    return 0;
}
