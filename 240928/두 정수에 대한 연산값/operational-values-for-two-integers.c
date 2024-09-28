#include <stdio.h>

void modify(int a, int b) {
    int larger, smaller;

    if (a > b) {
        larger = a + 25; 
        smaller = b * 2; 
    } else {
        larger = b + 25; 
        smaller = a * 2;
    }

    printf("%d %d\n", smaller, larger);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    scanf("%d %d", &a, &b);

    modify(a, b);

    return 0;
}