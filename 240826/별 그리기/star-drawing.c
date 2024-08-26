#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2 * n - 1; j++) {
            if (j >= n - 1 - i && j <= n - 1 + i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    for (int i = n - 2; i >= 0; i--) {
        for (int j = 0; j < 2 * n - 1; j++) {
            if (j >= n - 1 - i && j <= n - 1 + i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}