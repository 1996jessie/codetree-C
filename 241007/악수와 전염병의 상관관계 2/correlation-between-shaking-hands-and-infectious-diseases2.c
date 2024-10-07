#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define MAX_N 100
#define MAX_T 250

typedef struct {
    int time;
    int person1;
    int person2;
} Shake;

// 비교 함수 for qsort
int cmp(const void *a, const void *b) {
    Shake *shakeA = (Shake *)a;
    Shake *shakeB = (Shake *)b;
    return shakeA->time - shakeB->time; // 시간에 따라 오름차순 정렬
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n, k, p, t;
    scanf("%d %d %d %d", &n, &k, &p, &t);
    
    bool infected[MAX_N + 1] = {false}; // 감염된 개발자
    int shake_num[MAX_N + 1] = {0}; // 각 개발자의 악수 횟수
    infected[p] = true; // 초기 감염자 설정

    Shake shakes[MAX_T];

    // 악수 정보 입력
    for (int i = 0; i < t; i++) {
        scanf("%d %d %d", &shakes[i].time, &shakes[i].person1, &shakes[i].person2);
    }

    // qsort를 사용한 정렬
    qsort(shakes, t, sizeof(Shake), cmp);

    // 각 악수 횟수를 세고 감염 처리
    for (int i = 0; i < t; i++) {
        int target1 = shakes[i].person1;
        int target2 = shakes[i].person2;

        // 감염되어 있을 경우 악수 횟수를 증가시킵니다.
        if (infected[target1]) {
            shake_num[target1]++;
        }
        if (infected[target2]) {
            shake_num[target2]++;
        }

        // target1이 감염되어 있고 아직 K번 이하로 악수했다면 target2를 전염시킵니다.
        if (shake_num[target1] <= k && infected[target1]) {
            infected[target2] = true;
        }

        // target2가 감염되어 있고 아직 K번 이하로 악수했다면 target1을 전염시킵니다.
        if (shake_num[target2] <= k && infected[target2]) {
            infected[target1] = true;
        }
    }

    // 결과 출력
    for (int i = 1; i <= n; i++) {
        printf("%d", infected[i] ? 1 : 0);
    }
    printf("\n");

    return 0;
}