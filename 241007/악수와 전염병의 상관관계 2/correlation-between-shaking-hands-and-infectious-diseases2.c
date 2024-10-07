#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define MAX_N 100
#define MAX_T 250

typedef struct {
    int time;
    int person1;
    int person2;
} Shake;

int cmp(const void *a, const void *b) {
    Shake *shakeA = (Shake *)a;
    Shake *shakeB = (Shake *)b;
    return shakeA->time - shakeB->time; 
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n, k, p, t;
    scanf("%d %d %d %d", &n, &k, &p, &t);
    
    bool infected[MAX_N + 1] = {false};
    int shake_num[MAX_N + 1] = {0}; 
    infected[p] = true;

    Shake shakes[MAX_T];

    for (int i = 0; i < t; i++) {
        scanf("%d %d %d", &shakes[i].time, &shakes[i].person1, &shakes[i].person2);
    }

    qsort(shakes, t, sizeof(Shake), cmp);

    for (int i = 0; i < t; i++) {
        int target1 = shakes[i].person1;
        int target2 = shakes[i].person2;

        if (infected[target1]) {
            shake_num[target1]++;
        }
        if (infected[target2]) {
            shake_num[target2]++;
        }

        if (shake_num[target1] <= k && infected[target1]) {
            infected[target2] = true;
        }

        if (shake_num[target2] <= k && infected[target2]) {
            infected[target1] = true;
        }
    }

    for (int i = 1; i <= n; i++) {
        printf("%d", infected[i] ? 1 : 0);
    }
    printf("\n");

    return 0;
}