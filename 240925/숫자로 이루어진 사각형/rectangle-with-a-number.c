#include <stdio.h>

void printSquare(int n) {
    int num = 1; 

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", num);
            num++;
            if (num > 9) {
                num = 1;
            }
        }
        printf("\n"); 
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    scanf("%d", &N);
    printSquare(N);
    return 0;
}