#include <stdio.h>

int main() {
    int attendance[5] = {1, 1, 1, 1, 1};
    int count = 0;

    for(int i = 0; i < 5; i++) {
        count++;
    }

    printf("Students present = %d", count);
    return 0;
}
OUTPUT
Students present = 5
