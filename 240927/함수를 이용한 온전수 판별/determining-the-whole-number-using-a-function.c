#include <stdio.h>

int isWholeNumber(int n) {
    if (n % 2 == 0)
        return 0;
    if (n % 10 == 5)
        return 0;
    if (n % 3 == 0 && n % 9 != 0) 
        return 0;
    
    return 1;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    int count = 0;

    scanf("%d %d", &a, &b);

    for (int i = a; i <= b; i++) {
        if (isWholeNumber(i)) {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}