#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    scanf("%d", &N);
    
    int rounds[N][2];
    for (int i = 0; i < N; i++) {
        scanf("%d %d", &rounds[i][0], &rounds[i][1]);
    }

    int mappings[6][3] = {
        {1, 2, 3},
        {1, 3, 2},
        {2, 1, 3},
        {2, 3, 1},
        {3, 1, 2},
        {3, 2, 1}
    };

    int maxWins = 0;

    for (int m = 0; m < 6; m++) {
        int wins = 0;
        for (int i = 0; i < N; i++) {
            int p1 = rounds[i][0];
            int p2 = rounds[i][1];

            int move_p1 = mappings[m][p1 - 1];
            int move_p2 = mappings[m][p2 - 1];

            if ((move_p1 == 1 && move_p2 == 3) ||
                (move_p1 == 2 && move_p2 == 1) ||
                (move_p1 == 3 && move_p2 == 2)) {
                wins++;
            }
        }
        if (wins > maxWins) {
            maxWins = wins;
        }
    }

    printf("%d\n", maxWins);
    return 0;
}