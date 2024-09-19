#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char A[101], B[101];
    char AB[201], BA[201];  
    int a_len = 0, b_len = 0, i, j;

    scanf("%s", A);
    scanf("%s", B);

    while (A[a_len] != '\0') {
        a_len++;
    }

    while (B[b_len] != '\0') {
        b_len++;
    }

    for (i = 0; i < a_len; i++) {
        AB[i] = A[i];
    }
    for (j = 0; j < b_len; j++) {
        AB[i + j] = B[j];
    }
    AB[i + j] = '\0';  

    for (i = 0; i < b_len; i++) {
        BA[i] = B[i];
    }
    for (j = 0; j < a_len; j++) {
        BA[i + j] = A[j];
    }
    BA[i + j] = '\0'; 

    i = 0;
    while (AB[i] != '\0' && BA[i] != '\0') {
        if (AB[i] != BA[i]) {
            printf("false\n");
            return 0;
        }
        i++;
    }

    printf("true\n");

    return 0;
}