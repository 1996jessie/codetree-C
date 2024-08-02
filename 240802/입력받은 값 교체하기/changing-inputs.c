#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    scanf("%d %d", &a, &b);
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("%d %d", a, b);
    return 0;
}