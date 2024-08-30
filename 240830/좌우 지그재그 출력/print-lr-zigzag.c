#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
int n;
    scanf("%d", &n);  

    int a = 1;  

    for (int i = 0; i < n; i++) {  
        if (i % 2 == 0) { 
            for (int j = 0; j < n; j++) {
                printf("%d", a + j);
                if (j < n - 1) {
                    printf(" "); 
                }
            }
        } else {  
            for (int j = 0; j < n; j++) {
                printf("%d", a + n - 1 - j);
                if (j < n - 1) {
                    printf(" ");  
                }
            }
        }
        a += n;  
        printf("\n");  
    }

    return 0;
}