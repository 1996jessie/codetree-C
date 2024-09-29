#include <stdio.h>

void modifyValues(int *a, int *b) {
    int temp_a = *a;
    int temp_b = *b;

    if (temp_a < temp_b) {
        temp_a += 10;
        temp_b *= 2;
    } else {
        temp_b += 10;
        temp_a *= 2;
    }

    *a = temp_a;
    *b = temp_b;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    scanf("%d %d", &a, &b);

    modifyValues(&a, &b);

    printf("%d %d\n", a, b);

    return 0;
}