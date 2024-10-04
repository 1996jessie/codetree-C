#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);

    if (n == 0) {
        printf("0\n");
        return 0;
    }

    int binary[32]; 
    int index = 0;

    while (n > 0) {
        binary[index++] = n % 2; 
        n /= 2; 
    }

    for (int i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");  

    return 0;
}