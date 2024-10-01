#include <stdio.h>

int fibonacci(int n) {
    if (n == 1 || n == 2) {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2); 
}


int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    scanf("%d", &N);

    printf("%d\n", fibonacci(N));

    return 0;
}