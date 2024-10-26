#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return *(int*)a - *(int*)b;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int positions[3];
    scanf("%d %d %d", &positions[0], &positions[1], &positions[2]);
    
    qsort(positions, 3, sizeof(int), compare);

    int A = positions[0], B = positions[1], C = positions[2];

    if (B - A == 1 && C - B == 1)
        printf("0\n");
    else if (B - A <= 2 || C - B <= 2)
        printf("1\n");
    else
        printf("2\n");

    return 0;
}