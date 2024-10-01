#include <stdio.h>

int countSteps(int n) {
    if (n == 1) {
        return 0; 
    }
    
    if (n % 2 == 0) {
        return 1 + countSteps(n / 2);
    } else {
        return 1 + countSteps(3 * n + 1);
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);
    
    int result = countSteps(n);
    printf("%d\n", result);
    
    return 0;
}