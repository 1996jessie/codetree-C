#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    scanf("%d %d", &a, &b);

    int multiples[] = {2, 4, 6, 8};  

    for (int i = 0; i < 4; i++) {
        for (int j = b; j >= a; j--) {
            printf("%d * %d = %d", j, multiples[i], j * multiples[i]);
            if (j > a) {
                printf(" / "); 
            }
        }
        printf("\n");  
    }

    return 0;
}