#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int cnt1 = 0;
    int cnt2 = 0;
    for(int i=1;i<=10;i++) {
        scanf("%d\n", &n);
        if(n % 3 == 0) {
            cnt1++;
        }
        if(n % 5 == 0) {
            cnt2++;
        }
    }
    printf("%d %d", cnt1, cnt2);
    return 0;
}