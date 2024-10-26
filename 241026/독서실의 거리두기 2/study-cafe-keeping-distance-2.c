#include <stdio.h>
#include <string.h>
#include <limits.h>

#define MAX_N 1000

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    char seats[MAX_N + 1];

    scanf("%d", &n);
    scanf("%s", seats);

    int max_dist = 0;
    int max_i, max_j;
    for (int i = 0; i < n; i++) {
        if (seats[i] == '1') {
            for (int j = i + 1; j < n; j++) {
                if (seats[j] == '1') {
                    if (j - i > max_dist) {
                        max_dist = j - i;
                        max_i = i;
                        max_j = j;
                    }
                    break;
                }
            }
        }
    }

    int max_dist2 = -1;
    int max_idx = -1;
    if (seats[0] == '0') {
        int dist = 0;
        for (int i = 0; i < n; i++) {
            if (seats[i] == '1')
                break;
            dist++;
        }
        if (dist > max_dist2) {
            max_dist2 = dist;
            max_idx = 0;
        }
    }

    if (seats[n - 1] == '0') {
        int dist = 0;
        for (int i = n - 1; i >= 0; i--) {
            if (seats[i] == '1')
                break;
            dist++;
        }
        if (dist > max_dist2) {
            max_dist2 = dist;
            max_idx = n - 1;
        }
    }

    if (max_dist2 >= max_dist / 2)
        seats[max_idx] = '1';
    else
        seats[(max_i + max_j) / 2] = '1';

    int ans = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (seats[i] == '1') {
            for (int j = i + 1; j < n; j++) {
                if (seats[j] == '1') {
                    ans = (ans < j - i) ? ans : j - i;
                    break;
                }
            }
        }
    }

    printf("%d\n", ans);
    return 0;
}