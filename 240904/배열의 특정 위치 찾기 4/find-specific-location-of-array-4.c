#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int count = 0;  
    int sum = 0; 
    int a;
    
    for (int i = 0; i < 10; i++) {
        scanf("%d", &a);
        if (a == 0) {
            break;  
        }
        if (a % 2 == 0) {
            count++;  
            sum += number; 
        }
    }

    printf("%d %d\n", count, sum);

    return 0;
}