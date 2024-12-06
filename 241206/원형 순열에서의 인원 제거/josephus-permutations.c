#include <stdio.h>

#define MAX 5000

int queue[MAX];
int front = 0, back = 0;

void push(int item) {
    queue[back++] = item;
}

int empty() {
    return front == back;
}

int size() {
    return back - front;
}

int pop() {
    if (empty()) {
        return -1;
    }
    return queue[front++];
}

int front_val() {
    if (empty()) {
        return -1;
    }
    return queue[front];
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n, k;
    scanf("%d %d", &n, &k);

    for (int i = 1; i <= n; i++) {
        push(i);
    }

    while (size() > 1) {
        for (int i = 0; i < k - 1; i++) {
            push(front_val());
            pop();
        }
        printf("%d ", pop());
    }

    printf("%d ", pop());
    return 0;
}