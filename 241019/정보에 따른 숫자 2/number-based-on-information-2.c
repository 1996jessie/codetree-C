#include <stdio.h>
#include <stdlib.h>

#define INF 1001 

int main() {
    // 여기에 코드를 작성해주세요.
    int T, a, b;
    scanf("%d %d %d", &T, &a, &b);

    char type;
    int pos;
    int S_pos[100], N_pos[100];
    int S_count = 0, N_count = 0;

    for (int i = 0; i < T; i++) {
        scanf(" %c %d", &type, &pos);
        if (type == 'S') {
            S_pos[S_count++] = pos;
        } else {
            N_pos[N_count++] = pos;
        }
    }

    int special_count = 0;

    for (int x = a; x <= b; x++) {
        int closest_S = INF, closest_N = INF;

        for (int i = 0; i < S_count; i++) {
            int dist = abs(x - S_pos[i]);
            if (dist < closest_S) {
                closest_S = dist;
            }
        }

        for (int i = 0; i < N_count; i++) {
            int dist = abs(x - N_pos[i]);
            if (dist < closest_N) {
                closest_N = dist;
            }
        }

        if (closest_S <= closest_N) {
            special_count++;
        }
    }

    printf("%d\n", special_count);

    return 0;
}