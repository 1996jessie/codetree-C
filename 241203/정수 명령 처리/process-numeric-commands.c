#include <stdio.h>
#include <string.h>

#define MAX_SIZE 10000

int stack[MAX_SIZE];
int topIndex = -1;

void push(int value) {
    stack[++topIndex] = value;
}

int pop() {
    return topIndex == -1 ? -1 : stack[topIndex--];
}

int size() {
    return topIndex + 1;
}

int empty() {
    return topIndex == -1 ? 1 : 0;
}

int top() {
    return topIndex == -1 ? -1 : stack[topIndex];
}

int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        char command[10];
        scanf("%s", command);

        if (strcmp(command, "push") == 0) {
            int value;
            scanf("%d", &value);
            push(value);
        } else if (strcmp(command, "pop") == 0) {
            printf("%d\n", pop());
        } else if (strcmp(command, "size") == 0) {
            printf("%d\n", size());
        } else if (strcmp(command, "empty") == 0) {
            printf("%d\n", empty());
        } else if (strcmp(command, "top") == 0) {
            printf("%d\n", top());
        }
    }

    return 0;
}