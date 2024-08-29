#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);

    int arr[n][n]; 

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            arr[i][j] = (i + 1) * (j + 1);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = n - 1; j >= 0; j--) {
            printf("%d", arr[i][j]);
            if (j > 0) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}