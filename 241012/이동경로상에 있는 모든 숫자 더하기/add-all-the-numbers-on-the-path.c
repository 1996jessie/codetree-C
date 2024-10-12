#include <stdio.h>

#define MAX_N 99
#define NORTH 0
#define EAST 1
#define SOUTH 2
#define WEST 3

int main() {
    // 여기에 코드를 작성해주세요.
    int N, T;
    char commands[100001]; // 최대 100,000 개의 명령어 수용
    int grid[MAX_N][MAX_N];

    // 입력
    scanf("%d %d", &N, &T);
    scanf("%s", commands);

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &grid[i][j]);
        }
    }

    // 초기 위치 및 방향 설정
    int x = N / 2, y = N / 2; // 정사각형의 중앙
    int direction = NORTH; // 초기 방향: 북쪽

    int sum = grid[x][y]; // 시작 위치의 값 더하기

    // 명령 실행
    for (int i = 0; i < T; i++) {
        char command = commands[i];

        if (command == 'L') {
            // 왼쪽으로 90도 회전
            direction = (direction + 3) % 4; // 방향을 왼쪽으로 변경
        } else if (command == 'R') {
            // 오른쪽으로 90도 회전
            direction = (direction + 1) % 4; // 방향을 오른쪽으로 변경
        } else if (command == 'F') {
            // 앞으로 한 칸 이동
            int new_x = x, new_y = y;

            // 현재 방향에 따른 이동
            if (direction == NORTH) {
                new_x--; // 위쪽으로 이동
            } else if (direction == EAST) {
                new_y++; // 오른쪽으로 이동
            } else if (direction == SOUTH) {
                new_x++; // 아래쪽으로 이동
            } else if (direction == WEST) {
                new_y--; // 왼쪽으로 이동
            }

            // 격자 범위를 벗어나지 않는 경우에만 이동
            if (new_x >= 0 && new_x < N && new_y >= 0 && new_y < N) {
                x = new_x;
                y = new_y;
                sum += grid[x][y]; // 이동한 위치의 값을 더함
            }
        }
    }

    // 결과 출력
    printf("%d\n", sum);
    
    return 0;
}