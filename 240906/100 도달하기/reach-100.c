#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int a = 1, b;
    int c;

    scanf("%d", &n);
    b = n;

    printf("%d %d ", a, b);

    while (1) {
        c = a + b; 
        printf("%d ", c);

        if (c > 100) { 
            break; 
        }

        a = b;
        b = c;
    }

    return 0;
}