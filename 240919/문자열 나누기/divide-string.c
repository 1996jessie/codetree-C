#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    char result[101] = ""; 
    char temp[11]; 

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%s", temp);
        strcat(result, temp);
    }

    int len = strlen(result);

    for (int i = 0; i < len; i += 5) {
        if (i + 5 <= len) {
            printf("%.5s\n", result + i);  
        } else {
            printf("%s\n", result + i); 
        }
    }

    return 0;
}