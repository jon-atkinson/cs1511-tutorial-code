struct node *list_copy(struct node *head) {
    if (head == NULL) {
        return head;
    }

    struct node *current = head; 
    struct node *new_head = NULL; 
    struct node *new_tail = NULL; 
    struct node *new_node;
    
    while (current != NULL) {
        new_node = malloc(sizeof(struct node));
        new_node->data = current->data;
        new_node->next = NULL;
        
        if (new_head == NULL) {
            new_head = new_node;
            new_tail = new_node;
        } else {
            new_tail->next = new_node;
            new_tail = new_node;
        }
        
        current = current->next;
    }
    
    struct node *delete_me;
    current = head;
    while (current != NULL) {
        delete_me = current;
        current = current->next;
        free(delete_me);
    }
    
    return new_head;
}
