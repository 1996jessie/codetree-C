#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int N, K;
    scanf("%d %d", &N, &K);
    
    int blocks[101] = {0}; 
    
    for (int i = 0; i < K; i++) {
        int A, B;
        scanf("%d %d", &A, &B);
        
        for (int j = A; j <= B; j++) {
            blocks[j]++;
        }
    }
    
    int max_blocks = 0;
    for (int i = 1; i <= N; i++) {
        if (blocks[i] > max_blocks) {
            max_blocks = blocks[i];
        }
    }

    printf("%d\n", max_blocks);
    return 0;
}