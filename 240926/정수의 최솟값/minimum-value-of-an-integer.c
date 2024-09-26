#include <stdio.h>

int min_of_three(int a, int b, int c) {
    int min = a; 

    if (b < min) {
        min = b; 
    }
    if (c < min) {
        min = c; 
    }

    return min; 
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int result = min_of_three(a, b, c);
    printf("%d\n", result);

    return 0;
}