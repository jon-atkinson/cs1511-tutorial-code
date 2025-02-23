#include <stdio.h>

#define MAX_STRUCTS 1000

struct rand {
    int data;
    struct rand *next;
};

int main(void) {
    int n = 45;
    struct rand *array_of_structs = malloc(n * sizeof(struct rand));
    for (int i = 0; i < n; i++) array_of_structs[i].data = n - i;

    struct rand alt_array_of_structs[MAX_STRUCTS];
    for (int i = 0; i < n; i++) alt_array_of_structs[i].data = n - i;

    struct rand **array_of_pointers_to_structs = malloc(n * sizeof(struct rand *));
    for (int i = 0; i < n; i++) {
        array_of_pointers_to_structs[i] = malloc(sizeof(struct rand));
        array_of_pointers_to_structs[i]->data = n - i;
    }

    struct rand ***array_of_pointers_to_arrays_of_pointers_to_structs = malloc(n * sizeof(struct rand **));

    return 0;
}