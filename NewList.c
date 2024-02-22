#include <stdio.h>
#include <stdlib.h>

// Define the Node struct
struct Node {
    int data;
    struct Node* next;
};

int main() {
    // Create the head node
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    head->data = 1;

    // Create the second node
    struct Node* second = (struct Node*)malloc(sizeof(struct Node));
    second->data = 2;

    // Link the head node to the second node
    head->next = second;

    // Create the third node
    struct Node* third = (struct Node*)malloc(sizeof(struct Node));
    third->data = 3;

    // Link the second node to the third node
    second->next = third;

    // Set the next pointer of the last node to NULL
    third->next = NULL;

    // Traverse the linked list and print the data of each node
    struct Node* current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }

    return 0;
}
