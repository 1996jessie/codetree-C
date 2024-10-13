#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char A[101];
    int n, count = 0;

    scanf("%s", A);

    n = strlen(A);

    for (int i = 0; i < n; i++) {
        if (A[i] == '(') {
            for (int j = i + 1; j < n; j++) {
                if (A[j] == ')') {
                    count++;
                }
            }
        }
    }

    printf("%d\n", count);
    
    return 0;
}