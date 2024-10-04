#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int N, B;
    int result[100];
    int index = 0;  

    scanf("%d %d", &N, &B);

    while (N > 0) {
        result[index++] = N % B;
        N /= B;               
    }

    for (int i = index - 1; i >= 0; i--) {
        printf("%d", result[i]);
    }

    printf("\n");
    return 0;
}