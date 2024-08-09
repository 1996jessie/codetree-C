#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, c, d;
    scanf("%d %d\n", &a, &b);
    scanf("%d %d\n", &c, &d);
    if(a > c && b > d) {
        printf("1");
    } else {
        printf("0");
    }
    return 0;
}