#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    int arr[10] = {0};
    int c;
    
    scanf("%d %d", &a, &b);

    while (a > 1) {
        c = a % b;  
        arr[c]++;  
        a = a / b;  
    }

    int sum = 0;
    for (int i = 0; i < b; i++) {
        sum += arr[i] * arr[i];
    }

    printf("%d\n", sum);

    return 0;
}