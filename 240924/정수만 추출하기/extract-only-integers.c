#include <stdio.h>
#include <stdlib.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char str1[9], str2[9]; 
    scanf("%s %s", str1, str2);

    int num1 = 0, num2 = 0;

    for (int i = 0; str1[i] != '\0'; i++) {
        if (str1[i] >= '0' && str1[i] <= '9') {
            num1 = num1 * 10 + (str1[i] - '0');
        } else {
            break;
        }
    }

    for (int i = 0; str2[i] != '\0'; i++) {
        if (str2[i] >= '0' && str2[i] <= '9') {
            num2 = num2 * 10 + (str2[i] - '0');
        } else {
            break; 
        }
    }

    int result = num1 + num2;
    printf("%d\n", result);

    return 0;
}