#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    scanf("%d", &N);
    int count = 0;
    while(N != 1) {  
        if(N % 2 == 0) {
            N = N / 2;
        } else {
            N = N * 3 + 1;
        }
        count++;
    }
    
    printf("%d\n", count);
    return 0;
}