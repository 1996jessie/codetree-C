#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    scanf("%d", &N);  

    char ch = 'A'; 

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < i; j++) {
            printf("  ");  
        }

        for (int j = 0; j < N - i; j++) {
            printf("%c", ch);
            ch++;
            if (ch > 'Z') {
                ch = 'A'; 
            }
            if (j < N - i - 1) {
                printf(" "); 
            }
        }
        printf("\n"); 
    }

    return 0;
}