#include <stdio.h>

#define MAX_N 20

int x[MAX_N], y[MAX_N];
int N;

int check(int x1, int x2, int y1) {
    int count_x1 = 0, count_x2 = 0, count_y1 = 0;
    for (int i = 0; i < N; i++) {
        if (x[i] == x1)
            count_x1++;
        else if (x[i] == x2)
            count_x2++;
        else if (y[i] == y1)
            count_y1++;
        else
            return 0; 
    }
    return 1;
}

int main() {
    // 여기에 코드를 작성해주세요.
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d %d", &x[i], &y[i]);
    }

    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            for (int k = 0; k < N; k++) {
                if (check(x[i], x[j], y[k])) {
                    printf("1\n");
                    return 0;
                }
            }
        }
    }

    printf("0\n");
    return 0;
}