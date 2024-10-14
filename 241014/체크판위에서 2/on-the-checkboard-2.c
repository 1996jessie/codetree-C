#include <stdio.h>

#define MAX_N 15

int n, m;
char grid[MAX_N][MAX_N];

int main() {
    // 여기에 코드를 작성해주세요.
    scanf("%d %d", &n, &m);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            scanf(" %c", &grid[i][j]);
        }
    }

    int cnt = 0;
    for(int i = 1; i < n; i++) {
        for(int j = 1; j < m; j++) {
            for(int k = i + 1; k < n - 1; k++) {
                for(int l = j + 1; l < m - 1; l++) {
                    if(grid[0][0] != grid[i][j] && 
                       grid[i][j] != grid[k][l] &&
                       grid[k][l] != grid[n-1][m-1]) {
                        cnt++;
                    }
                }
            }
        }
    }

    printf("%d\n", cnt);

    return 0;
}