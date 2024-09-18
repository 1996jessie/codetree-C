#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char str[101];  
    int n;
    
    scanf("%s", str);
    scanf("%d", &n);
    
    int len = strlen(str);

    if (n > len) {
        n = len;
    }

    for (int i = len - 1; i >= len - n; i--) {
        printf("%c", str[i]);
    }
    
    printf("\n");
    return 0;
}