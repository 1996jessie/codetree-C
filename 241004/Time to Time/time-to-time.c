#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, c, d;
    int start_minutes, end_minutes, total_minutes;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    start_minutes = a * 60 + b;

    end_minutes = c * 60 + d;

    total_minutes = end_minutes - start_minutes;

    printf("%d\n", total_minutes);

    return 0;
}