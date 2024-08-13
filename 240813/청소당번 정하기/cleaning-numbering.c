#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int cnt1 = 0;
    int cnt2 = 0;
    int cnt3 = 0;
    scanf("%d", &n);
    for(int i=1;i<=n;i++) {
        if(i % 12 == 0) {
            cnt3++;
        } else if(i % 3 == 0) {
            cnt2++;
        } else if(i % 2 == 0) {
            cnt1++;
        };
    }
    printf("%d %d %d", cnt1, cnt2, cnt3);
    return 0;
}