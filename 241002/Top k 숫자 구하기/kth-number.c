#include <stdio.h>

void bubbleSort(int arr[], int n) {
    int temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
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
    int N, k;
    scanf("%d %d", &N, &k);

    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    bubbleSort(arr, N);

    printf("%d\n", arr[k - 1]);

    return 0;
}