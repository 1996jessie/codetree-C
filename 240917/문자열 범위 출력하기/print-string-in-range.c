#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char str[101]; 
    scanf("%[^\n]", str); 
    
    int length = strlen(str);

    if (length >= 10) {
        for (int i = 2; i < 10; i++) {  
            printf("%c", str[i]);
        }
    } 

    return 0;
}