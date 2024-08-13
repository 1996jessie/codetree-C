#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int cnt = 0;
    int n;
    for(int i=1;i<=5;i++) {
        scanf("%d\n", &n);
        if(n % 2 == 0) {
            cnt++;
        }
    }
    printf("%d", cnt);
    return 0;
}