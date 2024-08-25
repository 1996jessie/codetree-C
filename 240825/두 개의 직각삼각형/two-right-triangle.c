#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = n; j > i; j--) {
            printf("*");
        }
        for (int k = 0; k < 2 * i; k++) {
            printf(" ");
        }
        for (int j = n; j > i; j--) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}