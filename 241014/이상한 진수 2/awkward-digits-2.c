#include <stdio.h>
#include <string.h>
#include <math.h>

int binaryToDecimal(char *binary) {
    int decimal = 0;
    int length = strlen(binary);
    for (int i = 0; i < length; i++) {
        decimal = decimal * 2 + (binary[i] - '0');
    }
    return decimal;
}

int main() {
    // 여기에 코드를 작성해주세요.
    char a[11];  
    scanf("%s", a);
    
    int maxN = 0;
    int len = strlen(a);
    
    for (int i = 0; i < len; i++) {
        char temp[11]; 
        strcpy(temp, a); 

        temp[i] = (a[i] == '0') ? '1' : '0';

        int possibleN = binaryToDecimal(temp);
        if (possibleN > maxN) {
            maxN = possibleN;
        }
    }

    printf("%d\n", maxN);

    return 0;
}