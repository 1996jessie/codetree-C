#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);  

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i + 1; j++) {
            printf("%d * %d = %d", i, j, i * j);
            if (j != n - i + 1) {
                printf(" / ");  
            }
        }
        printf("\n");  
    }

    return 0;
}