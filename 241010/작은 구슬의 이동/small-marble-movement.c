#include <stdio.h>

#define UP 0
#define DOWN 1
#define LEFT 2
#define RIGHT 3

int main() {
    // 여기에 코드를 작성해주세요.
    int n, t;  // 격자의 크기와 시간
    scanf("%d %d", &n, &t);

    int r, c;  // 구슬의 초기 위치
    char d;    // 구슬의 초기 방향
    scanf("%d %d %c", &r, &c, &d);

    // 초기 방향 설정
    int dir;
    if (d == 'U') dir = UP;
    else if (d == 'D') dir = DOWN;
    else if (d == 'L') dir = LEFT;
    else if (d == 'R') dir = RIGHT;

    // 상하좌우 움직임을 위한 배열
    int dr[4] = {-1, 1, 0, 0};  // 행 이동 (UP, DOWN, LEFT, RIGHT)
    int dc[4] = {0, 0, -1, 1};  // 열 이동 (UP, DOWN, LEFT, RIGHT)

    // t초 동안 구슬을 움직임
    for (int i = 0; i < t; i++) {
        // 다음 위치 계산
        int nr = r + dr[dir];
        int nc = c + dc[dir];

        // 벽에 부딪혔는지 확인
        if (nr < 1 || nr > n) {  // 행이 범위를 벗어난 경우
            if (dir == UP) dir = DOWN;
            else if (dir == DOWN) dir = UP;
            nr = r + dr[dir];  // 반대 방향으로 다시 움직임
        }
        if (nc < 1 || nc > n) {  // 열이 범위를 벗어난 경우
            if (dir == LEFT) dir = RIGHT;
            else if (dir == RIGHT) dir = LEFT;
            nc = c + dc[dir];  // 반대 방향으로 다시 움직임
        }

        // 구슬의 새로운 위치 갱신
        r = nr;
        c = nc;
    }

    // t초 후 최종 위치 출력
    printf("%d %d\n", r, c);

    return 0;
}