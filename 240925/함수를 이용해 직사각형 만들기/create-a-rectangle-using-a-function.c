#include <stdio.h>

void printRectangle(int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("1");
        }
        printf("\n");
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    scanf("%d %d", &n, &m);
    printRectangle(n, m);
    return 0;
}