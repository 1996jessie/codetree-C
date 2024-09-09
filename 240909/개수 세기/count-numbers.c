#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    scanf("%d %d", &n, &m);
    
    int count = 0;  
    int a;

    for (int i = 0; i < n; i++) {
        scanf("%d", &a);
        if (a == m) {
            count++;
        }
    }
    
    printf("%d\n", count);
    
    return 0;
}