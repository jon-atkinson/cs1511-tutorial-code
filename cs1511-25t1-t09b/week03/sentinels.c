#include <stdio.h>

int main(void) {

  int flag = 0;

  int num = 0;

  while (flag == 0) {
    scanf("%d", &num);

    if (num == 4) {
      flag = 1;
    }
  }
  return 0;
}
