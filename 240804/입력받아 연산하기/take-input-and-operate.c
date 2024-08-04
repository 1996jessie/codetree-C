#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    scanf("%d %d", &a, &b);
    a += 87;
    b = b % 10;
    printf("%d\n%d\n", a, b);
    return 0;
}