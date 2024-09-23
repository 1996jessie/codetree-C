#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int nums[5];

    for(int i = 0; i < 5; i++) {
        scanf("%d", &nums[i]);
    }

    for(int i = 0; i < 5; i++) {
        printf("%c ", nums[i]);
    }

    return 0;
}