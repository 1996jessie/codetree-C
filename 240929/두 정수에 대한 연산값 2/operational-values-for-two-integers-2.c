#include <stdio.h>

void modifyValues(int a, int b, int *newA, int *newB) {
    if (a < b) {
        *newA = a + 10;
        *newB = b * 2;
    } else {
        *newA = b + 10;
        *newB = a * 2;
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    scanf("%d %d", &a, &b);

    int modifiedA, modifiedB;
    modifyValues(a, b, &modifiedA, &modifiedB);

    printf("%d %d\n", modifiedA, modifiedB);

    return 0;
}