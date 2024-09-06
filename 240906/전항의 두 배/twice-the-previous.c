#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a1, a2; 
    int arr[10];
    int i;

    scanf("%d %d", &a1, &a2);

    arr[0] = a1;
    arr[1] = a2;

    for (i = 2; i < 10; i++) {
        arr[i] = arr[i - 1] + 2 * arr[i - 2];
    }

    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}