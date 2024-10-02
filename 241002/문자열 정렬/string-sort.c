#include <stdio.h>
#include <string.h>

void sortString(char str[]) {
    int length = strlen(str);

    for (int i = 0; i < length - 1; i++) {
        for (int j = i + 1; j < length; j++) {
            if (str[i] > str[j]) {
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    char str[101];
    scanf("%s", str);

    sortString(str);
    printf("%s\n", str); 

    return 0;
}