#include <stdio.h>
#include <stdlib.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int N, a, b, c;
    
    // 입력
    scanf("%d", &N);
    scanf("%d %d %d", &a, &b, &c);
    
    int total_combinations = N * N * N;  
    int non_unlockable_count = 0;

    for(int x = 1; x <= N; x++) {
        for(int y = 1; y <= N; y++) {
            for(int z = 1; z <= N; z++) {
                if (!(abs(a - x) <= 2 || abs(b - y) <= 2 || abs(c - z) <= 2)) {
                    non_unlockable_count++; 
                }
            }
        }
    }

    int unlockable_count = total_combinations - non_unlockable_count;

    printf("%d\n", unlockable_count);  

    return 0;
}