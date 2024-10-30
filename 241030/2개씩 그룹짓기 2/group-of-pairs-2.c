#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define MAX_SIZE 200000

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int arr[MAX_SIZE + 1];

    scanf("%d", &n);

    for(int i = 1; i <= 2 * n; i++) {
        scanf("%d", &arr[i]);
    }

    qsort(arr + 1, 2 * n, sizeof(int), compare);

    int min_diff = INT_MAX;
    for(int i = 1; i <= n; i++) {
        if (arr[n + i] - arr[i] < min_diff) {
            min_diff = arr[n + i] - arr[i];
        }
    }

    printf("%d\n", min_diff);
    return 0;
}