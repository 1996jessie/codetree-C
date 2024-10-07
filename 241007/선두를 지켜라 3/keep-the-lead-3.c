#include <stdio.h>

#define MAX_TIME 10000

typedef struct {
    int velocity; // 속도
    int time;     // 이동 시간
} Movement;

int main() {
    // 여기에 코드를 작성해주세요.
    int N, M;
    
    // 입력: A와 B의 이동 정보 개수
    scanf("%d %d", &N, &M);

    Movement A[N], B[M];

    // 입력: A의 이동 정보
    for (int i = 0; i < N; i++) {
        scanf("%d %d", &A[i].velocity, &A[i].time);
    }

    // 입력: B의 이동 정보
    for (int i = 0; i < M; i++) {
        scanf("%d %d", &B[i].velocity, &B[i].time);
    }

    // 현재 위치 초기화
    int positionA = 0, positionB = 0;
    
    // 변화 카운트 초기화
    int changes = 0;
    int previousLeader = 0; // 0: A만, 1: B만, 2: A와 B

    // 총 이동 시간 계산
    int totalTime = 0;
    for (int i = 0; i < N; i++) totalTime += A[i].time;
    for (int i = 0; i < M; i++) totalTime += B[i].time;

    // 시뮬레이션을 위한 타이머
    int currentTime = 0;

    while (currentTime < totalTime) {
        // A의 이동 처리
        for (int i = 0; i < N; i++) {
            if (A[i].time > 0) {
                positionA += A[i].velocity;
                currentTime += A[i].time;
                A[i].time = 0; // 이동 시간 소모
                break;
            }
        }

        // B의 이동 처리
        for (int i = 0; i < M; i++) {
            if (B[i].time > 0) {
                positionB += B[i].velocity;
                currentTime += B[i].time;
                B[i].time = 0; // 이동 시간 소모
                break;
            }
        }

        // 현재 선두 결정
        int currentLeader = 0; // 0: A, 1: B, 2: Both

        if (positionA > positionB) {
            currentLeader = 0; // A가 선두
        } else if (positionB > positionA) {
            currentLeader = 1; // B가 선두
        } else {
            currentLeader = 2; // 동점
        }

        // 조합 변화 체크
        if (currentLeader != previousLeader) {
            changes++;
            previousLeader = currentLeader;
        }
    }

    // 결과 출력
    printf("%d\n", changes);

    return 0;
}