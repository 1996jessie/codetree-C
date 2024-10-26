#include <stdio.h>
#include <string.h>

#define MAX_N 1000

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    char seats[MAX_N + 1];
    scanf("%d", &n);
    scanf("%s", seats);

    int maxMinDistance = 0;

    for (int i = 0; i < n; i++) {
        if (seats[i] == '0') {
            int leftDist = MAX_N, rightDist = MAX_N;

            for (int j = i - 1; j >= 0; j--) {
                if (seats[j] == '1') {
                    leftDist = i - j;
                    break;
                }
            }

            for (int j = i + 1; j < n; j++) {
                if (seats[j] == '1') {
                    rightDist = j - i;
                    break;
                }
            }

            int minDist = leftDist < rightDist ? leftDist : rightDist;
            if (minDist > maxMinDistance) {
                maxMinDistance = minDist;
            }
        }
    }

    printf("%d\n", maxMinDistance);
    return 0;
}