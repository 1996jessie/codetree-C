#include <stdio.h>

int count[11][11];

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    scanf("%d %d", &n, &m);
    
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            count[i][j] = 0;
        }
    }

    for(int i = 0; i < m; i++) {
        int a, b;
        scanf("%d %d", &a, &b);

        if(a > b) {
            int temp = a;
            a = b;
            b = temp;
        }

        count[a][b]++;
    }

    int max_count = 0;
    for(int i = 1; i <= n; i++) {
        for(int j = i + 1; j <= n; j++) {
            if(count[i][j] > max_count) {
                max_count = count[i][j];
            }
        }
    }

    printf("%d\n", max_count);
    
    return 0;
}