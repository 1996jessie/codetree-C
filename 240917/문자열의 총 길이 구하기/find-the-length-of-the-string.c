#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char arr[21]; 
    int length = 0; 

    for (int i = 0; i < 10; i++) {
        scanf("%s", arr);  
        length += strlen(arr);  
    }

    printf("%d\n", length);

    return 0;
}