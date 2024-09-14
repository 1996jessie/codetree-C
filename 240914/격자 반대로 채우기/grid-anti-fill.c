#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);

    int matrix[n][n];
    int num = 1;
    
    // 배열을 지그재그 방향으로 채우기
    for (int diag = 0; diag < 2 * n - 1; ++diag) {
        int row = (diag < n) ? n - 1 - diag : 0;
        int col = (diag < n) ? 0 : diag - n + 1;
        
        if (diag % 2 == 0) {
            // 오른쪽 아래에서 위쪽으로
            for (int i = row, j = col; i < n && j < n; ++i, ++j) {
                matrix[i][j] = num++;
            }
        } else {
            // 왼쪽 위에서 오른쪽 아래로
            for (int i = row, j = col; i < n && j < n; ++i, ++j) {
                matrix[j][i] = num++;
            }
        }
    }
    
    // 결과 출력
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (j > 0) {
                printf(" ");
            }
            printf("%d", matrix[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}