#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);  

    int even[] = {2, 4, 6, 8};

    for (int i = 0; i < n; i++) {  
        for (int j = 0; j < n; j++) {  
            printf("%d", even[(i + j) % 4]);
            if (j < n - 1) {
                printf(" "); 
            }
        }
        printf("\n"); 
    }

    return 0;
}