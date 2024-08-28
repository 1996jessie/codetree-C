#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= 2 * n; i++) {
        if (i % 2 != 0) {  
            for (int j = 0; j < n - (i / 2); j++) {
                printf("* ");
            }
        } else {  
            for (int j = 0; j < i / 2; j++) {
                printf("* ");
            }
        }
        printf("\n");
    }

    return 0;
}