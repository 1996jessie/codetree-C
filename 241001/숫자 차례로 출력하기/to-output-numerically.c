#include <stdio.h>

void printAscending(int n) {
    if (n == 0) {
        return; 
    }
    printAscending(n - 1); 
    printf("%d ", n); 
}

void printDescending(int n) {
    if (n == 0) {
        return;
    }
    printf("%d ", n);
    printDescending(n - 1);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    scanf("%d", &N);

    printAscending(N);
    printf("\n");

    printDescending(N);
    printf("\n");

    return 0;
}