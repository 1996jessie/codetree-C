#include <stdio.h>
#include <string.h>

void sortStrings(char arr[][101], int n) {
    char temp[101];
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(arr[i], arr[j]) > 0) {
                strcpy(temp, arr[i]);
                strcpy(arr[i], arr[j]);
                strcpy(arr[j], temp);
            }
        }
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n, k;
    char T[101];
    scanf("%d %d %s", &n, &k, T);

    char words[100][101];
    int count = 0;

    for (int i = 0; i < n; i++) {
        char word[101];
        scanf("%s", word);
        if (strncmp(word, T, strlen(T)) == 0) {
            strcpy(words[count], word);
            count++;
        }
    }

    sortStrings(words, count);

    printf("%s\n", words[k - 1]);

    return 0;
}