#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int x1, x2, x3, x4;

    scanf("%d %d %d %d", &x1, &x2, &x3, &x4);

    if (x2 >= x3 && x4 >= x1) {
        printf("intersecting\n");
    } else {
        printf("nonintersecting\n");
    }

    return 0;
}