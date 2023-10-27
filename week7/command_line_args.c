// Jon Atkinson
// Small program to demonstrate the use of command line arguments (CLA)
// To use compile (dcc command_line_args.c -o command_line_args) and run, making
// sure to add 
#include <stdio.h>
#include <stdlib.h>

// remember, we can rename argc and argv but always choose not to for readability
// argc == argument count
// argv == argument vector (contains the command line arguments, including program name)
// IMPORTANT NOTE: All CLA are strings, we need to use functions like atoi() to convert
// to other basic data types
int main(int argc, char *argv[]) {
    for (int i = 0; i < argc; i++) {
        printf("%s\n", argv[i]);
    }

    // use of atoi() to convert char[] (same as char *) to int (part of stdlib.h)
    // (I've included atof() incase anyone's interested, you'll probably just have
    // to use atoi so I'd recommend ignoring atof for now)
    printf("num: %d\n", atoi("567"));
    printf("num: %.2f\n", atof("567.7"));
    return 0;
}