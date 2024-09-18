#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n; 
    scanf("%d", &n);  

    char result[1001] = ""; 
    char arr[101];  

    for (int i = 0; i < n; i++) {
        scanf("%s", arr);  
        strcat(result, arr); 
    }

    printf("%s\n", result);

    return 0;
}