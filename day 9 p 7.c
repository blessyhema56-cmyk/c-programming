#include <stdio.h>
#include <stdlib.h>

struct Node {
    int id;
    struct Node* next;
};

struct Node* front = NULL;
struct Node* rear = NULL;

void enqueue(int id) {
    struct Node* temp = malloc(sizeof(struct Node));
    temp->id = id;
    temp->next = NULL;

    if (rear == NULL) {
        front = rear = temp;
    } else {
        rear->next = temp;
        rear = temp;
    }
    printf("Patient %d registered\n", id);
}

void dequeue() {
    struct Node* temp = front;
    printf("Patient %d attended\n", front->id);
    front = front->next;
    free(temp);
}

void showFront() {
    printf("Next patient %d\n", front->id);
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
Patient 1 registered
Patient 2 registered
Patient 3 registered
Patient 1 attended
Next patient 2
