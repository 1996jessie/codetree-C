#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char str[21];  
    scanf("%s", str);

    int len = strlen(str);

    for (int i = 1; i < len; i++) {
        printf("%c", str[i]);
    }
    printf("%c\n", str[0]);

    return 0;
}