#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1 || i > j) {
                printf("* ");
            } else {
                printf("  "); 
            }
        }
        printf("\n");
    }

    return 0;
}