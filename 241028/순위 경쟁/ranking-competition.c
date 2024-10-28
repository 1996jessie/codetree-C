#include <stdio.h>
#include <stdlib.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int scoreA = 0, scoreB = 0, scoreC = 0;
    int hallOfFame[3] = {1, 1, 1}; // 처음에는 모두가 명예의 전당에 있음
    int changes = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        char c;
        int s;
        scanf(" %c %d", &c, &s);

        if (c == 'A') scoreA += s;
        else if (c == 'B') scoreB += s;
        else if (c == 'C') scoreC += s;

        int maxScore = scoreA > scoreB ? (scoreA > scoreC ? scoreA : scoreC) : (scoreB > scoreC ? scoreB : scoreC);
        int newHallOfFame[3] = {scoreA == maxScore, scoreB == maxScore, scoreC == maxScore};

        int changed = 0;
        for (int j = 0; j < 3; j++) {
            if (hallOfFame[j] != newHallOfFame[j]) {
                changed = 1;
                break;
            }
        }

        if (changed) {
            changes++;
            for (int j = 0; j < 3; j++) {
                hallOfFame[j] = newHallOfFame[j];
            }
        }
    }

    printf("%d\n", changes);
    return 0;
}