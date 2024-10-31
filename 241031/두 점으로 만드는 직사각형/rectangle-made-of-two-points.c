#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int x1, y1, x2, y2;
    int a1, b1, a2, b2;

    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    scanf("%d %d %d %d", &a1, &b1, &a2, &b2);

    int left = x1 < a1 ? x1 : a1;
    int bottom = y1 < b1 ? y1 : b1;
    int right = x2 > a2 ? x2 : a2;
    int top = y2 > b2 ? y2 : b2;

    int width = right - left;
    int height = top - bottom;
    int area = width * height;

    printf("%d\n", area);
    return 0;
}