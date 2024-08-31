#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int k = 0; k < i; k++) {
            printf("  ");
        }
        for (int j = n - i; j > 0; j--) {
            printf("%d", j);
            if (j > 1) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}