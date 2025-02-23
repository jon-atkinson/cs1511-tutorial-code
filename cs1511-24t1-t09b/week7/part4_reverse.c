// Reverse Command Line Arguments
// This program prints all the command-line arguments passed to it in reverse order.
// Written by COMP1511 T09B, on March 2024
#include <stdio.h>

int main(int argc, char *argv[]) {
    for (int i = argc - 1; i > 0; i--) {
        printf("%s\n", argv[i]);
    }

    return 0;
}
