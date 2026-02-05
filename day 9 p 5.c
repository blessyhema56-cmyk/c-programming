#include <stdio.h>
#define SIZE 5

int queue[SIZE];
int front = -1, rear = -1;

void enqueue(int id) {
    if (rear == SIZE - 1) {
        printf("Queue is full\n");
    } else {
        if (front == -1)
            front = 0;
        rear++;
        queue[rear] = id;
        printf("Customer %d added\n", id);
    }
}

void dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue is empty\n");
    } else {
        printf("Customer %d served\n", queue[front]);
        front++;
    }
}

void showFront() {
    printf("Next customer %d\n", queue[front]);
}

int main() {
    enqueue(101);
    enqueue(102);
    enqueue(103);
    dequeue();
    showFront();
    return 0;
}
OUTPUT
Customer 101 added
Customer 102 added
Customer 103 added
Customer 101 served
Next customer 102
