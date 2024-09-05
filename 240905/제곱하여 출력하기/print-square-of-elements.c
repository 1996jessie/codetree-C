#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int arr[100];  

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        printf("%d", arr[i] * arr[i]);
        if (i < n - 1) {
            printf(" "); 
        }
    }
    printf("\n");

    return 0;
}