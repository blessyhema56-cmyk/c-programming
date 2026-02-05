#include <stdio.h>
#include <stdlib.h>

struct Node {
    char func;
    struct Node* next;
};

struct Node* top = NULL;

void push(char f) {
    struct Node* temp = malloc(sizeof(struct Node));
    temp->func = f;
    temp->next = top;
    top = temp;
    printf("Function %c called\n", f);
}

void pop() {
    printf("Function %c finished\n", top->func);
    top = top->next;
}

void peek() {
    printf("Current function %c\n", top->func);
}

int main() {
    push('M');  // main
    push('A');  // func1
    push('B');  // func2
    pop();
    peek();
    return 0;
}
OUTPUT
Function M called
Function A called
Function B called
Function B finished
Current function A
