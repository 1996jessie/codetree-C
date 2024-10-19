#include <stdio.h>

int is_palindrome(int num) {
    int original = num;
    int reversed = 0;

    while (num > 0) {
        reversed = reversed * 10 + (num % 10);
        num /= 10;
    }

    return original == reversed;
}
int main() {
    // 여기에 코드를 작성해주세요.
    int X, Y;
    scanf("%d %d", &X, &Y);

    int count = 0;

    for (int i = X; i <= Y; i++) {
        if (is_palindrome(i)) {
            count++; 
        }
    }

    printf("%d\n", count);
    return 0;
}