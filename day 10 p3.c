#include <stdio.h>

int main() {
    int speeds[] = {40, 55, 60, 45};
    int max = speeds[0];

    for(int i = 1; i < 4; i++) {
        if(speeds[i] > max)
            max = speeds[i];
    }

    printf("Maximum speed = %d", max);
    return 0;
}
OUTPUT
Maximum speed = 60
