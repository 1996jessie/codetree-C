#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);

    for (int i = 0; i < 2 * n; i++) {
        int a;

        if (i % 2 == 0) {
            a = 1 + (i / 2);
        } 
        else {
            a = n - (i - 1) / 2;
        }

        for (int j = 0; j < a; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}