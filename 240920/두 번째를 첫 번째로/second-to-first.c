#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char s[101];  
    scanf("%s", s);  

    char first = s[0];  
    char second = s[1]; 

    for (int i = 0; i < strlen(s); i++) {
        if (s[i] == second) {
            s[i] = first;
        }
    }

    printf("%s\n", s);

    return 0;
}