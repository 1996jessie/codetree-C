#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);
    
    int base_time = (11 * 24 * 60) + (11 * 60) + 11;
    
    int target_time = (a * 24 * 60) + (b * 60) + c;
    
    if (target_time < base_time) {
        printf("-1\n");
    } else {
        printf("%d\n", target_time - base_time);
    }

    return 0;
}