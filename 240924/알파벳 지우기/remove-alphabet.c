#include <stdio.h>
#include <stdlib.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char str1[9], str2[9]; 
    char numStr1[9] = {0}; 
    char numStr2[9] = {0}; 

    scanf("%s", str1);
    scanf("%s", str2);

    int j = 0;

    for (int i = 0; str1[i] != '\0'; i++) {
        if (str1[i] >= '0' && str1[i] <= '9') {
            numStr1[j++] = str1[i];
        }
    }
    numStr1[j] = '\0';

    j = 0;

    for (int i = 0; str2[i] != '\0'; i++) {
        if (str2[i] >= '0' && str2[i] <= '9') {
            numStr2[j++] = str2[i];
        }
    }
    numStr2[j] = '\0';

    int num1 = atoi(numStr1);
    int num2 = atoi(numStr2);

    int result = num1 + num2;

    printf("%d\n", result);

    return 0;
}