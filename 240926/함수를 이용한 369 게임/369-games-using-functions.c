#include <stdio.h>

int containsOrMultipleOfThree(int n) {
    if (n % 3 == 0) {
        return 1;
    }
    
    while (n > 0) {
        int digit = n % 10;
        if (digit == 3 || digit == 6 || digit == 9) {
            return 1;
        }
        n /= 10;
    }
    
    return 0;
}

int countValidNumbers(int a, int b) {
    int count = 0;
    
    for (int i = a; i <= b; i++) {
        if (containsOrMultipleOfThree(i)) {
            count++;
        }
    }
    
    return count;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    scanf("%d %d", &a, &b); 
    
    int result = countValidNumbers(a, b); 
    
    printf("%d\n", result); 
    
    return 0;
}

    // 여기에 코드를 작성해주세요.