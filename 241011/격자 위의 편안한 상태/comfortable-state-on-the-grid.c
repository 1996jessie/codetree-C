#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int N, M;
    scanf("%d %d", &N, &M);
    
    int grid[101][101] = {0};  

    int dr[4] = {-1, 1, 0, 0};  
    int dc[4] = {0, 0, -1, 1}; 

    for (int i = 0; i < M; i++) {
        int r, c;
        scanf("%d %d", &r, &c);

        grid[r][c] = 1;

        int colored_neighbors = 0;
        for (int d = 0; d < 4; d++) {
            int nr = r + dr[d];
            int nc = c + dc[d];

            if (nr >= 1 && nr <= N && nc >= 1 && nc <= N) {
                if (grid[nr][nc] == 1) {
                    colored_neighbors++;
                }
            }
        }

        if (colored_neighbors == 3) {
            printf("1\n");
        } else {
            printf("0\n");
        }
    }

    return 0;
}