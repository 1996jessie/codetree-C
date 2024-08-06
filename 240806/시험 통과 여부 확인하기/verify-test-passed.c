#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);
    if(n>= 80) {
        printf("pass");
    } else {
        printf("%d ", 80 - n);
        printf("more score");
    }
    return 0;
}