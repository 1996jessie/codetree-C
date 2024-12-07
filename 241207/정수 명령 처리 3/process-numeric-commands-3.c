#include <stdio.h>
#include <string.h>

#define MAX_SIZE 10000

int n, front = 0, back = 0;
int deque[MAX_SIZE];

void push_front(int x) {
    front = (front - 1 + MAX_SIZE) % MAX_SIZE;
    deque[front] = x;
}

void push_back(int x) {
    deque[back] = x;
    back = (back + 1) % MAX_SIZE;
}

int pop_front() {
    if (front == back) return -1;
    int value = deque[front];
    front = (front + 1) % MAX_SIZE;
    return value;
}

int pop_back() {
    if (front == back) return -1;
    back = (back - 1 + MAX_SIZE) % MAX_SIZE;
    return deque[back];
}

int size() {
    return (back - front + MAX_SIZE) % MAX_SIZE;
}

int empty() {
    return front == back;
}

int get_front() {
    if (front == back) return -1;
    return deque[front];
}

int get_back() {
    if (front == back) return -1;
    return deque[(back - 1 + MAX_SIZE) % MAX_SIZE];
}

int main() {
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        char command[20];
        int x;
        scanf("%s", command);

        if (strcmp(command, "push_front") == 0) {
            scanf("%d", &x);
            push_front(x);
        } 
        else if (strcmp(command, "push_back") == 0) {
            scanf("%d", &x);
            push_back(x);
        }
        else if (strcmp(command, "pop_front") == 0) {
            int v = pop_front();
            if (v != -1) printf("%d\n", v);
            else printf("-1\n");
        }
        else if (strcmp(command, "pop_back") == 0) {
            int v = pop_back();
            if (v != -1) printf("%d\n", v);
            else printf("-1\n");
        }
        else if (strcmp(command, "size") == 0) {
            printf("%d\n", size());
        }
        else if (strcmp(command, "empty") == 0) {
            printf("%d\n", empty());
        }
        else if (strcmp(command, "front") == 0) {
            int v = get_front();
            if (v != -1) printf("%d\n", v);
            else printf("-1\n");
        }
        else if (strcmp(command, "back") == 0) {
            int v = get_back();
            if (v != -1) printf("%d\n", v);
            else printf("-1\n");
        }
    }

    return 0;
}
