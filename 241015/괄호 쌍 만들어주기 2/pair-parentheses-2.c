#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char A[101];
    scanf("%s", A);

    int n = strlen(A);
    int count = 0;

    for (int i = 0; i < n - 3; i++) {
        if (A[i] == '(' && A[i + 1] == '(') {
            for (int j = i + 2; j < n - 1; j++) {
                if (A[j] == ')' && A[j + 1] == ')') {
                    count++;
                }
            }
        }
    }

    printf("%d\n", count);
    return 0;
}