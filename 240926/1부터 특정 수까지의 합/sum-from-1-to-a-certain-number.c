#include <stdio.h>

int sum_divided_by_10(int N) {
    int sum = 0;
    for (int i = 1; i <= N; i++) {
        sum += i;
    }
    return sum / 10;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    scanf("%d", &N);

    int result = sum_divided_by_10(N);
    printf("%d\n", result);

    return 0;
}