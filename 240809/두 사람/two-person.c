#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a1, a2;
    char g1, g2;
    scanf("%d %c\n", &a1, &g1);
    scanf("%d %c\n", &a2, &g2);

    if((a1 >= 19 && g1 == 'M') || (a2 >= 19 && g2 == 'M')) {
        printf("1");
    } else {
        printf("0");
    }
    return 0;
}