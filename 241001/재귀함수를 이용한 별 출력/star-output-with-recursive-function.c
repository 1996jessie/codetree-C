#include <stdio.h>

void printStars(int count) {
    if (count == 0) {
        return; 
    }
    printf("*");
    printStars(count - 1);
}

void printLines(int n) {
    if (n == 0) {
        return; 
    }
    printLines(n - 1); 
    printStars(n);
    printf("\n");
}

int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    scanf("%d", &N);

    printLines(N);
    
    return 0;
}