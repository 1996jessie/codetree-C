#include <stdio.h>

int add(int x, int y) {
    return x + y;
}

int subtract(int x, int y) {
    return x - y;
}

int multiply(int x, int y) {
    return x * y;
}

int divide(int x, int y) {
    return x / y;
}
int main() {
    // 여기에 코드를 작성해주세요.
    int a, c;
    char o;
    
    scanf("%d %c %d", &a, &o, &c);

    switch(o) {
        case '+':
            printf("%d %c %d = %d\n", a, o, c, add(a, c));
            break;
        case '-':
            printf("%d %c %d = %d\n", a, o, c, subtract(a, c));
            break;
        case '*':
            printf("%d %c %d = %d\n", a, o, c, multiply(a, c));
            break;
        case '/':
            if (c != 0) 
                printf("%d %c %d = %d\n", a, o, c, divide(a, c));
            else
                printf("False\n");
            break;
        default:
            printf("False\n"); 
    }

    return 0;
}