#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n; 
    int length = 0;
    int a = 0; 
    char str[101];  

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%s", str);
        length += strlen(str);  

        if (str[0] == 'a') {
            a++;
        }
    }

    printf("%d %d\n", length, a);

    return 0;
}