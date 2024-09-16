#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char word1[21], word2[21]; 

    scanf("%s %s", word1, word2);

    int len1 = strlen(word1);
    int len2 = strlen(word2);

    if (len1 > len2) {
        printf("%s %d\n", word1, len1);
    } else if (len1 < len2) {
        printf("%s %d\n", word2, len2);
    } else {
        printf("same\n");
    }

    return 0;
}