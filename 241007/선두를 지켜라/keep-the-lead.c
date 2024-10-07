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

    // 선두가 바뀐 횟수를 저장할 변수
    int lead_changes = 0;

    // 누적 이동 거리
    int A_dist = 0, B_dist = 0;
    
    // 현재 시간을 추적
    int A_idx = 0, B_idx = 0;
    int A_cur_time = A_time[A_idx], B_cur_time = B_time[B_idx];
    
    // 초기 선두: 같은 위치에서 시작하므로 선두 변화는 없다
    int last_lead = 0; // 0: 동일, 1: A가 선두, -1: B가 선두

    // 이동할 시간 동안 A와 B의 이동 상황을 비교
    while (A_idx < N && B_idx < M) {
        // 현재 시간에서의 최소 시간을 구해 이만큼 이동
        int time_move = (A_cur_time < B_cur_time) ? A_cur_time : B_cur_time;

        // A와 B의 이동 거리를 계산
        A_dist += A_vel[A_idx] * time_move;
        B_dist += B_vel[B_idx] * time_move;

        // 선두 비교
        if (A_dist > B_dist && last_lead != 1) {
            lead_changes++;
            last_lead = 1; // A가 선두
        } else if (B_dist > A_dist && last_lead != -1) {
            lead_changes++;
            last_lead = -1; // B가 선두
        }

        // A와 B의 시간 감소
        A_cur_time -= time_move;
        B_cur_time -= time_move;

        // A의 시간이 다 소진되면 다음 구간으로 이동
        if (A_cur_time == 0) {
            A_idx++;
            if (A_idx < N) {
                A_cur_time = A_time[A_idx];
            }
        }

        // B의 시간이 다 소진되면 다음 구간으로 이동
        if (B_cur_time == 0) {
            B_idx++;
            if (B_idx < M) {
                B_cur_time = B_time[B_idx];
            }
        }
    }

    // 결과 출력
    printf("%d\n", lead_changes);
    return 0;
}