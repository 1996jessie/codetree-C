#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        int a, b;
        int sum = 0;
        
        scanf("%d %d", &a, &b);
        
        for (int j = a; j <= b; j++) {
            if (j % 2 == 0) {
                sum += j;
            }
        }
        
        printf("%d\n", sum);
    }
    
    return 0;
}