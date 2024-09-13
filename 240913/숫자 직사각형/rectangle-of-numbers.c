#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    int arr[100][100];
    int count = 1;

    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            arr[i][j] = count;
            count++;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}