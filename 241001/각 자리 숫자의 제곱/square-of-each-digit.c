#include <stdio.h>

int sumOfSquares(int n) {
    if (n == 0) {
        return 0; 
    }
    int digit = n % 10; 
    return (digit * digit) + sumOfSquares(n / 10); 
}

int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    scanf("%d", &N);

    int result = sumOfSquares(N);

    printf("%d\n", result);

    return 0;
}