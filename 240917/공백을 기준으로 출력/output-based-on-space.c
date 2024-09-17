#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char str1[101];
    char str2[101];
    char result[202];
    int index = 0;

    scanf("%[^\n]", str1);
    scanf(" %[^\n]", str2);

    for (int i = 0; i < strlen(str1); i++) {
        if (str1[i] != ' ') {
            result[index++] = str1[i];
        }
    }

    for (int i = 0; i < strlen(str2); i++) {
        if (str2[i] != ' ') {
            result[index++] = str2[i];
        }
    }

    result[index] = '\0';

    printf("%s\n", result);

    return 0;
}