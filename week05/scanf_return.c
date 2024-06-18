// header comment, etc. etc.


#include <stdio.h>

int main(void) {
    int scanf_return = 0;
    char my_char;
    char my_char2;

    // scanf_return = scanf("%c %c", &my_char, &my_char2);
    // printf("scanf returned <%d>\n", scanf_return);


    while (scanf("%c", &my_char) == 1) {
        printf("My char is <%c>\n", my_char);
        // printf("scanf returned <%d>\n", scanf_return);
    }


    // while (scanf("%c", &my_char) != EOF) {
    //     printf("My char is <%c>\n", my_char);
    // }


    return 0;
}