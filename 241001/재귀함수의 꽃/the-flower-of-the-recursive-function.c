#include <stdio.h>

void printSequence(int n) {
    if (n == 0) {
        return; 
    }

    printf("%d ", n);
    printSequence(n - 1);

    printf("%d ", n);
}


int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    scanf("%d", &N);

    printSequence(N);

    return 0;
}