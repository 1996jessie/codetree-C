#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);

    int size = 2 * n + 1;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i % 2 == 0 || j % 2 == 0) {
                printf("* ");
            } 
            else {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}