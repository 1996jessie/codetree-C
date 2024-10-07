#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    scanf("%d %d", &n, &m);

    int v, t;
    int A[1000001] = {0}; 
    int at = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d %d", &v, &t);
        for (int j = 0; j < t; j++) {
            at += 1;
            A[at] = A[at - 1] + v; 
        }
    }

    int B[1000001] = {0}; 
    int bt = 0;

    for (int i = 0; i < m; i++) {
        scanf("%d %d", &v, &t);
        for (int j = 0; j < t; j++) {
            bt += 1;
            B[bt] = B[bt - 1] + v; 
        }
    }

    int leader = 0, ans = 0;

    for (int i = 1; i <= (at > bt ? at : bt); i++) {
        if (A[i] > B[i]) {
            if (leader != 1)
                ans++;
            leader = 1;
        } else if (A[i] < B[i]) {
            if (leader != 2)
                ans++;
            leader = 2;
        } else {
            if (leader != 3)
                ans++;
            leader = 3;
        }
    }

    printf("%d\n", ans);
    return 0;
}