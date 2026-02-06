#include <stdio.h>

int main() {
    int roll[] = {10, 20, 30, 40, 50};
    int search = 30;
    int pos = -1;

    for(int i = 0; i < 5; i++) {
        if(roll[i] == search) {
            pos = i + 1;
            break;
        }
    }

    if(pos != -1)
        printf("Element found at position %d", pos);
    else
        printf("Element not found");

    return 0;
}
OUTPUT
Element found at position 3
