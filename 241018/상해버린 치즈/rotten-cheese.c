#include <stdio.h>
#include <string.h>

#define MAX_D 1000
#define MAX_N 50

typedef struct {
    int p, m, t;
} Info1;

typedef struct {
    int p, t;
} Info2;

Info1 info1[MAX_D];
Info2 info2[MAX_N];

int n, m, d, s;

int main() {
    // 여기에 코드를 작성해주세요.
    scanf("%d %d %d %d", &n, &m, &d, &s);

    for (int i = 0; i < d; i++) {
        int p, m, t;
        scanf("%d %d %d", &p, &m, &t);
        info1[i].p = p;
        info1[i].m = m;
        info1[i].t = t;
    }

    for (int i = 0; i < s; i++) {
        int p, t;
        scanf("%d %d", &p, &t);
        info2[i].p = p;
        info2[i].t = t;
    }

    int ans = 0;

    for (int i = 1; i <= m; i++) {
        int time[MAX_N + 1] = {0};  
        for (int j = 0; j < d; j++) {
            if (info1[j].m != i)
                continue;

            int person = info1[j].p;
            if (time[person] == 0)
                time[person] = info1[j].t;
            else if (time[person] > info1[j].t)
                time[person] = info1[j].t;
        }

        int possible = 1;

        for (int j = 0; j < s; j++) {
            int person = info2[j].p;
            if (time[person] == 0)
                possible = 0;
            if (time[person] >= info2[j].t)
                possible = 0;
        }

        int pill = 0;
        if (possible) {
            for (int j = 1; j <= n; j++) {
                if (time[j] != 0)
                    pill++;
            }
        }

        if (pill > ans)
            ans = pill;
    }

    printf("%d\n", ans);

    return 0;
}