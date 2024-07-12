// part4_command_line_args.c
// This program prints all command line arguments passed to it
// Written by H15A
// On 11/07/2024

#include <stdio.h>

int main(int argc, char *argv[]) {

    for(int i = 0; i < argc; i++) {
        printf("String at %d is %s\n", i, argv[i]);
    }

    return 0;
}
