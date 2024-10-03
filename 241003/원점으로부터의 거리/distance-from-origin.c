#include <stdio.h>
#include <stdlib.h>

struct Point {
    int x, y, index;
    int distance;
};

int manhattanDistance(int x, int y) {
    return abs(x) + abs(y);
}

void swap(struct Point *a, struct Point *b) {
    struct Point temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(struct Point points[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (points[j].distance < points[minIndex].distance) {
                minIndex = j;
            }
            else if (points[j].distance == points[minIndex].distance && points[j].index < points[minIndex].index) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            swap(&points[i], &points[minIndex]);
        }
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    
    scanf("%d", &n);
    
    struct Point points[1000]; 

    for (int i = 0; i < n; i++) {
        scanf("%d %d", &points[i].x, &points[i].y);
        points[i].index = i + 1;
        points[i].distance = manhattanDistance(points[i].x, points[i].y); 
    }
    
    selectionSort(points, n);

    for (int i = 0; i < n; i++) {
        printf("%d\n", points[i].index);
    }
    
    return 0;
}