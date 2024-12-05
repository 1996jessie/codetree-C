#include <stdio.h>
#include <string.h>

#define MAX 10000

int queue[MAX];
int front_index = 0, back_index = 0;

void push(int x) {
    queue[back_index++] = x;
}

int pop() {
    if (front_index == back_index) return -1;
    return queue[front_index++];
}

int size() {
    return back_index - front_index;
}

int empty() {
    return front_index == back_index ? 1 : 0;
}

int front() {
    if (front_index == back_index) return -1;
    return queue[front_index];
}

int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        char command[10];
        scanf("%s", command);

        if (strcmp(command, "push") == 0) {
            int x;
            scanf("%d", &x);
            push(x);
        } else if (strcmp(command, "pop") == 0) {
            printf("%d\n", pop());
        } else if (strcmp(command, "size") == 0) {
            printf("%d\n", size());
        } else if (strcmp(command, "empty") == 0) {
            printf("%d\n", empty());
        } else if (strcmp(command, "front") == 0) {
            printf("%d\n", front());
        }
    }

    return 0;
}