#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char str[101];
    char result[101];
    int i = 0, j = 0;

    scanf("%100s", str);

    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            result[j] = str[i] - ('a' - 'A'); 
            j++;
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            result[j] = str[i]; 
            j++;
        }
        i++;
    }

    result[j] = '\0';

    printf("%s\n", result);

    return 0;
}