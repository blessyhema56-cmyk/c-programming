#include <stdio.h>

int n = 4;
int graph[4][4] = {
    {0, 1, 1, 0},
    {1, 0, 0, 1},
    {1, 0, 0, 1},
    {0, 1, 1, 0}
};
int visited[4];

void bfs(int start) {
    int queue[10], front = 0, rear = 0;
    for(int i = 0; i < n; i++)
        visited[i] = 0;

    queue[rear++] = start;
    visited[start] = 1;

    while(front < rear) {
        int v = queue[front++];
        printf("%d ", v);

        for(int i = 0; i < n; i++) {
            if(graph[v][i] == 1 && visited[i] == 0) {
                queue[rear++] = i;
                visited[i] = 1;
            }
        }
    }
}

void dfs(int v) {
    visited[v] = 1;
    printf("%d ", v);

    for(int i = 0; i < n; i++) {
        if(graph[v][i] == 1 && visited[i] == 0)
            dfs(i);
    }
}

int main() {
    int start = 0;

    printf("BFS Traversal: ");
    bfs(start);

    for(int i = 0; i < n; i++)
        visited[i] = 0;

    printf("\nDFS Traversal: ");
    dfs(start);

    return 0;
}
OUTPUT
BFS Traversal: 0 1 2 3
DFS Traversal: 0 1 3 2

