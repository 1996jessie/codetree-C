#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int max_moves = 0;

    if (b - a > 1 && c - b > 1) {
        max_moves = (b - a - 1) + (c - b - 1);
    } else if (b - a > 1) {
        max_moves = (b - a - 1);
    } else if (c - b > 1) {
        max_moves = (c - b - 1);
    }

    max_moves += 2;

    printf("%d\n", max_moves);
    return 0;
}