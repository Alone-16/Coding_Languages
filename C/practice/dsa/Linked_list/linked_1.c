# include <stdio.h>
# include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void insertNode(struct Node** head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    
    struct Node* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

void display(struct Node* head) {
    struct Node* temp = head;
    while(temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

void deleteFirstNode(struct Node** head) {
    if(*head == NULL) {
        printf("List is empty\n");
        return;
    }

    struct Node* temp = *head;
    *head = (*head)->next;
    free(temp);
}

void deletionAtEnd(struct Node** head) {
    if(*head == NULL) {return;}
    if((*head) -> next == NULL) {
        free(*head);
        return;
    }

    struct Node* temp = *head;
    while(temp -> next -> next != NULL) {
        temp = temp -> next;
    }
    free(temp -> next);
    temp -> next = NULL;
}

int main() {
    struct Node* head = NULL;

    insertNode(&head, 10);
    insertNode(&head, 20);
    insertNode(&head, 30);

    printf("After insertion: ");
    display(head);

    deleteFirstNode(&head);

    printf("After deletion of first Node: ");
    display(head);

    deletionAtEnd(&head);

    printf("After deletion of last Node: ");
    display(head);

    return 0;
}