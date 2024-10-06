#include <stdio.h>

#define MAX 201

int grid[MAX][MAX]; 

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        int x1, y1, x2, y2;
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

        x1 += 100;
        y1 += 100;
        x2 += 100;
        y2 += 100;

        for (int x = x1; x < x2; x++) {
            for (int y = y1; y < y2; y++) {
                grid[x][y] = 1;
            }
        }
    }

    int area = 0;
    for (int x = 0; x < MAX; x++) {
        for (int y = 0; y < MAX; y++) {
            if (grid[x][y] == 1) {
                area++;
            }
        }
    }
    
    printf("%d\n", area);
    
    return 0;
}