#include <stdio.h>

int simulate(int initial_position, int N, int swaps[][3]) {
    int position = initial_position; 
    int score = 0;

    for (int i = 0; i < N; i++) {
        int a = swaps[i][0];
        int b = swaps[i][1];
        int c = swaps[i][2];

        if (position == a) {
            position = b;
        } else if (position == b) {
            position = a;
        }

        if (position == c) {
            score++;
        }
    }

    return score;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    scanf("%d", &N);

    int swaps[N][3];
    for (int i = 0; i < N; i++) {
        scanf("%d %d %d", &swaps[i][0], &swaps[i][1], &swaps[i][2]);
    }

    int max_score = 0;
    for (int i = 1; i <= 3; i++) {
        int score = simulate(i, N, swaps);
        if (score > max_score) {
            max_score = score;
        }
    }

    printf("%d\n", max_score);

    return 0;
}