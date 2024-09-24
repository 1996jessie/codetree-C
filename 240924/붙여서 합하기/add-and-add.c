#include <stdio.h>
#include <stdlib.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char A[10], B[10];
    scanf("%s %s", A, B);

    char AB[20], BA[20];

    int i = 0, j = 0;
    while (A[i] != '\0') {
        AB[j++] = A[i++];
    }

    i = 0;
    while (B[i] != '\0') {
        AB[j++] = B[i++];
    }
    AB[j] = '\0'; 

    i = 0;
    j = 0;

    while (B[i] != '\0') {
        BA[j++] = B[i++];
    }

    i = 0;
    while (A[i] != '\0') {
        BA[j++] = A[i++];
    }
    BA[j] = '\0'; 

    int num_AB = atoi(AB);
    int num_BA = atoi(BA);

    int result = num_AB + num_BA;

    printf("%d\n", result);

    return 0;
}