#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;

    scanf("%d %d", &n, &m);

    int arr[9][9] = {0};

    for (int i = 0; i < m; i++) {
        int r, c;
        scanf("%d %d", &r, &c);
        arr[r-1][c-1] = 1;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n"); 
    }

    return 0;
}