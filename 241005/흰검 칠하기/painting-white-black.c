#include <stdio.h>

#define MAX_K 100000

int n;
int a[2 * MAX_K + 1];
int cnt_b[2 * MAX_K + 1];
int cnt_w[2 * MAX_K + 1];
int b = 0, w = 0, g = 0;

int main() {
    // 여기에 코드를 작성해주세요.
        scanf("%d", &n);

    int cur = MAX_K;  // 타일의 초기 위치

    for (int i = 1; i <= n; i++) {
        int x;
        char c;
        scanf("%d %c", &x, &c);

        if (c == 'L') {
            // x칸 왼쪽으로 칠합니다.
            while (x--) {
                a[cur] = 1;
                cnt_w[cur]++;
                if (x) cur--;  // 현재 위치 갱신
            }
        } else {
            // x칸 오른쪽으로 칠합니다.
            while (x--) {
                a[cur] = 2;
                cnt_b[cur]++;
                if (x) cur++;  // 현재 위치 갱신
            }
        }
    }

    for (int i = 0; i <= 2 * MAX_K; i++) {
        // 검은색과 흰색으로 두 번 이상 칠해진 타일은 회색입니다.
        if (cnt_b[i] >= 2 && cnt_w[i] >= 2) {
            g++;
        }
        // 그렇지 않으면 현재 칠해진 색깔이 곧 타일의 색깔입니다.
        else if (a[i] == 1) {
            w++;
        } else if (a[i] == 2) {
            b++;
        }
    }

    // 정답을 출력합니다.
    printf("%d %d %d\n", w, b, g);

    return 0;
}