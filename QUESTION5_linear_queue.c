#include <stdio.h>
#define MAX 5

int queue[MAX];
int front = -1, rear = -1;

int isFull()  { return rear == MAX - 1; }
int isEmpty() { return front == -1; }

void enqueue(int item) {
    if (isFull()) {
        printf("Queue Overflow! Cannot enqueue %d\n", item);
        return;
    }
    if (isEmpty()) front = 0;
    queue[++rear] = item;
    printf("Enqueued: %d\n", item);
}

void dequeue() {
    if (isEmpty()) {
        printf("Queue Underflow! Queue is empty.\n");
        return;
    }
    printf("Dequeued: %d\n", queue[front]);
    if (front == rear) {
        front = rear = -1;
    } else {
        front++;
    }
}

void display() {
    if (isEmpty()) {
        printf("Queue is empty.\n");
        return;
    }
    printf("Queue elements: ");
    for (int i = front; i <= rear; i++) printf("%d ", queue[i]);
    printf("\n");
}

int main() {
    enqueue(100);
    enqueue(200);
    enqueue(300);
    display();
    dequeue();
    dequeue();
    display();
    dequeue();
    dequeue();

    for (int i = 1; i <= 6; i++) enqueue(i * 10);
    display();
    return 0;
}
