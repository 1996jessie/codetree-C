#include <stdio.h>

int contains369(int num) {
    while (num > 0) {
        int digit = num % 10;
        if (digit == 3 || digit == 6 || digit == 9) {
            return 1;  
        }
        num /= 10; 
    }
    return 0; 
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0 || contains369(i)) {
            printf("0 ");
        } else {
            printf("%d ", i);
        }
    }
    
    return 0;
}