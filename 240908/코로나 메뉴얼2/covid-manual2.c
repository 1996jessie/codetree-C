#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char s;
    double t;
    int A = 0, B = 0, C = 0, D = 0; 
    int count = 0;

    for (int i = 0; i < 3; i++) {
        scanf(" %c %lf", &s, &t);

        if (s == 'Y' && t >= 37.0) {
            A++;
            count++;
        } else if (s == 'N' && t >= 37.0) {
            B++;
        } else if (s == 'Y' && t < 37.0) {
            C++;
        } else {
            D++;
        }
    }

    printf("%d %d %d %d", A, B, C, D);

    if (count >= 2) {
        printf(" E");
    }

    printf("\n");

    return 0;
}