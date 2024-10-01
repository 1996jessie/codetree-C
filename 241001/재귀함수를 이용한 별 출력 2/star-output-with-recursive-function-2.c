#include <stdio.h>

void printStarsDecreasing(int n) {
    if (n == 0) {
        return; 
    }

    for (int i = 0; i < n; i++) {
        printf("* ");
    }
    printf("\n");

    printStarsDecreasing(n - 1);
}

void printStarsIncreasing(int n, int current) {
    if (current > n) {
        return; 
    }

    for (int i = 0; i < current; i++) {
        printf("* ");
    }
    printf("\n");

    printStarsIncreasing(n, current + 1);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    scanf("%d", &N);
    printStarsDecreasing(N);
    printStarsIncreasing(N, 1);

    return 0;
}