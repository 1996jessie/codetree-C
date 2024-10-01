#include <stdio.h>

int sequence(int n) {
    if (n == 1) {
        return 2;
    }
    if (n == 2) {
        return 4;
    }

    return (sequence(n - 1) * sequence(n - 2)) % 100;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);
    
    int result = sequence(n);

    printf("%d\n", result);
    
    return 0;
}