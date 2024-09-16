#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char str1[101], str2[101];

    scanf("%s", str1);
    scanf("%s", str2);

    int length = strlen(str1) + strlen(str2);
    printf("%d\n", length);

    return 0;
}