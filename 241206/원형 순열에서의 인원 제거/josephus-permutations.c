#include <stdio.h>

#define MAX 5000

int main() {
    // 여기에 코드를 작성해주세요.
    int N, K;
    int queue[MAX];
    int front = 0, back = 0;

    scanf("%d %d", &N, &K);

    for (int i = 0; i < N; i++) {
        queue[back++] = i + 1;
    }

    int first = 1;
    while (front < back) {
        for (int i = 0; i < K - 1; i++) {
            queue[back++] = queue[front++];
        }

        if (!first) {
            printf(" ");
        }
        printf("%d", queue[front++]);

        first = 0;
    }

    printf("\n");

    return 0;
}