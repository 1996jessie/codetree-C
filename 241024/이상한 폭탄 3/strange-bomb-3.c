#include <stdio.h>

#define MAX_N 100
#define MAX_A 1000000

int n, k;
int num[MAX_N];
int bomb[MAX_A + 1];
int explode[MAX_N];

int main() {
    // 여기에 코드를 작성해주세요.
    scanf("%d %d", &n, &k);
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &num[i]);
    }

    int maxval = 1;
    int maxidx = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (j - i > k)
                break;

            if (num[i] != num[j])
                continue;

            if (explode[i] == 0) {
                bomb[num[i]]++;
                explode[i] = 1;
            }

            if (explode[j] == 0) {
                bomb[num[j]]++;
                explode[j] = 1;
            }
        }
    }

    for (int i = 0; i <= MAX_A; i++) {
        if (maxval <= bomb[i]) {
            maxval = bomb[i];
            maxidx = i;
        }
    }

    printf("%d\n", maxidx);

    return 0;
}