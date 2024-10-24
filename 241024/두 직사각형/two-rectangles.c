#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int x1, y1, x2, y2;
    int a1, b1, a2, b2; 

    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    scanf("%d %d %d %d", &a1, &b1, &a2, &b2);

    if (x2 < a1 || x1 > a2 || y2 < b1 || y1 > b2) {
        printf("nonoverlapping\n");
    } else {
        printf("overlapping\n");
    }

    return 0;
}