#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int am, ae, bm, be;
    scanf("%d %d\n", &am, &ae);
    scanf("%d %d\n", &bm, &be);
    if(am > bm) {
        printf("A");
    } else if(am < bm) {
        printf("B");
    } else {
        if(ae >= be) {
            printf("A");
        } else {
            printf("B");
        }
    }
    return 0;
}