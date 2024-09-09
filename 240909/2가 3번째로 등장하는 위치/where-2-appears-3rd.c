#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;

    scanf("%d", &n);
    
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int a = 2; 
    int count = 0;  
    int b = -1; 
    
    for (int i = 0; i < n; i++) {
        if (arr[i] == a) {
            count++;
            if (count == 3) {
                b = i + 1; 
                break;
            }
        }
    }

    printf("%d\n", b);
    
    return 0;
}