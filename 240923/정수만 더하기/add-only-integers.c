#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char str[21]; 
    int sum = 0;

    scanf("%20s", str); 

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            sum += str[i] - '0';
        }
    }

    printf("%d\n", sum);

    return 0;
}