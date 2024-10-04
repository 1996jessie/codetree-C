#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char binary[11];
    int decimal = 0;
    int multiplier = 1;
    
    scanf("%s", binary);
    
    for (int i = 0; binary[i] != '\0'; i++) {
        decimal = decimal * 2 + (binary[i] - '0');
    }
    
    decimal *= 17;

    if (decimal == 0) {
        printf("0");
    } else {
        char result[32]; 
        int index = 0;
        
        while (decimal > 0) {
            result[index++] = (decimal % 2) + '0';
            decimal /= 2;
        }

        for (int i = index - 1; i >= 0; i--) {
            putchar(result[i]);
        }
    }
    
    putchar('\n'); 
    return 0;
}