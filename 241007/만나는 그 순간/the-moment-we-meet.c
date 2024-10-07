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

    int total_time = 0;

    while (timeA_index < N && timeB_index < M) {
        int move_time = timeA[timeA_index] - timeA_elapsed;
        if (timeB[timeB_index] - timeB_elapsed < move_time) {
            move_time = timeB[timeB_index] - timeB_elapsed;
        }

        for (int i = 0; i < move_time; i++) {
            if (dirA[timeA_index] == 'R') posA++;
            else posA--;

            if (dirB[timeB_index] == 'R') posB++;
            else posB--;

            total_time++;

            if (posA == posB) {
                printf("%d\n", total_time);
                return 0;
            }
        }

        timeA_elapsed += move_time;
        timeB_elapsed += move_time;

        if (timeA_elapsed == timeA[timeA_index]) {
            timeA_index++;
            timeA_elapsed = 0;
        }
        if (timeB_elapsed == timeB[timeB_index]) {
            timeB_index++;
            timeB_elapsed = 0;
        }
    }

    printf("-1\n");
    return 0;
}