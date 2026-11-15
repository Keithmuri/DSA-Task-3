#include <stdio.h>
#define MAX 5

int deque[MAX];
int front = -1, rear = -1;

int isFull() {
    return (front == 0 && rear == MAX - 1) || (front == rear + 1);
}

int isEmpty() { return front == -1; }

void insertFront(int item) {
    if (isFull()) {
        printf("Deque Overflow! Cannot insert %d at front\n", item);
        return;
    }
    if (isEmpty()) front = rear = 0;
    else if (front == 0) front = MAX - 1;
    else front--;
    deque[front] = item;
    printf("Inserted %d at front\n", item);
}

void insertRear(int item) {
    if (isFull()) {
        printf("Deque Overflow! Cannot insert %d at rear\n", item);
        return;
    }
    if (isEmpty()) front = rear = 0;
    else if (rear == MAX - 1) rear = 0;
    else rear++;
    deque[rear] = item;
    printf("Inserted %d at rear\n", item);
}

void deleteFront() {
    if (isEmpty()) {
        printf("Deque Underflow! Deque is empty.\n");
        return;
    }
    printf("Deleted %d from front\n", deque[front]);
    if (front == rear) front = rear = -1;
    else if (front == MAX - 1) front = 0;
    else front++;
}

void deleteRear() {
    if (isEmpty()) {
        printf("Deque Underflow! Deque is empty.\n");
        return;
    }
    printf("Deleted %d from rear\n", deque[rear]);
    if (front == rear) front = rear = -1;
    else if (rear == 0) rear = MAX - 1;
    else rear--;
}

void display() {
    if (isEmpty()) {
        printf("Deque is empty.\n");
        return;
    }
    printf("Deque elements (front to rear): ");
    int i = front;
    while (1) {
        printf("%d ", deque[i]);
        if (i == rear) break;
        i = (i + 1) % MAX;
    }
    printf("\n");
}

int main() {
    insertRear(10);
    insertRear(20);
    insertFront(5);
    display();

    insertRear(30);
    insertRear(40);
    insertFront(1);
    display();

    deleteFront();
    deleteRear();
    display();

    deleteFront();
    deleteFront();
    deleteFront();
    deleteRear();
    display();
    return 0;
}
