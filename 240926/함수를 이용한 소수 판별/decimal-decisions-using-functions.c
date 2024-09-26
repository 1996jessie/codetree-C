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

int sumOfPrimes(int a, int b) {
    int sum = 0;
    
    for (int i = a; i <= b; i++) {
        if (isPrime(i)) {
            sum += i;
        }
    }
    
    return sum;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    scanf("%d %d", &a, &b); 
    
    int result = sumOfPrimes(a, b); 
    printf("%d\n", result);  
    
    return 0;
}