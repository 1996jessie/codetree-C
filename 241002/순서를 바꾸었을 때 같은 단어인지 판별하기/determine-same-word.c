#include <stdio.h>

int areAnagrams(char word1[], char word2[]) {
    int count[128] = {0};

    for (int i = 0; word1[i] != '\0'; i++) {
        count[word1[i]]++;
    }

    for (int i = 0; word2[i] != '\0'; i++) {
        count[word2[i]]--;
    }

    for (int i = 0; i < 128; i++) {
        if (count[i] != 0) {
            return 0;
        }
    }
    
    return 1; 
}

int main() {
    // 여기에 코드를 작성해주세요.
    char word1[100001], word2[100001];

    scanf("%s", word1);
    scanf("%s", word2);

    if (areAnagrams(word1, word2)) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}