#include <stdio.h>

int factorial(int n) {
    if (n == 1) {
        return 1; 
    }
    return n * factorial(n - 1);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    scanf("%d", &N);

    printf("%d\n", factorial(N));

    return 0;
}