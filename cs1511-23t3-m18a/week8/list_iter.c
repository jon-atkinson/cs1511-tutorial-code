// Jon Atkinson & COMP1511 M18A 23T3
// Program demonstrating list iteration

#include <stdio.h>
#include <stdlib.h>

#define INIT_NUM_NODES 10

struct node {
    int data;
    struct node *next;
};

struct node *new_node(int data);
void free_list(struct node *head);
void print_list(struct node *curr);
struct node *setup_list(struct node *head);

int main(void) {
    struct node *head = NULL;

    head = setup_list(head);
    if (head == NULL) {
        printf("error setting up the list\n");
        return 1;
    }

    // before iterating
    print_list(head);
    
    // Looping over the list and doubling the value in each node
    struct node *curr = head;
    while (curr != NULL) {
        curr->data *= 2;
        // this line is the most important in list iteration and is usually the
        // last line in the loop
        curr = curr->next;
    }

    // after iterating
    print_list(head);

    free_list(head);
    return 0;
}

// creates a new node and returns a pointer to it
// initialises .next to NULL and .data to data
struct node *new_node(int data) {
    struct node *new_node= malloc(sizeof(struct node));
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}

void free_list(struct node *head) {
    while (head != NULL) {
        struct node *delete_me = head;
        head = head->next;
        free(delete_me);
    }
}

struct node *setup_list(struct node *head) {
    struct node *curr = NULL;
    for (int i = 0; i < INIT_NUM_NODES; i++) {
        // creating each node and checking malloc didn't fail
        struct node *next_node = new_node(i + 1);
        if (next_node == NULL) {
            return NULL;
        }

        // adding node to list
        if (head == NULL) {
            head = next_node;
            curr = head;
        } else {
            curr->next = next_node;
            curr = curr->next;
        }
    }

    return head;
}

void print_list(struct node *curr) {
    while (curr != NULL) {
        printf("%2d -> ", curr->data);
        curr = curr->next;
    }
    printf("NULL\n");
}