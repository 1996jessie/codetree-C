#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);

    int start_num = 11; 

    for (int i = 0; i < n; i++) { 
        for (int j = 0; j < n; j++) { 
            printf("%d", start_num + 2 * (i + j));
            if (j < n - 1) {
                printf(" "); 
            }
        }
        printf("\n");
    }

    return 0;
}