#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int distance;
    scanf("%d", &distance);

    int max_speed = 0;
    int time = 0;
    int have_to_move = 0;
    while (1) {
        max_speed++;
        int necessary_moved = (max_speed * max_speed);

        if (necessary_moved > distance) break;

        time = max_speed * 2 - 1;

        have_to_move = distance - necessary_moved;

        time += (have_to_move / max_speed);

        if (have_to_move % max_speed != 0)
            time++;
    }
    printf("%d\n", time);

    return 0;
}