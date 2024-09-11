#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);  
    
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int min = arr[0];  
    int max = 0; 

    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i]; 
        } else {
            int p = arr[i] - min;  
            if (p > max) {
                max = p;  
            }
        }
    }
    printf("%d\n", max);

    return 0;
}