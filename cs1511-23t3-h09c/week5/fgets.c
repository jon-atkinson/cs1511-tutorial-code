
#include <stdio.h>

int main(void) {
    char word[100];

    printf("enter word: ");
    fgets(word, 100, stdin);


    printf("\n%s", word);
    return 0;
}