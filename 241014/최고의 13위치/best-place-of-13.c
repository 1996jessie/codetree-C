#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    int grid[20][20];  
    int maxCoins = 0; 

    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &grid[i][j]);
        }
    }

    for (int i = 0; i < N; i++) { 
        for (int j = 0; j <= N - 3; j++) {
            int coinCount = grid[i][j] + grid[i][j+1] + grid[i][j+2];  
            if (coinCount > maxCoins) {
                maxCoins = coinCount;
            }
        }
    }

    printf("%d\n", maxCoins);

    return 0;
}