#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a;
    int b, c, d, e;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    if(a > b) {
        printf("1\n");
    } else {
        printf("0\n");
    }

    if(a > c) {
        printf("1\n");
    } else {
        printf("0\n");
    }
    
    if(a > d) {
        printf("1\n");
    } else {
        printf("0\n");
    }
    
    if(a > e) {
        printf("1\n");
    } else {
        printf("0\n");
    }

    return 0;
}