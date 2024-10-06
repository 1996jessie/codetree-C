#include <stdio.h>

int max(int a, int b) {
    return a > b ? a : b;
}

int min(int a, int b) {
    return a < b ? a : b;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int x1_a, y1_a, x2_a, y2_a;
    int x1_b, y1_b, x2_b, y2_b;
    int left, right, top, bottom;
    int uncovered_area;

    scanf("%d %d %d %d", &x1_a, &y1_a, &x2_a, &y2_a);
    scanf("%d %d %d %d", &x1_b, &y1_b, &x2_b, &y2_b);

    left = max(x1_a, x1_b);
    right = min(x2_a, x2_b);
    bottom = max(y1_a, y1_b);
    top = min(y2_a, y2_b);

    if (left >= right || bottom >= top) {
        uncovered_area = (x2_a - x1_a) * (y2_a - y1_a); 
    } else {
        int total_area = (x2_a - x1_a) * (y2_a - y1_a);
        int overlap_area = (right - left) * (top - bottom);
        uncovered_area = total_area - overlap_area;
    }

    printf("%d\n", uncovered_area);

    return 0;
}