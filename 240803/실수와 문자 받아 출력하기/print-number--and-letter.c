#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char c[10];
    double a, b;
    scanf("%s\n%lf\n%lf", c, &a, &b);
    printf("%s\n%.2lf\n%.2lf", c, a, b);
    return 0;
}