#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);

    int segments[100][2]; // 선분을 저장할 배열
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &segments[i][0], &segments[i][1]);
    }

    // 선분을 하나씩 제거하며 교차 여부를 체크
    for (int i = 0; i < n; i++) {
        int min_end = 1; // 모든 선분의 시작점 중 가장 큰 값
        int max_start = 100; // 모든 선분의 끝점 중 가장 작은 값

        // 현재 i번째 선분을 제외한 나머지 선분들에 대해 검사
        for (int j = 0; j < n; j++) {
            if (j == i) continue; // i번째 선분을 제외
            if (segments[j][0] > min_end) {
                min_end = segments[j][0]; // 시작점 중 가장 큰 값 업데이트
            }
            if (segments[j][1] < max_start) {
                max_start = segments[j][1]; // 끝점 중 가장 작은 값 업데이트
            }
        }

        // 나머지 선분들이 겹치는지 판단
        if (min_end <= max_start) {
            printf("Yes\n");
            return 0; // 겹치는 경우가 있으면 종료
        }
    }

    printf("No\n"); // 모든 경우에 대해 겹치는 지점이 없으면 No 출력
    return 0;
}