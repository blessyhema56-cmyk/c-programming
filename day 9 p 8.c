#include <stdio.h>
#include <stdlib.h>

struct Node {
    int orderID;
    struct Node* next;
};

struct Node* front = NULL;
struct Node* rear = NULL;

void enqueue(int id) {
    struct Node* temp = malloc(sizeof(struct Node));
    temp->orderID = id;
    temp->next = NULL;

    if (rear == NULL) {
        front = rear = temp;
    } else {
        rear->next = temp;
        rear = temp;
    }
    printf("Order %d placed\n", id);
}

void dequeue() {
    struct Node* temp = front;
    printf("Order %d processed\n", front->orderID);
    front = front->next;
    free(temp);
}

void showFront() {
    printf("Next order %d\n", front->orderID);
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
Order 101 placed
Order 102 placed
Order 103 placed
Order 101 processed
Next order 102
