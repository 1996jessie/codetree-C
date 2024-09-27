#include <stdio.h>

int isPrime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int isSumEven(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10; 
        n /= 10;
    }
    return sum % 2 == 0;
}
int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    int count = 0;

    scanf("%d %d", &a, &b);

    for (int i = a; i <= b; i++) {
        if (isPrime(i) && isSumEven(i)) {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}