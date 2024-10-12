#include <stdio.h>

#define MAX_N 99
#define NORTH 0
#define EAST 1
#define SOUTH 2
#define WEST 3

int main() {
    // 여기에 코드를 작성해주세요.
    int N, T;
    char commands[100001];
    int grid[MAX_N][MAX_N];

    scanf("%d %d", &N, &T);
    scanf("%s", commands);

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &grid[i][j]);
        }
    }

    int x = N / 2, y = N / 2; 
    int direction = NORTH;

    int sum = grid[x][y];

    for (int i = 0; i < T; i++) {
        char command = commands[i];

        if (command == 'L') {
            direction = (direction + 3) % 4; 
        } else if (command == 'R') {
            direction = (direction + 1) % 4; 
        } else if (command == 'F') {
            int new_x = x, new_y = y;

            if (direction == NORTH) {
                new_x--; 
            } else if (direction == EAST) {
                new_y++;
            } else if (direction == SOUTH) {
                new_x++;
            } else if (direction == WEST) {
                new_y--; 
            }

            if (new_x >= 0 && new_x < N && new_y >= 0 && new_y < N) {
                x = new_x;
                y = new_y;
                sum += grid[x][y]; 
            }
        }
    }

    printf("%d\n", sum);
    
    return 0;
}