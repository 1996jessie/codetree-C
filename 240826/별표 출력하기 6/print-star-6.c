#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            printf("  ");
        }
        for (int k = 0; k < 2 * (n - i) - 1; k++) {
            printf("* ");
        }
        printf("\n"); 
    }

    for (int i = n - 2; i >= 0; i--) {
        for (int j = 0; j < i; j++) {
            printf("  ");
        }
        for (int k = 0; k < 2 * (n - i) - 1; k++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}