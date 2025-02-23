// part3_linked_lists.c
// This program was written by H15A on 18/07/2024
// Program tests linked lists functions

#include <stdio.h>
#include <stdlib.h>


struct node {
    // The data stored in the node
    int data;
    // Pointer to the next node in the linked list
    struct node *next;
};

struct node *create_node(int data);

struct node *insert_head(struct node *head, int data);

struct node *insert_tail(struct node *head, int data);

void print_list(struct node *head);

int list_length(struct node *head);

int main(void) {

    // Create a pointer to the head of the linked list
    struct node *head = NULL;

    // Insert a node at the beginning of the linked list
    head = insert_head(head, 10);

    // Insert a node at the beginning of the linked list
    head = insert_head(head, 5);

    // Insert a node at the end of the linked list
    head = insert_tail(head, 15);

    // Insert a node at the end of the linked list
    head = insert_tail(head, 20);

    // Print the linked list
    print_list(head);

    // Calculate and print the length of the linked list
    int length = list_length(head);
    printf("There are %d nodes in the list\n", length);

    return 0;
}

// Creates a new node
//
// Parameters:
//      data: The data to be stored in the new node
//
// Returns: 
//      A pointer to the new node
struct node *create_node(int data) {
    struct node *new_node = malloc(sizeof(struct node));
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}

// Inserts a new node at the head of a linked list
//
// Parameters:
//      head: A pointer to the head of the linked list
//      data: The data to be stored in the new node
//
// Returns:
//      A pointer to the new head of the linked list
struct node *insert_head(struct node *head, int data) {
    struct node *new_node = create_node(data);

    new_node->next = head;
    
    // since the new node is the new head of the list, we set head to the next node
    // and return it
    // head = new_node
    // return head;

    // or we can just return the new node and it will be set as the head wherever
    // the function was called from
    return new_node;
}

// Inserts a new node at the tail of a linked list
//
// Parameters:
//      head: A pointer to the head of the linked list
//      data: The data to be stored in the new node
//
// Returns:
//      A pointer to the head of the linked list
struct node *insert_tail(struct node *head, int data) {
    // edge case: empty list
    if (head == NULL) {
        // in this case, we can just return a new node with the correct data value
        return create_node(data);
    }

    // general case:
    // the equivalent of int i = 0;
    struct node *current = head;

    // the equivalent of while (i < SIZE) {
    while (current->next != NULL) {
        // move to the next node in the list
        // the equivalent of i++;
        current = current->next;
    }

    // at this point we have current->next == NULL
    // this works even in the case where the list is a single node, a common edge case
    current->next = create_node(data);
    return head;
}

// Traverses a linked list and prints the data in each node
//
// Parameters:
//      head: A pointer to the head of the linked list
//
// Returns:
//      None
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


// Finds the number of nodes in a linked list
//
// Parameters:
//      head: A pointer to the head of the linked list
//
// Returns:
//      The number of nodes in the linked list
int list_length(struct node *head) {
    // since we're returning the length we probably need some count to keep track
    // of the number of nodes we've seen
    int count = 0;

    // it would probably be best practice to create a current pointer here but
    // we'll do it minimally here and just use head
    while (head != NULL) {
        count++;
        head = head->next;
    }

    // if the head is null, we iterate 0 times and return 0
    // else we return the number of times we moved up one node in the list
    return count;
}
