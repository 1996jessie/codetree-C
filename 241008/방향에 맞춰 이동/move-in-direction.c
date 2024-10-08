#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    scanf("%d", &N);

    int dx[4] = {0, 0, 1, -1};
    int dy[4] = {1, -1, 0, 0};  

    int x = 0, y = 0;

    for (int i = 0; i < N; i++) {
        char dir;
        int dist;
        scanf(" %c %d", &dir, &dist); 

        if (dir == 'N') {
            x += dx[0] * dist;
            y += dy[0] * dist;
        } else if (dir == 'S') {
            x += dx[1] * dist;
            y += dy[1] * dist;
        } else if (dir == 'E') {
            x += dx[2] * dist;
            y += dy[2] * dist;
        } else if (dir == 'W') {
            x += dx[3] * dist;
            y += dy[3] * dist;
        }
    }

    printf("%d %d\n", x, y);

    return 0;
}