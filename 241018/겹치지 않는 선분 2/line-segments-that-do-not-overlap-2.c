#include <stdio.h>

#define MAX_N 100

int n;
int x1[MAX_N], x2[MAX_N];

int main() {
    // 여기에 코드를 작성해주세요.
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d %d", &x1[i], &x2[i]);

    int ans = 0;

    for (int i = 0; i < n; i++) {
        int overlap = 0;

        for (int j = 0; j < n; j++) {
            if (j == i) continue;

            if ((x1[i] <= x1[j] && x2[i] >= x2[j]) || (x1[i] >= x1[j] && x2[i] <= x2[j])) {
                overlap = 1;
                break;
            }
        }
        if (!overlap)
            ans++;
    }
    printf("%d\n", ans);

    return 0;
}