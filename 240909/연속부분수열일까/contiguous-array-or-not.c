#include <stdio.h>
#include <stdbool.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n1, n2;
    
    scanf("%d %d", &n1, &n2);
    
    int A[n1], B[n2];
    
    for (int i = 0; i < n1; i++) {
        scanf("%d", &A[i]);
    }
    
    for (int i = 0; i < n2; i++) {
        scanf("%d", &B[i]);
    }
    
    bool flag = false;
    for (int i = 0; i <= n1 - n2; i++) { 
        int j;
        for (j = 0; j < n2; j++) {
            if (A[i + j] != B[j]) {
                break;
            }
        }
        if (j == n2) { 
            flag = true;
            break;
        }
    }
    
    if (flag) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    
    return 0;
}