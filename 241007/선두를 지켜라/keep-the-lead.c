#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int N, M;
    scanf("%d %d", &N, &M);

    // A와 B의 이동 정보를 저장할 배열
    int A_vel[N], A_time[N], B_vel[M], B_time[M];

    // A의 이동 정보 입력
    for (int i = 0; i < N; i++) {
        scanf("%d %d", &A_vel[i], &A_time[i]);
    }

    // B의 이동 정보 입력
    for (int i = 0; i < M; i++) {
        scanf("%d %d", &B_vel[i], &B_time[i]);
    }

    int lead_changes = 0;  // 선두가 바뀐 횟수
    int A_dist = 0, B_dist = 0;  // A와 B의 누적 이동 거리
    int A_idx = 0, B_idx = 0;    // A와 B의 현재 구간 인덱스
    int A_rem_time = A_time[A_idx], B_rem_time = B_time[B_idx];  // A와 B의 남은 시간
    int last_lead = 0;  // 0: 동등, 1: A가 선두, -1: B가 선두

    // A와 B가 모든 구간을 처리할 때까지 반복
    while (A_idx < N && B_idx < M) {
        // 이번 구간에서 처리할 최소 시간을 구한다
        int move_time = (A_rem_time < B_rem_time) ? A_rem_time : B_rem_time;

        // A와 B가 move_time 동안 이동한 거리를 누적
        A_dist += A_vel[A_idx] * move_time;
        B_dist += B_vel[B_idx] * move_time;

        // 선두 비교
        if (A_dist > B_dist && last_lead != 1) {
            lead_changes++;  // A가 앞서게 됨
            last_lead = 1;
        } else if (B_dist > A_dist && last_lead != -1) {
            lead_changes++;  // B가 앞서게 됨
            last_lead = -1;
        }

        // A와 B의 남은 시간에서 move_time 만큼 빼준다
        A_rem_time -= move_time;
        B_rem_time -= move_time;

        // A의 시간이 다 소진되면 다음 구간으로 넘어감
        if (A_rem_time == 0) {
            A_idx++;
            if (A_idx < N) {
                A_rem_time = A_time[A_idx];
            }
        }

        // B의 시간이 다 소진되면 다음 구간으로 넘어감
        if (B_rem_time == 0) {
            B_idx++;
            if (B_idx < M) {
                B_rem_time = B_time[B_idx];
            }
        }
    }

    // 결과 출력
    printf("%d\n", lead_changes);

    return 0;
}