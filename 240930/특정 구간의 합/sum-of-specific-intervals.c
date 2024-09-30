#include <stdio.h>

int A[100];

int sumRange(int a1, int a2) {
    int sum = 0;
    for (int i = a1 - 1; i < a2; i++) {
        sum += A[i];
    }
    return sum;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    for (int i = 0; i < m; i++) {
        int a1, a2;
        scanf("%d %d", &a1, &a2);
        int result = sumRange(a1, a2);
        printf("%d\n", result);
    }

    return 0;
}