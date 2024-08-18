#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    scanf("%d", &N);
    int count = 0;
    while(N > 1) {
        N = N / 2;
        count++;
    }
    printf("%d", count);
    return 0;
}