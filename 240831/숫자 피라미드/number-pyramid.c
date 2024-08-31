#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);

    // 1부터 n까지의 숫자에 대해 해당 숫자를 i번 출력하는 루프
    for (int i = 1; i <= n; i++) {  // 1부터 n까지 반복
        for (int j = 1; j <= i; j++) {  // 각 숫자를 i번 출력
            printf("%d", i);
            if (j < i) {
                printf(" ");  // 마지막 숫자 뒤에는 공백 추가하지 않음
            }
        }
        printf("\n");  // 각 줄 출력 후 줄 바꿈
    }

    return 0;
}