#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char str1[21], str2[21];

    scanf("%s %s", str1, str2);

    str2[0] = str1[0];
    str2[1] = str1[1];

    printf("%s\n", str2);

    return 0;
}