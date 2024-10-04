#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char binary[9];  
    scanf("%s", binary);

    int decimal = 0; 
    int length = strlen(binary); 

    for (int i = 0; i < length; i++) {
        if (binary[i] == '1') {
            decimal = decimal * 2 + 1;
        } else {
            decimal = decimal * 2;
        }
    }

    printf("%d\n", decimal);

    return 0;
}