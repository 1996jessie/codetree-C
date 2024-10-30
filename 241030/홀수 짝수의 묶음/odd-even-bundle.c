#include <stdio.h>

#define MAX_N 1000

int n;
int nums[MAX_N];

int main() {
    // 여기에 코드를 작성해주세요.
    scanf("%d", &n);
    int even_count = 0, odd_count = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
        if (nums[i] % 2 == 0)
            even_count++;
        else
            odd_count++;
    }

    int max_groups = 0;
    while (even_count > 0 && odd_count > 0) {
        max_groups++;
        even_count--;
        odd_count--;
    }

    printf("%d\n", max_groups * 2 + (even_count > 0 ? 1 : 0));

    return 0;
}