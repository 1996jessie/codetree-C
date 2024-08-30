#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);  

    for (int i = 0; i < n; i++) {  
        for (int j = 0; j < n; j++) {  
            int a = 9 - (i * n + j) % 9;
            if (a <= 0) {
                a += 9;
            }
            printf("%d", a);
        }
        printf("\n");  
    }

    return 0;
}