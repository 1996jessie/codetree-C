#include <stdio.h>

#define MAX_MOVEMENTS 1000

typedef struct {
    int velocity; // 속도
    int time;     // 이동 시간
} Movement;


int main() {
    // 여기에 코드를 작성해주세요.
    int N, M;

    // 입력: A와 B의 이동 정보 개수
    scanf("%d %d", &N, &M);

    Movement A[MAX_MOVEMENTS], B[MAX_MOVEMENTS]; // A와 B의 이동 정보를 저장할 배열

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
    int previousLeader = -1; // -1: 초기값, 0: A만, 1: B만, 2: A와 B

    // A와 B의 모든 이동 정보가 처리될 때까지 반복
    while (N > 0 || M > 0) {
        int nextTime = 0;

        // 다음 이동할 시간을 결정
        if (N > 0 && M > 0) {
            nextTime = A[0].time < B[0].time ? A[0].time : B[0].time; // 다음 시간 결정
        } else if (N > 0) {
            nextTime = A[0].time; // A만 남은 경우
        } else if (M > 0) {
            nextTime = B[0].time; // B만 남은 경우
        }

        // A와 B의 위치 업데이트
        if (N > 0) {
            positionA += A[0].velocity * nextTime; // A의 위치 업데이트
            A[0].time -= nextTime; // 이동한 시간 감소
            if (A[0].time == 0) N--; // 이동이 끝난 경우 인덱스 감소
        }

        if (M > 0) {
            positionB += B[0].velocity * nextTime; // B의 위치 업데이트
            B[0].time -= nextTime; // 이동한 시간 감소
            if (B[0].time == 0) M--; // 이동이 끝난 경우 인덱스 감소
        }

        // 현재 선두 결정
        int currentLeader = -1; // -1: 초기값, 0: A, 1: B, 2: Both

        if (positionA > positionB) {
            currentLeader = 0; // A가 선두
        } else if (positionB > positionA) {
            currentLeader = 1; // B가 선두
        } else {
            currentLeader = 2; // 동점
        }

        // 조합 변화 체크
        if (currentLeader != previousLeader) {
            changes++; // 변화가 발생하면 카운트 증가
            previousLeader = currentLeader; // 이전 선두 업데이트
        }
    }

    // 결과 출력
    printf("%d\n", changes); // 명예의 전당 조합 변화 횟수 출력

    return 0; // 프로그램 종료
}