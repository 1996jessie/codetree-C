#include <stdio.h>
#include <stdbool.h>

#define MAX_N 100
#define MAX_T 250

int main() {
    // 여기에 코드를 작성해주세요.
    int N, K, P, T;

    // 입력
    scanf("%d %d %d %d", &N, &K, &P, &T);

    bool infected[MAX_N + 1] = {false}; // 감염된 개발자
    int infection_count[MAX_N + 1] = {0}; // 각 개발자의 감염 횟수
    infected[P] = true; // 초기 감염자 설정

    // 악수 정보를 저장하기 위한 배열
    int time[MAX_T];
    int x[MAX_T], y[MAX_T];

    // 악수 정보 입력
    for (int i = 0; i < T; i++) {
        scanf("%d %d %d", &time[i], &x[i], &y[i]);
    }

    // 시간에 따라 악수 처리
    for (int i = 0; i < T; i++) {
        int current_x = x[i];
        int current_y = y[i];

        // x가 감염되어 있는 경우
        if (infected[current_x] && infection_count[current_x] < K) {
            if (!infected[current_y]) {
                infected[current_y] = true; // current_y 감염
                infection_count[current_x]++; // current_x의 감염 횟수 증가
            }
        }

        // y가 감염되어 있는 경우
        if (infected[current_y] && infection_count[current_y] < K) {
            if (!infected[current_x]) {
                infected[current_x] = true; // current_x 감염
                infection_count[current_y]++; // current_y의 감염 횟수 증가
            }
        }
    }

    // 결과 출력
    for (int i = 1; i <= N; i++) {
        printf("%d", infected[i] ? 1 : 0);
    }
    printf("\n");
    return 0;
}