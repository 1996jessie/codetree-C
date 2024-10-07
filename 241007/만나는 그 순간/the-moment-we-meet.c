#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
        int N, M;
    scanf("%d %d", &N, &M);

    char dirA[N];
    int timeA[N];
    for (int i = 0; i < N; i++) {
        scanf(" %c %d", &dirA[i], &timeA[i]);
    }

    char dirB[M];
    int timeB[M];
    for (int i = 0; i < M; i++) {
        scanf(" %c %d", &dirB[i], &timeB[i]);
    }

    int posA = 0, posB = 0;

    int timeA_index = 0, timeB_index = 0;
    int timeA_elapsed = 0, timeB_elapsed = 0;

    // 전체 경과 시간
    int total_time = 0;

    while (timeA_index < N && timeB_index < M) {
        // 이동 시간을 비교하여 같은 시간만큼 진행
        int move_time = timeA[timeA_index] - timeA_elapsed;
        if (timeB[timeB_index] - timeB_elapsed < move_time) {
            move_time = timeB[timeB_index] - timeB_elapsed;
        }

        // A의 방향에 따른 이동
        for (int i = 0; i < move_time; i++) {
            if (dirA[timeA_index] == 'R') posA++;
            else posA--;

            if (dirB[timeB_index] == 'R') posB++;
            else posB--;

            total_time++;

            // A와 B가 만나는지 확인
            if (posA == posB) {
                printf("%d\n", total_time);
                return 0;
            }
        }

        // 경과 시간 업데이트
        timeA_elapsed += move_time;
        timeB_elapsed += move_time;

        // A와 B의 이동이 끝났다면 다음 구간으로 이동
        if (timeA_elapsed == timeA[timeA_index]) {
            timeA_index++;
            timeA_elapsed = 0;
        }
        if (timeB_elapsed == timeB[timeB_index]) {
            timeB_index++;
            timeB_elapsed = 0;
        }
    }

    // 만난 적이 없을 경우
    printf("-1\n");
    return 0;
}