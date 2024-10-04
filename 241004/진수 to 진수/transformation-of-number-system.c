#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b; 
    char n[10];

    scanf("%d %d", &a, &b);
    scanf("%s", n);

    int decimal = 0;
    for (int i = 0; n[i] != '\0'; i++) {
        decimal = decimal * a + (n[i] - '0'); 
    }
    
    if (decimal == 0) {
        printf("0");
    } else {
        char result[32];
        int index = 0;
        
        while (decimal > 0) {
            result[index++] = (decimal % b) + '0';
            decimal /= b;
        }

        for (int i = index - 1; i >= 0; i--) {
            putchar(result[i]);
        }
    }
    
    putchar('\n');
    return 0;
}