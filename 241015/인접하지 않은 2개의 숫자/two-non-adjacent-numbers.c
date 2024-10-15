#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);
    
    int arr[100];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int max_sum = 0; 
    
    for (int i = 0; i < n; i++) {
        for (int j = i + 2; j < n; j++) {
            int sum = arr[i] + arr[j];
            if (sum > max_sum) {
                max_sum = sum;
            }
        }
    }
    
    printf("%d\n", max_sum); 
    return 0;
}