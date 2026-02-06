#include <stdio.h>

int main() {
    int n = 3;
    int graph[3][3] = {
        {0, 1, 0},
        {1, 0, 1},
        {0, 1, 0}
    };
    int A = 0, B = 1;

    if(graph[A][B] == 1)
        printf("Connected");
    else
        printf("Not Connected");

    return 0;
}
OUTPUT
Connected
