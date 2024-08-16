#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    while(1) {
        scanf("%d", &n);
        if(n == 0) {
            break;
        }
        printf("%d\n", n);
    }
    return 0;
}