#include <stdio.h>

int N;
char grid[1001][1001];  

int dr[4] = {-1, 0, 1, 0};  
int dc[4] = {0, 1, 0, -1};  

void get_start_position(int K, int *r, int *c, int *dir) {
    if (K <= N) {
        *r = 0;
        *c = K - 1;
        *dir = 2;  
    } else if (K <= 2 * N) {
        *r = K - N - 1;
        *c = N - 1;
        *dir = 3;
    } else if (K <= 3 * N) {
        *r = N - 1;
        *c = 3 * N - K;
        *dir = 0;  
    } else {
        *r = 4 * N - K;
        *c = 0;
        *dir = 1; 
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int K;

    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%s", grid[i]);
    }
    scanf("%d", &K);

    int r, c, dir;
    get_start_position(K, &r, &c, &dir);

    int bounces = 0; 

    while (r >= 0 && r < N && c >= 0 && c < N) {
        if (grid[r][c] == '/') {
            if (dir == 0) dir = 1; 
            else if (dir == 1) dir = 0; 
            else if (dir == 2) dir = 3; 
            else if (dir == 3) dir = 2;
        } else if (grid[r][c] == '\\') {
            if (dir == 0) dir = 3; 
            else if (dir == 1) dir = 2; 
            else if (dir == 2) dir = 1;
            else if (dir == 3) dir = 0;
        }

        r += dr[dir];
        c += dc[dir];
        bounces++;
    }

    printf("%d\n", bounces);
    
    return 0;
}