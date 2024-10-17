#include <stdio.h>

#define TEAM_COUNT 3
#define MEMBER_COUNT 6

int abilities[MEMBER_COUNT];
int min_difference = 1000000; 

int calculate_team_sum(int team[TEAM_COUNT][2]) {
    int sums[TEAM_COUNT] = {0};

    for (int i = 0; i < TEAM_COUNT; i++) {
        sums[i] = team[i][0] + team[i][1];
    }

    int max_sum = sums[0];
    int min_sum = sums[0];

    for (int i = 1; i < TEAM_COUNT; i++) {
        if (sums[i] > max_sum) {
            max_sum = sums[i];
        }
        if (sums[i] < min_sum) {
            min_sum = sums[i];
        }
    }

    return max_sum - min_sum; 
}

void form_teams(int idx, int team[TEAM_COUNT][2], int team_idx, int used[MEMBER_COUNT]) {
    if (team_idx == TEAM_COUNT) {
        int difference = calculate_team_sum(team);
        if (difference < min_difference) {
            min_difference = difference;
        }
        return;
    }

    for (int i = idx; i < MEMBER_COUNT; i++) {
        if (used[i]) continue; 
        used[i] = 1;
        for (int j = i + 1; j < MEMBER_COUNT; j++) {
            if (used[j]) continue; 
            used[j] = 1; 
            team[team_idx][0] = abilities[i];
            team[team_idx][1] = abilities[j];

            form_teams(i + 1, team, team_idx + 1, used);

            used[j] = 0; 
        }
        used[i] = 0; 
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    for (int i = 0; i < MEMBER_COUNT; i++) {
        scanf("%d", &abilities[i]);
    }

    int team[TEAM_COUNT][2]; 
    int used[MEMBER_COUNT] = {0};

    form_teams(0, team, 0, used); 

    printf("%d\n", min_difference); 

    return 0;
}