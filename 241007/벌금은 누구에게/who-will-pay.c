#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int N, M, K;
    scanf("%d %d %d", &N, &M, &K);

    // 각 학생의 벌칙 횟수를 저장하는 배열
    int penalties[N+1];  
    for (int i = 1; i <= N; i++) {
        penalties[i] = 0;  // 벌칙 횟수를 0으로 초기화
    }

    // M번에 걸쳐 벌칙 받은 학생 번호 입력
    for (int i = 0; i < M; i++) {
        int student;
        scanf("%d", &student);

        // 해당 학생의 벌칙 횟수를 증가시킴
        penalties[student]++;

        // 만약 벌칙 횟수가 K번에 도달하면 출력하고 종료
        if (penalties[student] == K) {
            printf("%d\n", student);
            return 0;
        }
    }

    // M번의 벌칙이 모두 끝난 후에도 벌금을 내는 학생이 없을 경우
    printf("-1\n");
    return 0;
}