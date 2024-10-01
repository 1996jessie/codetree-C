#include <stdio.h>

int sumRecursive(int n) {
    if (n == 1) {
        return 1;
    }
    return n + sumRecursive(n - 1); 
}

int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    scanf("%d", &N);

    int result = sumRecursive(N);

    printf("%d\n", result);

    return 0;
}