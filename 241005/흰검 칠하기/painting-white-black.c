#include <stdio.h>

#define OFFSET 1000 // 타일의 인덱스를 음수로부터 보호하기 위한 오프셋
#define MAX_TILE 2001 // 타일 범위 (-1000부터 1000까지)

int tiles[MAX_TILE]; // 각 타일의 상태를 저장하는 배열
// 0: 아직 칠해지지 않음, 1: 흰색, 2: 검은색, 3: 회색

int main() {
    // 여기에 코드를 작성해주세요.
    int n; // 명령의 개수
    scanf("%d", &n);
    
    int cur = OFFSET; // 현재 위치, 시작점은 OFFSET으로 설정
    
    for(int i = 0; i < n; i++) {
        int distance;
        char direction;
        scanf("%d %c", &distance, &direction);
        
        if(direction == 'L') {
            // 왼쪽으로 이동하며 타일을 흰색으로 칠합니다.
            for(int j = 0; j < distance; j++) {
                // 현재 위치 타일 포함
                if(tiles[cur - j] == 2) {
                    // 검은색 타일에 흰색을 덧칠하면 회색으로 변경
                    tiles[cur - j] = 3;
                } else if(tiles[cur - j] == 0) {
                    // 아직 칠해지지 않은 경우 흰색으로 칠함
                    tiles[cur - j] = 1;
                }
                // 흰색 타일은 그대로 흰색
            }
            cur -= (distance - 1); // 마지막 칠한 타일 위치로 이동
        } else if(direction == 'R') {
            // 오른쪽으로 이동하며 타일을 검은색으로 칠합니다.
            for(int j = 0; j < distance; j++) {
                // 현재 위치 타일 포함
                if(tiles[cur + j] == 1) {
                    // 흰색 타일에 검은색을 덧칠하면 회색으로 변경
                    tiles[cur + j] = 3;
                } else if(tiles[cur + j] == 0) {
                    // 아직 칠해지지 않은 경우 검은색으로 칠함
                    tiles[cur + j] = 2;
                }
                // 검은색 타일은 그대로 검은색
            }
            cur += (distance - 1); // 마지막 칠한 타일 위치로 이동
        }
    }
    
    int white_count = 0, black_count = 0, gray_count = 0;
    
    // 타일의 상태를 확인하고, 각각의 색상 카운트를 증가시킵니다.
    for(int i = 0; i < MAX_TILE; i++) {
        if(tiles[i] == 1) white_count++;
        else if(tiles[i] == 2) black_count++;
        else if(tiles[i] == 3) gray_count++;
    }
    
    // 결과 출력
    printf("%d %d %d\n", white_count, black_count, gray_count);
    
    return 0;
}