#include <stdio.h>

int sequence(int n) {
    if (n == 1) {
        return 1;
    }
    if (n == 2) {
        return 2;
    }
    
    int index = 3 * n / 2; 
    if (index > n - 1) {
        index = n - 1; 
    }
    
    return sequence(index) + sequence(n - 1);
}
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);

    int result = sequence(n);
    printf("%d\n", result);

    return 0;
}