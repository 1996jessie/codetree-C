#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char str[21]; 
    char ch;
    bool flag = false;  
    int a = -1;

    scanf("%s %c", str, &ch);

    int length = strlen(str);

    for (int i = 0; i < length; i++) {
        if (str[i] == ch) {
            a = i;  
            flag = true;   
            break; 
        }
    }

    if (flag) {
        printf("%d\n", a);  
    } else {
        printf("No\n"); 
    }

    return 0;
}