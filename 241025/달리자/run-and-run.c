#include <stdio.h>
#include <limits.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);

    int A[100], B[100];
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }
    for (int i = 0; i < n; i++) {
        scanf("%d", &B[i]);
    }

    int move[100][100] = {0};

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            move[i][j] = (j - i); 
        }
    }

    int totalPeople[100] = {0}; // 각 집에 남아야 할 사람 수
    for (int i = 0; i < n; i++) {
        totalPeople[i] = A[i] - B[i]; // 남아야 할 인원수
    }

    int minDistance = INT_MAX;

    // dp[i][j]: 0번째 집부터 i번째 집까지 j명의 인원을 이동시키는 최소 비용
    int dp[101][101] = {0};
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= n; j++) {
            dp[i][j] = (i == 0) ? 0 : INT_MAX;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= n; j++) {
            if (dp[i][j] == INT_MAX) continue;

            int currentPeople = j;
            for (int k = i; k < n; k++) {
                currentPeople += totalPeople[k]; // k번째 집으로 이동
                if (currentPeople < 0) continue; // 이동할 수 없으면 skip
                if (currentPeople > A[k]) continue; // 넘쳐나면 skip

                int cost = dp[i][j] + move[i][k] * totalPeople[k];
                if (cost < dp[k + 1][currentPeople]) {
                    dp[k + 1][currentPeople] = cost;
                }
            }
        }
    }

    // 결과 계산
    for (int i = 0; i <= n; i++) {
        if (dp[n][i] < minDistance) {
            minDistance = dp[n][i];
        }
    }

    printf("%d\n", minDistance);
    return 0;
}