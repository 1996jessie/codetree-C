#include <stdio.h>

void bubble_sort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int are_equal(int arr1[], int arr2[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr1[i] != arr2[i]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    // 여기에 코드를 작성해주세요.
int N, M;
    int A[100], B[100], subArray[100];

    scanf("%d %d", &N, &M);
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }
    for (int i = 0; i < M; i++) {
        scanf("%d", &B[i]);
    }

    bubble_sort(B, M);

    int count = 0;

    for (int i = 0; i <= N - M; i++) {
        for (int j = 0; j < M; j++) {
            subArray[j] = A[i + j];
        }

        bubble_sort(subArray, M);

        if (are_equal(subArray, B, M)) {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}