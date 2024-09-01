#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int m;
    scanf("%d", &m);  
    for (int i = 0; i < m; i++) {
        int n;
        scanf("%d", &n);  
        
        int count = 0; 

        while (n != 1) {
            if (n % 2 == 0) {
                n /= 2; 
            } else {
                n = n * 3 + 1;  
            }
            count++;  
        }
        
        printf("%d\n", count); 
    }

    return 0;
}