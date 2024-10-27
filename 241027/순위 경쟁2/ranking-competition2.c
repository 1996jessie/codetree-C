#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n, scoreA = 0, scoreB = 0, changes_count = 0;
    char current_hof[3] = "AB";
    char last_hof[3] = "AB";

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        char player;
        int change;
        scanf(" %c %d", &player, &change);

        if (player == 'A') {
            scoreA += change;
        } else if (player == 'B') {
            scoreB += change;
        }

        if (scoreA > scoreB) {
            strcpy(current_hof, "A");
        } else if (scoreB > scoreA) {
            strcpy(current_hof, "B");
        } else {
            strcpy(current_hof, "AB");
        }

        if (strcmp(current_hof, last_hof) != 0) {
            changes_count++;
            strcpy(last_hof, current_hof);
        }
    }

    printf("%d\n", changes_count);
    return 0;
}