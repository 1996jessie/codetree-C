#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char str[101]; 
    int i = 0;

    scanf("%100s", str);

    char result[101];
    int index = 0;

    while (str[i] != '\0') {
        if ((str[i] >= 'A' && str[i] <= 'Z')) {
            result[index++] = str[i] + ('a' - 'A');  
        } else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= '0' && str[i] <= '9')) {
            result[index++] = str[i];  
        }
        i++;
    }

    result[index] = '\0';  
    printf("%s\n", result);

    return 0;
}