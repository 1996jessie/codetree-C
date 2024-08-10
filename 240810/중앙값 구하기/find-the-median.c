#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int m;
    if ((a >= b && a <= c) || (a <= b && a >= c)) {
        m = a;
    } else if ((b >= a && b <= c) || (b <= a && b >= c)) {
        m = b;
    } else {
        m = c;
    }

    printf("%d", m);
    return 0;
}