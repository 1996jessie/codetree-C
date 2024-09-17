#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char str[10][21];  
    char end;
    bool flag = false; 

    for (int i = 0; i < 10; i++) {
        scanf("%s", str[i]);
    }
    
    scanf(" %c", &end); 
    
    for (int i = 0; i < 10; i++) {
        int len = strlen(str[i]);
        if (str[i][len - 1] == end) {
            printf("%s\n", str[i]);
            flag = true;
        }
    }
    
    if (!flag) {
        printf("None\n");
    }

    return 0;
}