#include <stdio.h>

int check_no_carry(int a, int b, int c) {
    while (a > 0 || b > 0 || c > 0) {
        int digit_a = a % 10;
        int digit_b = b % 10;
        int digit_c = c % 10;
        
        if (digit_a + digit_b + digit_c >= 10) {
            return 0;  
        }
        
        a /= 10;
        b /= 10;
        c /= 10;
    }
    return 1; 
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);
    
    int nums[20];  
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    
    int max_sum = -1;  
    
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                if (check_no_carry(nums[i], nums[j], nums[k])) {
                    int sum = nums[i] + nums[j] + nums[k];
                    if (sum > max_sum) {
                        max_sum = sum;  
                    }
                }
            }
        }
    }
    
    printf("%d\n", max_sum);
    return 0;
}