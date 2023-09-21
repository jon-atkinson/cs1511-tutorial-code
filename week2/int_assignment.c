// auth: Smayan G
// date: 21/09/2023

#include <stdio.h> 

int main(void) {

    int a;
    int b;
    printf ("Enter the first integer: ");
    scanf("%d", &a);
    printf("Enter the second integer: ");
    scanf("%d", &b);

    if (a<b) {
        printf("error, please try again\n");
    }
    else if (b==0) {
        printf("error, invalid input\n");
    }
    else { 
        printf ("The output is %d, %lf\n", a/b, (a*0.1)/(b*0.1));
    }
    return 0;

}
