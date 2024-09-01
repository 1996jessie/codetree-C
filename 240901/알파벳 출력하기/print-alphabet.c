#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n); 

    char c = 'A';  

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%c", c);
            c++;
            if (c > 'Z') {
                c = 'A';  
            }
        }
        printf("\n");  
    }

    return 0;
}