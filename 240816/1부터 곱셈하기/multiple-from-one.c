#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int prod = 1;
    int i; 

    scanf("%d", &n);
    for(i = 1; i <= 100; i++) {
        prod *= i;
        if(prod >= n) {
            break;
        }
    }
    printf("%d", i);
    return 0;
}