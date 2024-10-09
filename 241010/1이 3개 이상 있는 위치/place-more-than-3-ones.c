#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n); 
    
    int grid[100][100];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &grid[i][j]);  
        }
    }

    int dx[4] = {-1, 1, 0, 0}; 
    int dy[4] = {0, 0, -1, 1};  

    int count = 0;  
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int adjacentOnes = 0; 
            for (int d = 0; d < 4; d++) {  
                int nx = i + dx[d]; 
                int ny = j + dy[d]; 

                if (nx >= 0 && nx < n && ny >= 0 && ny < n && grid[nx][ny] == 1) {
                    adjacentOnes++;
                }
            }

            if (adjacentOnes >= 3) {
                count++;
            }
        }
    }

    printf("%d\n", count);

    return 0;
}