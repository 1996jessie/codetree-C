#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int sum = 0;  
    int a;     

    for (int i = 0; i < 10; i++) {
        scanf("%d", &a);
        sum += a;
    }

    printf("%d\n", sum);

    return 0;
}