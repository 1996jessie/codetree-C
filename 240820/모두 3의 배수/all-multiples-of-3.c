#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, c, d, e;
    scanf("%d\n%d\n%d\n%d\n%d", &a, &b, &c, &d, &e);
    if(a % 3 == 0 && b % 3 == 0 && c % 3 == 0 && d % 3 == 0 && e % 3 == 0) {
        printf("1");
    } else {
        printf("0");
    }
    return 0;
}