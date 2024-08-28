#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            for (int j = 1; j <= n; j++) {
                printf("* ");
            }
            printf("\n");
        } else if (i % 2 == 0) {
            for (int j = 1; j <= (i / 2); j++) {
                printf("  ");
            }
            for (int j = 1; j <= (n - i / 2); j++) {
                printf("* ");
                j++;
            }
            printf("\n");
        } else {
            for (int j = 1; j <= (i / 2); j++) {
                printf("  ");
            }
            printf("*\n");
        }
    }

    return 0;
}