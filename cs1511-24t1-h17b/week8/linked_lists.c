// linked_lists.c
// Written by COMP1511 H13C on March 2024
// Implementation file for simple linked lists functions

#include <stdio.h>
#include <stdlib.h>

#include "linked_lists.h"

struct node *create_node(int data) {
    struct node *new_node = malloc(sizeof(struct node));
    new_node->data = data;
    new_node->next = NULL;

    return new_node;
}

struct node *insert_head(struct node *head, int data) {
    // Create a new node
    struct node *new_node = create_node(data);
    new_node->next = head;

    return new_node;
}

struct node *insert_tail(struct node *head, int data) {
    // Create a new node
    struct node *new_node = create_node(data);

    // If the linked list is empty, return the new node
    if (head == NULL) {
        return new_node;
    }

    // Traverse the linked list to find the last node
    struct node *current = head;
    while (current->next != NULL) {
        current = current->next;
    }

    // Insert the new node at the end of the linked list
    current->next = new_node;

    return head;
}

void print_list(struct node *head) {
    // Set current to be the first node in the list
    struct node *current = head;
    
    // Traverse the linked list and print each node 
    // until we reach the end of the list
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("X\n");
}

int list_length(struct node *head) {
    // Initialize the length of the list to 0
    int length = 0;

    // Set current to be the first node in the list
    struct node *current = head;

    // Traverse the linked list and increment the length
    // until we reach the end of the list
    while (current != NULL) {
        length++;
        current = current->next;
    }

    return length;
}

struct node *insert_middle(struct node *head, int data) {
    struct node *new_node = create_node(data);
    struct node *curr = head;
    // round down to find the insertion point for uneven lists
    int insert_at = list_length(head) / 2;
    
    if (head == NULL) {
        return new_node;
    }

    // move curr to the insertion point
    while (insert_at > 0) {
        curr = curr->next;
        insert_at--;
    }

    // insert new_node at correct point
    new_node->next = curr->next;
    curr->next = new_node;

    return head;
}

// TODO: this comes up in the assignment so I won't give the answers away just yet
// after everyone's submitted I'll add it if someone asks
struct node *reverse_linked_list(struct node *head) {
    exit(1);
}

// bonus bonus for those wanting a challenge, interleave_lists
// arguments: 2 linked lists list_one, list_two
// returns: a pointer to a list composed of the original nodes interleaved
// e.g. 1 -> 2 -> 3 -> 4 and 5 -> 6 -> 7 -> 8 returns 1 -> 5 -> 2 -> 6 -> 3 -> 7 -> 4 -> 8 -> X
struct node *interleave_lists(struct node *list_one, struct node *list_two) {
    exit(1);
}
