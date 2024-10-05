#include <stdio.h>

int n;
int x1[100], x2[100];

int checked[2001];

int main() {
    // 여기에 코드를 작성해주세요.
    scanf("%d", &n);
    
    // 현재 위치
    int cur = 0;
    
    for(int i = 0; i < n; i++) {
        int distance;
        char direction;
        scanf("%d %c", &distance, &direction);
        
        if(direction == 'L') {
            // 왼쪽으로 이동할 경우 : cur - distance ~ cur까지 경로 이동
            x1[i] = cur - distance;
            x2[i] = cur;
            cur -= distance;
        } else {
            // 오른쪽으로 이동할 경우 : cur ~ cur + distance까지 경로 이동
            x1[i] = cur;
            x2[i] = cur + distance;
            cur += distance;
        }

        // OFFSET을 더해줍니다. (OFFSET = 1000)
        x1[i] += 1000;
        x2[i] += 1000;
    }
    
    // 구간을 칠해줍니다.
    // 구간 단위로 진행하는 문제이므로
    // x2[i]에 등호가 들어가지 않음에 유의합니다.
    for(int i = 0; i < n; i++) {
        for(int j = x1[i]; j < x2[i]; j++) {
            checked[j]++;
        }
    }
    
    // 2번 이상 지나간 영역의 크기를 구합니다.
    int cnt = 0;
    for(int i = 0; i <= 2000; i++) {
        if(checked[i] >= 2) {
            cnt++;
        }
    }
    
    printf("%d\n", cnt);
    return 0;
}