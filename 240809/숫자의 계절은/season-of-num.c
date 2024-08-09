#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int m;
    scanf("%d", &m);
    if(m == 3 || m == 4 || m == 5) {
        printf("Spring");
    } else if(m == 6 || m == 7 || m == 8) {
        printf("Summer");
    } else if(m == 9 || m == 10 || m == 11) {
        printf("Fall");
    } else if(m == 12 || m == 1 || m == 2) {
        printf("Winter");
    } 
    return 0;
}