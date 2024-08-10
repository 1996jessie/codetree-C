#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int g, a;
    scanf("%d\n%d", &g, &a);
    if(g == 0) {
        if(a >= 19) {
            printf("MAN");
        } else {
            printf("BOY");
        }
    } else {
        if(a >= 19) {
            printf("WOMAN");
        } else {
            printf("GIRL");
        }
    }
    return 0;
}