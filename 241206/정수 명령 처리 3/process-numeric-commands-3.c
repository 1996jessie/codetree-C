#include <stdio.h>
#include <string.h>

#define MAX 10000

int deque[MAX];
int front = 0, back = 0;

void push_front(int x) {
    deque[--front] = x;
}

void push_back(int x) {
    deque[back++] = x;
}

void pop_front() {
    if (front == back) {
        printf("-1\n");
    } else {
        printf("%d\n", deque[front++]);
    }
}

void pop_back() {
    if (front == back) {
        printf("-1\n");
    } else {
        printf("%d\n", deque[--back]);
    }
}

void size() {
    printf("%d\n", back - front);
}

void empty() {
    if (front == back) {
        printf("1\n");
    } else {
        printf("0\n");
    }
}

void front_val() {
    if (front == back) {
        printf("-1\n");
    } else {
        printf("%d\n", deque[front]);
    }
}

void back_val() {
    if (front == back) {
        printf("-1\n");
    } else {
        printf("%d\n", deque[back - 1]);
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    char command[20];
    int value;

    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%s", command);

        if (strcmp(command, "push_front") == 0) {
            scanf("%d", &value);
            push_front(value);
        } else if (strcmp(command, "push_back") == 0) {
            scanf("%d", &value);
            push_back(value);
        } else if (strcmp(command, "pop_front") == 0) {
            pop_front();
        } else if (strcmp(command, "pop_back") == 0) {
            pop_back();
        } else if (strcmp(command, "size") == 0) {
            size();
        } else if (strcmp(command, "empty") == 0) {
            empty();
        } else if (strcmp(command, "front") == 0) {
            front_val();
        } else if (strcmp(command, "back") == 0) {
            back_val();
        }
    }

    return 0;
}