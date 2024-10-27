#include <stdio.h>
#include <stdlib.h>

#define SIZE 10
#define INF 100

typedef struct {
    int x, y, dist;
} Node;

char grid[SIZE][SIZE];
int visited[SIZE][SIZE] = {0};
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

Node queue[SIZE * SIZE];
int front = 0, rear = 0;

void enqueue(int x, int y, int dist) {
    queue[rear++] = (Node){x, y, dist};
}

Node dequeue() {
    return queue[front++];
}

int bfs(int startX, int startY, int bx, int by, int rx, int ry) {
    enqueue(startX, startY, 0);
    visited[startX][startY] = 1;

    while (front < rear) {
        Node current = dequeue();

        if (current.x == bx && current.y == by) {
            return current.dist - 1;
        }

        for (int i = 0; i < 4; i++) {
            int nx = current.x + dx[i];
            int ny = current.y + dy[i];

            if (nx >= 0 && nx < SIZE && ny >= 0 && ny < SIZE && !visited[nx][ny] && grid[nx][ny] != 'R') {
                visited[nx][ny] = 1;
                enqueue(nx, ny, current.dist + 1);
            }
        }
    }
    return -1;
}


int main() {
    // 여기에 코드를 작성해주세요.
    int lx, ly, bx, by, rx, ry;

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            scanf(" %c", &grid[i][j]);
            if (grid[i][j] == 'L') { lx = i; ly = j; }
            if (grid[i][j] == 'B') { bx = i; by = j; }
            if (grid[i][j] == 'R') { rx = i; ry = j; }
        }
    }

    int result = bfs(lx, ly, bx, by, rx, ry);
    printf("%d\n", result);

    return 0;
}