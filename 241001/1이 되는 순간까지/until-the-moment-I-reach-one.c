#include <stdio.h>

int countOperations(int n) {
    if (n == 1) {
        return 0;
    }

    if (n % 2 == 0) {
        return 1 + countOperations(n / 2);
    } else {
        return 1 + countOperations(n / 3);
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    scanf("%d", &N);

    int result = countOperations(N);

    printf("%d\n", result);

    return 0;
}