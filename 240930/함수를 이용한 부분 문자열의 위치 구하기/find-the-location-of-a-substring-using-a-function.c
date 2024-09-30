#include <stdio.h>

int findSubstring(char input[], char target[]) {
    int inputLength = 0, targetLength = 0;

    while (input[inputLength] != '\0') {
        inputLength++;
    }

    while (target[targetLength] != '\0') {
        targetLength++;
    }

    for (int i = 0; i <= inputLength - targetLength; i++) {
        int j = 0;
        while (j < targetLength && input[i + j] == target[j]) {
            j++;
        }
        if (j == targetLength) {
            return i;
        }
    }

    return -1; 
}

int main() {
    // 여기에 코드를 작성해주세요.
    char input[1001], target[1001];

    scanf("%s", input);
    scanf("%s", target);

    int result = findSubstring(input, target);
    printf("%d\n", result);

    return 0;
}