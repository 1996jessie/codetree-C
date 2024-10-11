#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    scanf("%d", &N);

    int x = 0, y = 0; 
    int total_time = 0;

    for (int i = 0; i < N; i++) {
        char direction;
        int distance;
        scanf(" %c %d", &direction, &distance);

        for (int j = 0; j < distance; j++) {
            if (direction == 'N') {
                y++;
            } else if (direction == 'S') {
                y--;
            } else if (direction == 'E') {
                x++;
            } else if (direction == 'W') {
                x--;
            }

            total_time++; 

            if (x == 0 && y == 0) {
                printf("%d\n", total_time);
                return 0;
            }
        }
    }

    printf("-1\n");
    return 0;
}