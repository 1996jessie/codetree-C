#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < n - i; j++) {
            printf("  ");
        }
        for (int k = 0; k < 2 * i - 1; k++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}