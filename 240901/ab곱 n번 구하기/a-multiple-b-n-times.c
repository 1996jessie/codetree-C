#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n); 

    for (int i = 0; i < n; i++) {
        int a, b;
        scanf("%d %d", &a, &b); 

        int p = 1;
        for (int j = a; j <= b; j++) {
            p *= j;  
        }

        printf("%lld\n", p);  
    }

    return 0;
}