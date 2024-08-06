#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int h, w;
    double b;
    scanf("%d %d", &h, &w);
    b = (double)(10000 * w) / (h * h);
    printf("%d", (int)b);
    if((int)b >= 25) {
        printf("\nObesity");
    }
    return 0;
}