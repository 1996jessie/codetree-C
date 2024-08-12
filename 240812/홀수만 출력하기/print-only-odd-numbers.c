#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    scanf("%d", &N);
    int a;
    for(int i = 1;i <= N; i++) {
        scanf("%d\n", &a);
        if(a % 2 == 1 && a % 3 == 0) {
            printf("%d\n", a);
        }
    }
    return 0;
}