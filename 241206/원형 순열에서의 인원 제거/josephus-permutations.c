#include <stdio.h>

#define MAX 5000

int n, k;
int queue[MAX];
int front = 0, back = 0;

int main() {
    scanf("%d %d", &n, &k);

    for(int i = 0; i < n; i++) {
        queue[back++] = i + 1;
    }

    while(front < back - 1) {
        for(int i = 0; i < k - 1; i++) {
            queue[back++] = queue[front++];
        }
        printf("%d ", queue[front++]);
    }

    printf("%d\n", queue[front]);

    return 0;
}