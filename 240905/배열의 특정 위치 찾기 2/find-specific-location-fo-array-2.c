#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10]; 
    int odd = 0, even = 0; 

    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0) { 
            odd += arr[i];
        } else {  
            even += arr[i];
        }
    }

    if (odd > even) {
        printf("%d\n", odd - even);
    } else {
        printf("%d\n", even - odd);
    }

    return 0;
}