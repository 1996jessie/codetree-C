#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char s[21];  
    scanf("%s", s);

    int length = strlen(s); 
    int index;

    while (length > 1) {
        scanf("%d", &index); 

        if (index >= length) {
            index = length - 1;
        }

        for (int i = index; i < length - 1; i++) {
            s[i] = s[i + 1];
        }
        s[length - 1] = '\0';  
        length--; 

        printf("%s\n", s);
    }

    return 0;
}