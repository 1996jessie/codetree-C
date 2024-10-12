#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);

    int grid[100][100] = {0}; 
    int r = n / 2, c = n / 2; 
    int num = 1;    
    int dir = 0;  

    int dr[4] = {0, -1, 0, 1}; 
    int dc[4] = {1, 0, -1, 0}; 

    for (int i = 0; i < n * n; i++) {
        grid[r][c] = num++; 

        int nr = r + dr[dir];
        int nc = c + dc[dir];

        if (nr < 0 || nr >= n || nc < 0 || nc >= n || grid[nr][nc] != 0) {
            dir = (dir + 1) % 4;
            nr = r + dr[dir];
            nc = c + dc[dir];
        }

        r = nr;
        c = nc;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", grid[i][j]);
        }
        printf("\n");
    }

    return 0;
}