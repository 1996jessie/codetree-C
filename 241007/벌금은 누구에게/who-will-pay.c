#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int N, M, K;
    scanf("%d %d %d", &N, &M, &K);

    int penalties[N+1];  
    for (int i = 1; i <= N; i++) {
        penalties[i] = 0; 
    }

    for (int i = 0; i < M; i++) {
        int student;
        scanf("%d", &student);

        penalties[student]++;

        if (penalties[student] == K) {
            printf("%d\n", student);
            return 0;
        }
    }

    printf("-1\n");
    return 0;
}