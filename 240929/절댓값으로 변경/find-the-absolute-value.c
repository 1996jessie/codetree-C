#include <stdio.h>

void ApplyAbsolute(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            arr[i] = -arr[i]; 
        }
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    scanf("%d", &N);

    int arr[50]; 
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    ApplyAbsolute(arr, N);

    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}