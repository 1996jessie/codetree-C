#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int X;
    scanf("%d", &X);

    int time = 0;
    int distance = 0;
    int speed = 1;

    while (distance < X) {
        time++;
        distance += speed;

        if (distance >= X) {
            break;
        }
        if (speed < time) {
            speed++;
        }
    }

    while (distance > X) {
        speed--;
        distance -= speed;
        time++;
    }

    printf("%d\n", time);
    return 0;
}