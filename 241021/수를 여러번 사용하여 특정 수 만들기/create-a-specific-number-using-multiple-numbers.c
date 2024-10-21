#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);

    int max_value = 0;

    for (int i = 0; i * A <= C; i++) {
        for (int j = 0; i * A + j * B <= C; j++) {
            int sum = i * A + j * B;
            if (sum <= C && sum > max_value) {
                max_value = sum;
            }
        }
    }

    printf("%d\n", max_value);

    return 0;
}