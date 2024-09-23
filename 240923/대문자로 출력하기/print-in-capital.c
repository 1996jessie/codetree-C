#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char str[101];
    int i = 0;

    scanf("%100s", str);

    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            putchar(str[i]);
        }
        else if (str[i] >= 'a' && str[i] <= 'z') {
            putchar(str[i] - 'a' + 'A');
        }
        i++;
    }

    return 0;
}