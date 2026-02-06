#include <stdio.h>

int main() {
    int contact[] = {98765, 91234, 99887};
    int search = 11111;
    int found = 0;

    for(int i = 0; i < 3; i++) {
        if(contact[i] == search) {
            found = 1;
            break;
        }
    }

    if(found)
        printf("Contact found");
    else
        printf("Contact not found");

    return 0;
}
OUTPUT
Contact not found
