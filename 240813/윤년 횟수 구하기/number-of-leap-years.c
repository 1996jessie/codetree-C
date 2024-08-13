#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int cnt = 0;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        if (i % 4 == 0) {  
            if (i % 100 != 0 || i % 400 == 0) {
                cnt++;
            }
        }
    }
    printf("%d", cnt);
    return 0;
}