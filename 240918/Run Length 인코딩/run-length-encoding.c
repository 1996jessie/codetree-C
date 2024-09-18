#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char str[1001]; 
    scanf("%s", str); 

    int len = strlen(str);  
    int count = 1;
    char arr[2001];
    int index = 0; 

    for (int i = 1; i <= len; i++) {
        if (str[i] == str[i - 1]) {
            count++; 
        } else {
            arr[index++] = str[i - 1];  

            if (count >= 10) {
                arr[index++] = (count / 10) + '0'; 
            }
            arr[index++] = (count % 10) + '0';

            count = 1; 
        }
    }

    arr[index] = '\0'; 

    printf("%d\n", strlen(arr));
    printf("%s\n", arr);

    return 0;
}