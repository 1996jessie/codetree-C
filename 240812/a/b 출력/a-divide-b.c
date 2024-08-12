#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    int i;
    long long quotient;
    long long remainder;

    scanf("%d %d", &a, &b);

    quotient = a / b;
    remainder = a % b;

    printf("%lld.", quotient);

    for (i = 1; i < 21; i++) {
        remainder *= 10;
        quotient = remainder / b;
        remainder = remainder % b;
        printf("%lld", quotient);
    }

    printf("\n");

    return 0;
}