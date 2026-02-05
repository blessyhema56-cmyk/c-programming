#include <stdio.h>
#define SIZE 5

int queue[SIZE];
int front = -1, rear = -1;

void enqueue(int job) {
    if (rear == SIZE - 1) {
        printf("Printer queue full\n");
    } else {
        if (front == -1)
            front = 0;
        rear++;
        queue[rear] = job;
        printf("Job %d added\n", job);
    }
}

void dequeue() {
    printf("Job %d printed\n", queue[front]);
    front++;
}

void showFront() {
    printf("Next job %d\n", queue[front]);
}

int main() {
    enqueue(1);
    enqueue(2);
    enqueue(3);
    dequeue();
    showFront();
    return 0;
}
OUTPUT
Job 1 added
Job 2 added
Job 3 added
Job 1 printed
Next job 2
