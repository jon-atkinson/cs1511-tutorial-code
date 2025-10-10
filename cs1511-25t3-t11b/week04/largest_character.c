#include <stdio.h>

int main(void) {
  char letters[8] = {'q', 'w', 'e', 'r', 't', 'y', 'u', 'i'};

  char largest = letters[0];
  int i = 0;
  while (i < 8) {
    if (letters[i] > largest) {
      largest = letters[i];
    }
    i++;
  }

  printf("The largest character is: %c\n", largest);

  return 0;
}
