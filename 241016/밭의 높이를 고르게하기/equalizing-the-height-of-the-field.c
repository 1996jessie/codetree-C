#include <stdio.h>

#define MAX_N 100

int main() {
    // 여기에 코드를 작성해주세요.
    int N, H, T;
    int heights[MAX_N];
    
    // 입력 받기
    scanf("%d %d %d", &N, &H, &T);
    for (int i = 0; i < N; i++) {
        scanf("%d", &heights[i]);
    }

    int min_cost = 200 * MAX_N; 

    for (int i = 0; i <= N - T; i++) {
        int current_cost = 0;

        for (int j = i; j < i + T; j++) {
            if (heights[j] < H) {
                current_cost += H - heights[j];  
            } else if (heights[j] > H) {
                current_cost += heights[j] - H;  
            }
        }

        if (current_cost < min_cost) {
            min_cost = current_cost;
        }
    }

    printf("%d\n", min_cost);
    
    return 0;
}