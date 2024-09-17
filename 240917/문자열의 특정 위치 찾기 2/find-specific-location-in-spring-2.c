#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char words[5][10] = {"apple", "banana", "grape", "blueberry", "orange"};
    char ch;
    int count = 0;

    scanf(" %c", &ch);

    for (int i = 0; i < 5; i++) {
        if ((strlen(words[i]) >= 3 && words[i][2] == ch) || (strlen(words[i]) >= 4 && words[i][3] == ch)) {
            printf("%s\n", words[i]);
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}