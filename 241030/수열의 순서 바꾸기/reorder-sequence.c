#include <stdio.h>

#define MAX_N 100

int n;
int arr[MAX_N];

int main() {
    // 여기에 코드를 작성해주세요.
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int longest_seq = 1, current_seq = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[i - 1]) {
            current_seq++;
            if (current_seq > longest_seq) {
                longest_seq = current_seq;
            }
        } else {
            current_seq = 1;
        }
    }

    int result = n - longest_seq;
    printf("%d\n", result);

    return 0;
}