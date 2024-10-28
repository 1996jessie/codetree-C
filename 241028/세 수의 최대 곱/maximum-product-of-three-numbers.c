#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)b - *(int*)a);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    qsort(arr, n, sizeof(int), compare);

    int maxProduct1 = arr[0] * arr[1] * arr[2];
    int maxProduct2 = arr[0] * arr[n - 1] * arr[n - 2];
    int maxProduct = maxProduct1 > maxProduct2 ? maxProduct1 : maxProduct2;

    printf("%d\n", maxProduct);
    return 0;
}