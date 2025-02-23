// Jon Atkinson && COMP1511 M18A 23T3
// creation of a simple linked list by creating two nodes and linking them
// for more complex linked lists check out list_iter.c where I've used some
// boilerplate code for list creation, printing, iteration functions, etc.

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
}

int main(void) {
    struct node *my_node = malloc(sizeof(struct node));
    my_node->data = 8;
    my_node->next = NULL;

    struct node *second_node = malloc(sizeof(struct node));
    second_node->data = 36;
    second_node->next = NULL;

    // linking the nodes
    my_node->next = second_node;

    // what would happen if we switched these two lines? Try it and find out
    free(my_node->next);
    free(my_node);
    return 0;
}