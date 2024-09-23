#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char str[21]; 

    scanf("%20s", str); 

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + ('a' - 'A'); 
        } else if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - ('a' - 'A'); 
        }
    }

    printf("%s\n", str);

    return 0;
}