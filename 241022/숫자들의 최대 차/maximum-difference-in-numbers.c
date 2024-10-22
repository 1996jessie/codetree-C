#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int N, K;
    scanf("%d %d", &N, &K);

    int arr[1000];

    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    qsort(arr, N, sizeof(int), compare);

    int max_len = 0;
    int start = 0;

    for (int end = 0; end < N; end++) {
        while (arr[end] - arr[start] > K) {
            start++;
        }
        int current_len = end - start + 1;
        if (current_len > max_len) {
            max_len = current_len;
        }
    }

    printf("%d\n", max_len);

    return 0;
}