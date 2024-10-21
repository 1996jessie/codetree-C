#include <stdio.h>

#define MAX_N 101

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    int sequence[MAX_N];
    
    // 입력 받기
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++) {
        scanf("%d", &sequence[i]);
    }
    
    int max_sum = 0;

    for (int start = 1; start <= n; start++) {
        int current_position = start; 
        int current_sum = 0;

        for (int move = 0; move < m; move++) {
            current_sum += sequence[current_position - 1];
            current_position = sequence[current_position - 1];
        }
        
        if (current_sum > max_sum) {
            max_sum = current_sum;
        }
    }

    printf("%d\n", max_sum);
    
    return 0;
}