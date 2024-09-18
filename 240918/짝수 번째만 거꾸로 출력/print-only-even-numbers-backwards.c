#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char str[101];  
    scanf("%s", str);  

    int len = strlen(str); 

    for (int i = len - 1; i >= 0; i--) {
        if (i % 2 == 1) {  
            printf("%c", str[i]);
        }
    }
    printf("\n");  
    
    return 0;
}