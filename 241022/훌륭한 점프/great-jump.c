#include <stdio.h>

#define MAX_N 100

int dp[MAX_N];  
int arr[MAX_N]; 

int max(int a, int b) {
    return (a > b) ? a : b;
}

int min(int a, int b) {
    return (a < b) ? a : b;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n, k;
    scanf("%d %d", &n, &k);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    dp[0] = arr[0];

    for (int i = 1; i < n; i++) {
        dp[i] = 100; 
        for (int j = i - 1; j >= 0 && j >= i - k; j--) {
            dp[i] = min(dp[i], max(dp[j], arr[i]));
        }
    }

    printf("%d\n", dp[n - 1]);

    return 0;
}