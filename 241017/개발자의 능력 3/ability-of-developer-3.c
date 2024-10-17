#include <stdio.h>
#include <stdlib.h>

#define MAX_INT 1000000  

int main() {
    // 여기에 코드를 작성해주세요.
    int skills[6];

    for (int i = 0; i < 6; i++) {
        scanf("%d", &skills[i]);
    }

    int min_diff = MAX_INT; 

    for (int i = 0; i < 6; i++) {
        for (int j = i + 1; j < 6; j++) {
            for (int k = j + 1; k < 6; k++) {
                int team1_sum = skills[i] + skills[j] + skills[k];
                int team2_sum = 0;
                for (int m = 0; m < 6; m++) {
                    if (m != i && m != j && m != k) {
                        team2_sum += skills[m];
                    }
                }

                int diff = abs(team1_sum - team2_sum);
                if (diff < min_diff) {
                    min_diff = diff; 
                }
            }
        }
    }

    printf("%d\n", min_diff);
    return 0;
}