#include <stdio.h>

int board[3][3];

int check_team_win(int a, int b, int c) {
    if (a == b && b == c) {
        return 0; 
    }
    if (a == b || b == c || a == c) {
        return 1;
    }
    return 0; 
}

int main() {
    // 여기에 코드를 작성해주세요.
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%1d", &board[i][j]); 
        }
    }
    int team_win_count = 0;

    for (int i = 0; i < 3; i++) {
        team_win_count += check_team_win(board[i][0], board[i][1], board[i][2]);
    }
    for (int i = 0; i < 3; i++) {
        team_win_count += check_team_win(board[0][i], board[1][i], board[2][i]);
    }

    team_win_count += check_team_win(board[0][0], board[1][1], board[2][2]); 
    team_win_count += check_team_win(board[0][2], board[1][1], board[2][0]); 

    printf("%d\n", team_win_count);

    return 0;
}