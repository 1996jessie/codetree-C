#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    scanf("%d %d", &a, &b);
    if(a > b) {
        for(int i = a;i>=b;i--) {
            printf("%d ", i);
        }
    } else {
        for(int i = b;i>=a;i--) {
            printf("%d ", i);
        }
    }
    return 0;
}