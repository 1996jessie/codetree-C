#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char str1[21], str2[21], str3[21]; 

    scanf("%s", str1);
    scanf("%s", str2);
    scanf("%s", str3);

    int len1 = strlen(str1);
    int len2 = strlen(str2);
    int len3 = strlen(str3);

    int max = len1;
    int min = len1;

    if (len2 > max) {
        max = len2;
    }
    if (len3 > max) {
        max = len3;
    }

    if (len2 < min) {
        min = len2;
    }
    if (len3 < min) {
        min = len3;
    }

    printf("%d\n", max - min);

    return 0;
}