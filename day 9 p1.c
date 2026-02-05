#include <stdio.h>
#define SIZE 10

int stack[SIZE];
int top = -1;

void push(int pageID){
    if(top == SIZE - 1){
        printf("History is full\n");
    } else {
        top++;
        stack[top] = pageID;
        printf("Opened page %d\n", pageID);
    }
}

void pop(){
    if(top == -1){
        printf("No pages to go back\n");
    } else {
        printf("Back from page %d\n", stack[top]);
        top--;
    }
}


void peek(){
    if(top == -1){
        printf("No current page\n");
    } else {
        printf("Current page is %d\n", stack[top]);
    }
}

void isEmpty(){
    if(top == -1)
        printf("No pages in history\n");
    else
        printf("History is not empty\n");
}

void size(){
    printf("Total pages in history: %d\n", top + 1);
}

int main(){
    push(101);
    push(102);
    push(103);
    pop();
    peek();
    size();
    return 0;
}
OUTPUT
Opened page 101
Opened page 102
Opened page 103
Back from page 103
Current page is 102
Total pages in history: 2

