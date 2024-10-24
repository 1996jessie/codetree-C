#include <stdio.h>

int a, b, c, d;

int Intersecting(int x1, int x2, int x3, int x4) {
    if (x2 < x3 || x4 < x1)
        return 0;
    else
        return 1;
}

int main() {
    // 여기에 코드를 작성해주세요.
    scanf("%d %d", &a, &b);
    scanf("%d %d", &c, &d);

    if (Intersecting(a, b, c, d)) {
        printf("%d\n", (b > d ? b : d) - (a < c ? a : c));
    } else {
        printf("%d\n", (b - a) + (d - c));
    }

    return 0;
}