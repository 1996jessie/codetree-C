#include <stdio.h>

void checkNumber(int n) {
    int tens = n / 10; 
    int ones = n % 10;   
    int sum = tens + ones; 

    if (n % 2 == 0 && sum % 5 == 0) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);

    checkNumber(n);

    return 0;
}