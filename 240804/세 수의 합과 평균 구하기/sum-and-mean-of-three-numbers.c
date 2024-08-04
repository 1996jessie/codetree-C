#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d\n%.0lf", a + b + c, (double)(a + b + c) / 3);
    return 0;
}