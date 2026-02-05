#include <stdio.h>
#include <stdlib.h>

struct Node {
    int plateID;
    struct Node* next;
};

struct Node* top = NULL;

void push(int id) {
    struct Node* temp = malloc(sizeof(struct Node));
    temp->plateID = id;
    temp->next = top;
    top = temp;
    printf("Plate %d added\n", id);
}

void pop() {
    struct Node* temp = top;
    printf("Plate %d removed\n", temp->plateID);
    top = top->next;
    free(temp);
}

void peek() {
    printf("Top plate %d\n", top->plateID);
}

int main() {
    push(1);
    push(2);
    push(3);
    pop();
    peek();
    return 0;
}
0UTPUT
Plate 1 added
Plate 2 added
Plate 3 added
Plate 3 removed
Top plate 2
