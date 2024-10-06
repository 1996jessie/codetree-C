#include <stdio.h>

#define OFFSET 100  
#define SIZE 200   
#define PAPER_SIZE 8 

int main() {
    // 여기에 코드를 작성해주세요.
    int N, x, y;
    int grid[SIZE][SIZE] = {0}; 
    int total_area = 0; 

    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%d %d", &x, &y);

        for (int dx = 0; dx < PAPER_SIZE; dx++) {
            for (int dy = 0; dy < PAPER_SIZE; dy++) {
                int new_x = x + dx + OFFSET;
                int new_y = y + dy + OFFSET;

                if (grid[new_x][new_y] == 0) {
                    grid[new_x][new_y] = 1;
                    total_area++;
                }
            }
        }
    }

    printf("%d\n", total_area);

    return 0;
}