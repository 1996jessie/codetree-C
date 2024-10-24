#include <stdio.h>

#define MAX_N 100
#define MAX_NUM 10
#define UNDEFINED -1

int n;
int pigeon[MAX_N + 1], move_dir[MAX_N + 1];
int pos[MAX_NUM + 1];
int main() {
    // 여기에 코드를 작성해주세요.
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        scanf("%d %d", &pigeon[i], &move_dir[i]);

    for (int i = 1; i <= MAX_NUM; i++)
        pos[i] = UNDEFINED;

    int move_cnt = 0;
    for (int i = 1; i <= n; i++) {
        if (pos[pigeon[i]] == UNDEFINED) {
            pos[pigeon[i]] = move_dir[i];
        } else if (pos[pigeon[i]] != move_dir[i]) {
            pos[pigeon[i]] = move_dir[i];
            move_cnt++;
        }
    }

    printf("%d\n", move_cnt);
    return 0;
}