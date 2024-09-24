#include <stdio.h>
#include <stdlib.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char A[10], B[10];

    scanf("%s %s", A, B);

    int num_AB = atoi(A) * 1000 + atoi(B);
    int num_BA = atoi(B) * 1000 + atoi(A);

    int result = num_AB + num_BA;

    printf("%d\n", result);

    return 0;
}