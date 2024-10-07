#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n, t;
    scanf("%d %d", &n, &t); 
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); 
    }

    int max_len = 0;  
    int current_len = 0; 

    for (int i = 0; i < n; i++) {
        if (arr[i] > t) {
            current_len++;  
        } else {
            if (current_len > max_len) {
                max_len = current_len;
            }
            current_len = 0; 
        }
    }

    if (current_len > max_len) {
        max_len = current_len;
    }

    printf("%d\n", max_len);

    return 0;
}