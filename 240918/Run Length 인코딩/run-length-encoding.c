#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char str[1001]; 
    scanf("%s", str); 

    int len = strlen(str);  
    int count = 1;
    char result[2001];
    int index = 0; 

    for (int i = 1; i <= len; i++) {
        if (str[i] == str[i - 1]) {
            count++; 
        } else {
            result[index++] = str[i - 1];  

            if (count >= 10) {
                result[index++] = (count / 10) + '0'; 
            }
            result[index++] = (count % 10) + '0';

            count = 1; 
        }
    }

    result[index] = '\0'; 

    printf("%d\n", strlen(result));
    printf("%s\n", result);

    return 0;
}