#include <stdio.h>

int sum_of_digits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int X, Y;
    scanf("%d %d", &X, &Y);

    int max_sum = 0;

    for (int i = X; i <= Y; i++) {
        int digit_sum = sum_of_digits(i);  
        if (digit_sum > max_sum) {
            max_sum = digit_sum; 
        }
    }

    printf("%d\n", max_sum); 

    return 0;
}