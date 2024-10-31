#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int values[15];
    
    for (int i = 0; i < 15; i++) {
        scanf("%d", &values[i]);
    }

    qsort(values, 15, sizeof(int), compare);

    int A = values[0];
    int B = values[1];
    int C = values[2];
    int D = values[14] - (A + B + C);

    printf("%d %d %d %d\n", A, B, C, D);
    
    return 0;
}