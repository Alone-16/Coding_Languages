#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* insertAtBeginning(struct Node* head, int val) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

    newNode -> data = val;
    newNode -> next = head;

    head = newNode;

    return head;
}


struct Node* insertAtEnd(struct Node* head, int val) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode -> data = val;
    newNode -> next = NULL;

    if (head == NULL) 
        return newNode;

    struct Node* temp = head;
    while(temp -> next != NULL) {
        temp = temp -> next;
    }
    
    temp -> next = newNode;
    // free(temp);   // wrong because temp is a part of head;

    return head;
}


void display(struct Node* head) {
    struct Node* temp = head;
    while(temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}


int main() {
    struct Node* head = NULL;

    head = insertAtBeginning(head, 10);
    head = insertAtBeginning(head, 20);
    head = insertAtBeginning(head, 30);

    head = insertAtEnd(head, 5);

    display(head);

    return 0;
}