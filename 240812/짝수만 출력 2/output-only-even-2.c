#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int b, a;
    scanf("%d %d", &b, &a);
    while(b >= a) {
        if(b % 2 == 0) {
            printf("%d ", b);
            b -= 2;
        } else {
            b = b - 1;
            printf("%d ", b);
            b -= 2;
        }
    }
    return 0;
}