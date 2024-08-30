#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);  

    int a = 1;  

    for (int i = 0; i < n; i++) {  
        for (int j = 0; j < n; j++) {  
            printf("%d", a); 
            a++; 
            if (a > 9) {
                a = 1; 
            }
        }
        printf("\n");  
    }

    return 0;
}