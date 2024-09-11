#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n); 

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int min = arr[1] - arr[0];

    for (int i = 1; i < n - 1; i++) {
        int d = arr[i + 1] - arr[i];
        if (d < min) {
            min = d; 
        }
    }

    printf("%d\n", min);

    return 0;
}