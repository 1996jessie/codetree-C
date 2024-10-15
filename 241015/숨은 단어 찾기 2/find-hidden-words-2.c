#include <stdio.h>
#include <string.h>

#define DIR_NUM 4  

int dx[DIR_NUM] = {0, 1, 1, 1};
int dy[DIR_NUM] = {1, 0, 1, -1};

int InRange(int x, int y, int N, int M) {
    return 0 <= x && x < N && 0 <= y && y < M;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int N, M;
    char grid[50][51];

    scanf("%d %d", &N, &M);
    for (int i = 0; i < N; i++) {
        scanf("%s", grid[i]); 
    }

    int count = 0;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (grid[i][j] == 'L') { 
                for (int k = 0; k < DIR_NUM; k++) {
                    int x = i, y = j;
                    int found = 1; 
                    char target[] = "LEE";

                    for (int step = 1; step < 3; step++) {
                        x += dx[k];
                        y += dy[k];
                        if (!InRange(x, y, N, M) || grid[x][y] != target[step]) {
                            found = 0;  
                            break;
                        }
                    }

                    if (found) {
                        count++;  
                    }
                }
            }
        }
    }

    printf("%d\n", count);
    
    return 0;
}