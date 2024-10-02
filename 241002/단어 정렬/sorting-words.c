#include <stdio.h>
#include <string.h>

void sortWords(char words[][101], int n) {
    char temp[101];

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (strcmp(words[j], words[j + 1]) > 0) {
                strcpy(temp, words[j]);
                strcpy(words[j], words[j + 1]);
                strcpy(words[j + 1], temp);
            }
        }
    }
}
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n); 

    char words[100][101]; 
    for (int i = 0; i < n; i++) {
        scanf("%s", words[i]); 
    }

    sortWords(words, n);

    for (int i = 0; i < n; i++) {
        printf("%s\n", words[i]);
    }

    return 0;
}