#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    scanf("%d %d", &n, &m);

    int arr[n][m];
    int num = 0;

    for (int b = 0; b < m; b++) {
        if (b % 2 == 0) {
            for (int a = 0; a < n; a++) {
                arr[a][b] = num++;
            }
        } else {
            for (int a = n - 1; a >= 0; a--) {
                arr[a][b] = num++;
            }
        }
    }

    for (int a = 0; a < n; a++) {
        for (int b = 0; b < m; b++) {
            printf("%d ", arr[a][b]);
        }
        printf("\n");
    }

    return 0;
}