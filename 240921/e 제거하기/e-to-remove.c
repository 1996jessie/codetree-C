#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char str[101];  
    scanf("%s", str); 

    int len = strlen(str); 

    int index = -1;
    for (int i = 0; i < len; i++) {
        if (str[i] == 'e') {
            index = i;
            break; 
        }
    }

    for (int i = index; i < len - 1; i++) {
        str[i] = str[i + 1];
    }
    str[len - 1] = '\0';  

    printf("%s\n", str);
    return 0;
}