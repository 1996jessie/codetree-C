#include <stdio.h>
#include <stdlib.h>

int min(int a, int b) {
    return a < b ? a : b;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int A, B, x, y;
    scanf("%d %d %d %d", &A, &B, &x, &y);

    int direct_walk = abs(B - A);
    int teleport_via_x_y = abs(A - x) + abs(B - y);
    int teleport_via_y_x = abs(A - y) + abs(B - x);

    int min_distance = min(direct_walk, min(teleport_via_x_y, teleport_via_y_x));

    printf("%d\n", min_distance);
    return 0;
}