#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int answer[10][10] = {0,};

    // 입력
    scanf("%d", &n);
    
    // 격자를 채워줍니다.
    int count = 1;
    for(int col = n - 1; col >= 0; col--) {
        if ((n - 1 - col) % 2 == 0){
            // 이 케이스에는 아래에서 위로 값을 채워줍니다.
            for(int row = n - 1; row >= 0; row--){
                answer[row][col] = count;
                count++;
            }
        }
        else {
            // 이 케이스에는 위에서 아래로 값을 채워줍니다.
            for(int row = 0; row < n; row++){
                answer[row][col] = count;
                count++;
            }
        }
    }
    
    // 출력:
    for(int row = 0; row < n; row++) {
        for(int col = 0; col < n; col++) 
            printf("%d ", answer[row][col]);
        printf("\n");
    }
    return 0;
}