#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        int a = N - i + 1;
        for (int j = a; j <= N; j++) {
            printf("%d", j);
            if (j < N) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}