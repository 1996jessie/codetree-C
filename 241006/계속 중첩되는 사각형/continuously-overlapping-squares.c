#include <stdio.h>

#define MAX_R 200
#define OFFSET 100

int checked[MAX_R + 1][MAX_R + 1];

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int x1, y1, x2, y2;
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

        x1 += OFFSET;
        y1 += OFFSET;
        x2 += OFFSET;
        y2 += OFFSET;

        int color = (i % 2 == 0) ? 1 : 2;
        
        for (int x = x1; x < x2; x++) {
            for (int y = y1; y < y2; y++) {
                checked[x][y] = color;
            }
        }
    }

    int blue_area = 0;
    for (int x = 0; x <= MAX_R; x++) {
        for (int y = 0; y <= MAX_R; y++) {
            if (checked[x][y] == 2) {
                blue_area++;
            }
        }
    }

    printf("%d\n", blue_area);
    
    return 0;
}