#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char A[1001], B[3];
    int count = 0;

    scanf("%s", A);
    scanf("%s", B);

    int A_len = strlen(A);
    int B_len = strlen(B);

    for (int i = 0; i <= A_len - B_len; i++) {
        int match = 1;
        
        for (int j = 0; j < B_len; j++) {
            if (A[i + j] != B[j]) {
                match = 0;
                break;
            }
        }

        if (match) {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}