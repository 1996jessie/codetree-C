#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char words[4][21];

    for (int i = 0; i < 4; i++) {
        scanf("%s", words[i]);
    }

    for (int i = 3; i >= 0; i--) {
        printf("%s\n", words[i]);
    }

    return 0;
}