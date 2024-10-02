#include <stdio.h>

void bubbleSort(int arr[], int size) {
    int temp;
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    scanf("%d", &N);

    int arr[2 * N];
    for (int i = 0; i < 2 * N; i++) {
        scanf("%d", &arr[i]);
    }

    bubbleSort(arr, 2 * N);

    int maxSum = 0;
    for (int i = 0; i < N; i++) {
        int pairSum = arr[i] + arr[2 * N - 1 - i];
        if (pairSum > maxSum) {
            maxSum = pairSum;
        }
    }

    printf("%d\n", maxSum);
    return 0;
}