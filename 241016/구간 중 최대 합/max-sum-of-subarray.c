#include <stdio.h>

#define MAX_N 100

int main() {
    // 여기에 코드를 작성해주세요.
    int n, k;
    int arr[MAX_N];

    scanf("%d %d", &n, &k);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int current_sum = 0;
    for (int i = 0; i < k; i++) {
        current_sum += arr[i];
    }

    int max_sum = current_sum;

    for (int i = k; i < n; i++) {
        current_sum = current_sum - arr[i - k] + arr[i];
        if (current_sum > max_sum) {
            max_sum = current_sum;
        }
    }

    printf("%d\n", max_sum);

    return 0;
}