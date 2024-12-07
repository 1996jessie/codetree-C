#include <stdio.h>

#define MAX_SIZE 500000

int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    scanf("%d", &N);
    int queue[MAX_SIZE];
    int front = 0, rear = N - 1;

    for (int i = 0; i < N; i++) {
        queue[i] = i + 1;
    }

    while (front != rear) {
        front = (front + 1) % N;
        rear = (rear + 1) % N;
        queue[rear] = queue[front];
        front = (front + 1) % N;
    }

    printf("%d\n", queue[front]);
    return 0;
}