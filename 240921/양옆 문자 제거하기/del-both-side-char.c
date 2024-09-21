#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char s[101]; 
    scanf("%s", s);  

    int length = strlen(s); 

    char result[101];
    
    for (int i = 0, j = 0; i < length; i++) {
        if (i != 1 && i != length - 2) {
            result[j] = s[i];
            j++;
        }
    }
    result[length - 2] = '\0';

    printf("%s\n", result);

    return 0;
}