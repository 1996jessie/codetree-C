#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    scanf("%d %d", &a, &b);

    for (int i = 1; i <= a; i++) { 
        for (int j = 1; j <= b; j++) { 
            printf("%d", i * j); 
            if (j < b) {
                printf(" "); 
            }
        }
        printf("\n"); 
    }

    return 0;
}