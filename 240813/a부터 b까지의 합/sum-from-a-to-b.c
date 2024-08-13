#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int sum = 0;
    int a, b;
    scanf("%d %d", &a, &b);
    for(int i=a;i<=b;i++) {
        sum += i;
    }
    printf("%d", sum);
    return 0;
}