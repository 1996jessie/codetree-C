#include <stdio.h>
#include <math.h>

#define MAX_N 100

int abs(int x) {
    return (x < 0) ? -x : x;
}

int distance(int x1, int y1, int x2, int y2) {
    return abs(x1 - x2) + abs(y1 - y2);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    int x[MAX_N], y[MAX_N];

    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d %d", &x[i], &y[i]);
    }
    
    int totalDistance = 0;
    for (int i = 0; i < N - 1; i++) {
        totalDistance += distance(x[i], y[i], x[i + 1], y[i + 1]);
    }
    
    int minDistance = totalDistance;
    for (int i = 1; i < N - 1; i++) {
        int skippedDistance = totalDistance 
                              - distance(x[i - 1], y[i - 1], x[i], y[i])
                              - distance(x[i], y[i], x[i + 1], y[i + 1])
                              + distance(x[i - 1], y[i - 1], x[i + 1], y[i + 1]);
        
        if (skippedDistance < minDistance) {
            minDistance = skippedDistance;
        }
    }

    printf("%d\n", minDistance);
    
    return 0;
}