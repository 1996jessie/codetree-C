#include <stdio.h>
#include <stdlib.h>

#define MAX_VALS 7

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[MAX_VALS];

    for (int i = 0; i < MAX_VALS; i++) {
        scanf("%d", &arr[i]);
    }

    qsort(arr, MAX_VALS, sizeof(int), compare);

    int sumABC = arr[6];

    int A = arr[0];
    int B = arr[1];
    int C = sumABC - A - B;

    printf("%d %d %d\n", A, B, C);
    return 0;
}