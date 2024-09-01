#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    scanf("%d %d", &a, &b); 

    int count = 0;  

    for (int n = a; n <= b; n++) {
        int sum = 0; 

        for (int i = 1; i <= n / 2; i++) {
            if (n % i == 0) {
                sum += i;  
            }
        }

        if (sum == n) {
            count++;  
        }
    }

    printf("%d\n", count);  

    return 0;
}