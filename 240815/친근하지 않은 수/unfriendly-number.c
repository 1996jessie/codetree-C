#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int count = 0;
    scanf("%d", &n);
    for(int i=1;i<=n;i++) {
        if(i % 2 == 0) {
            continue;
        }
        if(i % 3 == 0) {
            continue;
        }
        if(i % 5 == 0) {
            continue;
        }
        count++;
    }
    printf("%d", count);
    return 0;
}