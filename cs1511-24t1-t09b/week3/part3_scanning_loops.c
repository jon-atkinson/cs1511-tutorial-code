// part3_scanning_loops.c
//
// Written by COMP1511 T09B, 
// on 27/02/2024
//
// This program a simple deonstration of how to scan in while loops

#include <stdio.h>

#define TRUE 1
#define FALSE 0

int main(void) {
    // // A soln.
    // int sum = 0;
    // int next = 0;
    // scanf("%d", &next);
    // while(next >= 0) {
    //     scanf("%d", &next);
    //     sum += next;
    // }
    // printf("Sum is %d\n", sum);

    // // B soln.
    // int count = 0;
    // int input = 0;
    // while(scanf("%d", &input) == 1) {
    //     count++;
    // }
    // printf("Count is %d\n", count);

    // // C soln.
    // int cur = 0;
    // int stop = 0;
    // printf("Range start: ");
    // scanf("%d", &cur);
    // printf("Range end: ");
    // scanf("%d", &stop);
    // // loop through the range
    // while(cur <= stop) {
    //     // check whether the number is a prime
    //     int i = 2;
    //     int is_prime = TRUE;
    //     // only need to check [cur,sqrt(cur)]
    //     while (i * i <= cur) {
    //         if (cur % i == 0) {
    //             is_prime = FALSE;
    //         }
    //         i++;
    //     }
    //     if (is_prime == TRUE) {
    //         printf("%d\n", cur);
    //     }
    //     cur++;
    // }

    // // D soln.
    // int target_sum = -1;
    // int cum_sum = -1;
    // int next = 0;
    // printf("Please enter a target sum: ");
    // scanf("%d", &target_sum);
    // printf("Scan away! ");
    // scanf("%d", &cum_sum);
    // while (cum_sum < target_sum) {
    //     scanf("%d", &next);
    //     cum_sum += next;
    // }

    return 0;
}