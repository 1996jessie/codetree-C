#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int s, g;
    scanf("%d", &s);
    if(s == 100) {
       g = 0; 
    } else {
       g = 1; // g가 0이 아닌 다른 값으로 설정됨
    }
    (g == 0) ? printf("pass") : printf("failure");
    return 0;
}