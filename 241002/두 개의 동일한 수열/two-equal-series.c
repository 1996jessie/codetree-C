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

int areArraysEqual(int arr1[], int arr2[], int n) {
    for (int i = 0; i < n; i++) {
        if (arr1[i] != arr2[i]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);

    int A[n], B[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    for (int i = 0; i < n; i++) {
        scanf("%d", &B[i]);
    }

    bubbleSort(A, n);
    bubbleSort(B, n);

    if (areArraysEqual(A, B, n)) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}