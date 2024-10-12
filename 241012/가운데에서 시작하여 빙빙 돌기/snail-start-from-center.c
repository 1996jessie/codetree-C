#include <stdio.h>
#include <stdbool.h>

#define DIR_NUM 4
#define MAX_N 100

int n;

int curr_x, curr_y;
int move_dir, move_num;

int grid[MAX_N][MAX_N];

bool InRange(int x, int y) {
    return 0 <= x && x < n && 0 <= y && y < n;
}

void Move() {
    int dx[DIR_NUM] = {0, -1, 0, 1};
    int dy[DIR_NUM] = {1, 0, -1, 0};

    curr_x += dx[move_dir];
    curr_y += dy[move_dir];
}

int End() {
    return !InRange(curr_x, curr_y);
}

int main() {
    // 여기에 코드를 작성해주세요.
    scanf("%d", &n);
    
    curr_x = n / 2;
    curr_y = n / 2;
    move_dir = 0;
    move_num = 1;
    
    int cnt = 1;

    while (!End()) {
        for (int i = 0; i < move_num; i++) {
            grid[curr_x][curr_y] = cnt++;
            Move();

            if (End())
                break;
        }
        
        move_dir = (move_dir + 1) % 4;
        

        if (move_dir == 0 || move_dir == 2)
            move_num++;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            printf("%d ", grid[i][j]);
        printf("\n");
    }

    return 0;
}