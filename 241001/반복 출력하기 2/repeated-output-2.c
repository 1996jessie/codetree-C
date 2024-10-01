#include <stdio.h>

void printHelloWorld(int n) {
    if (n == 0) {
        return;
    }
    printf("HelloWorld\n");
    printHelloWorld(n - 1);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    scanf("%d", &N);

    printHelloWorld(N);

    return 0;
}