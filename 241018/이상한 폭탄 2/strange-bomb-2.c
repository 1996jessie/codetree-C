#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int N, K;
    scanf("%d %d", &N, &K);
    
    int bombs[100];
    for (int i = 0; i < N; i++) {
        scanf("%d", &bombs[i]);
    }

    int exploded[100] = {0}; 
    int max_number = -1;

    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N && j <= i + K; j++) { 
            if (bombs[i] == bombs[j]) {
                exploded[i] = 1; 
                exploded[j] = 1; 
            }
        }
    }

    for (int i = 0; i < N; i++) {
        if (exploded[i] == 1) {
            if (bombs[i] > max_number) {
                max_number = bombs[i];
            }
        }
    }

    printf("%d\n", max_number);
    return 0;
}