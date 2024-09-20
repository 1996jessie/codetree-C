#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char str[101];

    scanf("%s", str);

    int len = strlen(str);

    str[1] = 'a';
    str[len - 2] = 'a';

    printf("%s\n", str);

    return 0;
}