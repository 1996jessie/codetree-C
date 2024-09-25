#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char str[101];

    while (1) {
        scanf("%s", str);

        if (strcmp(str, "END") == 0) {
            break;
        }

        int len = strlen(str);
        for (int i = len - 1; i >= 0; i--) {
            putchar(str[i]); 
        }
        putchar('\n'); 
    }

    return 0;
}