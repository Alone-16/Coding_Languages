# include <stdio.h>

# define MAX 3

int queue[MAX];
int front = -1, rear = -1;


void enqueue(int value) {
    if (rear == MAX - 1) {
        printf("Queue overflow\n");
        return;
    } 

    if (front == -1) {
        front = 0;
    }

    rear++;
    queue[rear] = value;
}

void dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue underflow\n");
        return;
    }

    front++;

    if (front > rear) {
        front = rear = -1;
    }
}

void display() {
    if (front == -1 || front > rear) {
        printf("Queue is empty\n");
        return;
    }

    for(int i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}


int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);

    printf("Before: ");
    display();

    dequeue();

    printf("After: ");
    display();

    return 0;
}