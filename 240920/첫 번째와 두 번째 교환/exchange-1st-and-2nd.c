#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char str[21];
    char first, second;

    scanf("%s", str);

    first = str[0];
    second = str[1];

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == first) {
            str[i] = second;  
        } else if (str[i] == second) {
            str[i] = first;  
        }
    }

    printf("%s\n", str);

    return 0;
}