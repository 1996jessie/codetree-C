#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);

    int x1, x2;
    int min_end = 1; // 모든 선분의 시작점 중 가장 큰 값
    int max_start = 100; // 모든 선분의 끝점 중 가장 작은 값

    for (int i = 0; i < n; i++) {
        scanf("%d %d", &x1, &x2);
        if (x1 > min_end) {
            min_end = x1; // 모든 선분의 시작점 중 가장 큰 값 업데이트
        }
        if (x2 < max_start) {
            max_start = x2; // 모든 선분의 끝점 중 가장 작은 값 업데이트
        }
    }

    if (min_end <= max_start) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}