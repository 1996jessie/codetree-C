#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int arr[10][10] = {0,};

    // 입력
    scanf("%d", &n);
    
    int count = 1;
    for(int col = n - 1; col >= 0; col--) {
        if ((n - 1 - col) % 2 == 0){
            for(int row = n - 1; row >= 0; row--){
                arr[row][col] = count;
                count++;
            }
        }
        else {
            for(int row = 0; row < n; row++){
                arr[row][col] = count;
                count++;
            }
        }
    }
    
    for(int row = 0; row < n; row++) {
        for(int col = 0; col < n; col++) 
            printf("%d ", arr[row][col]);
        printf("\n");
    }
    return 0;
}