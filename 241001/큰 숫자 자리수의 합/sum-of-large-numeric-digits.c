#include <stdio.h>

int sumOfDigits(int num) {
    if (num == 0) {
        return 0;
    }
    return (num % 10) + sumOfDigits(num / 10);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int product = a * b * c;
    int result = sumOfDigits(product);

    printf("%d\n", result);
    
    return 0;
}