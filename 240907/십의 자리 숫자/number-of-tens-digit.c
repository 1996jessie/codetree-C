#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n; 
    int arr[10] = {0}; 

    // 입력 받기
    while (1) {
        scanf("%d", &n);
        if (n == 0) { 
            break;
        }
        if (n >= 10) { 
            int a = n / 10; 
            arr[a]++; 
        }
    }

    for (int i = 1; i <= 9; i++) { 
        printf("%d - %d\n", i, arr[i]);
    }

    return 0;
}