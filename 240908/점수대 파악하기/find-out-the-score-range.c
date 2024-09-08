#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a;
    int arr[11] = {0}; 

    while (1) {
        scanf("%d", &a);
        if (a == 0) {
            break; 
        }
        if (a >= 10) {
            arr[a / 10]++;
        }
    }

    for (int i = 10; i >= 1; i--) {
        printf("%d0 - %d\n", i, arr[i]);
    }

    return 0;
}