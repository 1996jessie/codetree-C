#include <stdio.h>

#define ASCII_NUM 128
#define DIR_NUM 4

int n, t;
int x, y, dir;
int mapper[ASCII_NUM];

int dx[DIR_NUM] = {0, 1, -1,  0}; 
int dy[DIR_NUM] = {1, 0,  0, -1};  

int InRange(int x, int y) {
    return 0 <= x && x < n && 0 <= y && y < n;
}

void Simulate() {
    while(t--) {
        int nx = x + dx[dir], ny = y + dy[dir];
        if(InRange(nx, ny)) {
            x = nx;
            y = ny;
        }
        else
            dir = 3 - dir;
    }
}


int main() {
    // 여기에 코드를 작성해주세요.
    scanf("%d %d", &n, &t);

    mapper['R'] = 0;
    mapper['D'] = 1;
    mapper['U'] = 2;
    mapper['L'] = 3;

    char c_dir;
    scanf("%d %d %c", &x, &y, &c_dir);

    x--; 
    y--; 
    dir = mapper[c_dir];

    Simulate();

    printf("%d %d\n", x + 1, y + 1);
    
    return 0;
}