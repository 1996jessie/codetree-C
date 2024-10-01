#include <stdio.h>

int sumOdd(int n) {
    if (n < 1) {
        return 0;
    }
    if (n % 2 == 1) {
        return n + sumOdd(n - 2);
    }
    return sumOdd(n - 1);
}

int sumEven(int n) {
    if (n < 2) {
        return 0;
    }
    return n + sumEven(n - 2); 
}

int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    scanf("%d", &N);

    int result;
    if (N % 2 == 1) {
        result = sumOdd(N); 
    } else {
        result = sumEven(N); 
    }

    printf("%d\n", result);

    return 0;
}