#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int sum = a + b + c;
    int avg = sum / 3;  // 정수 나누기를 사용하여 소수점을 버림
    printf("%d\n%d\n", sum, avg);
    return 0;
}