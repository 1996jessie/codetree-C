#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int N, K;
    int candies[101] = {0};  

    scanf("%d %d", &N, &K);
    for (int i = 0; i < N; i++) {
        int candy, position;
        scanf("%d %d", &candy, &position);
        candies[position] += candy;  
    }

    int max_candies = 0;

    for (int c = 0; c <= 100; c++) {
        int current_candies = 0;

        for (int i = c - K; i <= c + K; i++) {
            if (i >= 0 && i <= 100) {  
                current_candies += candies[i];
            }
        }

        if (current_candies > max_candies) {
            max_candies = current_candies;
        }
    }
    
    printf("%d\n", max_candies);

    return 0;
}