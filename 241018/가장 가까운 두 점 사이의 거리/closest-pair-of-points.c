#include <stdio.h>
#include <limits.h>

int distanceSquared(int x1, int y1, int x2, int y2) {
    return (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);
    
    int x[n], y[n];
    
    // 점 입력 받기
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &x[i], &y[i]);
    }

    int minDistSquared = INT_MAX;
    
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int distSquared = distanceSquared(x[i], y[i], x[j], y[j]);
            if (distSquared < minDistSquared) {
                minDistSquared = distSquared;
            }
        }
    }
    
    printf("%d\n", minDistSquared);
    
    return 0;
}