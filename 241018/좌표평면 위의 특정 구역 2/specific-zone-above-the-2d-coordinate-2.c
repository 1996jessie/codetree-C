#include <stdio.h>
#include <limits.h>

typedef struct {
    int x, y;
} Point;

int calculateArea(Point points[], int N, int removeIdx) {
    int minX = INT_MAX, maxX = INT_MIN, minY = INT_MAX, maxY = INT_MIN;

    for (int i = 0; i < N; i++) {
        if (i == removeIdx) continue; 
        if (points[i].x < minX) minX = points[i].x;
        if (points[i].x > maxX) maxX = points[i].x;
        if (points[i].y < minY) minY = points[i].y;
        if (points[i].y > maxY) maxY = points[i].y;
    }
    
    int width = maxX - minX;
    int height = maxY - minY;
    
    return width * height;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    scanf("%d", &N);

    Point points[N];
    
    for (int i = 0; i < N; i++) {
        scanf("%d %d", &points[i].x, &points[i].y);
    }

    int minArea = INT_MAX;
    
    for (int i = 0; i < N; i++) {
        int area = calculateArea(points, N, i);
        if (area < minArea) {
            minArea = area;
        }
    }

    printf("%d\n", minArea);

    return 0;
}