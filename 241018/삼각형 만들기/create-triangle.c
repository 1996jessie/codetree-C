#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int x, y;
} Point;

int max(int a, int b) {
    return a > b ? a : b;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);
    
    Point points[n];

    for (int i = 0; i < n; i++) {
        scanf("%d %d", &points[i].x, &points[i].y);
    }
    
    int maxAreaTwice = 0; 
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) continue; 
            for (int k = 0; k < n; k++) {
                if (i == k || j == k) continue;
                
                if (points[i].y == points[j].y && points[i].x == points[k].x) {
                    int width = abs(points[i].x - points[j].x);
                    int height = abs(points[i].y - points[k].y);
                    int areaTwice = width * height;
                    
                    maxAreaTwice = max(maxAreaTwice, areaTwice);
                }
            }
        }
    }

    printf("%d\n", maxAreaTwice);
    
    return 0;
}