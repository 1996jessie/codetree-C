#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char str[11];
    scanf("%s", str);

    int len = strlen(str);

    for (int shift = 0; shift <= len; shift++) {
        for (int i = 0; i < len; i++) {
            printf("%c", str[(len - shift + i) % len]);
        }
        printf("\n"); 
    }

    return 0;
}