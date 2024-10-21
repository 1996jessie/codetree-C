#include <stdio.h>
#include <stdbool.h>

#define MAX_N 20
#define MAX_X 10

int n;
int x[MAX_N], y[MAX_N];

int main() {
    // 여기에 코드를 작성해주세요.
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &x[i], &y[i]);
    }

    int ans = 0;

    for (int i = 0; i <= MAX_X; i++) {
        for (int j = 0; j <= MAX_X; j++) {
            for (int k = 0; k <= MAX_X; k++) {
                bool success = true;
                for (int l = 0; l < n; l++) {
                    if (x[l] == i || x[l] == j || x[l] == k) {
                        continue;
                    }
                    success = false;
                }
                if (success) {
                    ans = 1;
                }

                success = true;
                for (int l = 0; l < n; l++) {
                    if (x[l] == i || x[l] == j || y[l] == k) {
                        continue;
                    }
                    success = false;
                }
                if (success) {
                    ans = 1;
                }

                success = true;
                for (int l = 0; l < n; l++) {
                    if (x[l] == i || y[l] == j || y[l] == k) {
                        continue;
                    }
                    success = false;
                }
                if (success) {
                    ans = 1;
                }

                success = true;
                for (int l = 0; l < n; l++) {
                    if (y[l] == i || y[l] == j || y[l] == k) {
                        continue;
                    }
                    success = false;
                }
                if (success) {
                    ans = 1;
                }
            }
        }
    }

    printf("%d\n", ans);

    return 0;
}