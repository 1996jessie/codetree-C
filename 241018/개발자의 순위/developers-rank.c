#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int K, N;
    scanf("%d %d", &K, &N);
    
    int ranks[K][N];

    for (int i = 0; i < K; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &ranks[i][j]);
        }
    }
    
    int result = 0;

    for (int a = 1; a <= N; a++) {
        for (int b = 1; b <= N; b++) {
            if (a == b) continue;
            
            int always_a_better = 1; 
            
            for (int k = 0; k < K; k++) {
                int pos_a = -1, pos_b = -1;

                for (int i = 0; i < N; i++) {
                    if (ranks[k][i] == a) pos_a = i;
                    if (ranks[k][i] == b) pos_b = i;
                }

                if (pos_a > pos_b) {
                    always_a_better = 0;
                    break;
                }
            }
            
            if (always_a_better) {
                result++;
            }
        }
    }
    
    printf("%d\n", result);
    
    return 0;
}