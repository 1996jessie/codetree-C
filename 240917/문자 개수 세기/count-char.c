#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char str[101];  
    char ch; 
    int count = 0;

    scanf("%[^\n]", str);
    scanf(" %c", &ch); 

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == ch) {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}