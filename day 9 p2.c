#include <stdio.h>
#define SIZE 5

char actions[SIZE];
int top = -1;

void push(char action) {
    top++;
    actions[top] = action;
    printf("Typed %c\n", action);
}

void pop() {
    printf("Undo %c\n", actions[top]);
    top--;
}

void peek() {
    printf("Last action %c\n", actions[top]);
}

int main() {
    push('A');
    push('B');
    push('C');
    pop();
    peek();
    return 0;
}
OUTPUT
Typed A
Typed B
Typed C
Undo C
Last action B
