#include <stdio.h>

void Modify(int a, int b, int *resultA, int *resultB) {
    if (a > b) {
        *resultA = a + 25;
        *resultB = b * 2;  
    } else {
        *resultA = a * 2; 
        *resultB = b + 25; 
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    scanf("%d %d", &a, &b);

    int resultA, resultB; 
    Modify(a, b, &resultA, &resultB);

    printf("%d %d\n", resultA, resultB);

    return 0;
}