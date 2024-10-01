#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int lcm_of_array(int arr[], int n) {
    if (n == 1) {
        return arr[0]; 
    }
    return lcm(arr[n - 1], lcm_of_array(arr, n - 1));
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n); 
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); 
    }

    printf("%d\n", lcm_of_array(arr, n));

    return 0;
}