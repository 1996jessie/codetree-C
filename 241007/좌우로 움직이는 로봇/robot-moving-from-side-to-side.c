#include <stdio.h>

#define MAX_TIME 1000000

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    scanf("%d %d", &n, &m);
    
    int time_a[MAX_TIME + 1] = {0}; // A의 위치를 기록
    int time_b[MAX_TIME + 1] = {0}; // B의 위치를 기록

    // 로봇 A의 움직임 기록
    int pos_a = 0;
    for (int i = 0; i < n; i++) {
        int t;
        char d;
        scanf("%d %c", &t, &d);
        for (int j = 0; j < t; j++) {
            if (d == 'L') pos_a--;
            else if (d == 'R') pos_a++;
            time_a[i + j + 1] = pos_a; // 현재 위치 기록
        }
        i += t - 1; // 이동 시간 만큼 인덱스를 증가
    }

    // 로봇 B의 움직임 기록
    int pos_b = 0;
    for (int i = 0; i < m; i++) {
        int t;
        char d;
        scanf("%d %c", &t, &d);
        for (int j = 0; j < t; j++) {
            if (d == 'L') pos_b--;
            else if (d == 'R') pos_b++;
            time_b[i + j + 1] = pos_b; // 현재 위치 기록
        }
        i += t - 1; // 이동 시간 만큼 인덱스를 증가
    }

    // 두 로봇이 같은 위치에 도달하는 횟수 계산
    int count = 0;
    for (int i = 1; i <= MAX_TIME; i++) {
        if (time_a[i] == time_b[i] && time_a[i - 1] != time_b[i - 1]) {
            count++; // 직전 위치가 다르고 현재 위치가 같을 때
        }
    }

    printf("%d\n", count);
    return 0;
}