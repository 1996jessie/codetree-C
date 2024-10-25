#include <stdio.h>

#define MAX_N 100

int n;
int a[MAX_N], b[MAX_N];
int ans;

int main() {
    // 여기에 코드를 작성해주세요.
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (int i = 0; i < n; i++)
        scanf("%d", &b[i]);

    for (int i = 0; i < n; i++) {
        if (a[i] > b[i]) {
            int num = a[i] - b[i];
            a[i] -= num;
            a[i + 1] += num;
            ans += num;
        }
    }

    printf("%d\n", ans);
    return 0;
}