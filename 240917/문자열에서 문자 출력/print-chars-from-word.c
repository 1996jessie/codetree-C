#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char str[10]; 
    scanf("%s", str); 
    
    int len = strlen(str);

    for (int i = 0; i < len; i++) {
        printf("%c\n", str[i]);
    }
    
    return 0;
}