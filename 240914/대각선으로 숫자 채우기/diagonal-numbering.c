#include <stdio.h>

// 여기에 코드를 작성해주세요.
int n, m;
int answer[100][100] = {0};
int count = 1;

int main() {
    scanf("%d %d", &n, &m);

    for(int start_col = 0; start_col < m; start_col++) {
		int curr_row = 0;
		int curr_col = start_col;

		while(curr_col >= 0 && curr_row < n) {
			answer[curr_row][curr_col] = count;

			curr_row++;
			curr_col--;
			count++;
		}
    }

    for(int start_row = 1; start_row < n; start_row++) {
		int curr_row = start_row;
		int curr_col = m - 1;

        while(curr_col >= 0 && curr_row < n) {
			answer[curr_row][curr_col] = count;

			curr_row++;
			curr_col--;
			count++;
		}
    }

    for(int row = 0; row < n; row++) {
        for(int col = 0; col < m; col++)
            printf("%d ", answer[row][col]);
        printf("\n");
    }

    return 0;
}