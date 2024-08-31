#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n, a = 1;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", a); 
            if (j < i) {
                printf(" "); 
            }
            a++; 
        }
        printf("\n"); 
    }

    return 0;
}