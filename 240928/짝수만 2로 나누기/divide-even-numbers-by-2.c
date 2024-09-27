#include <stdio.h>

void divideEvenNumbers(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            arr[i] /= 2;
        }
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    scanf("%d", &N);

    int arr[N];

    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    divideEvenNumbers(arr, N);

    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}