#include <stdio.h>

int calculateSum(int n, int m, int A[]) {
    int sum = 0;

    while (m > 1) {
        sum += A[m - 1]; 
        
        if (m % 2 == 0) {
            m /= 2; 
        } else {
            m -= 1; 
        }
    }
    
    sum += A[m - 1];

    return sum;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    scanf("%d %d", &n, &m);

    int A[100];
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    int result = calculateSum(n, m, A);
    printf("%d\n", result);

    return 0;
}