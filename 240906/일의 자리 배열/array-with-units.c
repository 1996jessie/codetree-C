#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b; 
    int arr[10]; 
    int i;

    scanf("%d %d", &a, &b);

    arr[0] = a;
    arr[1] = b;
 
    for (i = 2; i < 10; i++) {
        arr[i] = (arr[i - 2] + arr[i - 1]) % 10; 
    }

    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}