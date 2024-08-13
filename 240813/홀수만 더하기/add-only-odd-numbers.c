#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int sum = 0;
    scanf("%d", &n);
    for(int i=1;i<=n;i++) {
        if(i % 2 == 1 && i % 3 == 0) {
            sum += i;
        }
    }
    printf("%d", sum);
    return 0;
}