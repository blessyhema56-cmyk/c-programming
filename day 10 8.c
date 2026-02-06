#include <stdio.h>

int main() {
    int price[] = {100, 250, 400, 150};
    int search = 400;
    int found = 0;

    for(int i = 0; i < 4; i++) {
        if(price[i] == search) {
            found = 1;
            break;
        }
    }

    if(found)
        printf("Price found");
    else
        printf("Price not found");

    return 0;
}
OUTPUT
Price found
