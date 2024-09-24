#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int num1, num2;
    scanf("%d %d", &num1, &num2);

    int sum = num1 + num2;
    char sumStr[20];
    sprintf(sumStr, "%d", sum);

    int count = 0;
    for (int i = 0; sumStr[i] != '\0'; i++) {
        if (sumStr[i] == '1') {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}