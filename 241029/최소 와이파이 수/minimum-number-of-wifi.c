#include <stdio.h>

#define MAX_N 100

int n, m;
int houses[MAX_N];

int main() {
    // 여기에 코드를 작성해주세요.
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++) {
        scanf("%d", &houses[i]);
    }

    int wifi_count = 0;
    int i = 0;

    while (i < n) {
        if (houses[i] == 1) {
            wifi_count++;
            i += 2 * m + 1;
        } else {
            i++;
        }
    }

    printf("%d\n", wifi_count);

    return 0;
}