#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char str[51];
    scanf("%s", str);

    int count = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '(') {
            count++;
        } else if (str[i] == ')') {
            count--;
        }

        if (count < 0) {
            printf("No\n");
            return 0;
        }
    }

    if (count == 0) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}