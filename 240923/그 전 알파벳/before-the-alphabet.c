#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char ch;
    scanf("%c", &ch);

    if (ch == 'a') {
        printf("z\n");
    } else {
        printf("%c\n", ch - 1);
    }

    return 0;
}