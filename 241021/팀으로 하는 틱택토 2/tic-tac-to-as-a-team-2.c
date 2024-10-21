#include <stdio.h>

#define MAX_A 3
#define MAX_X 9

char inp[MAX_A][MAX_A + 1];
int board[MAX_A][MAX_A];

int main() {
    // 여기에 코드를 작성해주세요.
    for(int i = 0; i < MAX_A; i++)
        scanf("%s", inp[i]);
    
    for(int i = 0; i < MAX_A; i++)
        for(int j = 0; j < MAX_A; j++)
            board[i][j] = inp[i][j] - '0';

    int ans = 0;

    // 모든 쌍에 대해 전부 시도해 봅니다.
    for(int i = 1; i <= MAX_X; i++) {
        for(int j = i + 1; j <= MAX_X; j++) {
            // i, j 두 명이 팀이 됐을 때 이길 수 있는지를 확인합니다.
            // win : 두 명이 팀이 됐을 때 이길 수 있다면 true
            int win = 0;

            // num_i , num_j : 각 줄에 i, j가 나오는 개수
            int num_i = 0, num_j = 0;

            // 가로로 빙고가 만들어질 때
            for(int k = 0; k < MAX_A; k++) {
                num_i = 0, num_j = 0;
                for(int l = 0; l < MAX_A; l++) {
                    if(board[k][l] == i)
                        num_i++;
                    if(board[k][l] == j)
                        num_j++;
                }

                // 3개의 칸에 i, j가 총 3번 나오며
                // 둘 다 최소 1번 이상 나오면 승리
                if(num_i + num_j == 3 && num_i >= 1 && num_j >= 1)
                    win = 1;
            }

            // 세로로 빙고가 만들어질 때
            for(int k = 0; k < MAX_A; k++) {
                num_i = 0, num_j = 0;
                for(int l = 0; l < MAX_A; l++) {
                    if(board[l][k] == i)
                        num_i++;
                    if(board[l][k] == j)
                        num_j++;
                }

                // 3개의 칸에 i, j가 총 3번 나오며
                // 둘 다 최소 1번 이상 나오면 승리
                if(num_i + num_j == 3 && num_i >= 1 && num_j >= 1)
                    win = 1;
            }

            // 왼쪽 위에서 오른쪽 아래를 잇는 대각선으로 빙고가 만들어질 때
            num_i = 0, num_j = 0;
            for(int k = 0; k < MAX_A; k++) {
                if(board[k][k] == i)
                    num_i++;
                if(board[k][k] == j)
                    num_j++;
            }

            // 3개의 칸에 i, j가 총 3번 나오며
            // 둘 다 최소 1번 이상 나오면 승리
            if(num_i + num_j == 3 && num_i >= 1 && num_j >= 1)
                win = 1;

            // 오른쪽 위에서 왼쪽 아래를 잇는 대각선으로 빙고가 만들어질 때
            num_i = 0, num_j = 0;
            for(int k = 0; k < MAX_A; k++) {
                if(board[k][MAX_A - k - 1] == i)
                    num_i++;
                if(board[k][MAX_A - k - 1] == j)
                    num_j++;
            }

            // 3개의 칸에 i, j가 총 3번 나오며
            // 둘 다 최소 1번 이상 나오면 승리
            if(num_i + num_j == 3 && num_i >= 1 && num_j >= 1)
                win = 1;

            if(win)
                ans++;
        }
    }

    printf("%d\n", ans);
    
    return 0;
}