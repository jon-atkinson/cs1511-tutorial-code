// part4_command_line_args.c
// M15X 25T2
// a small program that prints all command line arguments passed to it,
// including the file name

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
  for (int i = 0; i < argc; i++) {
    printf("argument %d is %s\n", i, argv[i]);
  }

  if (strcmp(argv[1], "first") == 0) {
    printf("string was first\n");
  } else {
    printf("string was not first\n");
  }

  return 0;
}
