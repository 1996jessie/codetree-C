#include <stdio.h>

#define MAX 100

int grid[MAX][MAX];
int dx[4] = {0, 1, 0, -1};  
int dy[4] = {1, 0, -1, 0};  

void fill_snail(int n, int m) {
    int x = 0, y = 0, dir = 0, num = 1; 

    while (num <= n * m) {
        grid[x][y] = num++; 

        int nx = x + dx[dir];
        int ny = y + dy[dir];

        if (nx < 0 || nx >= n || ny < 0 || ny >= m || grid[nx][ny] != 0) {
            dir = (dir + 1) % 4;  
            nx = x + dx[dir];
            ny = y + dy[dir];
        }

        x = nx;
        y = ny;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", grid[i][j]);
        }
        printf("\n");
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    scanf("%d %d", &n, &m);

    fill_snail(n, m);

    return 0;
}