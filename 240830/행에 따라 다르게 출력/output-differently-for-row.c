#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);
    
    int start = 1; // 숫자의 시작 값
    
    for (int i = 1; i <= n; i++) {
        int increment = (i % 2 == 1) ? 1 : 2;
        
        for (int j = 0; j < n; j++) {
            printf("%d ", start);
            start += increment;
        }
        
        printf("\n");
    }
    
    return 0;
}