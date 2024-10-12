#include <stdio.h>

char grid[100][100];  

int dr[4] = {0, 1, 0, -1}; 
int dc[4] = {1, 0, -1, 0}; 

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;

    scanf("%d %d", &n, &m);
    
    int r = 0, c = 0, dir = 0;  
    char currentChar = 'A';
    
    for (int i = 0; i < n * m; i++) {
        grid[r][c] = currentChar;

        currentChar = (currentChar == 'Z') ? 'A' : currentChar + 1;

        int nr = r + dr[dir];
        int nc = c + dc[dir];

        if (nr < 0 || nr >= n || nc < 0 || nc >= m || grid[nr][nc] != 0) {
            dir = (dir + 1) % 4;  
            nr = r + dr[dir];
            nc = c + dc[dir];
        }
        
        r = nr;
        c = nc;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%c ", grid[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}