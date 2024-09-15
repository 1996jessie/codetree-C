#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[5][5];

    for (int i = 0; i < 5; i++) {
        arr[i][0] = 1;
        arr[0][i] = 1;
    }

    for (int i = 1; i < 5; i++) {
        for (int j = 1; j < 5; j++) {
            arr[i][j] = arr[i-1][j] + arr[i][j-1];
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n"); 
    }

    return 0;
}