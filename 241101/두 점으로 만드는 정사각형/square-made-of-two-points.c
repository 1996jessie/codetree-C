#include <stdio.h>

int max(int a, int b) {
    return a > b ? a : b;
}

int min(int a, int b) {
    return a < b ? a : b;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int x1, y1, x2, y2;
    int a1, b1, a2, b2;

    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    scanf("%d %d %d %d", &a1, &b1, &a2, &b2);

    int minX = min(x1, a1);
    int maxX = max(x2, a2);

    int minY = min(y1, b1);
    int maxY = max(y2, b2);

    int sideLength = max(maxX - minX, maxY - minY);

    printf("%d\n", sideLength * sideLength);

    return 0;
}