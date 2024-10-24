#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    int c, d;

    scanf("%d %d", &a, &b);
    scanf("%d %d", &c, &d);

    int start = (a < c) ? a : c;
    int end = (b > d) ? b : d;

    int cleaned = end - start;

    if (cleaned < 0) {
        cleaned = 0;
    }

    printf("%d\n", cleaned);

    return 0;
}