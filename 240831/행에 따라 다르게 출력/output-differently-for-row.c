#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
int n;
    scanf("%d", &n);

    int a = 1;  

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            printf("%d ", a);
            if(j == n) {
                a += (i % 2 == 1) ? 2 : 1;
            } else {
                a += (i % 2 == 1) ? 1 : 2;
            }
        }
        printf("\n");  
    }

    return 0;
}